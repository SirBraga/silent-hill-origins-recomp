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

// Function: sub_0017E910
// Address: 0x17e910 - 0x17e9b8
void sub_0017E910_0x17e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E910_0x17e910");
#endif

    switch (ctx->pc) {
        case 0x17e938u: goto label_17e938;
        case 0x17e94cu: goto label_17e94c;
        case 0x17e964u: goto label_17e964;
        case 0x17e97cu: goto label_17e97c;
        case 0x17e994u: goto label_17e994;
        case 0x17e9a4u: goto label_17e9a4;
        default: break;
    }

    ctx->pc = 0x17e910u;

    // 0x17e910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e914: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17e914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17e918: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17e91c: 0x24427a18  addiu       $v0, $v0, 0x7A18
    ctx->pc = 0x17e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31256));
    // 0x17e920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e92c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17e92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e930: 0xc060198  jal         func_180660
    ctx->pc = 0x17E930u;
    SET_GPR_U32(ctx, 31, 0x17E938u);
    ctx->pc = 0x17E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E930u;
    // 0x17e934: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180660u, 0x17E930u, 0x17E938u)) {
        return;
    }
    ctx->pc = 0x17E938u;
label_17e938:
    // 0x17e938: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x17e938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x17e93c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E93Cu;
    {
        const bool branch_taken_0x17e93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e93c) {
            ctx->pc = 0x17E940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E93Cu;
            // 0x17e940: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E954u;
            goto label_17e954;
        }
    }
    ctx->pc = 0x17E944u;
    // 0x17e944: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E944u;
    SET_GPR_U32(ctx, 31, 0x17E94Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E944u, 0x17E94Cu)) {
        return;
    }
    ctx->pc = 0x17E94Cu;
label_17e94c:
    // 0x17e94c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x17e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x17e950: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x17e950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_17e954:
    // 0x17e954: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E954u;
    {
        const bool branch_taken_0x17e954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e954) {
            ctx->pc = 0x17E958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E954u;
            // 0x17e958: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E96Cu;
            goto label_17e96c;
        }
    }
    ctx->pc = 0x17E95Cu;
    // 0x17e95c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E95Cu;
    SET_GPR_U32(ctx, 31, 0x17E964u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E95Cu, 0x17E964u)) {
        return;
    }
    ctx->pc = 0x17E964u;
label_17e964:
    // 0x17e964: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x17e964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x17e968: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x17e968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_17e96c:
    // 0x17e96c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E96Cu;
    {
        const bool branch_taken_0x17e96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e96c) {
            ctx->pc = 0x17E970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E96Cu;
            // 0x17e970: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E984u;
            goto label_17e984;
        }
    }
    ctx->pc = 0x17E974u;
    // 0x17e974: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E974u;
    SET_GPR_U32(ctx, 31, 0x17E97Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E974u, 0x17E97Cu)) {
        return;
    }
    ctx->pc = 0x17E97Cu;
label_17e97c:
    // 0x17e97c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17e97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17e980: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x17e980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_17e984:
    // 0x17e984: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E984u;
    {
        const bool branch_taken_0x17e984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e984) {
            ctx->pc = 0x17E988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E984u;
            // 0x17e988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E99Cu;
            goto label_17e99c;
        }
    }
    ctx->pc = 0x17E98Cu;
    // 0x17e98c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E98Cu;
    SET_GPR_U32(ctx, 31, 0x17E994u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E98Cu, 0x17E994u)) {
        return;
    }
    ctx->pc = 0x17E994u;
label_17e994:
    // 0x17e994: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x17e994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x17e998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e99c:
    // 0x17e99c: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x17E99Cu;
    SET_GPR_U32(ctx, 31, 0x17E9A4u);
    ctx->pc = 0x17E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E99Cu;
    // 0x17e9a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC470u, 0x17E99Cu, 0x17E9A4u)) {
        return;
    }
    ctx->pc = 0x17E9A4u;
label_17e9a4:
    // 0x17e9a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17e9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e9a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e9ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9B0u;
        // 0x17e9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E9B8u;
}
