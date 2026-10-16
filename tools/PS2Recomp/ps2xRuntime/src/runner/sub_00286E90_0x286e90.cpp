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

// Function: sub_00286E90
// Address: 0x286e90 - 0x286f78
void sub_00286E90_0x286e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286E90_0x286e90");
#endif

    switch (ctx->pc) {
        case 0x286f10u: goto label_286f10;
        default: break;
    }

    ctx->pc = 0x286e90u;

    // 0x286e90: 0x8f8288a4  lw          $v0, -0x775C($gp)
    ctx->pc = 0x286e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x286e94: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x286e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286e98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286e9c: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x286E9Cu;
    {
        const bool branch_taken_0x286e9c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x286EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E9Cu;
        // 0x286ea0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e9c) {
            ctx->pc = 0x286F4Cu;
            goto label_286f4c;
        }
    }
    ctx->pc = 0x286EA4u;
    // 0x286ea4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x286ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x286ea8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x286ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286eac: 0x71023  negu        $v0, $a3
    ctx->pc = 0x286eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x286eb0: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x286eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x286eb4: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x286EB4u;
    {
        const bool branch_taken_0x286eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EB4u;
        // 0x286eb8: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286eb4) {
            ctx->pc = 0x286F0Cu;
            goto label_286f0c;
        }
    }
    ctx->pc = 0x286EBCu;
    // 0x286ebc: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x286ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x286ec0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x286EC0u;
    {
        const bool branch_taken_0x286ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EC0u;
        // 0x286ec4: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ec0) {
            ctx->pc = 0x286EF4u;
            goto label_286ef4;
        }
    }
    ctx->pc = 0x286EC8u;
    // 0x286ec8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x286EC8u;
    {
        const bool branch_taken_0x286ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286ec8) {
            ctx->pc = 0x286ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286EC8u;
            // 0x286ecc: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286EE4u;
            goto label_286ee4;
        }
    }
    ctx->pc = 0x286ED0u;
    // 0x286ed0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x286ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x286ed4: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x286ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x286ed8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x286ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x286edc: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x286edcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x286ee0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x286ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_286ee4:
    // 0x286ee4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286ee8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x286ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x286eec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x286eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x286ef0: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x286ef0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
label_286ef4:
    // 0x286ef4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x286ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x286ef8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286efc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x286efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x286f00: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x286f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x286f04: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x286F04u;
    {
        const bool branch_taken_0x286f04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F04u;
        // 0x286f08: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f04) {
            ctx->pc = 0x286F4Cu;
            goto label_286f4c;
        }
    }
    ctx->pc = 0x286F0Cu;
label_286f0c:
    // 0x286f0c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x286f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_286f10:
    // 0x286f10: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x286f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286f14: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286f18: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x286f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x286f1c: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x286f1cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x286f20: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x286f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x286f24: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286f28: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x286f28u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x286f2c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x286f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x286f30: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286f34: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x286f34u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x286f38: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x286f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x286f3c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286f40: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x286f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x286f44: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x286F44u;
    {
        const bool branch_taken_0x286f44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x286F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F44u;
        // 0x286f48: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f44) {
            ctx->pc = 0x286F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286f10;
        }
    }
    ctx->pc = 0x286F4Cu;
label_286f4c:
    // 0x286f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x286F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F4Cu;
        // 0x286f50: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286F54u;
    // 0x286f54: 0x0  nop
    ctx->pc = 0x286f54u;
    // NOP
    // 0x286f58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x286f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286f5c: 0x0  nop
    ctx->pc = 0x286f5cu;
    // NOP
    // 0x286f60: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x286f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f64: 0x0  nop
    ctx->pc = 0x286f64u;
    // NOP
    // 0x286f68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x286f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286f6c: 0x0  nop
    ctx->pc = 0x286f6cu;
    // NOP
    // 0x286f70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x286f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f74: 0x0  nop
    ctx->pc = 0x286f74u;
    // NOP
    ctx->pc = 0x286f78u;
}
