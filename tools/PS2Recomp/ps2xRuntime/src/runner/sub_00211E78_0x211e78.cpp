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

// Function: sub_00211E78
// Address: 0x211e78 - 0x211f20
void sub_00211E78_0x211e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211E78_0x211e78");
#endif

    switch (ctx->pc) {
        case 0x211e98u: goto label_211e98;
        case 0x211eb0u: goto label_211eb0;
        default: break;
    }

    ctx->pc = 0x211e78u;

    // 0x211e78: 0x8c8201cc  lw          $v0, 0x1CC($a0)
    ctx->pc = 0x211e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x211e7c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x211e7cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e80: 0x8c8b0070  lw          $t3, 0x70($a0)
    ctx->pc = 0x211e80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x211e84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x211e84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e88: 0x18e00023  blez        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x211E88u;
    {
        const bool branch_taken_0x211e88 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x211E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E88u;
        // 0x211e8c: 0x8c4a0018  lw          $t2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e88) {
            ctx->pc = 0x211F18u;
            goto label_211f18;
        }
    }
    ctx->pc = 0x211E90u;
    // 0x211e90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x211e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211e94: 0x0  nop
    ctx->pc = 0x211e94u;
    // NOP
label_211e98:
    // 0x211e98: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x211e98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x211e9c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x211e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x211ea0: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x211ea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ea4: 0x11000018  beqz        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x211EA4u;
    {
        const bool branch_taken_0x211ea4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x211EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EA4u;
        // 0x211ea8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ea4) {
            ctx->pc = 0x211F08u;
            goto label_211f08;
        }
    }
    ctx->pc = 0x211EACu;
    // 0x211eac: 0x0  nop
    ctx->pc = 0x211eacu;
    // NOP
label_211eb0:
    // 0x211eb0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x211eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x211eb4: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x211eb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x211eb8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x211eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x211ebc: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x211ebcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x211ec0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211ec4: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x211ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x211ec8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x211ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x211ecc: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x211eccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x211ed0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x211ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211ed4: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x211ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x211ed8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x211ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x211edc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x211edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x211ee0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x211ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x211ee4: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x211ee4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211ee8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x211ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x211eec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x211eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x211ef0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x211EF0u;
    {
        const bool branch_taken_0x211ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EF0u;
        // 0x211ef4: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ef0) {
            ctx->pc = 0x211EFCu;
            goto label_211efc;
        }
    }
    ctx->pc = 0x211EF8u;
    // 0x211ef8: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x211ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_211efc:
    // 0x211efc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x211efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x211f00: 0x1500ffeb  bnez        $t0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x211F00u;
    {
        const bool branch_taken_0x211f00 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x211F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F00u;
        // 0x211f04: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f00) {
            ctx->pc = 0x211EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211eb0;
        }
    }
    ctx->pc = 0x211F08u;
label_211f08:
    // 0x211f08: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x211f08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f0c: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x211f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x211f10: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x211F10u;
    {
        const bool branch_taken_0x211f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F10u;
        // 0x211f14: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f10) {
            ctx->pc = 0x211E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211e98;
        }
    }
    ctx->pc = 0x211F18u;
label_211f18:
    // 0x211f18: 0x3e00008  jr          $ra
    ctx->pc = 0x211F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211F20u;
}
