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

// Function: sub_00160978
// Address: 0x160978 - 0x160ab8
void sub_00160978_0x160978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160978_0x160978");
#endif

    switch (ctx->pc) {
        case 0x1609a0u: goto label_1609a0;
        case 0x1609c8u: goto label_1609c8;
        case 0x1609d0u: goto label_1609d0;
        case 0x160a68u: goto label_160a68;
        case 0x160a74u: goto label_160a74;
        default: break;
    }

    ctx->pc = 0x160978u;

    // 0x160978: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x160978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16097c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x160980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160984: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x160984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x160988: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x160988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16098c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160990: 0x26110094  addiu       $s1, $s0, 0x94
    ctx->pc = 0x160990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x160994: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x160994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x160998: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x160998u;
    SET_GPR_U32(ctx, 31, 0x1609A0u);
    ctx->pc = 0x16099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160998u;
    // 0x16099c: 0x2612009c  addiu       $s2, $s0, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x160998u, 0x1609A0u)) {
        return;
    }
    ctx->pc = 0x1609A0u;
label_1609a0:
    // 0x1609a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1609a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1609a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1609a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1609a8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1609a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1609ac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1609acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1609b0: 0x246336e8  addiu       $v1, $v1, 0x36E8
    ctx->pc = 0x1609b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14056));
    // 0x1609b4: 0x244236c8  addiu       $v0, $v0, 0x36C8
    ctx->pc = 0x1609b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14024));
    // 0x1609b8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1609b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1609bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1609bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609c0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1609C0u;
    SET_GPR_U32(ctx, 31, 0x1609C8u);
    ctx->pc = 0x1609C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1609C0u;
    // 0x1609c4: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1609C0u, 0x1609C8u)) {
        return;
    }
    ctx->pc = 0x1609C8u;
label_1609c8:
    // 0x1609c8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1609C8u;
    SET_GPR_U32(ctx, 31, 0x1609D0u);
    ctx->pc = 0x1609CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1609C8u;
    // 0x1609cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1609C8u, 0x1609D0u)) {
        return;
    }
    ctx->pc = 0x1609D0u;
label_1609d0:
    // 0x1609d0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1609d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1609d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1609d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1609d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1609d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1609dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1609dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609e0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1609e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1609e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1609e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1609e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1609e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609ec: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1609ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1609f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1609f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1609f4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1609f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1609f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1609f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1609fc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1609fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x160a00: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x160a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x160a04: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x160a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x160a08: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x160a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x160a0c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x160a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x160a10: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x160a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x160a14: 0xe614005c  swc1        $f20, 0x5C($s0)
    ctx->pc = 0x160a14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x160a18: 0xe614006c  swc1        $f20, 0x6C($s0)
    ctx->pc = 0x160a18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x160a1c: 0xe6140070  swc1        $f20, 0x70($s0)
    ctx->pc = 0x160a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x160a20: 0xe6140074  swc1        $f20, 0x74($s0)
    ctx->pc = 0x160a20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x160a24: 0xe6140078  swc1        $f20, 0x78($s0)
    ctx->pc = 0x160a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x160a28: 0xe6140088  swc1        $f20, 0x88($s0)
    ctx->pc = 0x160a28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x160a2c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x160a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x160a30: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x160a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x160a34: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x160a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x160a38: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x160a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x160a3c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x160a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x160a40: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x160a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x160a44: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x160a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x160a48: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x160a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x160a4c: 0xe6020058  swc1        $f2, 0x58($s0)
    ctx->pc = 0x160a4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x160a50: 0xe6030060  swc1        $f3, 0x60($s0)
    ctx->pc = 0x160a50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x160a54: 0xe6040080  swc1        $f4, 0x80($s0)
    ctx->pc = 0x160a54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x160a58: 0xe6050084  swc1        $f5, 0x84($s0)
    ctx->pc = 0x160a58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x160a5c: 0xe6060090  swc1        $f6, 0x90($s0)
    ctx->pc = 0x160a5cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x160a60: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x160A60u;
    SET_GPR_U32(ctx, 31, 0x160A68u);
    ctx->pc = 0x160A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160A60u;
    // 0x160a64: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x160A60u, 0x160A68u)) {
        return;
    }
    ctx->pc = 0x160A68u;
label_160a68:
    // 0x160a68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a6c: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x160A6Cu;
    SET_GPR_U32(ctx, 31, 0x160A74u);
    ctx->pc = 0x160A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160A6Cu;
    // 0x160a70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x160A6Cu, 0x160A74u)) {
        return;
    }
    ctx->pc = 0x160A74u;
label_160a74:
    // 0x160a74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x160a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160a78: 0xe61400a8  swc1        $f20, 0xA8($s0)
    ctx->pc = 0x160a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x160a7c: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x160a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x160a80: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x160a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x160a84: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x160a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x160a88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x160a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x160a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160a90: 0x8c838648  lw          $v1, -0x79B8($a0)
    ctx->pc = 0x160a90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338648u));
    // 0x160a94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x160a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160a98: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x160a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x160a9c: 0xac908648  sw          $s0, -0x79B8($a0)
    ctx->pc = 0x160a9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x338648u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338648u, _value); } while (0);
    // 0x160aa0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x160aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160aa8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x160aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x160aac: 0x3e00008  jr          $ra
    ctx->pc = 0x160AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AACu;
        // 0x160ab0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160AB4u;
    // 0x160ab4: 0x0  nop
    ctx->pc = 0x160ab4u;
    // NOP
    ctx->pc = 0x160ab8u;
}
