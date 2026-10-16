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

// Function: sub_0024FAE8
// Address: 0x24fae8 - 0x24fbc0
void sub_0024FAE8_0x24fae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FAE8_0x24fae8");
#endif

    switch (ctx->pc) {
        case 0x24fb1cu: goto label_24fb1c;
        case 0x24fbacu: goto label_24fbac;
        default: break;
    }

    ctx->pc = 0x24fae8u;

    // 0x24fae8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24fae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24faec: 0x8f858588  lw          $a1, -0x7A78($gp)
    ctx->pc = 0x24faecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    // 0x24faf0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24faf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x24faf4: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x24faf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x24faf8: 0x8f87858c  lw          $a3, -0x7A74($gp)
    ctx->pc = 0x24faf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    // 0x24fafc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24fafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb00: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x24fb00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x24fb04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24fb08: 0x25084270  addiu       $t0, $t0, 0x4270
    ctx->pc = 0x24fb08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17008));
    // 0x24fb0c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24fb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24fb10: 0x3529011e  ori         $t1, $t1, 0x11E
    ctx->pc = 0x24fb10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)286);
    // 0x24fb14: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x24FB14u;
    SET_GPR_U32(ctx, 31, 0x24FB1Cu);
    ctx->pc = 0x24FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FB14u;
    // 0x24fb18: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x24FB14u, 0x24FB1Cu)) {
        return;
    }
    ctx->pc = 0x24FB1Cu;
label_24fb1c:
    // 0x24fb1c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x24fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x24fb20: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x24fb20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x24fb24: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x24fb24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x24fb28: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x24fb28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x24fb2c: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x24fb2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
    // 0x24fb30: 0x3c0a0025  lui         $t2, 0x25
    ctx->pc = 0x24fb30u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)37 << 16));
    // 0x24fb34: 0x3c0b0025  lui         $t3, 0x25
    ctx->pc = 0x24fb34u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37 << 16));
    // 0x24fb38: 0x3c0c0025  lui         $t4, 0x25
    ctx->pc = 0x24fb38u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)37 << 16));
    // 0x24fb3c: 0x240d0024  addiu       $t5, $zero, 0x24
    ctx->pc = 0x24fb3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x24fb40: 0x24a51120  addiu       $a1, $a1, 0x1120
    ctx->pc = 0x24fb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4384));
    // 0x24fb44: 0x24c61868  addiu       $a2, $a2, 0x1868
    ctx->pc = 0x24fb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6248));
    // 0x24fb48: 0x24e71230  addiu       $a3, $a3, 0x1230
    ctx->pc = 0x24fb48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4656));
    // 0x24fb4c: 0x250821a8  addiu       $t0, $t0, 0x21A8
    ctx->pc = 0x24fb4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8616));
    // 0x24fb50: 0x25292038  addiu       $t1, $t1, 0x2038
    ctx->pc = 0x24fb50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8248));
    // 0x24fb54: 0x254a1e88  addiu       $t2, $t2, 0x1E88
    ctx->pc = 0x24fb54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7816));
    // 0x24fb58: 0x256b1f68  addiu       $t3, $t3, 0x1F68
    ctx->pc = 0x24fb58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8040));
    // 0x24fb5c: 0x258c2028  addiu       $t4, $t4, 0x2028
    ctx->pc = 0x24fb5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8232));
    // 0x24fb60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fb64: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x24fb64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x24fb68: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x24fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x24fb6c: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x24fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x24fb70: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x24fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x24fb74: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x24fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x24fb78: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x24fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x24fb7c: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x24fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x24fb80: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x24fb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x24fb84: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x24fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
    // 0x24fb88: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x24fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x24fb8c: 0xafac0028  sw          $t4, 0x28($sp)
    ctx->pc = 0x24fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
    // 0x24fb90: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x24fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x24fb94: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x24fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x24fb98: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x24fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x24fb9c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24fb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24fba0: 0xac2241a4  sw          $v0, 0x41A4($at)
    ctx->pc = 0x24fba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B41A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41A4u, _value); } while (0);
    // 0x24fba4: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x24FBA4u;
    SET_GPR_U32(ctx, 31, 0x24FBACu);
    ctx->pc = 0x24FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FBA4u;
    // 0x24fba8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x24FBA4u, 0x24FBACu)) {
        return;
    }
    ctx->pc = 0x24FBACu;
label_24fbac:
    // 0x24fbac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24fbacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fbb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24fbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24fbb4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24fbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24fbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x24FBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBB8u;
        // 0x24fbbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FBC0u;
}
