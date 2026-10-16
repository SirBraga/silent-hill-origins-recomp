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

// Function: sub_00112C70
// Address: 0x112c70 - 0x112e58
void sub_00112C70_0x112c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112C70_0x112c70");
#endif

    switch (ctx->pc) {
        case 0x112ca4u: goto label_112ca4;
        case 0x112d08u: goto label_112d08;
        case 0x112d70u: goto label_112d70;
        case 0x112d7cu: goto label_112d7c;
        default: break;
    }

    ctx->pc = 0x112c70u;

    // 0x112c70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x112c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x112c74: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x112c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x112c78: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x112c78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x112c7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x112c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c80: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x112c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x112c84: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x112c84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x112c88: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x112c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x112c8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x112c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x112c90: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x112c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x112c94: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x112c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x112c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112c9c: 0xc075d54  jal         func_1D7550
    ctx->pc = 0x112C9Cu;
    SET_GPR_U32(ctx, 31, 0x112CA4u);
    ctx->pc = 0x112CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C9Cu;
    // 0x112ca0: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7550u, 0x112C9Cu, 0x112CA4u)) {
        return;
    }
    ctx->pc = 0x112CA4u;
label_112ca4:
    // 0x112ca4: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x112CA4u;
    {
        const bool branch_taken_0x112ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CA4u;
        // 0x112ca8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ca4) {
            ctx->pc = 0x112E30u;
            goto label_112e30;
        }
    }
    ctx->pc = 0x112CACu;
    // 0x112cac: 0xc64000bc  lwc1        $f0, 0xBC($s2)
    ctx->pc = 0x112cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112cb0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x112cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112cb4: 0x0  nop
    ctx->pc = 0x112cb4u;
    // NOP
    // 0x112cb8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x112cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112cbc: 0x0  nop
    ctx->pc = 0x112cbcu;
    // NOP
    // 0x112cc0: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x112CC0u;
    {
        const bool branch_taken_0x112cc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x112CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CC0u;
        // 0x112cc4: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cc0) {
            ctx->pc = 0x112E34u;
            goto label_112e34;
        }
    }
    ctx->pc = 0x112CC8u;
    // 0x112cc8: 0xc64100c8  lwc1        $f1, 0xC8($s2)
    ctx->pc = 0x112cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x112ccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x112cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112cd0: 0x0  nop
    ctx->pc = 0x112cd0u;
    // NOP
    // 0x112cd4: 0x45020058  bc1fl       . + 4 + (0x58 << 2)
    ctx->pc = 0x112CD4u;
    {
        const bool branch_taken_0x112cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x112cd4) {
            ctx->pc = 0x112CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112CD4u;
            // 0x112cd8: 0x7bb20040  lq          $s2, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112E38u;
            goto label_112e38;
        }
    }
    ctx->pc = 0x112CDCu;
    // 0x112cdc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x112cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112ce0: 0x0  nop
    ctx->pc = 0x112ce0u;
    // NOP
    // 0x112ce4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x112CE4u;
    {
        const bool branch_taken_0x112ce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x112ce4) {
            ctx->pc = 0x112CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112CE4u;
            // 0x112ce8: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112CF4u;
            goto label_112cf4;
        }
    }
    ctx->pc = 0x112CECu;
    // 0x112cec: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x112CECu;
    {
        const bool branch_taken_0x112cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CECu;
        // 0x112cf0: 0xe64200bc  swc1        $f2, 0xBC($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cec) {
            ctx->pc = 0x112E34u;
            goto label_112e34;
        }
    }
    ctx->pc = 0x112CF4u;
label_112cf4:
    // 0x112cf4: 0x265000d8  addiu       $s0, $s2, 0xD8
    ctx->pc = 0x112cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
    // 0x112cf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112cfc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x112cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x112d00: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x112D00u;
    SET_GPR_U32(ctx, 31, 0x112D08u);
    ctx->pc = 0x112D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D00u;
    // 0x112d04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x112D00u, 0x112D08u)) {
        return;
    }
    ctx->pc = 0x112D08u;
label_112d08:
    // 0x112d08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112d10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x112d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112d14: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x112d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x112d18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112d1c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x112d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x112d20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x112d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112d24: 0x8c730040  lw          $s3, 0x40($v1)
    ctx->pc = 0x112d24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x112d28: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x112d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x112d2c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x112d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x112d30: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x112d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x112d34: 0xb24200d3  sdl         $v0, 0xD3($s2)
    ctx->pc = 0x112d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112d38: 0xb64200cc  sdr         $v0, 0xCC($s2)
    ctx->pc = 0x112d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112d3c: 0xae4300d4  sw          $v1, 0xD4($s2)
    ctx->pc = 0x112d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
    // 0x112d40: 0x26750010  addiu       $s5, $s3, 0x10
    ctx->pc = 0x112d40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x112d44: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x112d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x112d48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112D48u;
    {
        const bool branch_taken_0x112d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D48u;
        // 0x112d4c: 0x26740020  addiu       $s4, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d48) {
            ctx->pc = 0x112D60u;
            goto label_112d60;
        }
    }
    ctx->pc = 0x112D50u;
    // 0x112d50: 0xc64000c8  lwc1        $f0, 0xC8($s2)
    ctx->pc = 0x112d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112d54: 0xc64100bc  lwc1        $f1, 0xBC($s2)
    ctx->pc = 0x112d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x112d58: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x112d58u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x112d5c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x112d5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_112d60:
    // 0x112d60: 0xc65400b8  lwc1        $f20, 0xB8($s2)
    ctx->pc = 0x112d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x112d64: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x112d64u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x112d68: 0xc0a0644  jal         func_281910
    ctx->pc = 0x112D68u;
    SET_GPR_U32(ctx, 31, 0x112D70u);
    ctx->pc = 0x112D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D68u;
    // 0x112d6c: 0x4602a502  mul.s       $f20, $f20, $f2 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281910u, 0x112D68u, 0x112D70u)) {
        return;
    }
    ctx->pc = 0x112D70u;
label_112d70:
    // 0x112d70: 0x305001ff  andi        $s0, $v0, 0x1FF
    ctx->pc = 0x112d70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x112d74: 0xc0a0644  jal         func_281910
    ctx->pc = 0x112D74u;
    SET_GPR_U32(ctx, 31, 0x112D7Cu);
    ctx->pc = 0x112D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D74u;
    // 0x112d78: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281910u, 0x112D74u, 0x112D7Cu)) {
        return;
    }
    ctx->pc = 0x112D7Cu;
label_112d7c:
    // 0x112d7c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x112d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x112d80: 0x44902000  mtc1        $s0, $f4
    ctx->pc = 0x112d80u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x112d84: 0x0  nop
    ctx->pc = 0x112d84u;
    // NOP
    // 0x112d88: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x112d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x112d8c: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x112d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x112d90: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x112d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x112d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112d98: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x112d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x112d9c: 0x0  nop
    ctx->pc = 0x112d9cu;
    // NOP
    // 0x112da0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x112da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x112da4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x112da4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x112da8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x112da8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x112dac: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x112dacu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x112db0: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x112db0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x112db4: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x112db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112db8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x112db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x112dbc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x112dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x112dc0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x112dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x112dc4: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x112dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x112dc8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x112dc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x112dcc: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x112dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x112dd0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x112dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112dd4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x112dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x112dd8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x112dd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x112ddc: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x112ddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x112de0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x112de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112de4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x112de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x112de8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x112de8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x112dec: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x112decu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x112df0: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x112df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112df4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x112df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x112df8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x112df8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x112dfc: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x112dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x112e00: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x112e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112e04: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x112e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x112e08: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x112e08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x112e0c: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x112e0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x112e10: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x112e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112e14: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x112e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x112e18: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x112e18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x112e1c: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x112e1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x112e20: 0xc64000c8  lwc1        $f0, 0xC8($s2)
    ctx->pc = 0x112e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112e24: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x112e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x112e28: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x112e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x112e2c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x112e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_112e30:
    // 0x112e30: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x112e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_112e34:
    // 0x112e34: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x112e34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_112e38:
    // 0x112e38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x112e38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112e3c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x112e3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112e40: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x112e40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112e48: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x112e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x112e4c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x112e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x112e50: 0x3e00008  jr          $ra
    ctx->pc = 0x112E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E50u;
        // 0x112e54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112E58u;
}
