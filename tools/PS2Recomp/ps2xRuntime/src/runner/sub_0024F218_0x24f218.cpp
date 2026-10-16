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

// Function: sub_0024F218
// Address: 0x24f218 - 0x24f320
void sub_0024F218_0x24f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F218_0x24f218");
#endif

    ctx->pc = 0x24f218u;

    // 0x24f218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24f218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24f21c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24f220: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24f220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24f224: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24f224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x24f228: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24f228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24f22c: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x24f22cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x24f230: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24f230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x24f234: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x24f234u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x24f238: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x24f238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
    // 0x24f23c: 0x3c120025  lui         $s2, 0x25
    ctx->pc = 0x24f23cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    // 0x24f240: 0x3c130031  lui         $s3, 0x31
    ctx->pc = 0x24f240u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)49 << 16));
    // 0x24f244: 0x26102ae0  addiu       $s0, $s0, 0x2AE0
    ctx->pc = 0x24f244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10976));
    // 0x24f248: 0x2631f120  addiu       $s1, $s1, -0xEE0
    ctx->pc = 0x24f248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963488));
    // 0x24f24c: 0x2652f168  addiu       $s2, $s2, -0xE98
    ctx->pc = 0x24f24cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963560));
    // 0x24f250: 0x267374e8  addiu       $s3, $s3, 0x74E8
    ctx->pc = 0x24f250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 29928));
    // 0x24f254: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x24f254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x24f258: 0x24423f98  addiu       $v0, $v0, 0x3F98
    ctx->pc = 0x24f258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16280));
    // 0x24f25c: 0xac7000f4  sw          $s0, 0xF4($v1)
    ctx->pc = 0x24f25cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x7310BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310BCu, _value); } while (0);
    // 0x24f260: 0xac7100f8  sw          $s1, 0xF8($v1)
    ctx->pc = 0x24f260u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x7310C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310C0u, _value); } while (0);
    // 0x24f264: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x24f264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x24f268: 0xac7200fc  sw          $s2, 0xFC($v1)
    ctx->pc = 0x24f268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x7310C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310C4u, _value); } while (0);
    // 0x24f26c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x24f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x24f270: 0xac730100  sw          $s3, 0x100($v1)
    ctx->pc = 0x24f270u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x7310C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310C8u, _value); } while (0);
    // 0x24f274: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x24f274u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x24f278: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x24f278u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x24f27c: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x24f27cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x24f280: 0x3c090031  lui         $t1, 0x31
    ctx->pc = 0x24f280u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49 << 16));
    // 0x24f284: 0x3c0a0025  lui         $t2, 0x25
    ctx->pc = 0x24f284u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)37 << 16));
    // 0x24f288: 0x3c0b0025  lui         $t3, 0x25
    ctx->pc = 0x24f288u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37 << 16));
    // 0x24f28c: 0x3c0c0031  lui         $t4, 0x31
    ctx->pc = 0x24f28cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)49 << 16));
    // 0x24f290: 0x3c0d0031  lui         $t5, 0x31
    ctx->pc = 0x24f290u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)49 << 16));
    // 0x24f294: 0x3c0e0031  lui         $t6, 0x31
    ctx->pc = 0x24f294u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)49 << 16));
    // 0x24f298: 0x3c0f0025  lui         $t7, 0x25
    ctx->pc = 0x24f298u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)37 << 16));
    // 0x24f29c: 0x24843f10  addiu       $a0, $a0, 0x3F10
    ctx->pc = 0x24f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16144));
    // 0x24f2a0: 0x24a54da0  addiu       $a1, $a1, 0x4DA0
    ctx->pc = 0x24f2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19872));
    // 0x24f2a4: 0x24c629c8  addiu       $a2, $a2, 0x29C8
    ctx->pc = 0x24f2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10696));
    // 0x24f2a8: 0x24e72fa8  addiu       $a3, $a3, 0x2FA8
    ctx->pc = 0x24f2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12200));
    // 0x24f2ac: 0x250825ac  addiu       $t0, $t0, 0x25AC
    ctx->pc = 0x24f2acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9644));
    // 0x24f2b0: 0x25292c28  addiu       $t1, $t1, 0x2C28
    ctx->pc = 0x24f2b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11304));
    // 0x24f2b4: 0x254af1e8  addiu       $t2, $t2, -0xE18
    ctx->pc = 0x24f2b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294963688));
    // 0x24f2b8: 0x256bf1b0  addiu       $t3, $t3, -0xE50
    ctx->pc = 0x24f2b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294963632));
    // 0x24f2bc: 0x258c7470  addiu       $t4, $t4, 0x7470
    ctx->pc = 0x24f2bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 29808));
    // 0x24f2c0: 0x25ad287c  addiu       $t5, $t5, 0x287C
    ctx->pc = 0x24f2c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 10364));
    // 0x24f2c4: 0x25ce2de0  addiu       $t6, $t6, 0x2DE0
    ctx->pc = 0x24f2c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11744));
    // 0x24f2c8: 0x25eff0b0  addiu       $t7, $t7, -0xF50
    ctx->pc = 0x24f2c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963376));
    // 0x24f2cc: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x24f2ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7310CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310CCu, _value); } while (0);
    // 0x24f2d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24f2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f2d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f2d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24f2d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f2dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24f2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f2e0: 0x7bb30000  lq          $s3, 0x0($sp)
    ctx->pc = 0x24f2e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f2e4: 0xac6400c4  sw          $a0, 0xC4($v1)
    ctx->pc = 0x24f2e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x73108Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x73108Cu, _value); } while (0);
    // 0x24f2e8: 0xac6500c8  sw          $a1, 0xC8($v1)
    ctx->pc = 0x24f2e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x731090u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x731090u, _value); } while (0);
    // 0x24f2ec: 0xac6600cc  sw          $a2, 0xCC($v1)
    ctx->pc = 0x24f2ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x731094u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x731094u, _value); } while (0);
    // 0x24f2f0: 0xac6700d0  sw          $a3, 0xD0($v1)
    ctx->pc = 0x24f2f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x731098u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x731098u, _value); } while (0);
    // 0x24f2f4: 0xac6800d4  sw          $t0, 0xD4($v1)
    ctx->pc = 0x24f2f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x73109Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x73109Cu, _value); } while (0);
    // 0x24f2f8: 0xac6900d8  sw          $t1, 0xD8($v1)
    ctx->pc = 0x24f2f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x7310A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310A0u, _value); } while (0);
    // 0x24f2fc: 0xac6a00dc  sw          $t2, 0xDC($v1)
    ctx->pc = 0x24f2fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x7310A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310A4u, _value); } while (0);
    // 0x24f300: 0xac6b00e0  sw          $t3, 0xE0($v1)
    ctx->pc = 0x24f300u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x7310A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310A8u, _value); } while (0);
    // 0x24f304: 0xac6c00e4  sw          $t4, 0xE4($v1)
    ctx->pc = 0x24f304u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x7310ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310ACu, _value); } while (0);
    // 0x24f308: 0xac6d00e8  sw          $t5, 0xE8($v1)
    ctx->pc = 0x24f308u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x7310B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310B0u, _value); } while (0);
    // 0x24f30c: 0xac6e00ec  sw          $t6, 0xEC($v1)
    ctx->pc = 0x24f30cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x7310B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310B4u, _value); } while (0);
    // 0x24f310: 0xac6f00f0  sw          $t7, 0xF0($v1)
    ctx->pc = 0x24f310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x7310B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310B8u, _value); } while (0);
    // 0x24f314: 0x3e00008  jr          $ra
    ctx->pc = 0x24F314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F314u;
        // 0x24f318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F31Cu;
    // 0x24f31c: 0x0  nop
    ctx->pc = 0x24f31cu;
    // NOP
    ctx->pc = 0x24f320u;
}
