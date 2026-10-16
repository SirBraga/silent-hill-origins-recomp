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

// Function: sub_001BCFD8
// Address: 0x1bcfd8 - 0x1bd470
void sub_001BCFD8_0x1bcfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCFD8_0x1bcfd8");
#endif

    switch (ctx->pc) {
        case 0x1bd058u: goto label_1bd058;
        case 0x1bd0b4u: goto label_1bd0b4;
        case 0x1bd104u: goto label_1bd104;
        case 0x1bd154u: goto label_1bd154;
        case 0x1bd1a4u: goto label_1bd1a4;
        case 0x1bd1f4u: goto label_1bd1f4;
        case 0x1bd244u: goto label_1bd244;
        case 0x1bd294u: goto label_1bd294;
        case 0x1bd2e4u: goto label_1bd2e4;
        case 0x1bd370u: goto label_1bd370;
        case 0x1bd3c8u: goto label_1bd3c8;
        default: break;
    }

    ctx->pc = 0x1bcfd8u;

    // 0x1bcfd8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1bcfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1bcfdc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bcfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bcfe0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1bcfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1bcfe4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1bcfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bcfe8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1bcfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1bcfec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bcfecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcff0: 0x24549330  addiu       $s4, $v0, -0x6CD0
    ctx->pc = 0x1bcff0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939440));
    // 0x1bcff4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x1bcff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1bcff8: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x1bcff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1bcffc: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x1bcffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1bd000: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1bd000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1bd004: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1bd004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1bd008: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1bd008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1bd00c: 0x2413002c  addiu       $s3, $zero, 0x2C
    ctx->pc = 0x1bd00cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1bd010: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1bd010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1bd014: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1bd014u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd018: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1bd018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1bd01c: 0x26360004  addiu       $s6, $s1, 0x4
    ctx->pc = 0x1bd01cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bd020: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1bd020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1bd024: 0x26370008  addiu       $s7, $s1, 0x8
    ctx->pc = 0x1bd024u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1bd028: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1bd028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1bd02c: 0x263e000c  addiu       $fp, $s1, 0xC
    ctx->pc = 0x1bd02cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1bd030: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1bd030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1bd034: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1bd034u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1bd038: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1bd038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1bd03c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bd03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bd040: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bd040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bd044: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x1bd044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x1bd048: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1bd048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1bd04c: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x1bd04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x1bd050: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1bd050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1bd054: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x1bd054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_1bd058:
    // 0x1bd058: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x1bd058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd05c: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x1bd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1bd060: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bd060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd064: 0x489021  addu        $s2, $v0, $t0
    ctx->pc = 0x1bd064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1bd068: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bd068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd06c: 0x1043009f  beq         $v0, $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x1BD06Cu;
    {
        const bool branch_taken_0x1bd06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD06Cu;
        // 0x1bd070: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd06c) {
            ctx->pc = 0x1BD2ECu;
            goto label_1bd2ec;
        }
    }
    ctx->pc = 0x1BD074u;
    // 0x1bd074: 0x532018  mult        $a0, $v0, $s3
    ctx->pc = 0x1bd074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bd078: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x1bd078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1bd07c: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x1bd07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd080: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bd080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd084: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd088: 0xc62d00e8  lwc1        $f13, 0xE8($s1)
    ctx->pc = 0x1bd088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd08c: 0x532818  mult        $a1, $v0, $s3
    ctx->pc = 0x1bd08cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd090: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x1bd090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1bd094: 0xc4700000  lwc1        $f16, 0x0($v1)
    ctx->pc = 0x1bd094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1bd098: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bd098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd09c: 0xc62e00ec  lwc1        $f14, 0xEC($s1)
    ctx->pc = 0x1bd09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd0a0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bd0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bd0a4: 0xb41021  addu        $v0, $a1, $s4
    ctx->pc = 0x1bd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x1bd0a8: 0xc44f0000  lwc1        $f15, 0x0($v0)
    ctx->pc = 0x1bd0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd0ac: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1BD0ACu;
    SET_GPR_U32(ctx, 31, 0x1BD0B4u);
    ctx->pc = 0x1BD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0ACu;
    // 0x1bd0b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1BD0ACu, 0x1BD0B4u)) {
        return;
    }
    ctx->pc = 0x1BD0B4u;
label_1bd0b4:
    // 0x1bd0b4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd0b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd0bc: 0x24a59334  addiu       $a1, $a1, -0x6CCC
    ctx->pc = 0x1bd0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939444));
    // 0x1bd0c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd0c4: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd0c4u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd0c8: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x1bd0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd0cc: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd0d0: 0x70731800  madd        $v1, $v1, $s3
    ctx->pc = 0x1bd0d0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd0d4: 0x24a59334  addiu       $a1, $a1, -0x6CCC
    ctx->pc = 0x1bd0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939444));
    // 0x1bd0d8: 0xc62d00e8  lwc1        $f13, 0xE8($s1)
    ctx->pc = 0x1bd0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd0dc: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd0dcu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd0e0: 0xc62e00ec  lwc1        $f14, 0xEC($s1)
    ctx->pc = 0x1bd0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd0e4: 0x70531000  madd        $v0, $v0, $s3
    ctx->pc = 0x1bd0e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bd0e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bd0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bd0ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bd0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1bd0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0f4: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1bd0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd0f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd0f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd0fc: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1BD0FCu;
    SET_GPR_U32(ctx, 31, 0x1BD104u);
    ctx->pc = 0x1BD100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0FCu;
    // 0x1bd100: 0xc4500000  lwc1        $f16, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1BD0FCu, 0x1BD104u)) {
        return;
    }
    ctx->pc = 0x1BD104u;
label_1bd104:
    // 0x1bd104: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd108: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd10c: 0x24a59338  addiu       $a1, $a1, -0x6CC8
    ctx->pc = 0x1bd10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939448));
    // 0x1bd110: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bd110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd114: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd114u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd118: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x1bd118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd11c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd120: 0x70731800  madd        $v1, $v1, $s3
    ctx->pc = 0x1bd120u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd124: 0x24a59338  addiu       $a1, $a1, -0x6CC8
    ctx->pc = 0x1bd124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939448));
    // 0x1bd128: 0xc62d00e8  lwc1        $f13, 0xE8($s1)
    ctx->pc = 0x1bd128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd12c: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd12cu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd130: 0xc62e00ec  lwc1        $f14, 0xEC($s1)
    ctx->pc = 0x1bd130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd134: 0x70531000  madd        $v0, $v0, $s3
    ctx->pc = 0x1bd134u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bd138: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bd138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bd13c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bd13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd140: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1bd140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd144: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1bd144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd148: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd148u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd14c: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1BD14Cu;
    SET_GPR_U32(ctx, 31, 0x1BD154u);
    ctx->pc = 0x1BD150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD14Cu;
    // 0x1bd150: 0xc4500000  lwc1        $f16, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1BD14Cu, 0x1BD154u)) {
        return;
    }
    ctx->pc = 0x1BD154u;
label_1bd154:
    // 0x1bd154: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd158: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd15c: 0x24a5933c  addiu       $a1, $a1, -0x6CC4
    ctx->pc = 0x1bd15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939452));
    // 0x1bd160: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bd160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd164: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd164u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd168: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x1bd168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd16c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd16cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd170: 0x70731800  madd        $v1, $v1, $s3
    ctx->pc = 0x1bd170u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd174: 0x24a5933c  addiu       $a1, $a1, -0x6CC4
    ctx->pc = 0x1bd174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939452));
    // 0x1bd178: 0xc62d00e8  lwc1        $f13, 0xE8($s1)
    ctx->pc = 0x1bd178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd17c: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd17cu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd180: 0xc62e00ec  lwc1        $f14, 0xEC($s1)
    ctx->pc = 0x1bd180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd184: 0x70531000  madd        $v0, $v0, $s3
    ctx->pc = 0x1bd184u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bd188: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bd188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bd18c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bd18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd190: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1bd190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd194: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1bd194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd198: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd198u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd19c: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1BD19Cu;
    SET_GPR_U32(ctx, 31, 0x1BD1A4u);
    ctx->pc = 0x1BD1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD19Cu;
    // 0x1bd1a0: 0xc4500000  lwc1        $f16, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1BD19Cu, 0x1BD1A4u)) {
        return;
    }
    ctx->pc = 0x1BD1A4u;
label_1bd1a4:
    // 0x1bd1a4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd1a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd1ac: 0x24a59340  addiu       $a1, $a1, -0x6CC0
    ctx->pc = 0x1bd1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939456));
    // 0x1bd1b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd1b4: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd1b4u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd1b8: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x1bd1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd1bc: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd1c0: 0x70731800  madd        $v1, $v1, $s3
    ctx->pc = 0x1bd1c0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd1c4: 0x24a59340  addiu       $a1, $a1, -0x6CC0
    ctx->pc = 0x1bd1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939456));
    // 0x1bd1c8: 0xc62d00e8  lwc1        $f13, 0xE8($s1)
    ctx->pc = 0x1bd1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd1cc: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd1ccu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd1d0: 0xc62e00ec  lwc1        $f14, 0xEC($s1)
    ctx->pc = 0x1bd1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd1d4: 0x70531000  madd        $v0, $v0, $s3
    ctx->pc = 0x1bd1d4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bd1d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bd1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bd1dc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1bd1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bd1e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bd1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1e4: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1bd1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd1e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd1e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd1ec: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1BD1ECu;
    SET_GPR_U32(ctx, 31, 0x1BD1F4u);
    ctx->pc = 0x1BD1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1ECu;
    // 0x1bd1f0: 0xc4500000  lwc1        $f16, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1BD1ECu, 0x1BD1F4u)) {
        return;
    }
    ctx->pc = 0x1BD1F4u;
label_1bd1f4:
    // 0x1bd1f4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd1f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd1fc: 0x24a59344  addiu       $a1, $a1, -0x6CBC
    ctx->pc = 0x1bd1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939460));
    // 0x1bd200: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bd200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd204: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd204u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd208: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x1bd208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd20c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd210: 0x70731800  madd        $v1, $v1, $s3
    ctx->pc = 0x1bd210u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd214: 0x24a59344  addiu       $a1, $a1, -0x6CBC
    ctx->pc = 0x1bd214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939460));
    // 0x1bd218: 0xc62d00e8  lwc1        $f13, 0xE8($s1)
    ctx->pc = 0x1bd218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd21c: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd21cu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd220: 0xc62e00ec  lwc1        $f14, 0xEC($s1)
    ctx->pc = 0x1bd220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd224: 0x70531000  madd        $v0, $v0, $s3
    ctx->pc = 0x1bd224u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bd228: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bd228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bd22c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1bd22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bd230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd234: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1bd234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd238: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd238u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd23c: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1BD23Cu;
    SET_GPR_U32(ctx, 31, 0x1BD244u);
    ctx->pc = 0x1BD240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD23Cu;
    // 0x1bd240: 0xc4500000  lwc1        $f16, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1BD23Cu, 0x1BD244u)) {
        return;
    }
    ctx->pc = 0x1BD244u;
label_1bd244:
    // 0x1bd244: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd248: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd24c: 0x24a59348  addiu       $a1, $a1, -0x6CB8
    ctx->pc = 0x1bd24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939464));
    // 0x1bd250: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bd250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd254: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd254u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd258: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x1bd258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd25c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd260: 0x70731800  madd        $v1, $v1, $s3
    ctx->pc = 0x1bd260u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd264: 0x24a59348  addiu       $a1, $a1, -0x6CB8
    ctx->pc = 0x1bd264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939464));
    // 0x1bd268: 0xc62d00e8  lwc1        $f13, 0xE8($s1)
    ctx->pc = 0x1bd268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd26c: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd26cu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd270: 0xc62e00ec  lwc1        $f14, 0xEC($s1)
    ctx->pc = 0x1bd270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd274: 0x70531000  madd        $v0, $v0, $s3
    ctx->pc = 0x1bd274u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bd278: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bd278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bd27c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1bd27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1bd280: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bd280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd284: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1bd284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd288: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd288u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd28c: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1BD28Cu;
    SET_GPR_U32(ctx, 31, 0x1BD294u);
    ctx->pc = 0x1BD290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD28Cu;
    // 0x1bd290: 0xc4500000  lwc1        $f16, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1BD28Cu, 0x1BD294u)) {
        return;
    }
    ctx->pc = 0x1BD294u;
label_1bd294:
    // 0x1bd294: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd298: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd29c: 0x24a5934c  addiu       $a1, $a1, -0x6CB4
    ctx->pc = 0x1bd29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939468));
    // 0x1bd2a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd2a4: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd2a4u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd2a8: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x1bd2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd2ac: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1bd2acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1bd2b0: 0x70731800  madd        $v1, $v1, $s3
    ctx->pc = 0x1bd2b0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd2b4: 0x24a5934c  addiu       $a1, $a1, -0x6CB4
    ctx->pc = 0x1bd2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939468));
    // 0x1bd2b8: 0xc62d00e8  lwc1        $f13, 0xE8($s1)
    ctx->pc = 0x1bd2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd2bc: 0xa00013  mtlo        $a1
    ctx->pc = 0x1bd2bcu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x1bd2c0: 0xc62e00ec  lwc1        $f14, 0xEC($s1)
    ctx->pc = 0x1bd2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd2c4: 0x70531000  madd        $v0, $v0, $s3
    ctx->pc = 0x1bd2c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bd2c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bd2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bd2cc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1bd2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd2d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd2d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd2d4: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1bd2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd2d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bd2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2dc: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1BD2DCu;
    SET_GPR_U32(ctx, 31, 0x1BD2E4u);
    ctx->pc = 0x1BD2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2DCu;
    // 0x1bd2e0: 0xc4500000  lwc1        $f16, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1BD2DCu, 0x1BD2E4u)) {
        return;
    }
    ctx->pc = 0x1BD2E4u;
label_1bd2e4:
    // 0x1bd2e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bd2e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bd2e8: 0xae2200dc  sw          $v0, 0xDC($s1)
    ctx->pc = 0x1bd2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
label_1bd2ec:
    // 0x1bd2ec: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1bd2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd2f0: 0x27de002c  addiu       $fp, $fp, 0x2C
    ctx->pc = 0x1bd2f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 44));
    // 0x1bd2f4: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1bd2f8: 0x26f7002c  addiu       $s7, $s7, 0x2C
    ctx->pc = 0x1bd2f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 44));
    // 0x1bd2fc: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x1bd2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd300: 0x24c6002c  addiu       $a2, $a2, 0x2C
    ctx->pc = 0x1bd300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
    // 0x1bd304: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1bd304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bd308: 0x24e7002c  addiu       $a3, $a3, 0x2C
    ctx->pc = 0x1bd308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
    // 0x1bd30c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1bd30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd310: 0x2508002c  addiu       $t0, $t0, 0x2C
    ctx->pc = 0x1bd310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 44));
    // 0x1bd314: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1bd314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1bd318: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x1bd318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x1bd31c: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x1bd31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x1bd320: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1bd320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1bd324: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1bd324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1bd328: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x1bd328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x1bd32c: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x1bd32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1bd330: 0x26d6002c  addiu       $s6, $s6, 0x2C
    ctx->pc = 0x1bd330u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 44));
    // 0x1bd334: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1bd334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1bd338: 0x26b5002c  addiu       $s5, $s5, 0x2C
    ctx->pc = 0x1bd338u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
    // 0x1bd33c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1bd33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1bd340: 0x4a1ff45  bgez        $a1, . + 4 + (-0xBB << 2)
    ctx->pc = 0x1BD340u;
    {
        const bool branch_taken_0x1bd340 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1BD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD340u;
        // 0x1bd344: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd340) {
            ctx->pc = 0x1BD058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd058;
        }
    }
    ctx->pc = 0x1BD348u;
    // 0x1bd348: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x1bd348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1bd34c: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1BD34Cu;
    {
        const bool branch_taken_0x1bd34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd34c) {
            ctx->pc = 0x1BD350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD34Cu;
            // 0x1bd350: 0xc62000e4  lwc1        $f0, 0xE4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD434u;
            goto label_1bd434;
        }
    }
    ctx->pc = 0x1BD354u;
    // 0x1bd354: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bd354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bd358: 0x24639330  addiu       $v1, $v1, -0x6CD0
    ctx->pc = 0x1bd358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939440));
    // 0x1bd35c: 0x2231025  or          $v0, $s1, $v1
    ctx->pc = 0x1bd35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x1bd360: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1bd360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1bd364: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BD364u;
    {
        const bool branch_taken_0x1bd364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD364u;
        // 0x1bd368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd364) {
            ctx->pc = 0x1BD3C4u;
            goto label_1bd3c4;
        }
    }
    ctx->pc = 0x1BD36Cu;
    // 0x1bd36c: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x1bd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_1bd370:
    // 0x1bd370: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1bd370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1bd374: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1bd374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1bd378: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1bd378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1bd37c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1bd37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1bd380: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1bd380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1bd384: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1bd384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1bd388: 0x6865001f  ldl         $a1, 0x1F($v1)
    ctx->pc = 0x1bd388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1bd38c: 0x6c650018  ldr         $a1, 0x18($v1)
    ctx->pc = 0x1bd38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1bd390: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1bd390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd394: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1bd394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd398: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1bd398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd39c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1bd39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd3a0: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1bd3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd3a4: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1bd3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd3a8: 0xb085001f  sdl         $a1, 0x1F($a0)
    ctx->pc = 0x1bd3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd3ac: 0xb4850018  sdr         $a1, 0x18($a0)
    ctx->pc = 0x1bd3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd3b0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1bd3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1bd3b4: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1BD3B4u;
    {
        const bool branch_taken_0x1bd3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3B4u;
        // 0x1bd3b8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3b4) {
            ctx->pc = 0x1BD370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd370;
        }
    }
    ctx->pc = 0x1BD3BCu;
    // 0x1bd3bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BD3BCu;
    {
        const bool branch_taken_0x1bd3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd3bc) {
            ctx->pc = 0x1BD3F4u;
            goto label_1bd3f4;
        }
    }
    ctx->pc = 0x1BD3C4u;
label_1bd3c4:
    // 0x1bd3c4: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x1bd3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_1bd3c8:
    // 0x1bd3c8: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1bd3c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd3cc: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1bd3ccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd3d0: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1bd3d0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd3d4: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x1bd3d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1bd3d8: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1bd3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1bd3dc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1bd3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1bd3e0: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1bd3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1bd3e4: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1bd3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x1bd3e8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1bd3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1bd3ec: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BD3ECu;
    {
        const bool branch_taken_0x1bd3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3ECu;
        // 0x1bd3f0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3ec) {
            ctx->pc = 0x1BD3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd3c8;
        }
    }
    ctx->pc = 0x1BD3F4u;
label_1bd3f4:
    // 0x1bd3f4: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1bd3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1bd3f8: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1bd3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1bd3fc: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1bd3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1bd400: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1bd400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1bd404: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1bd404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1bd408: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1bd408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1bd40c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1bd40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1bd410: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1bd410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd414: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1bd414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd418: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1bd418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd41c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1bd41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd420: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1bd420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd424: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1bd424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd428: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1bd428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1bd42c: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x1bd42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd430: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x1bd430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_1bd434:
    // 0x1bd434: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1bd434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1bd438: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1bd438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bd43c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1bd43cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bd440: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1bd440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bd444: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x1bd444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
    // 0x1bd448: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1bd448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bd44c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1bd44cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bd450: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1bd450u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bd454: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1bd454u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd458: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1bd458u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bd45c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1bd45cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd460: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bd460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd464: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1bd464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bd468: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD468u;
        // 0x1bd46c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD470u;
}
