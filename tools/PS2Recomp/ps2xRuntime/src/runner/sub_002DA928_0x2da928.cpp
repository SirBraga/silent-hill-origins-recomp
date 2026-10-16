#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DA928
// Address: 0x2da928 - 0x2da9c0
void sub_002DA928_0x2da928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA928_0x2da928");
#endif

    switch (ctx->pc) {
        case 0x2da928u: goto label_2da928;
        case 0x2da92cu: goto label_2da92c;
        case 0x2da930u: goto label_2da930;
        case 0x2da934u: goto label_2da934;
        case 0x2da938u: goto label_2da938;
        case 0x2da93cu: goto label_2da93c;
        case 0x2da940u: goto label_2da940;
        case 0x2da944u: goto label_2da944;
        case 0x2da948u: goto label_2da948;
        case 0x2da94cu: goto label_2da94c;
        case 0x2da950u: goto label_2da950;
        case 0x2da954u: goto label_2da954;
        case 0x2da958u: goto label_2da958;
        case 0x2da95cu: goto label_2da95c;
        case 0x2da960u: goto label_2da960;
        case 0x2da964u: goto label_2da964;
        case 0x2da968u: goto label_2da968;
        case 0x2da96cu: goto label_2da96c;
        case 0x2da970u: goto label_2da970;
        case 0x2da974u: goto label_2da974;
        case 0x2da978u: goto label_2da978;
        case 0x2da97cu: goto label_2da97c;
        case 0x2da980u: goto label_2da980;
        case 0x2da984u: goto label_2da984;
        case 0x2da988u: goto label_2da988;
        case 0x2da98cu: goto label_2da98c;
        case 0x2da990u: goto label_2da990;
        case 0x2da994u: goto label_2da994;
        case 0x2da998u: goto label_2da998;
        case 0x2da99cu: goto label_2da99c;
        case 0x2da9a0u: goto label_2da9a0;
        case 0x2da9a4u: goto label_2da9a4;
        case 0x2da9a8u: goto label_2da9a8;
        case 0x2da9acu: goto label_2da9ac;
        case 0x2da9b0u: goto label_2da9b0;
        case 0x2da9b4u: goto label_2da9b4;
        case 0x2da9b8u: goto label_2da9b8;
        case 0x2da9bcu: goto label_2da9bc;
        default: break;
    }

    ctx->pc = 0x2da928u;

label_2da928:
    // 0x2da928: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2da928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2da92c:
    // 0x2da92c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2da92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2da930:
    // 0x2da930: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2da930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2da934:
    // 0x2da934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2da934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da938:
    // 0x2da938: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2da938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2da93c:
    // 0x2da93c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2da93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da940:
    // 0x2da940: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_2da944:
    if (ctx->pc == 0x2DA944u) {
        ctx->pc = 0x2DA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA940u;
        // 0x2da944: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA948u;
        goto label_2da948;
    }
    ctx->pc = 0x2DA940u;
    {
        const bool branch_taken_0x2da940 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA940u;
        // 0x2da944: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da940) {
            ctx->pc = 0x2DA968u;
            goto label_2da968;
        }
    }
    ctx->pc = 0x2DA948u;
label_2da948:
    // 0x2da948: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2da948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2da94c:
    // 0x2da94c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2da94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2da950:
    // 0x2da950: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2da954:
    if (ctx->pc == 0x2DA954u) {
        ctx->pc = 0x2DA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA950u;
        // 0x2da954: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA958u;
        goto label_2da958;
    }
    ctx->pc = 0x2DA950u;
    {
        const bool branch_taken_0x2da950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da950) {
            ctx->pc = 0x2DA954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA950u;
            // 0x2da954: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
            if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA968u;
            goto label_2da968;
        }
    }
    ctx->pc = 0x2DA958u;
label_2da958:
    // 0x2da958: 0x40f809  jalr        $v0
label_2da95c:
    if (ctx->pc == 0x2DA95Cu) {
        ctx->pc = 0x2DA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA958u;
        // 0x2da95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA960u;
        goto label_2da960;
    }
    ctx->pc = 0x2DA958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DA960u);
        ctx->pc = 0x2DA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA958u;
        // 0x2da95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA958u, 0x2DA960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA960u;
label_2da960:
    // 0x2da960: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2da960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da964:
    // 0x2da964: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x2da964u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
label_2da968:
    // 0x2da968: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x2da968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2da96c:
    // 0x2da96c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2da96cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2da970:
    // 0x2da970: 0x1212000c  beq         $s0, $s2, . + 4 + (0xC << 2)
label_2da974:
    if (ctx->pc == 0x2DA974u) {
        ctx->pc = 0x2DA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA970u;
        // 0x2da974: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA978u;
        goto label_2da978;
    }
    ctx->pc = 0x2DA970u;
    {
        const bool branch_taken_0x2da970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA970u;
        // 0x2da974: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da970) {
            ctx->pc = 0x2DA9A4u;
            goto label_2da9a4;
        }
    }
    ctx->pc = 0x2DA978u;
label_2da978:
    // 0x2da978: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x2da978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_2da97c:
    // 0x2da97c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2da97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2da980:
    // 0x2da980: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2da980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2da984:
    // 0x2da984: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2da988:
    if (ctx->pc == 0x2DA988u) {
        ctx->pc = 0x2DA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA984u;
        // 0x2da988: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA98Cu;
        goto label_2da98c;
    }
    ctx->pc = 0x2DA984u;
    {
        const bool branch_taken_0x2da984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA984u;
        // 0x2da988: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da984) {
            ctx->pc = 0x2DA998u;
            goto label_2da998;
        }
    }
    ctx->pc = 0x2DA98Cu;
label_2da98c:
    // 0x2da98c: 0x40f809  jalr        $v0
label_2da990:
    if (ctx->pc == 0x2DA990u) {
        ctx->pc = 0x2DA994u;
        goto label_2da994;
    }
    ctx->pc = 0x2DA98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DA994u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA98Cu, 0x2DA994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA994u;
label_2da994:
    // 0x2da994: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2da994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da998:
    // 0x2da998: 0x1612fff7  bne         $s0, $s2, . + 4 + (-0x9 << 2)
label_2da99c:
    if (ctx->pc == 0x2DA99Cu) {
        ctx->pc = 0x2DA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA998u;
        // 0x2da99c: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA9A0u;
        goto label_2da9a0;
    }
    ctx->pc = 0x2DA998u;
    {
        const bool branch_taken_0x2da998 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2DA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA998u;
        // 0x2da99c: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da998) {
            ctx->pc = 0x2DA978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da978;
        }
    }
    ctx->pc = 0x2DA9A0u;
label_2da9a0:
    // 0x2da9a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2da9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da9a4:
    // 0x2da9a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2da9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2da9a8:
    // 0x2da9a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2da9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2da9ac:
    // 0x2da9ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2da9acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2da9b0:
    // 0x2da9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2da9b4:
    // 0x2da9b4: 0x3e00008  jr          $ra
label_2da9b8:
    if (ctx->pc == 0x2DA9B8u) {
        ctx->pc = 0x2DA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9B4u;
        // 0x2da9b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA9BCu;
        goto label_2da9bc;
    }
    ctx->pc = 0x2DA9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9B4u;
        // 0x2da9b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA9BCu;
label_2da9bc:
    // 0x2da9bc: 0x0  nop
    ctx->pc = 0x2da9bcu;
    // NOP
    ctx->pc = 0x2da9c0u;
}
