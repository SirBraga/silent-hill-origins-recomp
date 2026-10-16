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

// Function: sub_0031AA80
// Address: 0x31aa80 - 0x31ab48
void sub_0031AA80_0x31aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AA80_0x31aa80");
#endif

    switch (ctx->pc) {
        case 0x31aaa8u: goto label_31aaa8;
        case 0x31aac0u: goto label_31aac0;
        case 0x31ab14u: goto label_31ab14;
        case 0x31ab38u: goto label_31ab38;
        default: break;
    }

    ctx->pc = 0x31aa80u;

    // 0x31aa80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31aa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31aa84: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x31aa84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31aa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31aa8c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x31aa8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31aa90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa94: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x31aa94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31aa98: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x31AA98u;
    {
        const bool branch_taken_0x31aa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA98u;
        // 0x31aa9c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa98) {
            ctx->pc = 0x31AB2Cu;
            goto label_31ab2c;
        }
    }
    ctx->pc = 0x31AAA0u;
    // 0x31aaa0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x31aaa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31aaa4: 0x0  nop
    ctx->pc = 0x31aaa4u;
    // NOP
label_31aaa8:
    // 0x31aaa8: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x31aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x31aaac: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31AAACu;
    {
        const bool branch_taken_0x31aaac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31aaac) {
            ctx->pc = 0x31AAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AAACu;
            // 0x31aab0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AB20u;
            goto label_31ab20;
        }
    }
    ctx->pc = 0x31AAB4u;
    // 0x31aab4: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x31aab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x31aab8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31AAB8u;
    {
        const bool branch_taken_0x31aab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAB8u;
        // 0x31aabc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aab8) {
            ctx->pc = 0x31AB20u;
            goto label_31ab20;
        }
    }
    ctx->pc = 0x31AAC0u;
label_31aac0:
    // 0x31aac0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x31aac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31aac4: 0x2c420041  sltiu       $v0, $v0, 0x41
    ctx->pc = 0x31aac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x31aac8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AAC8u;
    {
        const bool branch_taken_0x31aac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aac8) {
            ctx->pc = 0x31AACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AAC8u;
            // 0x31aacc: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAE0u;
            goto label_31aae0;
        }
    }
    ctx->pc = 0x31AAD0u;
    // 0x31aad0: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x31aad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x31aad4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31AAD4u;
    {
        const bool branch_taken_0x31aad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31aad4) {
            ctx->pc = 0x31AAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AAD4u;
            // 0x31aad8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31aac0;
        }
    }
    ctx->pc = 0x31AADCu;
    // 0x31aadc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x31aadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_31aae0:
    // 0x31aae0: 0x2444ffbb  addiu       $a0, $v0, -0x45
    ctx->pc = 0x31aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967227));
    // 0x31aae4: 0x2c830023  sltiu       $v1, $a0, 0x23
    ctx->pc = 0x31aae4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x31aae8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31AAE8u;
    {
        const bool branch_taken_0x31aae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAE8u;
        // 0x31aaec: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aae8) {
            ctx->pc = 0x31AB1Cu;
            goto label_31ab1c;
        }
    }
    ctx->pc = 0x31AAF0u;
    // 0x31aaf0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31aaf4: 0x24421d10  addiu       $v0, $v0, 0x1D10
    ctx->pc = 0x31aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7440));
    // 0x31aaf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31aafc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31ab00: 0x800008  jr          $a0
    ctx->pc = 0x31AB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31AB08u: goto label_31ab08;
            case 0x31AB1Cu: goto label_31ab1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AB00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31AB08u;
label_31ab08:
    // 0x31ab08: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x31ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x31ab0c: 0xc0c6b56  jal         func_31AD58
    ctx->pc = 0x31AB0Cu;
    SET_GPR_U32(ctx, 31, 0x31AB14u);
    ctx->pc = 0x31AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB0Cu;
    // 0x31ab10: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AD58u, 0x31AB0Cu, 0x31AB14u)) {
        return;
    }
    ctx->pc = 0x31AB14u;
label_31ab14:
    // 0x31ab14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31AB14u;
    {
        const bool branch_taken_0x31ab14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB14u;
        // 0x31ab18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab14) {
            ctx->pc = 0x31AB3Cu;
            goto label_31ab3c;
        }
    }
    ctx->pc = 0x31AB1Cu;
label_31ab1c:
    // 0x31ab1c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x31ab1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_31ab20:
    // 0x31ab20: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x31ab20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31ab24: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x31AB24u;
    {
        const bool branch_taken_0x31ab24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ab24) {
            ctx->pc = 0x31AB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AB24u;
            // 0x31ab28: 0x94c30000  lhu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31aaa8;
        }
    }
    ctx->pc = 0x31AB2Cu;
label_31ab2c:
    // 0x31ab2c: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x31ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x31ab30: 0xc0c6fd6  jal         func_31BF58
    ctx->pc = 0x31AB30u;
    SET_GPR_U32(ctx, 31, 0x31AB38u);
    ctx->pc = 0x31AB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB30u;
    // 0x31ab34: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31BF58u, 0x31AB30u, 0x31AB38u)) {
        return;
    }
    ctx->pc = 0x31AB38u;
label_31ab38:
    // 0x31ab38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ab38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31ab3c:
    // 0x31ab3c: 0x3e00008  jr          $ra
    ctx->pc = 0x31AB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB3Cu;
        // 0x31ab40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AB44u;
    // 0x31ab44: 0x0  nop
    ctx->pc = 0x31ab44u;
    // NOP
    ctx->pc = 0x31ab48u;
}
