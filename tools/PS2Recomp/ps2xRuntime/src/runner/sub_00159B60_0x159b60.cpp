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

// Function: sub_00159B60
// Address: 0x159b60 - 0x15a3a0
void sub_00159B60_0x159b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159B60_0x159b60");
#endif

    switch (ctx->pc) {
        case 0x159c90u: goto label_159c90;
        case 0x159ca8u: goto label_159ca8;
        case 0x159cc8u: goto label_159cc8;
        case 0x159d40u: goto label_159d40;
        case 0x159dccu: goto label_159dcc;
        case 0x159de0u: goto label_159de0;
        case 0x159df0u: goto label_159df0;
        case 0x159dfcu: goto label_159dfc;
        case 0x159e08u: goto label_159e08;
        case 0x159e1cu: goto label_159e1c;
        case 0x159e2cu: goto label_159e2c;
        case 0x159e38u: goto label_159e38;
        case 0x159e58u: goto label_159e58;
        case 0x159eccu: goto label_159ecc;
        case 0x159fd8u: goto label_159fd8;
        case 0x159ff0u: goto label_159ff0;
        case 0x15a010u: goto label_15a010;
        case 0x15a04cu: goto label_15a04c;
        case 0x15a054u: goto label_15a054;
        case 0x15a060u: goto label_15a060;
        case 0x15a0b0u: goto label_15a0b0;
        case 0x15a1c0u: goto label_15a1c0;
        case 0x15a1e0u: goto label_15a1e0;
        case 0x15a1f8u: goto label_15a1f8;
        case 0x15a354u: goto label_15a354;
        default: break;
    }

    ctx->pc = 0x159b60u;

    // 0x159b60: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x159b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x159b64: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x159b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x159b68: 0xe7ba00d0  swc1        $f26, 0xD0($sp)
    ctx->pc = 0x159b68u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x159b6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x159b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b70: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x159b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x159b74: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x159b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x159b78: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x159b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x159b7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x159b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x159b80: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x159b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x159b84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x159b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x159b88: 0xe7bc00e0  swc1        $f28, 0xE0($sp)
    ctx->pc = 0x159b88u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x159b8c: 0xe7bb00d8  swc1        $f27, 0xD8($sp)
    ctx->pc = 0x159b8cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x159b90: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x159b90u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x159b94: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x159b94u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x159b98: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x159b98u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x159b9c: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x159b9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x159ba0: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x159ba0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x159ba4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x159ba4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x159ba8: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x159ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x159bac: 0x144001e9  bnez        $v0, . + 4 + (0x1E9 << 2)
    ctx->pc = 0x159BACu;
    {
        const bool branch_taken_0x159bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BACu;
        // 0x159bb0: 0x46006686  mov.s       $f26, $f12 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bac) {
            ctx->pc = 0x15A354u;
            goto label_15a354;
        }
    }
    ctx->pc = 0x159BB4u;
    // 0x159bb4: 0xc6260380  lwc1        $f6, 0x380($s1)
    ctx->pc = 0x159bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x159bb8: 0x26330220  addiu       $s3, $s1, 0x220
    ctx->pc = 0x159bb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x159bbc: 0xc6230384  lwc1        $f3, 0x384($s1)
    ctx->pc = 0x159bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159bc0: 0x26340230  addiu       $s4, $s1, 0x230
    ctx->pc = 0x159bc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x159bc4: 0xc6240388  lwc1        $f4, 0x388($s1)
    ctx->pc = 0x159bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159bc8: 0x4606d182  mul.s       $f6, $f26, $f6
    ctx->pc = 0x159bc8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[26], ctx->f[6]);
    // 0x159bcc: 0x4603d0c2  mul.s       $f3, $f26, $f3
    ctx->pc = 0x159bccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[26], ctx->f[3]);
    // 0x159bd0: 0xc62002a4  lwc1        $f0, 0x2A4($s1)
    ctx->pc = 0x159bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159bd4: 0x4604d102  mul.s       $f4, $f26, $f4
    ctx->pc = 0x159bd4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[26], ctx->f[4]);
    // 0x159bd8: 0xc62102d0  lwc1        $f1, 0x2D0($s1)
    ctx->pc = 0x159bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159bdc: 0xc62502d4  lwc1        $f5, 0x2D4($s1)
    ctx->pc = 0x159bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x159be0: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x159be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x159be4: 0xc62202d8  lwc1        $f2, 0x2D8($s1)
    ctx->pc = 0x159be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159be8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x159be8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x159bec: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x159becu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x159bf0: 0xc626038c  lwc1        $f6, 0x38C($s1)
    ctx->pc = 0x159bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x159bf4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x159bf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x159bf8: 0x8e22039c  lw          $v0, 0x39C($s1)
    ctx->pc = 0x159bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 924)));
    // 0x159bfc: 0xe62002a4  swc1        $f0, 0x2A4($s1)
    ctx->pc = 0x159bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 676), bits); }
    // 0x159c00: 0x4606d6c2  mul.s       $f27, $f26, $f6
    ctx->pc = 0x159c00u;
    ctx->f[27] = FPU_MUL_S(ctx->f[26], ctx->f[6]);
    // 0x159c04: 0xe62102d0  swc1        $f1, 0x2D0($s1)
    ctx->pc = 0x159c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x159c08: 0x26350240  addiu       $s5, $s1, 0x240
    ctx->pc = 0x159c08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x159c0c: 0xe62502d4  swc1        $f5, 0x2D4($s1)
    ctx->pc = 0x159c0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x159c10: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x159C10u;
    {
        const bool branch_taken_0x159c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C10u;
        // 0x159c14: 0xe62202d8  swc1        $f2, 0x2D8($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c10) {
            ctx->pc = 0x159CDCu;
            goto label_159cdc;
        }
    }
    ctx->pc = 0x159C18u;
    // 0x159c18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x159c1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x159c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159c20: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x159c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x159c24: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x159c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x159c28: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x159c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x159c2c: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x159c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x159c30: 0xe6200220  swc1        $f0, 0x220($s1)
    ctx->pc = 0x159c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x159c34: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x159c34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x159c38: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x159c38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x159c3c: 0xae200224  sw          $zero, 0x224($s1)
    ctx->pc = 0x159c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
    // 0x159c40: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x159c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x159c44: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x159c44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x159c48: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x159c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x159c4c: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x159c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
    // 0x159c50: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x159c50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
    // 0x159c54: 0xae200250  sw          $zero, 0x250($s1)
    ctx->pc = 0x159c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
    // 0x159c58: 0x8e22022c  lw          $v0, 0x22C($s1)
    ctx->pc = 0x159c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x159c5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x159c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x159c60: 0xae22022c  sw          $v0, 0x22C($s1)
    ctx->pc = 0x159c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
    // 0x159c64: 0x6a2201d7  ldl         $v0, 0x1D7($s1)
    ctx->pc = 0x159c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x159c68: 0x6e2201d0  ldr         $v0, 0x1D0($s1)
    ctx->pc = 0x159c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x159c6c: 0x8e2301d8  lw          $v1, 0x1D8($s1)
    ctx->pc = 0x159c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x159c70: 0xb2220257  sdl         $v0, 0x257($s1)
    ctx->pc = 0x159c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159c74: 0xb6220250  sdr         $v0, 0x250($s1)
    ctx->pc = 0x159c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159c78: 0xae230258  sw          $v1, 0x258($s1)
    ctx->pc = 0x159c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
    // 0x159c7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x159c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c80: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x159c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x159c84: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x159C84u;
    {
        const bool branch_taken_0x159c84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x159C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C84u;
        // 0x159c88: 0x8e30035c  lw          $s0, 0x35C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c84) {
            ctx->pc = 0x159CDCu;
            goto label_159cdc;
        }
    }
    ctx->pc = 0x159C8Cu;
    // 0x159c8c: 0x0  nop
    ctx->pc = 0x159c8cu;
    // NOP
label_159c90:
    // 0x159c90: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x159c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x159c94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159C94u;
    {
        const bool branch_taken_0x159c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C94u;
        // 0x159c98: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c94) {
            ctx->pc = 0x159CB0u;
            goto label_159cb0;
        }
    }
    ctx->pc = 0x159C9Cu;
    // 0x159c9c: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x159c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x159ca0: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x159CA0u;
    SET_GPR_U32(ctx, 31, 0x159CA8u);
    ctx->pc = 0x159CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159CA0u;
    // 0x159ca4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x159CA0u, 0x159CA8u)) {
        return;
    }
    ctx->pc = 0x159CA8u;
label_159ca8:
    // 0x159ca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x159CA8u;
    {
        const bool branch_taken_0x159ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CA8u;
        // 0x159cac: 0x8e220280  lw          $v0, 0x280($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ca8) {
            ctx->pc = 0x159CCCu;
            goto label_159ccc;
        }
    }
    ctx->pc = 0x159CB0u;
label_159cb0:
    // 0x159cb0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x159cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x159cb4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x159cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x159cb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cbc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x159cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x159cc0: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x159CC0u;
    SET_GPR_U32(ctx, 31, 0x159CC8u);
    ctx->pc = 0x159CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159CC0u;
    // 0x159cc4: 0x262601a0  addiu       $a2, $s1, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x159CC0u, 0x159CC8u)) {
        return;
    }
    ctx->pc = 0x159CC8u;
label_159cc8:
    // 0x159cc8: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x159cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_159ccc:
    // 0x159ccc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x159cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x159cd0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x159cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159cd4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x159CD4u;
    {
        const bool branch_taken_0x159cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CD4u;
        // 0x159cd8: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cd4) {
            ctx->pc = 0x159C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159c90;
        }
    }
    ctx->pc = 0x159CDCu;
label_159cdc:
    // 0x159cdc: 0xc62102a8  lwc1        $f1, 0x2A8($s1)
    ctx->pc = 0x159cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159ce0: 0xc62002c0  lwc1        $f0, 0x2C0($s1)
    ctx->pc = 0x159ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159ce4: 0x6a2201d7  ldl         $v0, 0x1D7($s1)
    ctx->pc = 0x159ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x159ce8: 0x6e2201d0  ldr         $v0, 0x1D0($s1)
    ctx->pc = 0x159ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x159cec: 0x8e2301d8  lw          $v1, 0x1D8($s1)
    ctx->pc = 0x159cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x159cf0: 0xb2220257  sdl         $v0, 0x257($s1)
    ctx->pc = 0x159cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159cf4: 0xb6220250  sdr         $v0, 0x250($s1)
    ctx->pc = 0x159cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159cf8: 0xae230258  sw          $v1, 0x258($s1)
    ctx->pc = 0x159cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
    // 0x159cfc: 0x46000f02  mul.s       $f28, $f1, $f0
    ctx->pc = 0x159cfcu;
    ctx->f[28] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159d00: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x159d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x159d04: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x159d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159d08: 0xc6200250  lwc1        $f0, 0x250($s1)
    ctx->pc = 0x159d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159d0c: 0xc6220254  lwc1        $f2, 0x254($s1)
    ctx->pc = 0x159d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159d10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x159d10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x159d14: 0xc6230258  lwc1        $f3, 0x258($s1)
    ctx->pc = 0x159d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159d18: 0xe6210230  swc1        $f1, 0x230($s1)
    ctx->pc = 0x159d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 560), bits); }
    // 0x159d1c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x159d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159d20: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x159d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x159d24: 0xe6200234  swc1        $f0, 0x234($s1)
    ctx->pc = 0x159d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
    // 0x159d28: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x159d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159d2c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x159d2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x159d30: 0xe6210238  swc1        $f1, 0x238($s1)
    ctx->pc = 0x159d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x159d34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x159d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d38: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x159D38u;
    SET_GPR_U32(ctx, 31, 0x159D40u);
    ctx->pc = 0x159D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D38u;
    // 0x159d3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x159D38u, 0x159D40u)) {
        return;
    }
    ctx->pc = 0x159D40u;
label_159d40:
    // 0x159d40: 0xc6280234  lwc1        $f8, 0x234($s1)
    ctx->pc = 0x159d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x159d44: 0xc6240248  lwc1        $f4, 0x248($s1)
    ctx->pc = 0x159d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159d48: 0xc6270238  lwc1        $f7, 0x238($s1)
    ctx->pc = 0x159d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x159d4c: 0xc6210244  lwc1        $f1, 0x244($s1)
    ctx->pc = 0x159d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159d50: 0x460440c2  mul.s       $f3, $f8, $f4
    ctx->pc = 0x159d50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x159d54: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x159d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159d58: 0xc6220230  lwc1        $f2, 0x230($s1)
    ctx->pc = 0x159d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159d5c: 0x46013942  mul.s       $f5, $f7, $f1
    ctx->pc = 0x159d5cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x159d60: 0x46004182  mul.s       $f6, $f8, $f0
    ctx->pc = 0x159d60u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x159d64: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x159d64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x159d68: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x159d68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x159d6c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x159d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x159d70: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x159d70u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x159d74: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x159d74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x159d78: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x159d78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x159d7c: 0xe6230220  swc1        $f3, 0x220($s1)
    ctx->pc = 0x159d7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x159d80: 0xe6210228  swc1        $f1, 0x228($s1)
    ctx->pc = 0x159d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    // 0x159d84: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x159d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x159d88: 0x46070142  mul.s       $f5, $f0, $f7
    ctx->pc = 0x159d88u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x159d8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x159d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x159d90: 0x46081902  mul.s       $f4, $f3, $f8
    ctx->pc = 0x159d90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x159d94: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x159d94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x159d98: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x159d98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x159d9c: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x159d9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x159da0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x159da0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x159da4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x159da4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x159da8: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x159da8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x159dac: 0xe6240248  swc1        $f4, 0x248($s1)
    ctx->pc = 0x159dacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
    // 0x159db0: 0xe6220244  swc1        $f2, 0x244($s1)
    ctx->pc = 0x159db0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    // 0x159db4: 0xe6250240  swc1        $f5, 0x240($s1)
    ctx->pc = 0x159db4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
    // 0x159db8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x159db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159dbc: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x159dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x159dc0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x159dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x159dc4: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x159DC4u;
    SET_GPR_U32(ctx, 31, 0x159DCCu);
    ctx->pc = 0x159DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DC4u;
    // 0x159dc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x159DC4u, 0x159DCCu)) {
        return;
    }
    ctx->pc = 0x159DCCu;
label_159dcc:
    // 0x159dcc: 0x263002dc  addiu       $s0, $s1, 0x2DC
    ctx->pc = 0x159dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 732));
    // 0x159dd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x159dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159dd4: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x159dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x159dd8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x159DD8u;
    SET_GPR_U32(ctx, 31, 0x159DE0u);
    ctx->pc = 0x159DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DD8u;
    // 0x159ddc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x159DD8u, 0x159DE0u)) {
        return;
    }
    ctx->pc = 0x159DE0u;
label_159de0:
    // 0x159de0: 0xc63702d0  lwc1        $f23, 0x2D0($s1)
    ctx->pc = 0x159de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x159de4: 0xc63602d4  lwc1        $f22, 0x2D4($s1)
    ctx->pc = 0x159de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x159de8: 0xc63802d8  lwc1        $f24, 0x2D8($s1)
    ctx->pc = 0x159de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x159dec: 0xc635036c  lwc1        $f21, 0x36C($s1)
    ctx->pc = 0x159decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_159df0:
    // 0x159df0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x159df0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x159df4: 0xc09b164  jal         func_26C590
    ctx->pc = 0x159DF4u;
    SET_GPR_U32(ctx, 31, 0x159DFCu);
    ctx->pc = 0x159DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DF4u;
    // 0x159df8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x159DF4u, 0x159DFCu)) {
        return;
    }
    ctx->pc = 0x159DFCu;
label_159dfc:
    // 0x159dfc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x159dfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x159e00: 0xc09b164  jal         func_26C590
    ctx->pc = 0x159E00u;
    SET_GPR_U32(ctx, 31, 0x159E08u);
    ctx->pc = 0x159E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E00u;
    // 0x159e04: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x159E00u, 0x159E08u)) {
        return;
    }
    ctx->pc = 0x159E08u;
label_159e08:
    // 0x159e08: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x159e08u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x159e0c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x159e0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x159e10: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x159e10u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x159e14: 0xc09b164  jal         func_26C590
    ctx->pc = 0x159E14u;
    SET_GPR_U32(ctx, 31, 0x159E1Cu);
    ctx->pc = 0x159E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E14u;
    // 0x159e18: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x159E14u, 0x159E1Cu)) {
        return;
    }
    ctx->pc = 0x159E1Cu;
label_159e1c:
    // 0x159e1c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x159e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x159e20: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x159e20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x159e24: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x159E24u;
    SET_GPR_U32(ctx, 31, 0x159E2Cu);
    ctx->pc = 0x159E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E24u;
    // 0x159e28: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x159E24u, 0x159E2Cu)) {
        return;
    }
    ctx->pc = 0x159E2Cu;
label_159e2c:
    // 0x159e2c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x159e2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x159e30: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x159E30u;
    SET_GPR_U32(ctx, 31, 0x159E38u);
    ctx->pc = 0x159E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E30u;
    // 0x159e34: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x159E30u, 0x159E38u)) {
        return;
    }
    ctx->pc = 0x159E38u;
label_159e38:
    // 0x159e38: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x159e38u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x159e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x159e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x159e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e48: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x159e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x159e4c: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x159e4cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x159e50: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x159E50u;
    SET_GPR_U32(ctx, 31, 0x159E58u);
    ctx->pc = 0x159E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E50u;
    // 0x159e54: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x159E50u, 0x159E58u)) {
        return;
    }
    ctx->pc = 0x159E58u;
label_159e58:
    // 0x159e58: 0xc620036c  lwc1        $f0, 0x36C($s1)
    ctx->pc = 0x159e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159e5c: 0xc6230370  lwc1        $f3, 0x370($s1)
    ctx->pc = 0x159e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159e60: 0xc6220374  lwc1        $f2, 0x374($s1)
    ctx->pc = 0x159e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159e64: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x159e64u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x159e68: 0xc6210378  lwc1        $f1, 0x378($s1)
    ctx->pc = 0x159e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159e6c: 0xc620037c  lwc1        $f0, 0x37C($s1)
    ctx->pc = 0x159e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159e70: 0x46191082  mul.s       $f2, $f2, $f25
    ctx->pc = 0x159e70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[25]);
    // 0x159e74: 0x46190842  mul.s       $f1, $f1, $f25
    ctx->pc = 0x159e74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    // 0x159e78: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x159e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x159e7c: 0x461918c2  mul.s       $f3, $f3, $f25
    ctx->pc = 0x159e7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[25]);
    // 0x159e80: 0x4602bdc0  add.s       $f23, $f23, $f2
    ctx->pc = 0x159e80u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x159e84: 0x4601b580  add.s       $f22, $f22, $f1
    ctx->pc = 0x159e84u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x159e88: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x159e88u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x159e8c: 0x641ffd8  bgez        $s2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x159E8Cu;
    {
        const bool branch_taken_0x159e8c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x159E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E8Cu;
        // 0x159e90: 0x4603ad40  add.s       $f21, $f21, $f3 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e8c) {
            ctx->pc = 0x159DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159df0;
        }
    }
    ctx->pc = 0x159E94u;
    // 0x159e94: 0xc6230190  lwc1        $f3, 0x190($s1)
    ctx->pc = 0x159e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159e98: 0xc62101d0  lwc1        $f1, 0x1D0($s1)
    ctx->pc = 0x159e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159e9c: 0xc62201d4  lwc1        $f2, 0x1D4($s1)
    ctx->pc = 0x159e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159ea0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x159ea0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x159ea4: 0xc6240194  lwc1        $f4, 0x194($s1)
    ctx->pc = 0x159ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159ea8: 0xc62001d8  lwc1        $f0, 0x1D8($s1)
    ctx->pc = 0x159ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159eac: 0xc6230198  lwc1        $f3, 0x198($s1)
    ctx->pc = 0x159eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159eb0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x159eb0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x159eb4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x159eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x159eb8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x159eb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x159ebc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x159ebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x159ec0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x159ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x159ec4: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x159EC4u;
    SET_GPR_U32(ctx, 31, 0x159ECCu);
    ctx->pc = 0x159EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159EC4u;
    // 0x159ec8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x159EC4u, 0x159ECCu)) {
        return;
    }
    ctx->pc = 0x159ECCu;
label_159ecc:
    // 0x159ecc: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x159eccu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x159ed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ed4: 0x0  nop
    ctx->pc = 0x159ed4u;
    // NOP
    // 0x159ed8: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x159ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159edc: 0x0  nop
    ctx->pc = 0x159edcu;
    // NOP
    // 0x159ee0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x159EE0u;
    {
        const bool branch_taken_0x159ee0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159ee0) {
            ctx->pc = 0x159F48u;
            goto label_159f48;
        }
    }
    ctx->pc = 0x159EE8u;
    // 0x159ee8: 0xc62002c8  lwc1        $f0, 0x2C8($s1)
    ctx->pc = 0x159ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159eec: 0xc62102cc  lwc1        $f1, 0x2CC($s1)
    ctx->pc = 0x159eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159ef0: 0x46003102  mul.s       $f4, $f6, $f0
    ctx->pc = 0x159ef0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x159ef4: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x159ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159ef8: 0x0  nop
    ctx->pc = 0x159ef8u;
    // NOP
    // 0x159efc: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x159EFCu;
    {
        const bool branch_taken_0x159efc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x159efc) {
            ctx->pc = 0x159F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159EFCu;
            // 0x159f00: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x159F08u;
            goto label_159f08;
        }
    }
    ctx->pc = 0x159F04u;
    // 0x159f04: 0x0  nop
    ctx->pc = 0x159f04u;
    // NOP
label_159f08:
    // 0x159f08: 0x0  nop
    ctx->pc = 0x159f08u;
    // NOP
    // 0x159f0c: 0x0  nop
    ctx->pc = 0x159f0cu;
    // NOP
    // 0x159f10: 0x46062103  div.s       $f4, $f4, $f6
    ctx->pc = 0x159f10u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[6]);
    // 0x159f14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x159f18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x159f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f1c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x159f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159f20: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x159f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159f24: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x159f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159f28: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x159f28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x159f2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x159f2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159f30: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x159f30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x159f34: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x159f34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x159f38: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x159f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x159f3c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x159f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x159f40: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x159f40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x159f44: 0x0  nop
    ctx->pc = 0x159f44u;
    // NOP
label_159f48:
    // 0x159f48: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x159f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x159f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x159f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f50: 0x0  nop
    ctx->pc = 0x159f50u;
    // NOP
    // 0x159f54: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x159f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159f58: 0x0  nop
    ctx->pc = 0x159f58u;
    // NOP
    // 0x159f5c: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x159F5Cu;
    {
        const bool branch_taken_0x159f5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F5Cu;
        // 0x159f60: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f5c) {
            ctx->pc = 0x15A02Cu;
            goto label_15a02c;
        }
    }
    ctx->pc = 0x159F64u;
    // 0x159f64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x159f68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x159f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f6c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x159f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x159f70: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x159f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x159f74: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x159f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x159f78: 0xe6200220  swc1        $f0, 0x220($s1)
    ctx->pc = 0x159f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x159f7c: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x159f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x159f80: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x159f80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x159f84: 0xae200224  sw          $zero, 0x224($s1)
    ctx->pc = 0x159f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
    // 0x159f88: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x159f88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x159f8c: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x159f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x159f90: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x159f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x159f94: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x159f94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
    // 0x159f98: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x159f98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
    // 0x159f9c: 0xae200250  sw          $zero, 0x250($s1)
    ctx->pc = 0x159f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
    // 0x159fa0: 0x8e22022c  lw          $v0, 0x22C($s1)
    ctx->pc = 0x159fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x159fa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x159fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x159fa8: 0xae22022c  sw          $v0, 0x22C($s1)
    ctx->pc = 0x159fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
    // 0x159fac: 0x6a2201d7  ldl         $v0, 0x1D7($s1)
    ctx->pc = 0x159facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x159fb0: 0x6e2201d0  ldr         $v0, 0x1D0($s1)
    ctx->pc = 0x159fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x159fb4: 0x8e2301d8  lw          $v1, 0x1D8($s1)
    ctx->pc = 0x159fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x159fb8: 0xb2220257  sdl         $v0, 0x257($s1)
    ctx->pc = 0x159fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159fbc: 0xb6220250  sdr         $v0, 0x250($s1)
    ctx->pc = 0x159fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159fc0: 0xae230258  sw          $v1, 0x258($s1)
    ctx->pc = 0x159fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
    // 0x159fc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x159fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fc8: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x159fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x159fcc: 0x184000e1  blez        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x159FCCu;
    {
        const bool branch_taken_0x159fcc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x159FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FCCu;
        // 0x159fd0: 0x8e30035c  lw          $s0, 0x35C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fcc) {
            ctx->pc = 0x15A354u;
            goto label_15a354;
        }
    }
    ctx->pc = 0x159FD4u;
    // 0x159fd4: 0x0  nop
    ctx->pc = 0x159fd4u;
    // NOP
label_159fd8:
    // 0x159fd8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x159fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x159fdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159FDCu;
    {
        const bool branch_taken_0x159fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FDCu;
        // 0x159fe0: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fdc) {
            ctx->pc = 0x159FF8u;
            goto label_159ff8;
        }
    }
    ctx->pc = 0x159FE4u;
    // 0x159fe4: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x159fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x159fe8: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x159FE8u;
    SET_GPR_U32(ctx, 31, 0x159FF0u);
    ctx->pc = 0x159FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159FE8u;
    // 0x159fec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x159FE8u, 0x159FF0u)) {
        return;
    }
    ctx->pc = 0x159FF0u;
label_159ff0:
    // 0x159ff0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x159FF0u;
    {
        const bool branch_taken_0x159ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FF0u;
        // 0x159ff4: 0x8e220280  lw          $v0, 0x280($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ff0) {
            ctx->pc = 0x15A014u;
            goto label_15a014;
        }
    }
    ctx->pc = 0x159FF8u;
label_159ff8:
    // 0x159ff8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x159ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x159ffc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x159ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x15a000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a004: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x15a004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x15a008: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x15A008u;
    SET_GPR_U32(ctx, 31, 0x15A010u);
    ctx->pc = 0x15A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A008u;
    // 0x15a00c: 0x262601a0  addiu       $a2, $s1, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x15A008u, 0x15A010u)) {
        return;
    }
    ctx->pc = 0x15A010u;
label_15a010:
    // 0x15a010: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x15a010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_15a014:
    // 0x15a014: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15a014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15a018: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15a018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15a01c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15A01Cu;
    {
        const bool branch_taken_0x15a01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A01Cu;
        // 0x15a020: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a01c) {
            ctx->pc = 0x159FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159fd8;
        }
    }
    ctx->pc = 0x15A024u;
    // 0x15a024: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x15A024u;
    {
        const bool branch_taken_0x15a024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A024u;
        // 0x15a028: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a024) {
            ctx->pc = 0x15A358u;
            goto label_15a358;
        }
    }
    ctx->pc = 0x15A02Cu;
label_15a02c:
    // 0x15a02c: 0x4606d002  mul.s       $f0, $f26, $f6
    ctx->pc = 0x15a02cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[6]);
    // 0x15a030: 0xc6210390  lwc1        $f1, 0x390($s1)
    ctx->pc = 0x15a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a034: 0x8e24027c  lw          $a0, 0x27C($s1)
    ctx->pc = 0x15a034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
    // 0x15a038: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15a038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15a03c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A03Cu;
    {
        const bool branch_taken_0x15a03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A03Cu;
        // 0x15a040: 0x4600dec0  add.s       $f27, $f27, $f0 (Delay Slot)
        ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a03c) {
            ctx->pc = 0x15A054u;
            goto label_15a054;
        }
    }
    ctx->pc = 0x15A044u;
    // 0x15a044: 0xc0778f8  jal         func_1DE3E0
    ctx->pc = 0x15A044u;
    SET_GPR_U32(ctx, 31, 0x15A04Cu);
    ctx->pc = 0x15A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A044u;
    // 0x15a048: 0x4600db06  mov.s       $f12, $f27 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE3E0u, 0x15A044u, 0x15A04Cu)) {
        return;
    }
    ctx->pc = 0x15A04Cu;
label_15a04c:
    // 0x15a04c: 0xc077914  jal         func_1DE450
    ctx->pc = 0x15A04Cu;
    SET_GPR_U32(ctx, 31, 0x15A054u);
    ctx->pc = 0x15A050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A04Cu;
    // 0x15a050: 0x8e24027c  lw          $a0, 0x27C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE450u, 0x15A04Cu, 0x15A054u)) {
        return;
    }
    ctx->pc = 0x15A054u;
label_15a054:
    // 0x15a054: 0x8e320298  lw          $s2, 0x298($s1)
    ctx->pc = 0x15a054u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x15a058: 0x1a400055  blez        $s2, . + 4 + (0x55 << 2)
    ctx->pc = 0x15A058u;
    {
        const bool branch_taken_0x15a058 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x15A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A058u;
        // 0x15a05c: 0x8e300364  lw          $s0, 0x364($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a058) {
            ctx->pc = 0x15A1B0u;
            goto label_15a1b0;
        }
    }
    ctx->pc = 0x15A060u;
label_15a060:
    // 0x15a060: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a064: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15a064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a068: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x15a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a06c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x15a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a070: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15a070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15a074: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15a074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15a078: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a07c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a080: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x15a080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a084: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x15a084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a088: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15a088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15a08c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15a08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15a090: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15a090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a094: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a098: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x15a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a09c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x15a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a0a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15a0a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15a0a4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x15a0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15a0a8: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x15A0A8u;
    SET_GPR_U32(ctx, 31, 0x15A0B0u);
    ctx->pc = 0x15A0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A0A8u;
    // 0x15a0ac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x15A0A8u, 0x15A0B0u)) {
        return;
    }
    ctx->pc = 0x15A0B0u;
label_15a0b0:
    // 0x15a0b0: 0x461c0001  sub.s       $f0, $f0, $f28
    ctx->pc = 0x15a0b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[28]);
    // 0x15a0b4: 0xc62402b0  lwc1        $f4, 0x2B0($s1)
    ctx->pc = 0x15a0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15a0b8: 0xc62102b4  lwc1        $f1, 0x2B4($s1)
    ctx->pc = 0x15a0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a0bc: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x15a0bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15a0c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15a0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15a0c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a0c8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a0cc: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x15a0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a0d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x15a0d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15a0d4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x15a0d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x15a0d8: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x15a0d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x15a0dc: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x15a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a0e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a0e4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x15a0e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x15a0e8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x15a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a0ec: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x15a0ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x15a0f0: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x15a0f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x15a0f4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x15a0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a0f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a0fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x15a0fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15a100: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x15a100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a104: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x15a104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15a108: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x15a108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x15a10c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a110: 0x460020c7  neg.s       $f3, $f4
    ctx->pc = 0x15a110u;
    ctx->f[3] = FPU_NEG_S(ctx->f[4]);
    // 0x15a114: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15a114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a118: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x15a118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a11c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15a11cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15a120: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15a120u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a124: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x15a124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x15a128: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x15a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a12c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a130: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x15a130u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x15a134: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x15a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a138: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x15a138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15a13c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x15a13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x15a140: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a144: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15a144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15a148: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15a148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15a14c: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x15a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a150: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15a150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15a154: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x15a154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x15a158: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a15c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a160: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x15a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a164: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x15a164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15a168: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15a168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a16c: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x15a16cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x15a170: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x15a170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a174: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a178: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x15a178u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x15a17c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x15a17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a180: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x15a180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15a184: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x15a184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x15a188: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a18c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a190: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x15a190u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x15a194: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x15a194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a198: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15a198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15a19c: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x15a19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x15a1a0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x15a1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x15a1a4: 0x1e40ffae  bgtz        $s2, . + 4 + (-0x52 << 2)
    ctx->pc = 0x15A1A4u;
    {
        const bool branch_taken_0x15a1a4 = (GPR_S64(ctx, 18) > 0);
        ctx->pc = 0x15A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1A4u;
        // 0x15a1a8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1a4) {
            ctx->pc = 0x15A060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a060;
        }
    }
    ctx->pc = 0x15A1ACu;
    // 0x15a1ac: 0x0  nop
    ctx->pc = 0x15a1acu;
    // NOP
label_15a1b0:
    // 0x15a1b0: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x15a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x15a1b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15a1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a1b8: 0xc095988  jal         func_256620
    ctx->pc = 0x15A1B8u;
    SET_GPR_U32(ctx, 31, 0x15A1C0u);
    ctx->pc = 0x15A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A1B8u;
    // 0x15a1bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256620u, 0x15A1B8u, 0x15A1C0u)) {
        return;
    }
    ctx->pc = 0x15A1C0u;
label_15a1c0:
    // 0x15a1c0: 0xc62002bc  lwc1        $f0, 0x2BC($s1)
    ctx->pc = 0x15a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a1c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a1c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15a1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a1cc: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x15a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x15a1d0: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x15a1d0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15a1d4: 0x8e320278  lw          $s2, 0x278($s1)
    ctx->pc = 0x15a1d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x15a1d8: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x15A1D8u;
    {
        const bool branch_taken_0x15a1d8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1D8u;
        // 0x15a1dc: 0x8e30035c  lw          $s0, 0x35C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1d8) {
            ctx->pc = 0x15A34Cu;
            goto label_15a34c;
        }
    }
    ctx->pc = 0x15A1E0u;
label_15a1e0:
    // 0x15a1e0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x15a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x15a1e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15A1E4u;
    {
        const bool branch_taken_0x15a1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1E4u;
        // 0x15a1e8: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1e4) {
            ctx->pc = 0x15A220u;
            goto label_15a220;
        }
    }
    ctx->pc = 0x15A1ECu;
    // 0x15a1ec: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x15a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x15a1f0: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x15A1F0u;
    SET_GPR_U32(ctx, 31, 0x15A1F8u);
    ctx->pc = 0x15A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A1F0u;
    // 0x15a1f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x15A1F0u, 0x15A1F8u)) {
        return;
    }
    ctx->pc = 0x15A1F8u;
label_15a1f8:
    // 0x15a1f8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x15a1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a1fc: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x15a1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a200: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15a200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15a204: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x15a204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x15a208: 0xc6200214  lwc1        $f0, 0x214($s1)
    ctx->pc = 0x15a208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a20c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x15a20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a210: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15a210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a214: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x15a214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x15a218: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x15A218u;
    {
        const bool branch_taken_0x15a218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A218u;
        // 0x15a21c: 0xc6000020  lwc1        $f0, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a218) {
            ctx->pc = 0x15A328u;
            goto label_15a328;
        }
    }
    ctx->pc = 0x15A220u;
label_15a220:
    // 0x15a220: 0x6a02001f  ldl         $v0, 0x1F($s0)
    ctx->pc = 0x15a220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15a224: 0x6e020018  ldr         $v0, 0x18($s0)
    ctx->pc = 0x15a224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15a228: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x15a228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15a22c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x15a22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a230: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x15a230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a234: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x15a234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x15a238: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x15a238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a23c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x15a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a240: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15a240u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15a244: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x15a244u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15a248: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x15a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a24c: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x15a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a250: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x15a250u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15a254: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x15a254u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15a258: 0xc6040020  lwc1        $f4, 0x20($s0)
    ctx->pc = 0x15a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15a25c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x15a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a260: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x15a260u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x15a264: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x15a264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a268: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x15a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15a26c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x15a26cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x15a270: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15a270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a274: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x15a274u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x15a278: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x15a278u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x15a27c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x15a27cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15a280: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x15a280u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15a284: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x15a284u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15a288: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x15a288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x15a28c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a290: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15a290u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15a294: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x15a294u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15a298: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x15a298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x15a29c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15a29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a2a0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x15a2a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15a2a4: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x15a2a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15a2a8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x15a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x15a2ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a2b0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x15a2b0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x15a2b4: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x15a2b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15a2b8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x15a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a2bc: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x15a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a2c0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15a2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15a2c4: 0xc602002c  lwc1        $f2, 0x2C($s0)
    ctx->pc = 0x15a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a2c8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x15a2c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x15a2cc: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x15a2ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x15a2d0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x15a2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x15a2d4: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x15a2d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x15a2d8: 0xe602002c  swc1        $f2, 0x2C($s0)
    ctx->pc = 0x15a2d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x15a2dc: 0xc62002b8  lwc1        $f0, 0x2B8($s1)
    ctx->pc = 0x15a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a2e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15a2e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a2e4: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x15a2e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x15a2e8: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x15a2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15a2ec: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x15a2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15a2f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15a2f4: 0xb202001f  sdl         $v0, 0x1F($s0)
    ctx->pc = 0x15a2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a2f8: 0xb6020018  sdr         $v0, 0x18($s0)
    ctx->pc = 0x15a2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a2fc: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x15a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x15a300: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15a300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a304: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x15a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15a308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15a30c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x15a30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x15a310: 0xc6200214  lwc1        $f0, 0x214($s1)
    ctx->pc = 0x15a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a314: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x15a314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a318: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15a318u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a31c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x15a31cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x15a320: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a324: 0x0  nop
    ctx->pc = 0x15a324u;
    // NOP
label_15a328:
    // 0x15a328: 0xc6210218  lwc1        $f1, 0x218($s1)
    ctx->pc = 0x15a328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a32c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15a32cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15a330: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x15a330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x15a334: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x15a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x15a338: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15a338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15a33c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x15a33cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x15a340: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x15a340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15a344: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x15A344u;
    {
        const bool branch_taken_0x15a344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A344u;
        // 0x15a348: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a344) {
            ctx->pc = 0x15A1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a1e0;
        }
    }
    ctx->pc = 0x15A34Cu;
label_15a34c:
    // 0x15a34c: 0xc09599c  jal         func_256670
    ctx->pc = 0x15A34Cu;
    SET_GPR_U32(ctx, 31, 0x15A354u);
    ctx->pc = 0x15A350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A34Cu;
    // 0x15a350: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256670u, 0x15A34Cu, 0x15A354u)) {
        return;
    }
    ctx->pc = 0x15A354u;
label_15a354:
    // 0x15a354: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x15a354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15a358:
    // 0x15a358: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x15a358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15a35c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x15a35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15a360: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x15a360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a364: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15a364u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a368: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x15a368u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a36c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15a36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a370: 0xc7bc00e0  lwc1        $f28, 0xE0($sp)
    ctx->pc = 0x15a370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x15a374: 0xc7bb00d8  lwc1        $f27, 0xD8($sp)
    ctx->pc = 0x15a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x15a378: 0xc7ba00d0  lwc1        $f26, 0xD0($sp)
    ctx->pc = 0x15a378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x15a37c: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x15a37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x15a380: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x15a380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x15a384: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x15a384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x15a388: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x15a388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15a38c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x15a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15a390: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x15a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15a394: 0x3e00008  jr          $ra
    ctx->pc = 0x15A394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A394u;
        // 0x15a398: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A39Cu;
    // 0x15a39c: 0x0  nop
    ctx->pc = 0x15a39cu;
    // NOP
    ctx->pc = 0x15a3a0u;
}
