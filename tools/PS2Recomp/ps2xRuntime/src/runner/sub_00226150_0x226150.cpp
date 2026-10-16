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

// Function: sub_00226150
// Address: 0x226150 - 0x226248
void sub_00226150_0x226150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226150_0x226150");
#endif

    switch (ctx->pc) {
        case 0x226238u: goto label_226238;
        default: break;
    }

    ctx->pc = 0x226150u;

    // 0x226150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226154: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x226154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22615c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x22615cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x226160: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x226160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x226164: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x226164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226168: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x226168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22616c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22616cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x226170: 0x24620090  addiu       $v0, $v1, 0x90
    ctx->pc = 0x226170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x226174: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x226174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
    // 0x226178: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x226178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x22617c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226180: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x226180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x226184: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x226184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x226188: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x226188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22618c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22618cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226190: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x226190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x226194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226198: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x226198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x22619c: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x22619cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2261a0: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x2261a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2261a4: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x2261a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2261a8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2261a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2261ac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2261acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2261b0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2261b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2261b4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2261b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2261b8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2261b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2261bc: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2261bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2261c0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x2261c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2261c4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2261c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2261c8: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2261c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2261cc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2261ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2261d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2261d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2261d4: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2261d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2261d8: 0xac65005c  sw          $a1, 0x5C($v1)
    ctx->pc = 0x2261d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 5));
    // 0x2261dc: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x2261dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2261e0: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x2261e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2261e4: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x2261e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2261e8: 0xe4610050  swc1        $f1, 0x50($v1)
    ctx->pc = 0x2261e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2261ec: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2261ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2261f0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2261f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2261f4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2261f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2261f8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2261f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2261fc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2261fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x226200: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x226200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x226204: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x226204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x226208: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x226208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x22620c: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x22620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x226210: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x226210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x226214: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x226214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x226218: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x226218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x22621c: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x22621cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
    // 0x226220: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x226220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x226224: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x226224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x226228: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x226228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22622c: 0xac60009c  sw          $zero, 0x9C($v1)
    ctx->pc = 0x22622cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
    // 0x226230: 0xc093958  jal         func_24E560
    ctx->pc = 0x226230u;
    SET_GPR_U32(ctx, 31, 0x226238u);
    ctx->pc = 0x226234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226230u;
    // 0x226234: 0xac6300a0  sw          $v1, 0xA0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x226230u, 0x226238u)) {
        return;
    }
    ctx->pc = 0x226238u;
label_226238:
    // 0x226238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22623c: 0x3e00008  jr          $ra
    ctx->pc = 0x22623Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22623Cu;
        // 0x226240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22623Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226244u;
    // 0x226244: 0x0  nop
    ctx->pc = 0x226244u;
    // NOP
    ctx->pc = 0x226248u;
}
