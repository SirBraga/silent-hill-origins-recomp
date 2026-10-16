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

// Function: sub_00141E08
// Address: 0x141e08 - 0x141ed0
void sub_00141E08_0x141e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141E08_0x141e08");
#endif

    switch (ctx->pc) {
        case 0x141e54u: goto label_141e54;
        case 0x141e68u: goto label_141e68;
        case 0x141e78u: goto label_141e78;
        case 0x141e88u: goto label_141e88;
        case 0x141e94u: goto label_141e94;
        case 0x141e9cu: goto label_141e9c;
        case 0x141ea8u: goto label_141ea8;
        case 0x141eb4u: goto label_141eb4;
        default: break;
    }

    ctx->pc = 0x141e08u;

    // 0x141e08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x141e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x141e0c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x141e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x141e10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x141e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141e14: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x141e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x141e18: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x141e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x141e1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x141e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x141e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x141e24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x141e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x141e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x141e2c: 0x24420c70  addiu       $v0, $v0, 0xC70
    ctx->pc = 0x141e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3184));
    // 0x141e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141e34: 0x24630c90  addiu       $v1, $v1, 0xC90
    ctx->pc = 0x141e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3216));
    // 0x141e38: 0x26500038  addiu       $s0, $s2, 0x38
    ctx->pc = 0x141e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x141e3c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x141e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x141e40: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x141e40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x141e44: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x141e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x141e48: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x141e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x141e4c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x141E4Cu;
    SET_GPR_U32(ctx, 31, 0x141E54u);
    ctx->pc = 0x141E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E4Cu;
    // 0x141e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x141E4Cu, 0x141E54u)) {
        return;
    }
    ctx->pc = 0x141E54u;
label_141e54:
    // 0x141e54: 0x2651006c  addiu       $s1, $s2, 0x6C
    ctx->pc = 0x141e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x141e58: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x141e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x141e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e60: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x141E60u;
    SET_GPR_U32(ctx, 31, 0x141E68u);
    ctx->pc = 0x141E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E60u;
    // 0x141e64: 0x24a546a0  addiu       $a1, $a1, 0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x141E60u, 0x141E68u)) {
        return;
    }
    ctx->pc = 0x141E68u;
label_141e68:
    // 0x141e68: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x141e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x141e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e70: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x141E70u;
    SET_GPR_U32(ctx, 31, 0x141E78u);
    ctx->pc = 0x141E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E70u;
    // 0x141e74: 0x24a54500  addiu       $a1, $a1, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x141E70u, 0x141E78u)) {
        return;
    }
    ctx->pc = 0x141E78u;
label_141e78:
    // 0x141e78: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x141e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x141e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e80: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x141E80u;
    SET_GPR_U32(ctx, 31, 0x141E88u);
    ctx->pc = 0x141E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E80u;
    // 0x141e84: 0x24a54508  addiu       $a1, $a1, 0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x141E80u, 0x141E88u)) {
        return;
    }
    ctx->pc = 0x141E88u;
label_141e88:
    // 0x141e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x141e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e8c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x141E8Cu;
    SET_GPR_U32(ctx, 31, 0x141E94u);
    ctx->pc = 0x141E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E8Cu;
    // 0x141e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x141E8Cu, 0x141E94u)) {
        return;
    }
    ctx->pc = 0x141E94u;
label_141e94:
    // 0x141e94: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x141E94u;
    SET_GPR_U32(ctx, 31, 0x141E9Cu);
    ctx->pc = 0x141E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E94u;
    // 0x141e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x141E94u, 0x141E9Cu)) {
        return;
    }
    ctx->pc = 0x141E9Cu;
label_141e9c:
    // 0x141e9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ea0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x141EA0u;
    SET_GPR_U32(ctx, 31, 0x141EA8u);
    ctx->pc = 0x141EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141EA0u;
    // 0x141ea4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x141EA0u, 0x141EA8u)) {
        return;
    }
    ctx->pc = 0x141EA8u;
label_141ea8:
    // 0x141ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141eac: 0xc0501a2  jal         func_140688
    ctx->pc = 0x141EACu;
    SET_GPR_U32(ctx, 31, 0x141EB4u);
    ctx->pc = 0x141EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141EACu;
    // 0x141eb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140688u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140688u, 0x141EACu, 0x141EB4u)) {
        return;
    }
    ctx->pc = 0x141EB4u;
label_141eb4:
    // 0x141eb4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x141eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141eb8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x141eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141ebc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141ec0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x141ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x141EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EC8u;
        // 0x141ecc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141ED0u;
}
