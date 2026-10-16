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

// Function: sub_001BAD68
// Address: 0x1bad68 - 0x1baf48
void sub_001BAD68_0x1bad68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAD68_0x1bad68");
#endif

    switch (ctx->pc) {
        case 0x1badd8u: goto label_1badd8;
        case 0x1baec4u: goto label_1baec4;
        case 0x1baed8u: goto label_1baed8;
        case 0x1baf28u: goto label_1baf28;
        case 0x1baf34u: goto label_1baf34;
        default: break;
    }

    ctx->pc = 0x1bad68u;

    // 0x1bad68: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1bad68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1bad6c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1bad6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad70: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1bad70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1bad74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1bad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1bad78: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1bad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1bad7c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1bad7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1bad80: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1bad80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1bad84: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1bad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1bad88: 0x244ad560  addiu       $t2, $v0, -0x2AA0
    ctx->pc = 0x1bad88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956384));
    // 0x1bad8c: 0x89470003  lwl         $a3, 0x3($t2)
    ctx->pc = 0x1bad8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x1bad90: 0x99470000  lwr         $a3, 0x0($t2)
    ctx->pc = 0x1bad90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x1bad94: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x1bad94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bad98: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x1bad98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bad9c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAD9Cu;
    {
        const bool branch_taken_0x1bad9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD9Cu;
        // 0x1bada0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad9c) {
            ctx->pc = 0x1BADA8u;
            goto label_1bada8;
        }
    }
    ctx->pc = 0x1BADA4u;
    // 0x1bada4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1bada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bada8:
    // 0x1bada8: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x1bada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1badac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1badacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1badb0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BADB0u;
    {
        const bool branch_taken_0x1badb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADB0u;
        // 0x1badb4: 0xa3a40013  sb          $a0, 0x13($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badb0) {
            ctx->pc = 0x1BADE0u;
            goto label_1bade0;
        }
    }
    ctx->pc = 0x1BADB8u;
    // 0x1badb8: 0x8cc40334  lw          $a0, 0x334($a2)
    ctx->pc = 0x1badb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 820)));
    // 0x1badbc: 0x240200ec  addiu       $v0, $zero, 0xEC
    ctx->pc = 0x1badbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x1badc0: 0x240300d1  addiu       $v1, $zero, 0xD1
    ctx->pc = 0x1badc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x1badc4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1badc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1badc8: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1badc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1badcc: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x1badccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1badd0: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1BADD0u;
    SET_GPR_U32(ctx, 31, 0x1BADD8u);
    ctx->pc = 0x1BADD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BADD0u;
    // 0x1badd4: 0xa3a50012  sb          $a1, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1BADD0u, 0x1BADD8u)) {
        return;
    }
    ctx->pc = 0x1BADD8u;
label_1badd8:
    // 0x1badd8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1BADD8u;
    {
        const bool branch_taken_0x1badd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADD8u;
        // 0x1baddc: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badd8) {
            ctx->pc = 0x1BAEC8u;
            goto label_1baec8;
        }
    }
    ctx->pc = 0x1BADE0u;
label_1bade0:
    // 0x1bade0: 0x8cc20304  lw          $v0, 0x304($a2)
    ctx->pc = 0x1bade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 772)));
    // 0x1bade4: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x1bade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bade8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bade8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1badec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BADECu;
    {
        const bool branch_taken_0x1badec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADECu;
        // 0x1badf0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badec) {
            ctx->pc = 0x1BAE08u;
            goto label_1bae08;
        }
    }
    ctx->pc = 0x1BADF4u;
    // 0x1badf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1badf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1badf8: 0x0  nop
    ctx->pc = 0x1badf8u;
    // NOP
    // 0x1badfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1badfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bae00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAE00u;
    {
        const bool branch_taken_0x1bae00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bae00) {
            ctx->pc = 0x1BAE20u;
            goto label_1bae20;
        }
    }
    ctx->pc = 0x1BAE08u;
label_1bae08:
    // 0x1bae08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bae08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bae0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bae0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bae10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bae10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bae14: 0x0  nop
    ctx->pc = 0x1bae14u;
    // NOP
    // 0x1bae18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bae18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bae1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bae1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bae20:
    // 0x1bae20: 0x0  nop
    ctx->pc = 0x1bae20u;
    // NOP
    // 0x1bae24: 0x0  nop
    ctx->pc = 0x1bae24u;
    // NOP
    // 0x1bae28: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1bae28u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1bae2c: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1bae2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1bae30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bae30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bae34: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1bae34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1bae38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bae38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bae3c: 0x0  nop
    ctx->pc = 0x1bae3cu;
    // NOP
    // 0x1bae40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1bae40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bae44: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1bae44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bae48: 0x0  nop
    ctx->pc = 0x1bae48u;
    // NOP
    // 0x1bae4c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAE4Cu;
    {
        const bool branch_taken_0x1bae4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE4Cu;
        // 0x1bae50: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae4c) {
            ctx->pc = 0x1BAE68u;
            goto label_1bae68;
        }
    }
    ctx->pc = 0x1BAE54u;
    // 0x1bae54: 0x240300cc  addiu       $v1, $zero, 0xCC
    ctx->pc = 0x1bae54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1bae58: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1bae58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bae5c: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x1bae5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bae60: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1BAE60u;
    {
        const bool branch_taken_0x1bae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE60u;
        // 0x1bae64: 0xa3a00012  sb          $zero, 0x12($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae60) {
            ctx->pc = 0x1BAEBCu;
            goto label_1baebc;
        }
    }
    ctx->pc = 0x1BAE68u;
label_1bae68:
    // 0x1bae68: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1bae68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bae6c: 0x0  nop
    ctx->pc = 0x1bae6cu;
    // NOP
    // 0x1bae70: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1BAE70u;
    {
        const bool branch_taken_0x1bae70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE70u;
        // 0x1bae74: 0x24030035  addiu       $v1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae70) {
            ctx->pc = 0x1BAEACu;
            goto label_1baeac;
        }
    }
    ctx->pc = 0x1BAE78u;
    // 0x1bae78: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1bae78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1bae7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bae7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bae80: 0x0  nop
    ctx->pc = 0x1bae80u;
    // NOP
    // 0x1bae84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bae84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bae88: 0x0  nop
    ctx->pc = 0x1bae88u;
    // NOP
    // 0x1bae8c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAE8Cu;
    {
        const bool branch_taken_0x1bae8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE8Cu;
        // 0x1bae90: 0x240200b7  addiu       $v0, $zero, 0xB7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae8c) {
            ctx->pc = 0x1BAEACu;
            goto label_1baeac;
        }
    }
    ctx->pc = 0x1BAE94u;
    // 0x1bae94: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x1bae94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x1bae98: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1bae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1bae9c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1bae9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1baea0: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x1baea0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1baea4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAEA4u;
    {
        const bool branch_taken_0x1baea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEA4u;
        // 0x1baea8: 0xa3a40012  sb          $a0, 0x12($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baea4) {
            ctx->pc = 0x1BAEBCu;
            goto label_1baebc;
        }
    }
    ctx->pc = 0x1BAEACu;
label_1baeac:
    // 0x1baeac: 0x240200a6  addiu       $v0, $zero, 0xA6
    ctx->pc = 0x1baeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x1baeb0: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1baeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1baeb4: 0xa3a30012  sb          $v1, 0x12($sp)
    ctx->pc = 0x1baeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x1baeb8: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x1baeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
label_1baebc:
    // 0x1baebc: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1BAEBCu;
    SET_GPR_U32(ctx, 31, 0x1BAEC4u);
    ctx->pc = 0x1BAEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAEBCu;
    // 0x1baec0: 0x8cc40330  lw          $a0, 0x330($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1BAEBCu, 0x1BAEC4u)) {
        return;
    }
    ctx->pc = 0x1BAEC4u;
label_1baec4:
    // 0x1baec4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1baec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1baec8:
    // 0x1baec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1baec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1baeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baed0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BAED0u;
    SET_GPR_U32(ctx, 31, 0x1BAED8u);
    ctx->pc = 0x1BAED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAED0u;
    // 0x1baed4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BAED0u, 0x1BAED8u)) {
        return;
    }
    ctx->pc = 0x1BAED8u;
label_1baed8:
    // 0x1baed8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1baed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1baedc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1baedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1baee0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1baee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baee4: 0xc44cd788  lwc1        $f12, -0x2878($v0)
    ctx->pc = 0x1baee4u;
    { uint32_t bits = FAST_READ32(0x69D788u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1baee8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1baee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1baeec: 0x2442d788  addiu       $v0, $v0, -0x2878
    ctx->pc = 0x1baeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956936));
    // 0x1baef0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1baef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1baef4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1baef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1baef8: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1baef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1baefc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1baefcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1baf00: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x1baf00u;
    { uint32_t bits = FAST_READ32(0x69D78Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1baf04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1baf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf08: 0xc4700fe0  lwc1        $f16, 0xFE0($v1)
    ctx->pc = 0x1baf08u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1baf0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1baf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1baf10: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1baf10u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x1baf14: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1baf14u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1baf18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1baf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1baf1c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1baf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1baf20: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1BAF20u;
    SET_GPR_U32(ctx, 31, 0x1BAF28u);
    ctx->pc = 0x1BAF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF20u;
    // 0x1baf24: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1BAF20u, 0x1BAF28u)) {
        return;
    }
    ctx->pc = 0x1BAF28u;
label_1baf28:
    // 0x1baf28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1baf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf2c: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1BAF2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAF34u);
    ctx->pc = 0x1BAF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF2Cu;
    // 0x1baf30: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1BAF2Cu, 0x1BAF34u)) {
        return;
    }
    ctx->pc = 0x1BAF34u;
label_1baf34:
    // 0x1baf34: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1baf34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1baf38: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1baf38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1baf3c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1baf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1baf40: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF40u;
        // 0x1baf44: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAF48u;
}
