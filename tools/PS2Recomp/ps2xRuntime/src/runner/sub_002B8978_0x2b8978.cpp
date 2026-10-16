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

// Function: sub_002B8978
// Address: 0x2b8978 - 0x2b91d8
void sub_002B8978_0x2b8978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8978_0x2b8978");
#endif

    switch (ctx->pc) {
        case 0x2b8a30u: goto label_2b8a30;
        case 0x2b8a78u: goto label_2b8a78;
        case 0x2b8b28u: goto label_2b8b28;
        case 0x2b8db8u: goto label_2b8db8;
        default: break;
    }

    ctx->pc = 0x2b8978u;

    // 0x2b8978: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2b8978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2b897c: 0xffa80020  sd          $t0, 0x20($sp)
    ctx->pc = 0x2b897cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 8));
    // 0x2b8980: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x2b8980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x2b8984: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x2b8984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x2b8988: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2b8988u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b898c: 0xe7b701c8  swc1        $f23, 0x1C8($sp)
    ctx->pc = 0x2b898cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2b8990: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b8990u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8994: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x2b8994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x2b8998: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x2b8998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x2b899c: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x2b899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x2b89a0: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x2b89a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x2b89a4: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x2b89a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x2b89a8: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x2b89a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x2b89ac: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x2b89acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x2b89b0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2b89b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2b89b4: 0xe7ba01e0  swc1        $f26, 0x1E0($sp)
    ctx->pc = 0x2b89b4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2b89b8: 0xe7b901d8  swc1        $f25, 0x1D8($sp)
    ctx->pc = 0x2b89b8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2b89bc: 0xe7b801d0  swc1        $f24, 0x1D0($sp)
    ctx->pc = 0x2b89bcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2b89c0: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x2b89c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2b89c4: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2b89c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2b89c8: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2b89c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2b89cc: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x2b89ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2b89d0: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x2b89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x2b89d4: 0xffa70010  sd          $a3, 0x10($sp)
    ctx->pc = 0x2b89d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    // 0x2b89d8: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x2b89d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x2b89dc: 0xffaa0040  sd          $t2, 0x40($sp)
    ctx->pc = 0x2b89dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 10));
    // 0x2b89e0: 0xffab0050  sd          $t3, 0x50($sp)
    ctx->pc = 0x2b89e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 11));
    // 0x2b89e4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2b89e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b89e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b89e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b89ec: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x2B89ECu;
    {
        const bool branch_taken_0x2b89ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89ECu;
        // 0x2b89f0: 0x460065c6  mov.s       $f23, $f12 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b89ec) {
            ctx->pc = 0x2B8D84u;
            goto label_2b8d84;
        }
    }
    ctx->pc = 0x2B89F4u;
    // 0x2b89f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b89f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b89f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89fc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2b89fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8a00: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2b8a00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a04: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2b8a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8a08: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x2b8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x2b8a0c: 0x8fb60030  lw          $s6, 0x30($sp)
    ctx->pc = 0x2b8a0cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8a10: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x2b8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x2b8a14: 0xafa6010c  sw          $a2, 0x10C($sp)
    ctx->pc = 0x2b8a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
    // 0x2b8a18: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b8a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2b8a1c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2b8a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2b8a20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b8a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b8a24: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x2b8a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2b8a28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b8a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8a2c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2b8a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2b8a30:
    // 0x2b8a30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b8a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8a34: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b8a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8a38: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x2b8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2b8a3c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2b8a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8a40: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b8a44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b8a48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b8a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8a4c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2b8a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b8a50: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B8A50u;
    {
        const bool branch_taken_0x2b8a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A50u;
        // 0x2b8a54: 0x240a0030  addiu       $t2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a50) {
            ctx->pc = 0x2B8A90u;
            goto label_2b8a90;
        }
    }
    ctx->pc = 0x2B8A58u;
    // 0x2b8a58: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2b8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b8a5c: 0x22a8018  mult        $s0, $s1, $t2
    ctx->pc = 0x2b8a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b8a60: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2b8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2b8a64: 0x113180  sll         $a2, $s1, 6
    ctx->pc = 0x2b8a64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2b8a68: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2b8a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2b8a6c: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x2b8a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x2b8a70: 0xc0ae1b4  jal         func_2B86D0
    ctx->pc = 0x2B8A70u;
    SET_GPR_U32(ctx, 31, 0x2B8A78u);
    ctx->pc = 0x2B8A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A70u;
    // 0x2b8a74: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B86D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B86D0u, 0x2B8A70u, 0x2B8A78u)) {
        return;
    }
    ctx->pc = 0x2B8A78u;
label_2b8a78:
    // 0x2b8a78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a7c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2b8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b8a80: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2b8a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b8a84: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2b8a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8a88: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B8A88u;
    {
        const bool branch_taken_0x2b8a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A88u;
        // 0x2b8a8c: 0x2821021  addu        $v0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a88) {
            ctx->pc = 0x2B8ADCu;
            goto label_2b8adc;
        }
    }
    ctx->pc = 0x2B8A90u;
label_2b8a90:
    // 0x2b8a90: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8a94: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2b8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b8a98: 0x2232018  mult        $a0, $s1, $v1
    ctx->pc = 0x2b8a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b8a9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b8a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8aa0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2b8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2b8aa4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2b8aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b8aa8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b8aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b8aac: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x2b8aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8ab0: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x2b8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b8ab4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b8ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b8ab8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b8ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b8abc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2b8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2b8ac0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2b8ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2b8ac4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2b8ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2b8ac8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2b8ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2b8acc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2b8accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2b8ad0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b8ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b8ad4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2b8ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2b8ad8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2b8ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b8adc:
    // 0x2b8adc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2b8adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2b8ae0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8ae4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2b8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b8ae8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b8aec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b8aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8af0: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x2b8af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2b8af4: 0x1080009d  beqz        $a0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2B8AF4u;
    {
        const bool branch_taken_0x2b8af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AF4u;
        // 0x2b8af8: 0x8fa2010c  lw          $v0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8af4) {
            ctx->pc = 0x2B8D6Cu;
            goto label_2b8d6c;
        }
    }
    ctx->pc = 0x2B8AFCu;
    // 0x2b8afc: 0x119940  sll         $s3, $s1, 5
    ctx->pc = 0x2b8afcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2b8b00: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2b8b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2b8b04: 0x113180  sll         $a2, $s1, 6
    ctx->pc = 0x2b8b04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2b8b08: 0x400013  mtlo        $v0
    ctx->pc = 0x2b8b08u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2b8b0c: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x2b8b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x2b8b10: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8b14: 0x739021  addu        $s2, $v1, $s3
    ctx->pc = 0x2b8b14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2b8b18: 0x72222800  madd        $a1, $s1, $v0
    ctx->pc = 0x2b8b18u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b8b1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2b8b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b8b20: 0xc0ae1b4  jal         func_2B86D0
    ctx->pc = 0x2B8B20u;
    SET_GPR_U32(ctx, 31, 0x2B8B28u);
    ctx->pc = 0x2B8B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B20u;
    // 0x2b8b24: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B86D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B86D0u, 0x2B8B20u, 0x2B8B28u)) {
        return;
    }
    ctx->pc = 0x2B8B28u;
label_2b8b28:
    // 0x2b8b28: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2b8b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8b2c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2b8b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8b30: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x2b8b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2b8b34: 0xc7af0090  lwc1        $f15, 0x90($sp)
    ctx->pc = 0x2b8b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2b8b38: 0x460e0842  mul.s       $f1, $f1, $f14
    ctx->pc = 0x2b8b38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x2b8b3c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2b8b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8b40: 0x460f1082  mul.s       $f2, $f2, $f15
    ctx->pc = 0x2b8b40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x2b8b44: 0xc7b000a0  lwc1        $f16, 0xA0($sp)
    ctx->pc = 0x2b8b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2b8b48: 0xc7b10084  lwc1        $f17, 0x84($sp)
    ctx->pc = 0x2b8b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2b8b4c: 0x46100002  mul.s       $f0, $f0, $f16
    ctx->pc = 0x2b8b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x2b8b50: 0xc7b20094  lwc1        $f18, 0x94($sp)
    ctx->pc = 0x2b8b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2b8b54: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b8b54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b8b58: 0xc7b300a4  lwc1        $f19, 0xA4($sp)
    ctx->pc = 0x2b8b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2b8b5c: 0xc7b40088  lwc1        $f20, 0x88($sp)
    ctx->pc = 0x2b8b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b8b60: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2b8b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b8b64: 0x46000a80  add.s       $f10, $f1, $f0
    ctx->pc = 0x2b8b64u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b8b68: 0xc7b600a8  lwc1        $f22, 0xA8($sp)
    ctx->pc = 0x2b8b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b8b6c: 0xe7aa0070  swc1        $f10, 0x70($sp)
    ctx->pc = 0x2b8b6cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b8b70: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2b8b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8b74: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2b8b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8b78: 0x46110842  mul.s       $f1, $f1, $f17
    ctx->pc = 0x2b8b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x2b8b7c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2b8b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8b80: 0x46121082  mul.s       $f2, $f2, $f18
    ctx->pc = 0x2b8b80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[18]);
    // 0x2b8b84: 0x46130002  mul.s       $f0, $f0, $f19
    ctx->pc = 0x2b8b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[19]);
    // 0x2b8b88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b8b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b8b8c: 0x46000a00  add.s       $f8, $f1, $f0
    ctx->pc = 0x2b8b8cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b8b90: 0xe7a80074  swc1        $f8, 0x74($sp)
    ctx->pc = 0x2b8b90u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2b8b94: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2b8b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8b98: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2b8b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8b9c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2b8b9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2b8ba0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2b8ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8ba4: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x2b8ba4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2b8ba8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2b8ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2b8bac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b8bacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b8bb0: 0x46000940  add.s       $f5, $f1, $f0
    ctx->pc = 0x2b8bb0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b8bb4: 0xe7a50078  swc1        $f5, 0x78($sp)
    ctx->pc = 0x2b8bb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2b8bb8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2b8bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8bbc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b8bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8bc0: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x2b8bc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2b8bc4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2b8bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b8bc8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2b8bc8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8bcc: 0xe7ac0060  swc1        $f12, 0x60($sp)
    ctx->pc = 0x2b8bccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b8bd0: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2b8bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8bd4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2b8bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8bd8: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2b8bd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2b8bdc: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x2b8bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2b8be0: 0x46000ac1  sub.s       $f11, $f1, $f0
    ctx->pc = 0x2b8be0u;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8be4: 0xe7ab0064  swc1        $f11, 0x64($sp)
    ctx->pc = 0x2b8be4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2b8be8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2b8be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8bec: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2b8becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8bf0: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x2b8bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2b8bf4: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2b8bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2b8bf8: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x2b8bf8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b8bfc: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x2b8bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2b8c00: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2b8c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x2b8c04: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2b8c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b8c08: 0x460b5842  mul.s       $f1, $f11, $f11
    ctx->pc = 0x2b8c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x2b8c0c: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x2b8c0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x2b8c10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8c14: 0x460200c0  add.s       $f3, $f0, $f2
    ctx->pc = 0x2b8c14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b8c18: 0x46036834  c.lt.s      $f13, $f3
    ctx->pc = 0x2b8c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8c1c: 0x0  nop
    ctx->pc = 0x2b8c1cu;
    // NOP
    // 0x2b8c20: 0x45000052  bc1f        . + 4 + (0x52 << 2)
    ctx->pc = 0x2B8C20u;
    {
        const bool branch_taken_0x2b8c20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C20u;
        // 0x2b8c24: 0xe7a90068  swc1        $f9, 0x68($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c20) {
            ctx->pc = 0x2B8D6Cu;
            goto label_2b8d6c;
        }
    }
    ctx->pc = 0x2B8C28u;
    // 0x2b8c28: 0x460300c4  c1          0x300C4
    ctx->pc = 0x2b8c28u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[3]);
    // 0x2b8c2c: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x2b8c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b8c30: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x2b8c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b8c34: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x2b8c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2b8c38: 0xc6070008  lwc1        $f7, 0x8($s0)
    ctx->pc = 0x2b8c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b8c3c: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x2b8c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2b8c40: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x2b8c40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2b8c44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8c48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b8c48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b8c4c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b8c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b8c50: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2b8c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2b8c54: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2b8c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2b8c58: 0x461a00c2  mul.s       $f3, $f0, $f26
    ctx->pc = 0x2b8c58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x2b8c5c: 0x46036834  c.lt.s      $f13, $f3
    ctx->pc = 0x2b8c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8c60: 0x0  nop
    ctx->pc = 0x2b8c60u;
    // NOP
    // 0x2b8c64: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x2B8C64u;
    {
        const bool branch_taken_0x2b8c64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C64u;
        // 0x2b8c68: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c64) {
            ctx->pc = 0x2B8D38u;
            goto label_2b8d38;
        }
    }
    ctx->pc = 0x2B8C6Cu;
    // 0x2b8c6c: 0x46045002  mul.s       $f0, $f10, $f4
    ctx->pc = 0x2b8c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x2b8c70: 0x46064042  mul.s       $f1, $f8, $f6
    ctx->pc = 0x2b8c70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x2b8c74: 0x46072882  mul.s       $f2, $f5, $f7
    ctx->pc = 0x2b8c74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x2b8c78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8c7c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b8c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b8c80: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x2b8c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x2b8c84: 0x46030140  add.s       $f5, $f0, $f3
    ctx->pc = 0x2b8c84u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b8c88: 0x46002943  div.s       $f5, $f5, $f0
    ctx->pc = 0x2b8c88u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[0]);
    // 0x2b8c8c: 0x46050144  c1          0x50144
    ctx->pc = 0x2b8c8cu;
    ctx->f[5] = FPU_SQRT_S(ctx->f[5]);
    // 0x2b8c90: 0x460f3002  mul.s       $f0, $f6, $f15
    ctx->pc = 0x2b8c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[15]);
    // 0x2b8c94: 0x460e2102  mul.s       $f4, $f4, $f14
    ctx->pc = 0x2b8c94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
    // 0x2b8c98: 0x46103842  mul.s       $f1, $f7, $f16
    ctx->pc = 0x2b8c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[16]);
    // 0x2b8c9c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b8c9cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b8ca0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2b8ca0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2b8ca4: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x2b8ca4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b8ca8: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x2b8ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b8cac: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2b8cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8cb0: 0x461118c2  mul.s       $f3, $f3, $f17
    ctx->pc = 0x2b8cb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[17]);
    // 0x2b8cb4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2b8cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8cb8: 0x46120842  mul.s       $f1, $f1, $f18
    ctx->pc = 0x2b8cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
    // 0x2b8cbc: 0x46130002  mul.s       $f0, $f0, $f19
    ctx->pc = 0x2b8cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[19]);
    // 0x2b8cc0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2b8cc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2b8cc4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b8cc4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b8cc8: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x2b8cc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2b8ccc: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2b8cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8cd0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b8cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8cd4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2b8cd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2b8cd8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2b8cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8cdc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2b8cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2b8ce0: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x2b8ce0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x2b8ce4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b8ce4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b8ce8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b8ce8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b8cec: 0x4605c001  sub.s       $f0, $f24, $f5
    ctx->pc = 0x2b8cecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[5]);
    // 0x2b8cf0: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x2b8cf0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[23]);
    // 0x2b8cf4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8cf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8cf8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b8cf8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b8cfc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b8cfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b8d00: 0x46014840  add.s       $f1, $f9, $f1
    ctx->pc = 0x2b8d00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x2b8d04: 0x46046100  add.s       $f4, $f12, $f4
    ctx->pc = 0x2b8d04u;
    ctx->f[4] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x2b8d08: 0x460358c0  add.s       $f3, $f11, $f3
    ctx->pc = 0x2b8d08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[11], ctx->f[3]);
    // 0x2b8d0c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x2b8d0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2b8d10: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x2b8d10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b8d14: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x2b8d14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2b8d18: 0x4605c143  div.s       $f5, $f24, $f5
    ctx->pc = 0x2b8d18u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[24], ctx->f[5]);
    // 0x2b8d1c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2b8d1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2b8d20: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2b8d20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2b8d24: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2b8d24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2b8d28: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2b8d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b8d2c: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x2b8d2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b8d30: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x2b8d30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2b8d34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b8d38:
    // 0x2b8d38: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2b8d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8d3c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2b8d40: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2b8d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8d44: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x2b8d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8d48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b8d48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b8d4c: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x2b8d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b8d50: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2b8d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2b8d54: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2b8d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8d58: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b8d58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b8d5c: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x2b8d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2b8d60: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2b8d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8d64: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b8d64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b8d68: 0xe4430018  swc1        $f3, 0x18($v0)
    ctx->pc = 0x2b8d68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2b8d6c:
    // 0x2b8d6c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2b8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b8d70: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x2b8d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2b8d74: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2b8d74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2b8d78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b8d7c: 0x16e2ff2c  bne         $s7, $v0, . + 4 + (-0xD4 << 2)
    ctx->pc = 0x2B8D7Cu;
    {
        const bool branch_taken_0x2b8d7c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D7Cu;
        // 0x2b8d80: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d7c) {
            ctx->pc = 0x2B8A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8a30;
        }
    }
    ctx->pc = 0x2B8D84u;
label_2b8d84:
    // 0x2b8d84: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2b8d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b8d88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b8d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8d8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8d90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b8d94: 0x46170303  div.s       $f12, $f0, $f23
    ctx->pc = 0x2b8d94u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[23]);
    // 0x2b8d98: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x2b8d98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x2b8d9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b8da0: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2B8DA0u;
    {
        const bool branch_taken_0x2b8da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DA0u;
        // 0x2b8da4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8da0) {
            ctx->pc = 0x2B9178u;
            goto label_2b9178;
        }
    }
    ctx->pc = 0x2B8DA8u;
    // 0x2b8da8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b8da8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8dac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b8dacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b8db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8db4: 0x0  nop
    ctx->pc = 0x2b8db4u;
    // NOP
label_2b8db8:
    // 0x2b8db8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2b8db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b8dbc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2b8dbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2b8dc0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2b8dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b8dc4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2b8dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2b8dc8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2b8dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8dcc: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x2b8dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x2b8dd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8dd4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b8dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b8dd8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2b8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2b8ddc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2b8ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8de0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b8de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b8de4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b8de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2b8de8: 0x112940  sll         $a1, $s1, 5
    ctx->pc = 0x2b8de8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2b8dec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b8decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8df0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b8df0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b8df4: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x2b8df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b8df8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2b8df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8dfc: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2b8dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b8e00: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b8e00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b8e04: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x2b8e04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b8e08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2b8e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8e0c: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2b8e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b8e10: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b8e10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b8e14: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x2b8e14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b8e18: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b8e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8e1c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2b8e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8e20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8e24: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b8e24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b8e28: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x2b8e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b8e2c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b8e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8e30: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2b8e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8e34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8e38: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b8e38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b8e3c: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x2b8e3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b8e40: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b8e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8e44: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2b8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8e48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8e4c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b8e4cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b8e50: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x2b8e50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b8e54: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2b8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8e58: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2b8e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8e5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8e60: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b8e60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b8e64: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x2b8e64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b8e68: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2b8e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8e6c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2b8e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8e70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8e74: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b8e74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b8e78: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x2b8e78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b8e7c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2b8e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8e80: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x2b8e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8e84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8e84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8e88: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b8e88u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b8e8c: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x2b8e8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b8e90: 0x6ba400f7  ldl         $a0, 0xF7($sp)
    ctx->pc = 0x2b8e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b8e94: 0x6fa400f0  ldr         $a0, 0xF0($sp)
    ctx->pc = 0x2b8e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b8e98: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x2b8e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2b8e9c: 0xb3a400c7  sdl         $a0, 0xC7($sp)
    ctx->pc = 0x2b8e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b8ea0: 0xb7a400c0  sdr         $a0, 0xC0($sp)
    ctx->pc = 0x2b8ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b8ea4: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x2b8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
    // 0x2b8ea8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2b8ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8eac: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b8eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8eb0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b8eb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b8eb4: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x2b8eb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b8eb8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2b8eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8ebc: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2b8ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b8ec0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b8ec0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b8ec4: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x2b8ec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b8ec8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2b8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8ecc: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2b8eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b8ed0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b8ed0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b8ed4: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x2b8ed4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b8ed8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2b8ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8edc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2b8edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8ee0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8ee4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b8ee4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b8ee8: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x2b8ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b8eec: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2b8eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8ef0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b8ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b8ef4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b8ef4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b8ef8: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x2b8ef8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b8efc: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2b8efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8f00: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2b8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8f04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8f08: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b8f08u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b8f0c: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x2b8f0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b8f10: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2b8f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8f14: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2b8f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8f18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8f1c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b8f1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b8f20: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x2b8f20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b8f24: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2b8f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8f28: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2b8f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8f2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8f30: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b8f30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b8f34: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x2b8f34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b8f38: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2b8f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8f3c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x2b8f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8f40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8f44: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b8f44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b8f48: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x2b8f48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b8f4c: 0x6ba400f7  ldl         $a0, 0xF7($sp)
    ctx->pc = 0x2b8f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b8f50: 0x6fa400f0  ldr         $a0, 0xF0($sp)
    ctx->pc = 0x2b8f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b8f54: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x2b8f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2b8f58: 0xb3a400d7  sdl         $a0, 0xD7($sp)
    ctx->pc = 0x2b8f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b8f5c: 0xb7a400d0  sdr         $a0, 0xD0($sp)
    ctx->pc = 0x2b8f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b8f60: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x2b8f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x2b8f64: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2b8f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8f68: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b8f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8f6c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b8f6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b8f70: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x2b8f70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b8f74: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2b8f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8f78: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2b8f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b8f7c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b8f7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b8f80: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x2b8f80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b8f84: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2b8f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8f88: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2b8f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b8f8c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b8f8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b8f90: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x2b8f90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b8f94: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2b8f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8f98: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2b8f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8f9c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x2b8f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b8fa0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8fa4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2b8fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b8fa8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b8fa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b8fac: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2b8facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2b8fb0: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x2b8fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x2b8fb4: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x2b8fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b8fb8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2b8fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8fbc: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2b8fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8fc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8fc4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b8fc4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b8fc8: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x2b8fc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b8fcc: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2b8fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8fd0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2b8fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8fd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8fd8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b8fd8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b8fdc: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x2b8fdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b8fe0: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x2b8fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8fe4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2b8fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8fe8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b8fec: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b8fecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b8ff0: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x2b8ff0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b8ff4: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x2b8ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8ff8: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2b8ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8ffc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b8ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b9000: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b9000u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b9004: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x2b9004u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b9008: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x2b9008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b900c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b900cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b9010: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b9010u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b9014: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x2b9014u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b9018: 0x6baa00f7  ldl         $t2, 0xF7($sp)
    ctx->pc = 0x2b9018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2b901c: 0x6faa00f0  ldr         $t2, 0xF0($sp)
    ctx->pc = 0x2b901cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2b9020: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2b9020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2b9024: 0xb3aa00e7  sdl         $t2, 0xE7($sp)
    ctx->pc = 0x2b9024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b9028: 0xb7aa00e0  sdr         $t2, 0xE0($sp)
    ctx->pc = 0x2b9028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b902c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2b902cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2b9030: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2b9030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b9034: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b9034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9038: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b9038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b903c: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x2b903cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9040: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b9040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b9044: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b9044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9048: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b9048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b904c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2b904cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2b9050: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b9050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b9054: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b9054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b9058: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2b9058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b905c: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x2b905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9060: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2b9060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9064: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2b9064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9068: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b9068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b906c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b906cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b9070: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b9070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b9074: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b9074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b9078: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x2b9078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b907c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2b907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9080: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b9080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9084: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2b9084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2b9088: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b9088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b908c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b908cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b9090: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b9090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b9094: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2b9094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9098: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2b9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b909c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2b909cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2b90a0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2b90a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b90a4: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2b90a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b90a8: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x2b90a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b90ac: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x2b90acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2b90b0: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x2b90b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b90b4: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x2b90b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b90b8: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x2b90b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2b90bc: 0xe4840018  swc1        $f4, 0x18($a0)
    ctx->pc = 0x2b90bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b90c0: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2b90c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b90c4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2b90c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b90c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b90c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b90cc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b90ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b90d0: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2b90d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b90d4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2b90d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b90d8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2b90d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b90dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b90dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b90e0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b90e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b90e4: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x2b90e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b90e8: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b90e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b90ec: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2b90ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b90f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b90f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b90f4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b90f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b90f8: 0xe4840018  swc1        $f4, 0x18($a0)
    ctx->pc = 0x2b90f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b90fc: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2b90fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9100: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2b9100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9104: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b9104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b9108: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b9108u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b910c: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2b910cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b9110: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2b9110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9114: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2b9114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9118: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b9118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b911c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b911cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b9120: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x2b9120u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b9124: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b9124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9128: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2b9128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b912c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b912cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b9130: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b9130u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b9134: 0xe4840018  swc1        $f4, 0x18($a0)
    ctx->pc = 0x2b9134u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b9138: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x2b9138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b913c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2b913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9140: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b9140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b9144: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b9144u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b9148: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2b9148u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b914c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2b914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9150: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2b9150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9154: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b9154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b9158: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b9158u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b915c: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x2b915cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b9160: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2b9160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9164: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2b9164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9168: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b9168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b916c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b916cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b9170: 0x16e6ff11  bne         $s7, $a2, . + 4 + (-0xEF << 2)
    ctx->pc = 0x2B9170u;
    {
        const bool branch_taken_0x2b9170 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 6));
        ctx->pc = 0x2B9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9170u;
        // 0x2b9174: 0xe4840018  swc1        $f4, 0x18($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9170) {
            ctx->pc = 0x2B8DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8db8;
        }
    }
    ctx->pc = 0x2B9178u;
label_2b9178:
    // 0x2b9178: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2b9178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b917c: 0x8faa0100  lw          $t2, 0x100($sp)
    ctx->pc = 0x2b917cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b9180: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2b9180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b9184: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x2b9184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2b9188: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x2b9188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2b918c: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x2b918cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2b9190: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x2b9190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2b9194: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x2b9194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2b9198: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x2b9198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2b919c: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x2b919cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2b91a0: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x2b91a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2b91a4: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x2b91a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2b91a8: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2b91a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b91ac: 0xc7ba01e0  lwc1        $f26, 0x1E0($sp)
    ctx->pc = 0x2b91acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2b91b0: 0xc7b901d8  lwc1        $f25, 0x1D8($sp)
    ctx->pc = 0x2b91b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b91b4: 0xc7b801d0  lwc1        $f24, 0x1D0($sp)
    ctx->pc = 0x2b91b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b91b8: 0xc7b701c8  lwc1        $f23, 0x1C8($sp)
    ctx->pc = 0x2b91b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b91bc: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x2b91bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b91c0: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2b91c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b91c4: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2b91c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b91c8: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x2b91c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x2b91cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B91CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91CCu;
        // 0x2b91d0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B91CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B91D4u;
    // 0x2b91d4: 0x0  nop
    ctx->pc = 0x2b91d4u;
    // NOP
    ctx->pc = 0x2b91d8u;
}
