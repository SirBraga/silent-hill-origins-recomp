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

// Function: sub_00162368
// Address: 0x162368 - 0x162460
void sub_00162368_0x162368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162368_0x162368");
#endif

    switch (ctx->pc) {
        case 0x16237cu: goto label_16237c;
        case 0x162384u: goto label_162384;
        default: break;
    }

    ctx->pc = 0x162368u;

    // 0x162368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16236c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x162370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162374: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x162374u;
    SET_GPR_U32(ctx, 31, 0x16237Cu);
    ctx->pc = 0x162378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162374u;
    // 0x162378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x162374u, 0x16237Cu)) {
        return;
    }
    ctx->pc = 0x16237Cu;
label_16237c:
    // 0x16237c: 0xc07924a  jal         func_1E4928
    ctx->pc = 0x16237Cu;
    SET_GPR_U32(ctx, 31, 0x162384u);
    ctx->pc = 0x162380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16237Cu;
    // 0x162380: 0x26040044  addiu       $a0, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4928u, 0x16237Cu, 0x162384u)) {
        return;
    }
    ctx->pc = 0x162384u;
label_162384:
    // 0x162384: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x162384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
    // 0x162388: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x162388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x16238c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x16238cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x162390: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x162390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x162394: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x162394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x162398: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x162398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x16239c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x16239cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1623a0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1623a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1623a4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1623a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1623a8: 0x246338e8  addiu       $v1, $v1, 0x38E8
    ctx->pc = 0x1623a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14568));
    // 0x1623ac: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1623acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1623b0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1623b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1623b4: 0x24843908  addiu       $a0, $a0, 0x3908
    ctx->pc = 0x1623b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14600));
    // 0x1623b8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1623b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1623bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1623bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1623c0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1623c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1623c4: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x1623c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x1623c8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1623c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1623cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1623ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1623d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1623d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623d4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1623d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1623d8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1623d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1623dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1623dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1623e0: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x1623e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x1623e4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1623e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1623e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1623e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1623ec: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1623ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1623f0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1623f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1623f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1623f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1623f8: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1623f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1623fc: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x1623fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x162400: 0xe6080050  swc1        $f8, 0x50($s0)
    ctx->pc = 0x162400u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x162404: 0xe6070074  swc1        $f7, 0x74($s0)
    ctx->pc = 0x162404u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x162408: 0xe6060078  swc1        $f6, 0x78($s0)
    ctx->pc = 0x162408u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x16240c: 0xe605007c  swc1        $f5, 0x7C($s0)
    ctx->pc = 0x16240cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x162410: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x162410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x162414: 0xe6010084  swc1        $f1, 0x84($s0)
    ctx->pc = 0x162414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x162418: 0xe6020088  swc1        $f2, 0x88($s0)
    ctx->pc = 0x162418u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x16241c: 0xe603008c  swc1        $f3, 0x8C($s0)
    ctx->pc = 0x16241cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x162420: 0xe6040090  swc1        $f4, 0x90($s0)
    ctx->pc = 0x162420u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x162424: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x162424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x162428: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x162428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x16242c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x16242cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x162430: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x162430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x162434: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x162434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x162438: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x162438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x16243c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x16243cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x162440: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x162440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x162444: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x162444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x162448: 0xacb0865c  sw          $s0, -0x79A4($a1)
    ctx->pc = 0x162448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x33865Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33865Cu, _value); } while (0);
    // 0x16244c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16244cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162454: 0x3e00008  jr          $ra
    ctx->pc = 0x162454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162454u;
        // 0x162458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16245Cu;
    // 0x16245c: 0x0  nop
    ctx->pc = 0x16245cu;
    // NOP
    ctx->pc = 0x162460u;
}
