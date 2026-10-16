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

// Function: sub_001DD920
// Address: 0x1dd920 - 0x1dd988
void sub_001DD920_0x1dd920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD920_0x1dd920");
#endif

    switch (ctx->pc) {
        case 0x1dd920u: goto label_1dd920;
        case 0x1dd924u: goto label_1dd924;
        case 0x1dd928u: goto label_1dd928;
        case 0x1dd92cu: goto label_1dd92c;
        case 0x1dd930u: goto label_1dd930;
        case 0x1dd934u: goto label_1dd934;
        case 0x1dd938u: goto label_1dd938;
        case 0x1dd93cu: goto label_1dd93c;
        case 0x1dd940u: goto label_1dd940;
        case 0x1dd944u: goto label_1dd944;
        case 0x1dd948u: goto label_1dd948;
        case 0x1dd94cu: goto label_1dd94c;
        case 0x1dd950u: goto label_1dd950;
        case 0x1dd954u: goto label_1dd954;
        case 0x1dd958u: goto label_1dd958;
        case 0x1dd95cu: goto label_1dd95c;
        case 0x1dd960u: goto label_1dd960;
        case 0x1dd964u: goto label_1dd964;
        case 0x1dd968u: goto label_1dd968;
        case 0x1dd96cu: goto label_1dd96c;
        case 0x1dd970u: goto label_1dd970;
        case 0x1dd974u: goto label_1dd974;
        case 0x1dd978u: goto label_1dd978;
        case 0x1dd97cu: goto label_1dd97c;
        case 0x1dd980u: goto label_1dd980;
        case 0x1dd984u: goto label_1dd984;
        default: break;
    }

    ctx->pc = 0x1dd920u;

label_1dd920:
    // 0x1dd920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dd924:
    // 0x1dd924: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1dd928:
    // 0x1dd928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dd92c:
    // 0x1dd92c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd930:
    // 0x1dd930: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1dd930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dd934:
    // 0x1dd934: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1dd934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1dd938:
    // 0x1dd938: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1dd93c:
    if (ctx->pc == 0x1DD93Cu) {
        ctx->pc = 0x1DD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD938u;
        // 0x1dd93c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD940u;
        goto label_1dd940;
    }
    ctx->pc = 0x1DD938u;
    {
        const bool branch_taken_0x1dd938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd938) {
            ctx->pc = 0x1DD93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD938u;
            // 0x1dd93c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD950u;
            goto label_1dd950;
        }
    }
    ctx->pc = 0x1DD940u;
label_1dd940:
    // 0x1dd940: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dd940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1dd944:
    // 0x1dd944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd948:
    // 0x1dd948: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dd94c:
    if (ctx->pc == 0x1DD94Cu) {
        ctx->pc = 0x1DD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD948u;
        // 0x1dd94c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD950u;
        goto label_1dd950;
    }
    ctx->pc = 0x1DD948u;
    {
        const bool branch_taken_0x1dd948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD948u;
        // 0x1dd94c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd948) {
            ctx->pc = 0x1DD974u;
            goto label_1dd974;
        }
    }
    ctx->pc = 0x1DD950u;
label_1dd950:
    // 0x1dd950: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1dd954:
    if (ctx->pc == 0x1DD954u) {
        ctx->pc = 0x1DD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD950u;
        // 0x1dd954: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD958u;
        goto label_1dd958;
    }
    ctx->pc = 0x1DD950u;
    {
        const bool branch_taken_0x1dd950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD950u;
        // 0x1dd954: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd950) {
            ctx->pc = 0x1DD964u;
            goto label_1dd964;
        }
    }
    ctx->pc = 0x1DD958u;
label_1dd958:
    // 0x1dd958: 0xc09d880  jal         func_276200
label_1dd95c:
    if (ctx->pc == 0x1DD95Cu) {
        ctx->pc = 0x1DD960u;
        goto label_1dd960;
    }
    ctx->pc = 0x1DD958u;
    SET_GPR_U32(ctx, 31, 0x1DD960u);
    ctx->pc = 0x276200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276200u, 0x1DD958u, 0x1DD960u)) {
        return;
    }
    ctx->pc = 0x1DD960u;
label_1dd960:
    // 0x1dd960: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1dd960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1dd964:
    // 0x1dd964: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x1dd964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_1dd968:
    // 0x1dd968: 0x40f809  jalr        $v0
label_1dd96c:
    if (ctx->pc == 0x1DD96Cu) {
        ctx->pc = 0x1DD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD968u;
        // 0x1dd96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD970u;
        goto label_1dd970;
    }
    ctx->pc = 0x1DD968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD970u);
        ctx->pc = 0x1DD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD968u;
        // 0x1dd96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD968u, 0x1DD970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD970u;
label_1dd970:
    // 0x1dd970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd974:
    // 0x1dd974: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd978:
    // 0x1dd978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd97c:
    // 0x1dd97c: 0x3e00008  jr          $ra
label_1dd980:
    if (ctx->pc == 0x1DD980u) {
        ctx->pc = 0x1DD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD97Cu;
        // 0x1dd980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD984u;
        goto label_1dd984;
    }
    ctx->pc = 0x1DD97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD97Cu;
        // 0x1dd980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD984u;
label_1dd984:
    // 0x1dd984: 0x0  nop
    ctx->pc = 0x1dd984u;
    // NOP
    ctx->pc = 0x1dd988u;
}
