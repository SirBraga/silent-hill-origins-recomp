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

// Function: sub_00119E78
// Address: 0x119e78 - 0x119f68
void sub_00119E78_0x119e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119E78_0x119e78");
#endif

    switch (ctx->pc) {
        case 0x119ed4u: goto label_119ed4;
        case 0x119ee0u: goto label_119ee0;
        case 0x119ee8u: goto label_119ee8;
        case 0x119ef0u: goto label_119ef0;
        case 0x119ef8u: goto label_119ef8;
        case 0x119f04u: goto label_119f04;
        case 0x119f10u: goto label_119f10;
        case 0x119f1cu: goto label_119f1c;
        case 0x119f28u: goto label_119f28;
        case 0x119f34u: goto label_119f34;
        case 0x119f40u: goto label_119f40;
        default: break;
    }

    ctx->pc = 0x119e78u;

    // 0x119e78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x119e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x119e7c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x119e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x119e80: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x119e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x119e84: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x119e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x119e88: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x119e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x119e8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e90: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x119e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x119e94: 0x2442ae70  addiu       $v0, $v0, -0x5190
    ctx->pc = 0x119e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946416));
    // 0x119e98: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x119e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x119e9c: 0x2463ae90  addiu       $v1, $v1, -0x5170
    ctx->pc = 0x119e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946448));
    // 0x119ea0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x119ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x119ea4: 0x26150098  addiu       $s5, $s0, 0x98
    ctx->pc = 0x119ea4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x119ea8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x119ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x119eac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x119eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119eb0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x119eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x119eb4: 0x261400a0  addiu       $s4, $s0, 0xA0
    ctx->pc = 0x119eb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x119eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119ebc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x119ebcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ec0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x119ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x119ec4: 0x261300a8  addiu       $s3, $s0, 0xA8
    ctx->pc = 0x119ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x119ec8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x119ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x119ecc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x119ECCu;
    SET_GPR_U32(ctx, 31, 0x119ED4u);
    ctx->pc = 0x119ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119ECCu;
    // 0x119ed0: 0x261200b0  addiu       $s2, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x119ECCu, 0x119ED4u)) {
        return;
    }
    ctx->pc = 0x119ED4u;
label_119ed4:
    // 0x119ed4: 0x261100b8  addiu       $s1, $s0, 0xB8
    ctx->pc = 0x119ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x119ed8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x119ED8u;
    SET_GPR_U32(ctx, 31, 0x119EE0u);
    ctx->pc = 0x119EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119ED8u;
    // 0x119edc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x119ED8u, 0x119EE0u)) {
        return;
    }
    ctx->pc = 0x119EE0u;
label_119ee0:
    // 0x119ee0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x119EE0u;
    SET_GPR_U32(ctx, 31, 0x119EE8u);
    ctx->pc = 0x119EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119EE0u;
    // 0x119ee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x119EE0u, 0x119EE8u)) {
        return;
    }
    ctx->pc = 0x119EE8u;
label_119ee8:
    // 0x119ee8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x119EE8u;
    SET_GPR_U32(ctx, 31, 0x119EF0u);
    ctx->pc = 0x119EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119EE8u;
    // 0x119eec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x119EE8u, 0x119EF0u)) {
        return;
    }
    ctx->pc = 0x119EF0u;
label_119ef0:
    // 0x119ef0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x119EF0u;
    SET_GPR_U32(ctx, 31, 0x119EF8u);
    ctx->pc = 0x119EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119EF0u;
    // 0x119ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x119EF0u, 0x119EF8u)) {
        return;
    }
    ctx->pc = 0x119EF8u;
label_119ef8:
    // 0x119ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119efc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x119EFCu;
    SET_GPR_U32(ctx, 31, 0x119F04u);
    ctx->pc = 0x119F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119EFCu;
    // 0x119f00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x119EFCu, 0x119F04u)) {
        return;
    }
    ctx->pc = 0x119F04u;
label_119f04:
    // 0x119f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f08: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x119F08u;
    SET_GPR_U32(ctx, 31, 0x119F10u);
    ctx->pc = 0x119F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F08u;
    // 0x119f0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x119F08u, 0x119F10u)) {
        return;
    }
    ctx->pc = 0x119F10u;
label_119f10:
    // 0x119f10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f14: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x119F14u;
    SET_GPR_U32(ctx, 31, 0x119F1Cu);
    ctx->pc = 0x119F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F14u;
    // 0x119f18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x119F14u, 0x119F1Cu)) {
        return;
    }
    ctx->pc = 0x119F1Cu;
label_119f1c:
    // 0x119f1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x119f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f20: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x119F20u;
    SET_GPR_U32(ctx, 31, 0x119F28u);
    ctx->pc = 0x119F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F20u;
    // 0x119f24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x119F20u, 0x119F28u)) {
        return;
    }
    ctx->pc = 0x119F28u;
label_119f28:
    // 0x119f28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x119f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f2c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x119F2Cu;
    SET_GPR_U32(ctx, 31, 0x119F34u);
    ctx->pc = 0x119F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F2Cu;
    // 0x119f30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x119F2Cu, 0x119F34u)) {
        return;
    }
    ctx->pc = 0x119F34u;
label_119f34:
    // 0x119f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f38: 0xc04465e  jal         func_111978
    ctx->pc = 0x119F38u;
    SET_GPR_U32(ctx, 31, 0x119F40u);
    ctx->pc = 0x119F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F38u;
    // 0x119f3c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111978u, 0x119F38u, 0x119F40u)) {
        return;
    }
    ctx->pc = 0x119F40u;
label_119f40:
    // 0x119f40: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x119f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119f44: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x119f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119f48: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x119f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119f4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x119f4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119f50: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x119f50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119f54: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x119f54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119f58: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x119f58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119f60: 0x3e00008  jr          $ra
    ctx->pc = 0x119F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F60u;
        // 0x119f64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119F68u;
}
