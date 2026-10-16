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

// Function: sub_002E6990
// Address: 0x2e6990 - 0x2e6f28
void sub_002E6990_0x2e6990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6990_0x2e6990");
#endif

    switch (ctx->pc) {
        case 0x2e6a2cu: goto label_2e6a2c;
        case 0x2e6a70u: goto label_2e6a70;
        case 0x2e6a94u: goto label_2e6a94;
        case 0x2e6ab8u: goto label_2e6ab8;
        case 0x2e6b00u: goto label_2e6b00;
        case 0x2e6b28u: goto label_2e6b28;
        case 0x2e6c30u: goto label_2e6c30;
        case 0x2e6c50u: goto label_2e6c50;
        case 0x2e6c88u: goto label_2e6c88;
        case 0x2e6cd8u: goto label_2e6cd8;
        case 0x2e6d70u: goto label_2e6d70;
        case 0x2e6decu: goto label_2e6dec;
        case 0x2e6e08u: goto label_2e6e08;
        case 0x2e6ee0u: goto label_2e6ee0;
        default: break;
    }

    ctx->pc = 0x2e6990u;

    // 0x2e6990: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2e6990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2e6994: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x2e6994u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2e6998: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x2e6998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x2e699c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x2e699cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2e69a0: 0x79603  sra         $s2, $a3, 24
    ctx->pc = 0x2e69a0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 24));
    // 0x2e69a4: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x2e69a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2e69a8: 0xb2001b  divu        $zero, $a1, $s2
    ctx->pc = 0x2e69a8u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2e69ac: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2e69acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2e69b0: 0x84603  sra         $t0, $t0, 24
    ctx->pc = 0x2e69b0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 24));
    // 0x2e69b4: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x2e69b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x2e69b8: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x2e69b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x2e69bc: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2e69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2e69c0: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x2e69c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e69c4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2e69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e69c8: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x2e69c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x2e69cc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2e69ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2e69d0: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x2e69d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x2e69d4: 0x34a50806  ori         $a1, $a1, 0x806
    ctx->pc = 0x2e69d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    // 0x2e69d8: 0xe7b70198  swc1        $f23, 0x198($sp)
    ctx->pc = 0x2e69d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2e69dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e69dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e69e0: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x2e69e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2e69e4: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x2e69e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x2e69e8: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x2e69e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x2e69ec: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x2e69ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x2e69f0: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x2e69f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
    // 0x2e69f4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2e69f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2e69f8: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x2e69f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2e69fc: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x2e69fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2e6a00: 0xafa80094  sw          $t0, 0x94($sp)
    ctx->pc = 0x2e6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 8));
    // 0x2e6a04: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E6A04u;
    {
        const bool branch_taken_0x2e6a04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a04) {
            ctx->pc = 0x2E6A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6A04u;
            // 0x2e6a08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6A0Cu;
            goto label_2e6a0c;
        }
    }
    ctx->pc = 0x2E6A0Cu;
label_2e6a0c:
    // 0x2e6a0c: 0xafa6009c  sw          $a2, 0x9C($sp)
    ctx->pc = 0x2e6a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
    // 0x2e6a10: 0xb812  mflo        $s7
    ctx->pc = 0x2e6a10u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x2e6a14: 0x26e2000d  addiu       $v0, $s7, 0xD
    ctx->pc = 0x2e6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 13));
    // 0x2e6a18: 0x26f5fffe  addiu       $s5, $s7, -0x2
    ctx->pc = 0x2e6a18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967294));
    // 0x2e6a1c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e6a1cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e6a20: 0x2012  mflo        $a0
    ctx->pc = 0x2e6a20u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2e6a24: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2E6A24u;
    SET_GPR_U32(ctx, 31, 0x2E6A2Cu);
    ctx->pc = 0x2E6A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A24u;
    // 0x2e6a28: 0xafa400a0  sw          $a0, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2E6A24u, 0x2E6A2Cu)) {
        return;
    }
    ctx->pc = 0x2E6A2Cu;
label_2e6a2c:
    // 0x2e6a2c: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x2e6a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x2e6a30: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x2e6a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2e6a34: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x2e6a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x2e6a38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e6a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e6a3c: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x2e6a3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e6a40: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x2e6a40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2e6a44: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2e6a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e6a48: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x2e6a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e6a4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e6a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6a50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e6a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e6a54: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x2e6a54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2e6a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6a5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e6a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e6a60: 0x46020dc2  mul.s       $f23, $f1, $f2
    ctx->pc = 0x2e6a60u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e6a64: 0x10a00051  beqz        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2E6A64u;
    {
        const bool branch_taken_0x2e6a64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A64u;
        // 0x2e6a68: 0x46020582  mul.s       $f22, $f0, $f2 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a64) {
            ctx->pc = 0x2E6BACu;
            goto label_2e6bac;
        }
    }
    ctx->pc = 0x2E6A6Cu;
    // 0x2e6a6c: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x2e6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_2e6a70:
    // 0x2e6a70: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e6a74: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x2e6a74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e6a78: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x2e6a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2e6a7c: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x2e6a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2e6a80: 0x2a2a00a  movz        $s4, $s5, $v0
    ctx->pc = 0x2e6a80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21));
    // 0x2e6a84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e6a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6a8c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2E6A94u);
    ctx->pc = 0x2E6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A8Cu;
    // 0x2e6a90: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E6A8Cu, 0x2E6A94u)) {
        return;
    }
    ctx->pc = 0x2E6A94u;
label_2e6a94:
    // 0x2e6a94: 0x2b4a823  subu        $s5, $s5, $s4
    ctx->pc = 0x2e6a94u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2e6a98: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x2e6a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e6a9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e6a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6aa0: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2E6AA0u;
    {
        const bool branch_taken_0x2e6aa0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AA0u;
        // 0x2e6aa4: 0xd1b021  addu        $s6, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6aa0) {
            ctx->pc = 0x2E6AE0u;
            goto label_2e6ae0;
        }
    }
    ctx->pc = 0x2E6AA8u;
    // 0x2e6aa8: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x2e6aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x2e6aac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e6aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6ab0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e6ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6ab4: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x2e6ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2e6ab8:
    // 0x2e6ab8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x2e6ab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e6abc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e6abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e6ac0: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x2e6ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2e6ac4: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x2e6ac4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2e6ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6acc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e6accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e6ad0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e6ad4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2e6ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2e6ad8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E6AD8u;
    {
        const bool branch_taken_0x2e6ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AD8u;
        // 0x2e6adc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ad8) {
            ctx->pc = 0x2E6AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6ab8;
        }
    }
    ctx->pc = 0x2E6AE0u;
label_2e6ae0:
    // 0x2e6ae0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2e6ae4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2e6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2e6ae8: 0x24475400  addiu       $a3, $v0, 0x5400
    ctx->pc = 0x2e6ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 21504));
    // 0x2e6aec: 0xc4663cc0  lwc1        $f6, 0x3CC0($v1)
    ctx->pc = 0x2e6aecu;
    { uint32_t bits = FAST_READ32(0x6B3CC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2e6af0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e6af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6af4: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x2e6af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2e6af8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6afc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2e6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2e6b00:
    // 0x2e6b00: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2e6b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e6b04: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2e6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2e6b08: 0x4600bd46  mov.s       $f21, $f23
    ctx->pc = 0x2e6b08u;
    ctx->f[21] = FPU_MOV_S(ctx->f[23]);
    // 0x2e6b0c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2e6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2e6b10: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2e6b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e6b14: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x2e6b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e6b18: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x2e6b18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x2e6b1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e6b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6b20: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2e6b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e6b24: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2e6b24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e6b28:
    // 0x2e6b28: 0x46152082  mul.s       $f2, $f4, $f21
    ctx->pc = 0x2e6b28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x2e6b2c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2e6b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6b30: 0x46142802  mul.s       $f0, $f5, $f20
    ctx->pc = 0x2e6b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2e6b34: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2e6b34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x2e6b38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e6b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e6b3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e6b3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e6b40: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e6b40u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e6b44: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2e6b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6b48: 0x0  nop
    ctx->pc = 0x2e6b48u;
    // NOP
    // 0x2e6b4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6B4Cu;
    {
        const bool branch_taken_0x2e6b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E6B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B4Cu;
        // 0x2e6b50: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b4c) {
            ctx->pc = 0x2E6B58u;
            goto label_2e6b58;
        }
    }
    ctx->pc = 0x2E6B54u;
    // 0x2e6b54: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2e6b54u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_2e6b58:
    // 0x2e6b58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e6b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e6b5c: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x2e6b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x2e6b60: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E6B60u;
    {
        const bool branch_taken_0x2e6b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B60u;
        // 0x2e6b64: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b60) {
            ctx->pc = 0x2E6B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6b28;
        }
    }
    ctx->pc = 0x2E6B68u;
    // 0x2e6b68: 0x46061836  c.le.s      $f3, $f6
    ctx->pc = 0x2e6b68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6b6c: 0x0  nop
    ctx->pc = 0x2e6b6cu;
    // NOP
    // 0x2e6b70: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6B70u;
    {
        const bool branch_taken_0x2e6b70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6b70) {
            ctx->pc = 0x2E6B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6B70u;
            // 0x2e6b74: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6B84u;
            goto label_2e6b84;
        }
    }
    ctx->pc = 0x2E6B78u;
    // 0x2e6b78: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x2e6b78u;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
    // 0x2e6b7c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e6b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6b80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e6b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e6b84:
    // 0x2e6b84: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x2e6b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e6b88: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2E6B88u;
    {
        const bool branch_taken_0x2e6b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B88u;
        // 0x2e6b8c: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b88) {
            ctx->pc = 0x2E6B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6b00;
        }
    }
    ctx->pc = 0x2E6B90u;
    // 0x2e6b90: 0xa2c60000  sb          $a2, 0x0($s6)
    ctx->pc = 0x2e6b90u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2e6b94: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x2e6b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6b98: 0x4600adc6  mov.s       $f23, $f21
    ctx->pc = 0x2e6b98u;
    ctx->f[23] = FPU_MOV_S(ctx->f[21]);
    // 0x2e6b9c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2e6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e6ba0: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x2e6ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e6ba4: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2E6BA4u;
    {
        const bool branch_taken_0x2e6ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BA4u;
        // 0x2e6ba8: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ba4) {
            ctx->pc = 0x2E6A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a70;
        }
    }
    ctx->pc = 0x2E6BACu;
label_2e6bac:
    // 0x2e6bac: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x2e6bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x2e6bb0: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2e6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2e6bb4: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x2e6bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e6bb8: 0x26f5fffe  addiu       $s5, $s7, -0x2
    ctx->pc = 0x2e6bb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967294));
    // 0x2e6bbc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2e6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e6bc0: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x2e6bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x2e6bc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e6bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e6bc8: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x2e6bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e6bcc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2e6bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2e6bd0: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x2e6bd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e6bd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e6bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6bd8: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x2e6bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2e6bdc: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x2e6bdcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x2e6be0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x2e6be0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e6be4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e6be4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6be8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e6be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e6bec: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x2e6becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x2e6bf0: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x2e6bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2e6bf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6bf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e6bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e6bfc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2e6bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e6c00: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2e6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e6c04: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x2e6c04u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e6c08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e6c0c: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x2e6c0cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e6c10: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2E6C10u;
    {
        const bool branch_taken_0x2e6c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C10u;
        // 0x2e6c14: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c10) {
            ctx->pc = 0x2E6ED8u;
            goto label_2e6ed8;
        }
    }
    ctx->pc = 0x2E6C18u;
    // 0x2e6c18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e6c1c: 0x27a50081  addiu       $a1, $sp, 0x81
    ctx->pc = 0x2e6c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 129));
    // 0x2e6c20: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x2e6c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x2e6c24: 0x240b7fff  addiu       $t3, $zero, 0x7FFF
    ctx->pc = 0x2e6c24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2e6c28: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x2e6c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x2e6c2c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e6c30:
    // 0x2e6c30: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x2e6c30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e6c34: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x2e6c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2e6c38: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x2e6c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2e6c3c: 0x2a2a00a  movz        $s4, $s5, $v0
    ctx->pc = 0x2e6c3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21));
    // 0x2e6c40: 0x7fab00d0  sq          $t3, 0xD0($sp)
    ctx->pc = 0x2e6c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 11));
    // 0x2e6c44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e6c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c48: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E6C48u;
    SET_GPR_U32(ctx, 31, 0x2E6C50u);
    ctx->pc = 0x2E6C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6C48u;
    // 0x2e6c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E6C48u, 0x2E6C50u)) {
        return;
    }
    ctx->pc = 0x2E6C50u;
label_2e6c50:
    // 0x2e6c50: 0x263e0001  addiu       $fp, $s1, 0x1
    ctx->pc = 0x2e6c50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e6c54: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x2e6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e6c58: 0x2b4a823  subu        $s5, $s5, $s4
    ctx->pc = 0x2e6c58u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2e6c5c: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x2e6c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e6c60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e6c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c64: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2e6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e6c68: 0x7bab00d0  lq          $t3, 0xD0($sp)
    ctx->pc = 0x2e6c68u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e6c6c: 0xd1b021  addu        $s6, $a2, $s1
    ctx->pc = 0x2e6c6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2e6c70: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2E6C70u;
    {
        const bool branch_taken_0x2e6c70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C70u;
        // 0x2e6c74: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c70) {
            ctx->pc = 0x2E6CB0u;
            goto label_2e6cb0;
        }
    }
    ctx->pc = 0x2E6C78u;
    // 0x2e6c78: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x2e6c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x2e6c7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e6c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6c80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e6c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c84: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x2e6c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2e6c88:
    // 0x2e6c88: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x2e6c88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e6c8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e6c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e6c90: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x2e6c90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2e6c94: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x2e6c94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2e6c98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6c9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e6c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e6ca0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e6ca4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2e6ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2e6ca8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E6CA8u;
    {
        const bool branch_taken_0x2e6ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CA8u;
        // 0x2e6cac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ca8) {
            ctx->pc = 0x2E6C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6c88;
        }
    }
    ctx->pc = 0x2E6CB0u;
label_2e6cb0:
    // 0x2e6cb0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2e6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2e6cb4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2e6cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2e6cb8: 0x24675400  addiu       $a3, $v1, 0x5400
    ctx->pc = 0x2e6cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 21504));
    // 0x2e6cbc: 0xc78382bc  lwc1        $f3, -0x7D44($gp)
    ctx->pc = 0x2e6cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6cc0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2e6cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2e6cc4: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x2e6cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2e6cc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e6cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6ccc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e6cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6cd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e6cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6cd4: 0x0  nop
    ctx->pc = 0x2e6cd4u;
    // NOP
label_2e6cd8:
    // 0x2e6cd8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2e6cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e6cdc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2e6cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6ce0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e6ce4: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2e6ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2e6ce8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2e6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2e6cec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2e6cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6cf0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2e6cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6cf4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2e6cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2e6cf8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2e6cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2e6cfc: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2e6cfcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x2e6d00: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x2e6d00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x2e6d04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2e6d04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6d08: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x2e6d08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2e6d0c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2e6d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e6d10: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x2e6d10u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x2e6d14: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x2e6d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6d18: 0x0  nop
    ctx->pc = 0x2e6d18u;
    // NOP
    // 0x2e6d1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6D1Cu;
    {
        const bool branch_taken_0x2e6d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E6D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D1Cu;
        // 0x2e6d20: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d1c) {
            ctx->pc = 0x2E6D28u;
            goto label_2e6d28;
        }
    }
    ctx->pc = 0x2E6D24u;
    // 0x2e6d24: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x2e6d24u;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
label_2e6d28:
    // 0x2e6d28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e6d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e6d2c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e6d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2e6d30: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x2e6d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x2e6d34: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E6D34u;
    {
        const bool branch_taken_0x2e6d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D34u;
        // 0x2e6d38: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d34) {
            ctx->pc = 0x2E6CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6cd8;
        }
    }
    ctx->pc = 0x2E6D3Cu;
    // 0x2e6d3c: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e6d3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e6d40: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2e6d40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2e6d44: 0x24104000  addiu       $s0, $zero, 0x4000
    ctx->pc = 0x2e6d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2e6d48: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2e6d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e6d4c: 0x165102a  slt         $v0, $t3, $a1
    ctx->pc = 0x2e6d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e6d50: 0x162280b  movn        $a1, $t3, $v0
    ctx->pc = 0x2e6d50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11));
    // 0x2e6d54: 0x165182a  slt         $v1, $t3, $a1
    ctx->pc = 0x2e6d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e6d58: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x2e6d58u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
    // 0x2e6d5c: 0x24a20800  addiu       $v0, $a1, 0x800
    ctx->pc = 0x2e6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x2e6d60: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2e6d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2e6d64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6D64u;
    {
        const bool branch_taken_0x2e6d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D64u;
        // 0x2e6d68: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d64) {
            ctx->pc = 0x2E6D8Cu;
            goto label_2e6d8c;
        }
    }
    ctx->pc = 0x2E6D6Cu;
    // 0x2e6d6c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2e6d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2e6d70:
    // 0x2e6d70: 0x6400008  bltz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6D70u;
    {
        const bool branch_taken_0x2e6d70 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x2E6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D70u;
        // 0x2e6d74: 0x108042  srl         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d70) {
            ctx->pc = 0x2E6D94u;
            goto label_2e6d94;
        }
    }
    ctx->pc = 0x2E6D78u;
    // 0x2e6d78: 0x1010c2  srl         $v0, $s0, 3
    ctx->pc = 0x2e6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
    // 0x2e6d7c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e6d80: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2e6d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2e6d84: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E6D84u;
    {
        const bool branch_taken_0x2e6d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6d84) {
            ctx->pc = 0x2E6D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6D84u;
            // 0x2e6d88: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6d70;
        }
    }
    ctx->pc = 0x2E6D8Cu;
label_2e6d8c:
    // 0x2e6d8c: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6D8Cu;
    {
        const bool branch_taken_0x2e6d8c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2E6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D8Cu;
        // 0x2e6d90: 0x2a42000d  slti        $v0, $s2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d8c) {
            ctx->pc = 0x2E6D9Cu;
            goto label_2e6d9c;
        }
    }
    ctx->pc = 0x2E6D94u;
label_2e6d94:
    // 0x2e6d94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6D94u;
    {
        const bool branch_taken_0x2e6d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D94u;
        // 0x2e6d98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d94) {
            ctx->pc = 0x2E6DA4u;
            goto label_2e6da4;
        }
    }
    ctx->pc = 0x2E6D9Cu;
label_2e6d9c:
    // 0x2e6d9c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2e6d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e6da0: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x2e6da0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
label_2e6da4:
    // 0x2e6da4: 0xffa00080  sd          $zero, 0x80($sp)
    ctx->pc = 0x2e6da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 0));
    // 0x2e6da8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2e6da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e6dac: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x2e6dacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e6db0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e6db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6db4: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x2e6db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2e6db8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e6dbc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2e6dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x2e6dc0: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x2e6dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e6dc4: 0x12800038  beqz        $s4, . + 4 + (0x38 << 2)
    ctx->pc = 0x2E6DC4u;
    {
        const bool branch_taken_0x2e6dc4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DC4u;
        // 0x2e6dc8: 0x929023  subu        $s2, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6dc4) {
            ctx->pc = 0x2E6EA8u;
            goto label_2e6ea8;
        }
    }
    ctx->pc = 0x2E6DCCu;
    // 0x2e6dcc: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2e6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2e6dd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6dd4: 0x24b75400  addiu       $s7, $a1, 0x5400
    ctx->pc = 0x2e6dd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 21504));
    // 0x2e6dd8: 0x7fab00d0  sq          $t3, 0xD0($sp)
    ctx->pc = 0x2e6dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 11));
    // 0x2e6ddc: 0x26ea0004  addiu       $t2, $s7, 0x4
    ctx->pc = 0x2e6ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x2e6de0: 0x2442014  dsllv       $a0, $a0, $s2
    ctx->pc = 0x2e6de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x2e6de4: 0xc07dad0  jal         func_1F6B40
    ctx->pc = 0x2E6DE4u;
    SET_GPR_U32(ctx, 31, 0x2E6DECu);
    ctx->pc = 0x2E6DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DE4u;
    // 0x2e6de8: 0x7faa00c0  sq          $t2, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6B40u, 0x2E6DE4u, 0x2E6DECu)) {
        return;
    }
    ctx->pc = 0x2E6DECu;
label_2e6dec:
    // 0x2e6dec: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x2e6decu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2e6df0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2e6df0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2e6df4: 0x7bab00d0  lq          $t3, 0xD0($sp)
    ctx->pc = 0x2e6df4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e6df8: 0x2409f000  addiu       $t1, $zero, -0x1000
    ctx->pc = 0x2e6df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x2e6dfc: 0x7baa00c0  lq          $t2, 0xC0($sp)
    ctx->pc = 0x2e6dfcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e6e00: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x2e6e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2e6e04: 0x0  nop
    ctx->pc = 0x2e6e04u;
    // NOP
label_2e6e08:
    // 0x2e6e08: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x2e6e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2e6e0c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2e6e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e6e10: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2e6e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6e14: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x2e6e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2e6e18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e6e1c: 0x32040001  andi        $a0, $s0, 0x1
    ctx->pc = 0x2e6e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2e6e20: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x2e6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2e6e24: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2e6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2e6e28: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2e6e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6e2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e6e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6e30: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x2e6e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x2e6e34: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2e6e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2e6e38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e6e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e6e3c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2e6e3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2e6e40: 0x46031042  mul.s       $f1, $f2, $f3
    ctx->pc = 0x2e6e40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2e6e44: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e6e44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e6e48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e6e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e6e4c: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2e6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2e6e50: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2e6e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2e6e54: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x2e6e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6e58: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6E58u;
    {
        const bool branch_taken_0x2e6e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E58u;
        // 0x2e6e5c: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e58) {
            ctx->pc = 0x2E6E78u;
            goto label_2e6e78;
        }
    }
    ctx->pc = 0x2E6E60u;
    // 0x2e6e60: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2e6e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e6e64: 0x61b02  srl         $v1, $a2, 12
    ctx->pc = 0x2e6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x2e6e68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e6e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e6e6c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2e6e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e6e70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6E70u;
    {
        const bool branch_taken_0x2e6e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E70u;
        // 0x2e6e74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e70) {
            ctx->pc = 0x2E6E84u;
            goto label_2e6e84;
        }
    }
    ctx->pc = 0x2E6E78u;
label_2e6e78:
    // 0x2e6e78: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x2e6e78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x2e6e7c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2e6e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2e6e80: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2e6e80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2e6e84:
    // 0x2e6e84: 0x2461007  srav        $v0, $a2, $s2
    ctx->pc = 0x2e6e84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
    // 0x2e6e88: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x2e6e88u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x2e6e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6e90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e6e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e6e94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e6e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e6e98: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2e6e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2e6e9c: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x2e6e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2e6ea0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2E6EA0u;
    {
        const bool branch_taken_0x2e6ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EA0u;
        // 0x2e6ea4: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ea0) {
            ctx->pc = 0x2E6E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6e08;
        }
    }
    ctx->pc = 0x2E6EA8u;
label_2e6ea8:
    // 0x2e6ea8: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x2e6ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2e6eac: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x2e6eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6eb0: 0x6ba30087  ldl         $v1, 0x87($sp)
    ctx->pc = 0x2e6eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e6eb4: 0x6fa30080  ldr         $v1, 0x80($sp)
    ctx->pc = 0x2e6eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e6eb8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2e6eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e6ebc: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2e6ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e6ec0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2e6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2e6ec4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2e6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e6ec8: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x2e6ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x2e6ecc: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x2e6eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e6ed0: 0x1440ff57  bnez        $v0, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x2E6ED0u;
    {
        const bool branch_taken_0x2e6ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6ED0u;
        // 0x2e6ed4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ed0) {
            ctx->pc = 0x2E6C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6c30;
        }
    }
    ctx->pc = 0x2E6ED8u;
label_2e6ed8:
    // 0x2e6ed8: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E6ED8u;
    SET_GPR_U32(ctx, 31, 0x2E6EE0u);
    ctx->pc = 0x2E6EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6ED8u;
    // 0x2e6edc: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E6ED8u, 0x2E6EE0u)) {
        return;
    }
    ctx->pc = 0x2E6EE0u;
label_2e6ee0:
    // 0x2e6ee0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e6ee4: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x2e6ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2e6ee8: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x2e6ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2e6eec: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x2e6eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2e6ef0: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x2e6ef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2e6ef4: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x2e6ef4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2e6ef8: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x2e6ef8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2e6efc: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x2e6efcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2e6f00: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x2e6f00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2e6f04: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x2e6f04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e6f08: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2e6f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e6f0c: 0xc7b70198  lwc1        $f23, 0x198($sp)
    ctx->pc = 0x2e6f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e6f10: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x2e6f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e6f14: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x2e6f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e6f18: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x2e6f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F1Cu;
        // 0x2e6f20: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6F24u;
    // 0x2e6f24: 0x0  nop
    ctx->pc = 0x2e6f24u;
    // NOP
    ctx->pc = 0x2e6f28u;
}
