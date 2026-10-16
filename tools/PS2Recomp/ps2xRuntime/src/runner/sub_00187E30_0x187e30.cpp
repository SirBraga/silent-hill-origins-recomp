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

// Function: sub_00187E30
// Address: 0x187e30 - 0x187ee8
void sub_00187E30_0x187e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187E30_0x187e30");
#endif

    switch (ctx->pc) {
        case 0x187e54u: goto label_187e54;
        case 0x187e60u: goto label_187e60;
        case 0x187e6cu: goto label_187e6c;
        case 0x187e78u: goto label_187e78;
        case 0x187e84u: goto label_187e84;
        case 0x187e98u: goto label_187e98;
        case 0x187ea8u: goto label_187ea8;
        case 0x187eb8u: goto label_187eb8;
        case 0x187ec8u: goto label_187ec8;
        case 0x187ed8u: goto label_187ed8;
        default: break;
    }

    ctx->pc = 0x187e30u;

    // 0x187e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187e34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x187e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x187e38: 0x14a20027  bne         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x187E38u;
    {
        const bool branch_taken_0x187e38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x187E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E38u;
        // 0x187e3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e38) {
            ctx->pc = 0x187ED8u;
            goto label_187ed8;
        }
    }
    ctx->pc = 0x187E40u;
    // 0x187e40: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x187E40u;
    {
        const bool branch_taken_0x187e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e40) {
            ctx->pc = 0x187E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187E40u;
            // 0x187e44: 0x3c04006d  lui         $a0, 0x6D (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187E8Cu;
            goto label_187e8c;
        }
    }
    ctx->pc = 0x187E48u;
    // 0x187e48: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187e4c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x187E4Cu;
    SET_GPR_U32(ctx, 31, 0x187E54u);
    ctx->pc = 0x187E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E4Cu;
    // 0x187e50: 0x2484bcf0  addiu       $a0, $a0, -0x4310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x187E4Cu, 0x187E54u)) {
        return;
    }
    ctx->pc = 0x187E54u;
label_187e54:
    // 0x187e54: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187e58: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x187E58u;
    SET_GPR_U32(ctx, 31, 0x187E60u);
    ctx->pc = 0x187E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E58u;
    // 0x187e5c: 0x2484bcf8  addiu       $a0, $a0, -0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x187E58u, 0x187E60u)) {
        return;
    }
    ctx->pc = 0x187E60u;
label_187e60:
    // 0x187e60: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187e64: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x187E64u;
    SET_GPR_U32(ctx, 31, 0x187E6Cu);
    ctx->pc = 0x187E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E64u;
    // 0x187e68: 0x2484bd00  addiu       $a0, $a0, -0x4300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x187E64u, 0x187E6Cu)) {
        return;
    }
    ctx->pc = 0x187E6Cu;
label_187e6c:
    // 0x187e6c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187e70: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x187E70u;
    SET_GPR_U32(ctx, 31, 0x187E78u);
    ctx->pc = 0x187E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E70u;
    // 0x187e74: 0x2484bd08  addiu       $a0, $a0, -0x42F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x187E70u, 0x187E78u)) {
        return;
    }
    ctx->pc = 0x187E78u;
label_187e78:
    // 0x187e78: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187e7c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x187E7Cu;
    SET_GPR_U32(ctx, 31, 0x187E84u);
    ctx->pc = 0x187E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E7Cu;
    // 0x187e80: 0x2484bd10  addiu       $a0, $a0, -0x42F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x187E7Cu, 0x187E84u)) {
        return;
    }
    ctx->pc = 0x187E84u;
label_187e84:
    // 0x187e84: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x187E84u;
    {
        const bool branch_taken_0x187e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E84u;
        // 0x187e88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e84) {
            ctx->pc = 0x187EDCu;
            goto label_187edc;
        }
    }
    ctx->pc = 0x187E8Cu;
label_187e8c:
    // 0x187e8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187e90: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x187E90u;
    SET_GPR_U32(ctx, 31, 0x187E98u);
    ctx->pc = 0x187E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E90u;
    // 0x187e94: 0x2484bd10  addiu       $a0, $a0, -0x42F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x187E90u, 0x187E98u)) {
        return;
    }
    ctx->pc = 0x187E98u;
label_187e98:
    // 0x187e98: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187e9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187ea0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x187EA0u;
    SET_GPR_U32(ctx, 31, 0x187EA8u);
    ctx->pc = 0x187EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EA0u;
    // 0x187ea4: 0x2484bd08  addiu       $a0, $a0, -0x42F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x187EA0u, 0x187EA8u)) {
        return;
    }
    ctx->pc = 0x187EA8u;
label_187ea8:
    // 0x187ea8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187eac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187eb0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x187EB0u;
    SET_GPR_U32(ctx, 31, 0x187EB8u);
    ctx->pc = 0x187EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EB0u;
    // 0x187eb4: 0x2484bd00  addiu       $a0, $a0, -0x4300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x187EB0u, 0x187EB8u)) {
        return;
    }
    ctx->pc = 0x187EB8u;
label_187eb8:
    // 0x187eb8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187ebc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187ec0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x187EC0u;
    SET_GPR_U32(ctx, 31, 0x187EC8u);
    ctx->pc = 0x187EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EC0u;
    // 0x187ec4: 0x2484bcf8  addiu       $a0, $a0, -0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x187EC0u, 0x187EC8u)) {
        return;
    }
    ctx->pc = 0x187EC8u;
label_187ec8:
    // 0x187ec8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x187ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x187ecc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187ed0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x187ED0u;
    SET_GPR_U32(ctx, 31, 0x187ED8u);
    ctx->pc = 0x187ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187ED0u;
    // 0x187ed4: 0x2484bcf0  addiu       $a0, $a0, -0x4310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x187ED0u, 0x187ED8u)) {
        return;
    }
    ctx->pc = 0x187ED8u;
label_187ed8:
    // 0x187ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187edc:
    // 0x187edc: 0x3e00008  jr          $ra
    ctx->pc = 0x187EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EDCu;
        // 0x187ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187EE4u;
    // 0x187ee4: 0x0  nop
    ctx->pc = 0x187ee4u;
    // NOP
    ctx->pc = 0x187ee8u;
}
