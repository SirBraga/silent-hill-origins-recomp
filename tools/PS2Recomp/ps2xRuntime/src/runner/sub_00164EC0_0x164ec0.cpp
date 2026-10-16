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

// Function: sub_00164EC0
// Address: 0x164ec0 - 0x164f28
void sub_00164EC0_0x164ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164EC0_0x164ec0");
#endif

    switch (ctx->pc) {
        case 0x164ee8u: goto label_164ee8;
        case 0x164ef0u: goto label_164ef0;
        case 0x164f0cu: goto label_164f0c;
        default: break;
    }

    ctx->pc = 0x164ec0u;

    // 0x164ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x164ec4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x164ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x164ec8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x164ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x164ecc: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x164ECCu;
    {
        const bool branch_taken_0x164ecc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x164ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ECCu;
        // 0x164ed0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ecc) {
            ctx->pc = 0x164F0Cu;
            goto label_164f0c;
        }
    }
    ctx->pc = 0x164ED4u;
    // 0x164ed4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164ED4u;
    {
        const bool branch_taken_0x164ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ED4u;
        // 0x164ed8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ed4) {
            ctx->pc = 0x164EFCu;
            goto label_164efc;
        }
    }
    ctx->pc = 0x164EDCu;
    // 0x164edc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x164edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x164ee0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x164EE0u;
    SET_GPR_U32(ctx, 31, 0x164EE8u);
    ctx->pc = 0x164EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164EE0u;
    // 0x164ee4: 0x2484f5e0  addiu       $a0, $a0, -0xA20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x164EE0u, 0x164EE8u)) {
        return;
    }
    ctx->pc = 0x164EE8u;
label_164ee8:
    // 0x164ee8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x164EE8u;
    SET_GPR_U32(ctx, 31, 0x164EF0u);
    ctx->pc = 0x164EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164EE8u;
    // 0x164eec: 0x26043ed0  addiu       $a0, $s0, 0x3ED0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x164EE8u, 0x164EF0u)) {
        return;
    }
    ctx->pc = 0x164EF0u;
label_164ef0:
    // 0x164ef0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x164ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x164ef4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164EF4u;
    {
        const bool branch_taken_0x164ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EF4u;
        // 0x164ef8: 0xac62f5e8  sw          $v0, -0xA18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ef4) {
            ctx->pc = 0x164F0Cu;
            goto label_164f0c;
        }
    }
    ctx->pc = 0x164EFCu;
label_164efc:
    // 0x164efc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x164efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x164f00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x164f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164f04: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x164F04u;
    SET_GPR_U32(ctx, 31, 0x164F0Cu);
    ctx->pc = 0x164F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F04u;
    // 0x164f08: 0x2484f5e0  addiu       $a0, $a0, -0xA20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x164F04u, 0x164F0Cu)) {
        return;
    }
    ctx->pc = 0x164F0Cu;
label_164f0c:
    // 0x164f0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x164f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164f14: 0x3e00008  jr          $ra
    ctx->pc = 0x164F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F14u;
        // 0x164f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164F1Cu;
    // 0x164f1c: 0x0  nop
    ctx->pc = 0x164f1cu;
    // NOP
    // 0x164f20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x164f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164f24: 0x0  nop
    ctx->pc = 0x164f24u;
    // NOP
    ctx->pc = 0x164f28u;
}
