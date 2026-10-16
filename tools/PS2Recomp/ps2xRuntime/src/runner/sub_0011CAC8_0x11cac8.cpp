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

// Function: sub_0011CAC8
// Address: 0x11cac8 - 0x11d4d8
void sub_0011CAC8_0x11cac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CAC8_0x11cac8");
#endif

    switch (ctx->pc) {
        case 0x11cb8cu: goto label_11cb8c;
        case 0x11cc6cu: goto label_11cc6c;
        case 0x11cd8cu: goto label_11cd8c;
        case 0x11cdf0u: goto label_11cdf0;
        case 0x11cee4u: goto label_11cee4;
        case 0x11cef4u: goto label_11cef4;
        case 0x11cf1cu: goto label_11cf1c;
        case 0x11cf7cu: goto label_11cf7c;
        case 0x11cf90u: goto label_11cf90;
        case 0x11cfa4u: goto label_11cfa4;
        case 0x11d090u: goto label_11d090;
        case 0x11d0f4u: goto label_11d0f4;
        case 0x11d104u: goto label_11d104;
        case 0x11d130u: goto label_11d130;
        case 0x11d190u: goto label_11d190;
        case 0x11d1a0u: goto label_11d1a0;
        case 0x11d1b4u: goto label_11d1b4;
        case 0x11d1c4u: goto label_11d1c4;
        case 0x11d208u: goto label_11d208;
        case 0x11d218u: goto label_11d218;
        case 0x11d228u: goto label_11d228;
        case 0x11d238u: goto label_11d238;
        case 0x11d278u: goto label_11d278;
        case 0x11d288u: goto label_11d288;
        case 0x11d2b0u: goto label_11d2b0;
        case 0x11d310u: goto label_11d310;
        case 0x11d320u: goto label_11d320;
        case 0x11d334u: goto label_11d334;
        case 0x11d344u: goto label_11d344;
        case 0x11d3a8u: goto label_11d3a8;
        case 0x11d440u: goto label_11d440;
        case 0x11d4a0u: goto label_11d4a0;
        case 0x11d4a8u: goto label_11d4a8;
        default: break;
    }

    ctx->pc = 0x11cac8u;

    // 0x11cac8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x11cac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11cacc: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x11caccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x11cad0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x11cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x11cad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11cad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cad8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x11cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x11cadc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11cadcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cae0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x11cae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x11cae4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x11cae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x11cae8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x11cae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x11caec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11caecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x11caf0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11caf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11caf4: 0x1260026c  beqz        $s3, . + 4 + (0x26C << 2)
    ctx->pc = 0x11CAF4u;
    {
        const bool branch_taken_0x11caf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAF4u;
        // 0x11caf8: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11caf4) {
            ctx->pc = 0x11D4A8u;
            goto label_11d4a8;
        }
    }
    ctx->pc = 0x11CAFCu;
    // 0x11cafc: 0x92630034  lbu         $v1, 0x34($s3)
    ctx->pc = 0x11cafcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x11cb00: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x11cb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x11cb04: 0x10400269  beqz        $v0, . + 4 + (0x269 << 2)
    ctx->pc = 0x11CB04u;
    {
        const bool branch_taken_0x11cb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB04u;
        // 0x11cb08: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb04) {
            ctx->pc = 0x11D4ACu;
            goto label_11d4ac;
        }
    }
    ctx->pc = 0x11CB0Cu;
    // 0x11cb0c: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x11cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x11cb10: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x11cb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11cb14: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x11cb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11cb18: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x11cb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x11cb1c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x11cb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cb20: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x11cb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cb24: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11CB24u;
    {
        const bool branch_taken_0x11cb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB24u;
        // 0x11cb28: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb24) {
            ctx->pc = 0x11CB78u;
            goto label_11cb78;
        }
    }
    ctx->pc = 0x11CB2Cu;
    // 0x11cb2c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x11cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x11cb30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11CB30u;
    {
        const bool branch_taken_0x11cb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB30u;
        // 0x11cb34: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb30) {
            ctx->pc = 0x11CB78u;
            goto label_11cb78;
        }
    }
    ctx->pc = 0x11CB38u;
    // 0x11cb38: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x11cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cb3c: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x11cb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cb40: 0xc6640010  lwc1        $f4, 0x10($s3)
    ctx->pc = 0x11cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11cb44: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x11cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11cb48: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x11cb48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x11cb4c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x11cb4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11cb50: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x11cb50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x11cb54: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x11cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cb58: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x11cb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cb5c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x11cb5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x11cb60: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11cb60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11cb64: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x11cb64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x11cb68: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11cb68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11cb6c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x11cb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11cb70: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11cb70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11cb74: 0x0  nop
    ctx->pc = 0x11cb74u;
    // NOP
label_11cb78:
    // 0x11cb78: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x11cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x11cb7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CB7Cu;
    {
        const bool branch_taken_0x11cb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB7Cu;
        // 0x11cb80: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb7c) {
            ctx->pc = 0x11CBA4u;
            goto label_11cba4;
        }
    }
    ctx->pc = 0x11CB84u;
    // 0x11cb84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11CB84u;
    {
        const bool branch_taken_0x11cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB84u;
        // 0x11cb88: 0xc6200048  lwc1        $f0, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb84) {
            ctx->pc = 0x11CBA8u;
            goto label_11cba8;
        }
    }
    ctx->pc = 0x11CB8Cu;
label_11cb8c:
    // 0x11cb8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cb90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cb90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cb94: 0x0  nop
    ctx->pc = 0x11cb94u;
    // NOP
    // 0x11cb98: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x11cb98u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x11cb9c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x11CB9Cu;
    {
        const bool branch_taken_0x11cb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB9Cu;
        // 0x11cba0: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb9c) {
            ctx->pc = 0x11CC98u;
            goto label_11cc98;
        }
    }
    ctx->pc = 0x11CBA4u;
label_11cba4:
    // 0x11cba4: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x11cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11cba8:
    // 0x11cba8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x11cba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11cbac: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x11cbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11cbb0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x11cbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11cbb4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x11cbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11cbb8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x11cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cbbc: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x11cbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cbc0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x11cbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cbc4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11cbc8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x11cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x11cbcc: 0x6a2600c7  ldl         $a2, 0xC7($s1)
    ctx->pc = 0x11cbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11cbd0: 0x6e2600c0  ldr         $a2, 0xC0($s1)
    ctx->pc = 0x11cbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11cbd4: 0x8e2700c8  lw          $a3, 0xC8($s1)
    ctx->pc = 0x11cbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x11cbd8: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x11cbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cbdc: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x11cbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cbe0: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x11cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x11cbe4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x11cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x11cbe8: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x11cbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11cbec: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x11cbecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11cbf0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x11cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11cbf4: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x11cbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cbf8: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x11cbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cbfc: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x11cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x11cc00: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x11cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cc04: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x11cc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11cc08: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x11cc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11cc0c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x11cc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cc10: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x11cc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11cc14: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x11cc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cc18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11cc18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11cc1c: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x11cc1cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x11cc20: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x11cc20u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x11cc24: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x11cc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11cc28: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x11cc28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11cc2c: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x11cc2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11cc30: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x11cc30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x11cc34: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x11cc34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x11cc38: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x11cc38u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x11cc3c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11cc3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11cc40: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x11cc40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x11cc44: 0x0  nop
    ctx->pc = 0x11cc44u;
    // NOP
    // 0x11cc48: 0x0  nop
    ctx->pc = 0x11cc48u;
    // NOP
    // 0x11cc4c: 0x46000004  c1          0x4
    ctx->pc = 0x11cc4cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x11cc50: 0xc6210144  lwc1        $f1, 0x144($s1)
    ctx->pc = 0x11cc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cc54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11cc54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11cc58: 0x0  nop
    ctx->pc = 0x11cc58u;
    // NOP
    // 0x11cc5c: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x11CC5Cu;
    {
        const bool branch_taken_0x11cc5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC5Cu;
        // 0x11cc60: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc5c) {
            ctx->pc = 0x11CD18u;
            goto label_11cd18;
        }
    }
    ctx->pc = 0x11CC64u;
    // 0x11cc64: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x11CC64u;
    SET_GPR_U32(ctx, 31, 0x11CC6Cu);
    ctx->pc = 0x11CC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC64u;
    // 0x11cc68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x11CC64u, 0x11CC6Cu)) {
        return;
    }
    ctx->pc = 0x11CC6Cu;
label_11cc6c:
    // 0x11cc6c: 0x0  nop
    ctx->pc = 0x11cc6cu;
    // NOP
    // 0x11cc70: 0x0  nop
    ctx->pc = 0x11cc70u;
    // NOP
    // 0x11cc74: 0x46000044  c1          0x44
    ctx->pc = 0x11cc74u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x11cc78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11cc78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cc7c: 0x0  nop
    ctx->pc = 0x11cc7cu;
    // NOP
    // 0x11cc80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11cc80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11cc84: 0x0  nop
    ctx->pc = 0x11cc84u;
    // NOP
    // 0x11cc88: 0x4501ffc0  bc1t        . + 4 + (-0x40 << 2)
    ctx->pc = 0x11CC88u;
    {
        const bool branch_taken_0x11cc88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC88u;
        // 0x11cc8c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc88) {
            ctx->pc = 0x11CB8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cb8c;
        }
    }
    ctx->pc = 0x11CC90u;
    // 0x11cc90: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x11cc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cc94: 0x0  nop
    ctx->pc = 0x11cc94u;
    // NOP
label_11cc98:
    // 0x11cc98: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x11cc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cc9c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x11cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cca0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11cca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11cca4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x11cca4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x11cca8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11cca8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11ccac: 0xc6220144  lwc1        $f2, 0x144($s1)
    ctx->pc = 0x11ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ccb0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11ccb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11ccb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11ccb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11ccb8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x11ccb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11ccbc: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x11ccbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x11ccc0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x11ccc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11ccc4: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x11ccc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11ccc8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x11ccc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11cccc: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x11ccccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11ccd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x11ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11ccd4: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x11ccd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ccd8: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x11ccd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ccdc: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x11ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x11cce0: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x11cce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11cce4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x11cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cce8: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x11cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11ccec: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x11ccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ccf0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x11ccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ccf4: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x11ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ccf8: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x11ccf8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x11ccfc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11ccfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11cd00: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x11cd00u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x11cd04: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x11cd04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11cd08: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x11cd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x11cd0c: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x11cd0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11cd10: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x11cd10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11cd14: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x11cd14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_11cd18:
    // 0x11cd18: 0x8e220134  lw          $v0, 0x134($s1)
    ctx->pc = 0x11cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x11cd1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CD1Cu;
    {
        const bool branch_taken_0x11cd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cd1c) {
            ctx->pc = 0x11CD3Cu;
            goto label_11cd3c;
        }
    }
    ctx->pc = 0x11CD24u;
    // 0x11cd24: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x11cd24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11cd28: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x11cd28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11cd2c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x11cd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cd30: 0xb226012f  sdl         $a2, 0x12F($s1)
    ctx->pc = 0x11cd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cd34: 0xb6260128  sdr         $a2, 0x128($s1)
    ctx->pc = 0x11cd34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cd38: 0xae270130  sw          $a3, 0x130($s1)
    ctx->pc = 0x11cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 7));
label_11cd3c:
    // 0x11cd3c: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x11cd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11cd40: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x11cd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11cd44: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x11cd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cd48: 0xb224014f  sdl         $a0, 0x14F($s1)
    ctx->pc = 0x11cd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cd4c: 0xb6240148  sdr         $a0, 0x148($s1)
    ctx->pc = 0x11cd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cd50: 0xae250150  sw          $a1, 0x150($s1)
    ctx->pc = 0x11cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 5));
    // 0x11cd54: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x11cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cd58: 0xc6230128  lwc1        $f3, 0x128($s1)
    ctx->pc = 0x11cd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cd5c: 0xc624012c  lwc1        $f4, 0x12C($s1)
    ctx->pc = 0x11cd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11cd60: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11cd60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11cd64: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x11cd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11cd68: 0xc6230130  lwc1        $f3, 0x130($s1)
    ctx->pc = 0x11cd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cd6c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cd70: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x11cd70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x11cd74: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x11cd74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11cd78: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11cd78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11cd7c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x11cd7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11cd80: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x11cd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x11cd84: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x11CD84u;
    SET_GPR_U32(ctx, 31, 0x11CD8Cu);
    ctx->pc = 0x11CD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD84u;
    // 0x11cd88: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x11CD84u, 0x11CD8Cu)) {
        return;
    }
    ctx->pc = 0x11CD8Cu;
label_11cd8c:
    // 0x11cd8c: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x11cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x11cd90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CD90u;
    {
        const bool branch_taken_0x11cd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD90u;
        // 0x11cd94: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd90) {
            ctx->pc = 0x11CDB0u;
            goto label_11cdb0;
        }
    }
    ctx->pc = 0x11CD98u;
    // 0x11cd98: 0xc6200140  lwc1        $f0, 0x140($s1)
    ctx->pc = 0x11cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cd9c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x11cd9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11cda0: 0x0  nop
    ctx->pc = 0x11cda0u;
    // NOP
    // 0x11cda4: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x11CDA4u;
    {
        const bool branch_taken_0x11cda4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11cda4) {
            ctx->pc = 0x11CDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CDA4u;
            // 0x11cda8: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CDB0u;
            goto label_11cdb0;
        }
    }
    ctx->pc = 0x11CDACu;
    // 0x11cdac: 0x0  nop
    ctx->pc = 0x11cdacu;
    // NOP
label_11cdb0:
    // 0x11cdb0: 0xc6210124  lwc1        $f1, 0x124($s1)
    ctx->pc = 0x11cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cdb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cdb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11cdb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11cdbc: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x11cdbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x11cdc0: 0xc6220120  lwc1        $f2, 0x120($s1)
    ctx->pc = 0x11cdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11cdc4: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x11cdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x11cdc8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x11cdc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x11cdcc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x11cdccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11cdd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11cdd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11cdd4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x11cdd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11cdd8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x11cdd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x11cddc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x11cddcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x11cde0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x11cde0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11cde4: 0x46021302  mul.s       $f12, $f2, $f2
    ctx->pc = 0x11cde4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x11cde8: 0xc09b3ec  jal         func_26CFB0
    ctx->pc = 0x11CDE8u;
    SET_GPR_U32(ctx, 31, 0x11CDF0u);
    ctx->pc = 0x11CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDE8u;
    // 0x11cdec: 0x460c1302  mul.s       $f12, $f2, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CFB0u, 0x11CDE8u, 0x11CDF0u)) {
        return;
    }
    ctx->pc = 0x11CDF0u;
label_11cdf0:
    // 0x11cdf0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x11cdf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11cdf4: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x11cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11cdf8: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x11cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11cdfc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x11cdfcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11ce00: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x11ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ce04: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x11ce04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11ce08: 0xc6220128  lwc1        $f2, 0x128($s1)
    ctx->pc = 0x11ce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ce0c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x11ce0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11ce10: 0xc6210130  lwc1        $f1, 0x130($s1)
    ctx->pc = 0x11ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ce14: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x11ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ce18: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x11ce18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x11ce1c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x11ce1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x11ce20: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11ce20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11ce24: 0xe6220128  swc1        $f2, 0x128($s1)
    ctx->pc = 0x11ce24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x11ce28: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x11ce28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x11ce2c: 0xe6210130  swc1        $f1, 0x130($s1)
    ctx->pc = 0x11ce2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x11ce30: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x11ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11ce34: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x11ce34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce38: 0x92620034  lbu         $v0, 0x34($s3)
    ctx->pc = 0x11ce38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x11ce3c: 0x24720010  addiu       $s2, $v1, 0x10
    ctx->pc = 0x11ce3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11ce40: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x11ce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x11ce44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11CE44u;
    {
        const bool branch_taken_0x11ce44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE44u;
        // 0x11ce48: 0x8e340114  lw          $s4, 0x114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce44) {
            ctx->pc = 0x11CE50u;
            goto label_11ce50;
        }
    }
    ctx->pc = 0x11CE4Cu;
    // 0x11ce4c: 0x14b02a  slt         $s6, $zero, $s4
    ctx->pc = 0x11ce4cu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_11ce50:
    // 0x11ce50: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CE50u;
    {
        const bool branch_taken_0x11ce50 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE50u;
        // 0x11ce54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce50) {
            ctx->pc = 0x11CE74u;
            goto label_11ce74;
        }
    }
    ctx->pc = 0x11CE58u;
    // 0x11ce58: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x11ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ce5c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x11ce5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ce60: 0x0  nop
    ctx->pc = 0x11ce60u;
    // NOP
    // 0x11ce64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x11CE64u;
    {
        const bool branch_taken_0x11ce64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ce64) {
            ctx->pc = 0x11CE74u;
            goto label_11ce74;
        }
    }
    ctx->pc = 0x11CE6Cu;
    // 0x11ce6c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x11ce6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11ce70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ce74:
    // 0x11ce74: 0x1282004d  beq         $s4, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x11CE74u;
    {
        const bool branch_taken_0x11ce74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x11CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE74u;
        // 0x11ce78: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce74) {
            ctx->pc = 0x11CFACu;
            goto label_11cfac;
        }
    }
    ctx->pc = 0x11CE7Cu;
    // 0x11ce7c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CE7Cu;
    {
        const bool branch_taken_0x11ce7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce7c) {
            ctx->pc = 0x11CE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CE7Cu;
            // 0x11ce80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CE94u;
            goto label_11ce94;
        }
    }
    ctx->pc = 0x11CE84u;
    // 0x11ce84: 0x52800009  beql        $s4, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CE84u;
    {
        const bool branch_taken_0x11ce84 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce84) {
            ctx->pc = 0x11CE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CE84u;
            // 0x11ce88: 0xc62300c0  lwc1        $f3, 0xC0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CEACu;
            goto label_11ceac;
        }
    }
    ctx->pc = 0x11CE8Cu;
    // 0x11ce8c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x11CE8Cu;
    {
        const bool branch_taken_0x11ce8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce8c) {
            ctx->pc = 0x11D238u;
            goto label_11d238;
        }
    }
    ctx->pc = 0x11CE94u;
label_11ce94:
    // 0x11ce94: 0x1282006e  beq         $s4, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x11CE94u;
    {
        const bool branch_taken_0x11ce94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x11CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE94u;
        // 0x11ce98: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce94) {
            ctx->pc = 0x11D050u;
            goto label_11d050;
        }
    }
    ctx->pc = 0x11CE9Cu;
    // 0x11ce9c: 0x528200cb  beql        $s4, $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x11CE9Cu;
    {
        const bool branch_taken_0x11ce9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x11ce9c) {
            ctx->pc = 0x11CEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CE9Cu;
            // 0x11cea0: 0xc62300c0  lwc1        $f3, 0xC0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D1CCu;
            goto label_11d1cc;
        }
    }
    ctx->pc = 0x11CEA4u;
    // 0x11cea4: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x11CEA4u;
    {
        const bool branch_taken_0x11cea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cea4) {
            ctx->pc = 0x11D238u;
            goto label_11d238;
        }
    }
    ctx->pc = 0x11CEACu;
label_11ceac:
    // 0x11ceac: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x11ceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ceb0: 0xc622012c  lwc1        $f2, 0x12C($s1)
    ctx->pc = 0x11ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ceb4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11ceb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11ceb8: 0xc62400c4  lwc1        $f4, 0xC4($s1)
    ctx->pc = 0x11ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11cebc: 0xc6200130  lwc1        $f0, 0x130($s1)
    ctx->pc = 0x11cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cec0: 0xc62300c8  lwc1        $f3, 0xC8($s1)
    ctx->pc = 0x11cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cec4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x11cec4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x11cec8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x11cec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11cecc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11ceccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11ced0: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x11ced0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11ced4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x11ced4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11ced8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x11ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11cedc: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11CEDCu;
    SET_GPR_U32(ctx, 31, 0x11CEE4u);
    ctx->pc = 0x11CEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEDCu;
    // 0x11cee0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11CEDCu, 0x11CEE4u)) {
        return;
    }
    ctx->pc = 0x11CEE4u;
label_11cee4:
    // 0x11cee4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x11cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11cee8: 0x262600d0  addiu       $a2, $s1, 0xD0
    ctx->pc = 0x11cee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x11ceec: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x11CEECu;
    SET_GPR_U32(ctx, 31, 0x11CEF4u);
    ctx->pc = 0x11CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEECu;
    // 0x11cef0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x11CEECu, 0x11CEF4u)) {
        return;
    }
    ctx->pc = 0x11CEF4u;
label_11cef4:
    // 0x11cef4: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x11cef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11cef8: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x11cef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11cefc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x11cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11cf00: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x11cf00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cf04: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x11cf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cf08: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x11cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x11cf0c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11cf10: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x11cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x11cf14: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11CF14u;
    SET_GPR_U32(ctx, 31, 0x11CF1Cu);
    ctx->pc = 0x11CF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF14u;
    // 0x11cf18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11CF14u, 0x11CF1Cu)) {
        return;
    }
    ctx->pc = 0x11CF1Cu;
label_11cf1c:
    // 0x11cf1c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x11cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cf20: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x11cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11cf24: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x11cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cf28: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x11cf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11cf2c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11cf2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11cf30: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x11cf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cf34: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x11cf34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x11cf38: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x11cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cf3c: 0xc624011c  lwc1        $f4, 0x11C($s1)
    ctx->pc = 0x11cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11cf40: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11cf40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11cf44: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11cf44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11cf48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11cf48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11cf4c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x11cf4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11cf50: 0x0  nop
    ctx->pc = 0x11cf50u;
    // NOP
    // 0x11cf54: 0x45000098  bc1f        . + 4 + (0x98 << 2)
    ctx->pc = 0x11CF54u;
    {
        const bool branch_taken_0x11cf54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF54u;
        // 0x11cf58: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf54) {
            ctx->pc = 0x11D1B8u;
            goto label_11d1b8;
        }
    }
    ctx->pc = 0x11CF5Cu;
    // 0x11cf5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11cf5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cf60: 0x0  nop
    ctx->pc = 0x11cf60u;
    // NOP
    // 0x11cf64: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x11cf64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11cf68: 0x0  nop
    ctx->pc = 0x11cf68u;
    // NOP
    // 0x11cf6c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x11CF6Cu;
    {
        const bool branch_taken_0x11cf6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11cf6c) {
            ctx->pc = 0x11CF88u;
            goto label_11cf88;
        }
    }
    ctx->pc = 0x11CF74u;
    // 0x11cf74: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x11CF74u;
    SET_GPR_U32(ctx, 31, 0x11CF7Cu);
    ctx->pc = 0x11CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF74u;
    // 0x11cf78: 0xc62c0118  lwc1        $f12, 0x118($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x11CF74u, 0x11CF7Cu)) {
        return;
    }
    ctx->pc = 0x11CF7Cu;
label_11cf7c:
    // 0x11cf7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11CF7Cu;
    {
        const bool branch_taken_0x11cf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF7Cu;
        // 0x11cf80: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf7c) {
            ctx->pc = 0x11CF98u;
            goto label_11cf98;
        }
    }
    ctx->pc = 0x11CF84u;
    // 0x11cf84: 0x0  nop
    ctx->pc = 0x11cf84u;
    // NOP
label_11cf88:
    // 0x11cf88: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x11CF88u;
    SET_GPR_U32(ctx, 31, 0x11CF90u);
    ctx->pc = 0x11CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF88u;
    // 0x11cf8c: 0xc62c0118  lwc1        $f12, 0x118($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x11CF88u, 0x11CF90u)) {
        return;
    }
    ctx->pc = 0x11CF90u;
label_11cf90:
    // 0x11cf90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11cf90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11cf94: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x11cf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_11cf98:
    // 0x11cf98: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x11cf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11cf9c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11CF9Cu;
    SET_GPR_U32(ctx, 31, 0x11CFA4u);
    ctx->pc = 0x11CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF9Cu;
    // 0x11cfa0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11CF9Cu, 0x11CFA4u)) {
        return;
    }
    ctx->pc = 0x11CFA4u;
label_11cfa4:
    // 0x11cfa4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x11CFA4u;
    {
        const bool branch_taken_0x11cfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFA4u;
        // 0x11cfa8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfa4) {
            ctx->pc = 0x11D1B8u;
            goto label_11d1b8;
        }
    }
    ctx->pc = 0x11CFACu;
label_11cfac:
    // 0x11cfac: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x11cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11cfb0: 0x6a2700b7  ldl         $a3, 0xB7($s1)
    ctx->pc = 0x11cfb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11cfb4: 0x6e2700b0  ldr         $a3, 0xB0($s1)
    ctx->pc = 0x11cfb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11cfb8: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x11cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x11cfbc: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x11cfbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cfc0: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x11cfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cfc4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x11cfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x11cfc8: 0x6a260097  ldl         $a2, 0x97($s1)
    ctx->pc = 0x11cfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11cfcc: 0x6e260090  ldr         $a2, 0x90($s1)
    ctx->pc = 0x11cfccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11cfd0: 0x6a27009f  ldl         $a3, 0x9F($s1)
    ctx->pc = 0x11cfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11cfd4: 0x6e270098  ldr         $a3, 0x98($s1)
    ctx->pc = 0x11cfd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11cfd8: 0x6a2300a7  ldl         $v1, 0xA7($s1)
    ctx->pc = 0x11cfd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11cfdc: 0x6e2300a0  ldr         $v1, 0xA0($s1)
    ctx->pc = 0x11cfdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11cfe0: 0x6a2400af  ldl         $a0, 0xAF($s1)
    ctx->pc = 0x11cfe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11cfe4: 0x6e2400a8  ldr         $a0, 0xA8($s1)
    ctx->pc = 0x11cfe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11cfe8: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x11cfe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cfec: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x11cfecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cff0: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x11cff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cff4: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x11cff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cff8: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x11cff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11cffc: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x11cffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d000: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x11d000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d004: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x11d004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d008: 0x6a2600b7  ldl         $a2, 0xB7($s1)
    ctx->pc = 0x11d008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11d00c: 0x6e2600b0  ldr         $a2, 0xB0($s1)
    ctx->pc = 0x11d00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11d010: 0x6a2700bf  ldl         $a3, 0xBF($s1)
    ctx->pc = 0x11d010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11d014: 0x6e2700b8  ldr         $a3, 0xB8($s1)
    ctx->pc = 0x11d014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11d018: 0x6a2300c7  ldl         $v1, 0xC7($s1)
    ctx->pc = 0x11d018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11d01c: 0x6e2300c0  ldr         $v1, 0xC0($s1)
    ctx->pc = 0x11d01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11d020: 0x6a2400cf  ldl         $a0, 0xCF($s1)
    ctx->pc = 0x11d020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11d024: 0x6e2400c8  ldr         $a0, 0xC8($s1)
    ctx->pc = 0x11d024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11d028: 0xb0460037  sdl         $a2, 0x37($v0)
    ctx->pc = 0x11d028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d02c: 0xb4460030  sdr         $a2, 0x30($v0)
    ctx->pc = 0x11d02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d030: 0xb047003f  sdl         $a3, 0x3F($v0)
    ctx->pc = 0x11d030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d034: 0xb4470038  sdr         $a3, 0x38($v0)
    ctx->pc = 0x11d034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d038: 0xb0430047  sdl         $v1, 0x47($v0)
    ctx->pc = 0x11d038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d03c: 0xb4430040  sdr         $v1, 0x40($v0)
    ctx->pc = 0x11d03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d040: 0xb044004f  sdl         $a0, 0x4F($v0)
    ctx->pc = 0x11d040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d044: 0xb4440048  sdr         $a0, 0x48($v0)
    ctx->pc = 0x11d044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d048: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x11D048u;
    {
        const bool branch_taken_0x11d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d048) {
            ctx->pc = 0x11D238u;
            goto label_11d238;
        }
    }
    ctx->pc = 0x11D050u;
label_11d050:
    // 0x11d050: 0xc62300c0  lwc1        $f3, 0xC0($s1)
    ctx->pc = 0x11d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d054: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x11d054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d058: 0xc622012c  lwc1        $f2, 0x12C($s1)
    ctx->pc = 0x11d058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d05c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11d05cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11d060: 0xc62400c4  lwc1        $f4, 0xC4($s1)
    ctx->pc = 0x11d060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d064: 0xc6200130  lwc1        $f0, 0x130($s1)
    ctx->pc = 0x11d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d068: 0xc62300c8  lwc1        $f3, 0xC8($s1)
    ctx->pc = 0x11d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d06c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x11d06cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x11d070: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x11d070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11d074: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11d074u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11d078: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x11d078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11d07c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x11d07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11d080: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x11d080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11d084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d088: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11D088u;
    SET_GPR_U32(ctx, 31, 0x11D090u);
    ctx->pc = 0x11D08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D088u;
    // 0x11d08c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11D088u, 0x11D090u)) {
        return;
    }
    ctx->pc = 0x11D090u;
label_11d090:
    // 0x11d090: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x11d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11d094: 0xc6240090  lwc1        $f4, 0x90($s1)
    ctx->pc = 0x11d094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d098: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x11d098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11d09c: 0xc6230094  lwc1        $f3, 0x94($s1)
    ctx->pc = 0x11d09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d0a0: 0x46043002  mul.s       $f0, $f6, $f4
    ctx->pc = 0x11d0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x11d0a4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x11d0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d0a8: 0x46032a02  mul.s       $f8, $f5, $f3
    ctx->pc = 0x11d0a8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x11d0ac: 0xc6210098  lwc1        $f1, 0x98($s1)
    ctx->pc = 0x11d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d0b0: 0x460111c2  mul.s       $f7, $f2, $f1
    ctx->pc = 0x11d0b0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11d0b4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x11d0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x11d0b8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x11d0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x11d0bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11d0bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11d0c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11d0c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11d0c4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x11d0c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11d0c8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x11d0c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11d0cc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11d0ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11d0d0: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x11d0d0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x11d0d4: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x11d0d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x11d0d8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x11d0d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11d0dc: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x11d0dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11d0e0: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x11d0e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11d0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0ec: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11D0ECu;
    SET_GPR_U32(ctx, 31, 0x11D0F4u);
    ctx->pc = 0x11D0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0ECu;
    // 0x11d0f0: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11D0ECu, 0x11D0F4u)) {
        return;
    }
    ctx->pc = 0x11D0F4u;
label_11d0f4:
    // 0x11d0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0fc: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x11D0FCu;
    SET_GPR_U32(ctx, 31, 0x11D104u);
    ctx->pc = 0x11D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0FCu;
    // 0x11d100: 0x262600d0  addiu       $a2, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x11D0FCu, 0x11D104u)) {
        return;
    }
    ctx->pc = 0x11D104u;
label_11d104:
    // 0x11d104: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x11d104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11d108: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x11d108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11d10c: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x11d10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11d110: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x11d110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11d114: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x11d114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d118: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x11d118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d11c: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x11d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x11d120: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11d120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d124: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x11d124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x11d128: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11D128u;
    SET_GPR_U32(ctx, 31, 0x11D130u);
    ctx->pc = 0x11D12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D128u;
    // 0x11d12c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11D128u, 0x11D130u)) {
        return;
    }
    ctx->pc = 0x11D130u;
label_11d130:
    // 0x11d130: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x11d130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d134: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x11d134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11d138: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x11d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d13c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x11d13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d140: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11d140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11d144: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x11d144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d148: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x11d148u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x11d14c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x11d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d150: 0xc624011c  lwc1        $f4, 0x11C($s1)
    ctx->pc = 0x11d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d154: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11d154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11d158: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11d158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11d15c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11d15cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11d160: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x11d160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11d164: 0x0  nop
    ctx->pc = 0x11d164u;
    // NOP
    // 0x11d168: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x11D168u;
    {
        const bool branch_taken_0x11d168 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D168u;
        // 0x11d16c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d168) {
            ctx->pc = 0x11D1B8u;
            goto label_11d1b8;
        }
    }
    ctx->pc = 0x11D170u;
    // 0x11d170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11d170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d174: 0x0  nop
    ctx->pc = 0x11d174u;
    // NOP
    // 0x11d178: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x11d178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11d17c: 0x0  nop
    ctx->pc = 0x11d17cu;
    // NOP
    // 0x11d180: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x11D180u;
    {
        const bool branch_taken_0x11d180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11d180) {
            ctx->pc = 0x11D198u;
            goto label_11d198;
        }
    }
    ctx->pc = 0x11D188u;
    // 0x11d188: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x11D188u;
    SET_GPR_U32(ctx, 31, 0x11D190u);
    ctx->pc = 0x11D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D188u;
    // 0x11d18c: 0xc62c0118  lwc1        $f12, 0x118($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x11D188u, 0x11D190u)) {
        return;
    }
    ctx->pc = 0x11D190u;
label_11d190:
    // 0x11d190: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11D190u;
    {
        const bool branch_taken_0x11d190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D190u;
        // 0x11d194: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d190) {
            ctx->pc = 0x11D1A8u;
            goto label_11d1a8;
        }
    }
    ctx->pc = 0x11D198u;
label_11d198:
    // 0x11d198: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x11D198u;
    SET_GPR_U32(ctx, 31, 0x11D1A0u);
    ctx->pc = 0x11D19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D198u;
    // 0x11d19c: 0xc62c0118  lwc1        $f12, 0x118($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x11D198u, 0x11D1A0u)) {
        return;
    }
    ctx->pc = 0x11D1A0u;
label_11d1a0:
    // 0x11d1a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11d1a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11d1a4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x11d1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_11d1a8:
    // 0x11d1a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1ac: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11D1ACu;
    SET_GPR_U32(ctx, 31, 0x11D1B4u);
    ctx->pc = 0x11D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1ACu;
    // 0x11d1b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11D1ACu, 0x11D1B4u)) {
        return;
    }
    ctx->pc = 0x11D1B4u;
label_11d1b4:
    // 0x11d1b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11d1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11d1b8:
    // 0x11d1b8: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x11d1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x11d1bc: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x11D1BCu;
    SET_GPR_U32(ctx, 31, 0x11D1C4u);
    ctx->pc = 0x11D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1BCu;
    // 0x11d1c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x11D1BCu, 0x11D1C4u)) {
        return;
    }
    ctx->pc = 0x11D1C4u;
label_11d1c4:
    // 0x11d1c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11D1C4u;
    {
        const bool branch_taken_0x11d1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d1c4) {
            ctx->pc = 0x11D238u;
            goto label_11d238;
        }
    }
    ctx->pc = 0x11D1CCu;
label_11d1cc:
    // 0x11d1cc: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x11d1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d1d0: 0xc622012c  lwc1        $f2, 0x12C($s1)
    ctx->pc = 0x11d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d1d4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11d1d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11d1d8: 0xc62400c4  lwc1        $f4, 0xC4($s1)
    ctx->pc = 0x11d1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d1dc: 0xc6200130  lwc1        $f0, 0x130($s1)
    ctx->pc = 0x11d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d1e0: 0xc62300c8  lwc1        $f3, 0xC8($s1)
    ctx->pc = 0x11d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d1e4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x11d1e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x11d1e8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x11d1e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11d1ec: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11d1ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11d1f0: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x11d1f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11d1f4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x11d1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11d1f8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x11d1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11d1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d200: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11D200u;
    SET_GPR_U32(ctx, 31, 0x11D208u);
    ctx->pc = 0x11D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D200u;
    // 0x11d204: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11D200u, 0x11D208u)) {
        return;
    }
    ctx->pc = 0x11D208u;
label_11d208:
    // 0x11d208: 0x262600d0  addiu       $a2, $s1, 0xD0
    ctx->pc = 0x11d208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x11d20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d210: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x11D210u;
    SET_GPR_U32(ctx, 31, 0x11D218u);
    ctx->pc = 0x11D214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D210u;
    // 0x11d214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x11D210u, 0x11D218u)) {
        return;
    }
    ctx->pc = 0x11D218u;
label_11d218:
    // 0x11d218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d21c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d220: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11D220u;
    SET_GPR_U32(ctx, 31, 0x11D228u);
    ctx->pc = 0x11D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D220u;
    // 0x11d224: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11D220u, 0x11D228u)) {
        return;
    }
    ctx->pc = 0x11D228u;
label_11d228:
    // 0x11d228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d22c: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x11d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x11d230: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x11D230u;
    SET_GPR_U32(ctx, 31, 0x11D238u);
    ctx->pc = 0x11D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D230u;
    // 0x11d234: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x11D230u, 0x11D238u)) {
        return;
    }
    ctx->pc = 0x11D238u;
label_11d238:
    // 0x11d238: 0x12c0005d  beqz        $s6, . + 4 + (0x5D << 2)
    ctx->pc = 0x11D238u;
    {
        const bool branch_taken_0x11d238 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D238u;
        // 0x11d23c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d238) {
            ctx->pc = 0x11D3B0u;
            goto label_11d3b0;
        }
    }
    ctx->pc = 0x11D240u;
    // 0x11d240: 0xc62300c0  lwc1        $f3, 0xC0($s1)
    ctx->pc = 0x11d240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d244: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x11d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d248: 0xc622012c  lwc1        $f2, 0x12C($s1)
    ctx->pc = 0x11d248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d24c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11d24cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x11d250: 0xc62400c4  lwc1        $f4, 0xC4($s1)
    ctx->pc = 0x11d250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d254: 0xc6200130  lwc1        $f0, 0x130($s1)
    ctx->pc = 0x11d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d258: 0xc62300c8  lwc1        $f3, 0xC8($s1)
    ctx->pc = 0x11d258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d25c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x11d25cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x11d260: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x11d260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11d264: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11d264u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11d268: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x11d268u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11d26c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x11d26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11d270: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11D270u;
    SET_GPR_U32(ctx, 31, 0x11D278u);
    ctx->pc = 0x11D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D270u;
    // 0x11d274: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11D270u, 0x11D278u)) {
        return;
    }
    ctx->pc = 0x11D278u;
label_11d278:
    // 0x11d278: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11d27c: 0x262600d0  addiu       $a2, $s1, 0xD0
    ctx->pc = 0x11d27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x11d280: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x11D280u;
    SET_GPR_U32(ctx, 31, 0x11D288u);
    ctx->pc = 0x11D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D280u;
    // 0x11d284: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x11D280u, 0x11D288u)) {
        return;
    }
    ctx->pc = 0x11D288u;
label_11d288:
    // 0x11d288: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x11d288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11d28c: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x11d28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11d290: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x11d290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11d294: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x11d294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d298: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x11d298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d29c: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x11d29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x11d2a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11d2a4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x11d2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x11d2a8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11D2A8u;
    SET_GPR_U32(ctx, 31, 0x11D2B0u);
    ctx->pc = 0x11D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2A8u;
    // 0x11d2ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11D2A8u, 0x11D2B0u)) {
        return;
    }
    ctx->pc = 0x11D2B0u;
label_11d2b0:
    // 0x11d2b0: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x11d2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d2b4: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x11d2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11d2b8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x11d2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d2bc: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x11d2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d2c0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11d2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11d2c4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x11d2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d2c8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x11d2c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x11d2cc: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x11d2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d2d0: 0xc624011c  lwc1        $f4, 0x11C($s1)
    ctx->pc = 0x11d2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d2d4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11d2d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11d2d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11d2d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11d2dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11d2dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11d2e0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x11d2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11d2e4: 0x0  nop
    ctx->pc = 0x11d2e4u;
    // NOP
    // 0x11d2e8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x11D2E8u;
    {
        const bool branch_taken_0x11d2e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2E8u;
        // 0x11d2ec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2e8) {
            ctx->pc = 0x11D338u;
            goto label_11d338;
        }
    }
    ctx->pc = 0x11D2F0u;
    // 0x11d2f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11d2f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d2f4: 0x0  nop
    ctx->pc = 0x11d2f4u;
    // NOP
    // 0x11d2f8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x11d2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11d2fc: 0x0  nop
    ctx->pc = 0x11d2fcu;
    // NOP
    // 0x11d300: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x11D300u;
    {
        const bool branch_taken_0x11d300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11d300) {
            ctx->pc = 0x11D318u;
            goto label_11d318;
        }
    }
    ctx->pc = 0x11D308u;
    // 0x11d308: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x11D308u;
    SET_GPR_U32(ctx, 31, 0x11D310u);
    ctx->pc = 0x11D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D308u;
    // 0x11d30c: 0xc62c0118  lwc1        $f12, 0x118($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x11D308u, 0x11D310u)) {
        return;
    }
    ctx->pc = 0x11D310u;
label_11d310:
    // 0x11d310: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11D310u;
    {
        const bool branch_taken_0x11d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D310u;
        // 0x11d314: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d310) {
            ctx->pc = 0x11D328u;
            goto label_11d328;
        }
    }
    ctx->pc = 0x11D318u;
label_11d318:
    // 0x11d318: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x11D318u;
    SET_GPR_U32(ctx, 31, 0x11D320u);
    ctx->pc = 0x11D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D318u;
    // 0x11d31c: 0xc62c0118  lwc1        $f12, 0x118($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x11D318u, 0x11D320u)) {
        return;
    }
    ctx->pc = 0x11D320u;
label_11d320:
    // 0x11d320: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11d320u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11d324: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x11d324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_11d328:
    // 0x11d328: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11d328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11d32c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11D32Cu;
    SET_GPR_U32(ctx, 31, 0x11D334u);
    ctx->pc = 0x11D330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D32Cu;
    // 0x11d330: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11D32Cu, 0x11D334u)) {
        return;
    }
    ctx->pc = 0x11D334u;
label_11d334:
    // 0x11d334: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11d334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11d338:
    // 0x11d338: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x11d338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x11d33c: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x11D33Cu;
    SET_GPR_U32(ctx, 31, 0x11D344u);
    ctx->pc = 0x11D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D33Cu;
    // 0x11d340: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x11D33Cu, 0x11D344u)) {
        return;
    }
    ctx->pc = 0x11D344u;
label_11d344:
    // 0x11d344: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x11d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d348: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x11d348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11d34c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x11d34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d350: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x11d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11d354: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x11d354u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x11d358: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x11d358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d35c: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x11d35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d360: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x11d360u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x11d364: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x11d364u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11d368: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x11d368u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x11d36c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x11d36cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x11d370: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x11d370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11d374: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x11d374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d378: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11d378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11d37c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x11d37cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11d380: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x11d380u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11d384: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x11d384u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x11d388: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x11d388u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x11d38c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x11d38cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x11d390: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x11d390u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11d394: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x11d394u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11d398: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x11d398u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11d39c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x11d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11d3a0: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11D3A0u;
    SET_GPR_U32(ctx, 31, 0x11D3A8u);
    ctx->pc = 0x11D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3A0u;
    // 0x11d3a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11D3A0u, 0x11D3A8u)) {
        return;
    }
    ctx->pc = 0x11D3A8u;
label_11d3a8:
    // 0x11d3a8: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D3A8u;
    {
        const bool branch_taken_0x11d3a8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d3a8) {
            ctx->pc = 0x11D3BCu;
            goto label_11d3bc;
        }
    }
    ctx->pc = 0x11D3B0u;
label_11d3b0:
    // 0x11d3b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d3b4: 0x52820036  beql        $s4, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x11D3B4u;
    {
        const bool branch_taken_0x11d3b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x11d3b4) {
            ctx->pc = 0x11D3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D3B4u;
            // 0x11d3b8: 0x8e220134  lw          $v0, 0x134($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D490u;
            goto label_11d490;
        }
    }
    ctx->pc = 0x11D3BCu;
label_11d3bc:
    // 0x11d3bc: 0x6a2300a7  ldl         $v1, 0xA7($s1)
    ctx->pc = 0x11d3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11d3c0: 0x6e2300a0  ldr         $v1, 0xA0($s1)
    ctx->pc = 0x11d3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11d3c4: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x11d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x11d3c8: 0xb2430017  sdl         $v1, 0x17($s2)
    ctx->pc = 0x11d3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d3cc: 0xb6430010  sdr         $v1, 0x10($s2)
    ctx->pc = 0x11d3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d3d0: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x11d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x11d3d4: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x11d3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11d3d8: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x11d3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11d3dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x11d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11d3e0: 0xb2470027  sdl         $a3, 0x27($s2)
    ctx->pc = 0x11d3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d3e4: 0xb6470020  sdr         $a3, 0x20($s2)
    ctx->pc = 0x11d3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d3e8: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x11d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x11d3ec: 0xc6440014  lwc1        $f4, 0x14($s2)
    ctx->pc = 0x11d3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d3f0: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x11d3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d3f4: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x11d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d3f8: 0xc6470028  lwc1        $f7, 0x28($s2)
    ctx->pc = 0x11d3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11d3fc: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x11d3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d400: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x11d400u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11d404: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x11d404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d408: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x11d408u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x11d40c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11d40cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d410: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x11d410u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x11d414: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11d414u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11d418: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x11d418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x11d41c: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x11d41cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x11d420: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x11d420u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x11d424: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11d424u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11d428: 0xe6450000  swc1        $f5, 0x0($s2)
    ctx->pc = 0x11d428u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x11d42c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x11d42cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x11d430: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x11d430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x11d434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d438: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11D438u;
    SET_GPR_U32(ctx, 31, 0x11D440u);
    ctx->pc = 0x11D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D438u;
    // 0x11d43c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11D438u, 0x11D440u)) {
        return;
    }
    ctx->pc = 0x11D440u;
label_11d440:
    // 0x11d440: 0xc6440024  lwc1        $f4, 0x24($s2)
    ctx->pc = 0x11d440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d444: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x11d444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d448: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x11d448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d44c: 0xc6470008  lwc1        $f7, 0x8($s2)
    ctx->pc = 0x11d44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11d450: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x11d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d454: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x11d454u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11d458: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x11d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d45c: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x11d45cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x11d460: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11d460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d464: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x11d464u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x11d468: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11d468u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11d46c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x11d46cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x11d470: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x11d470u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x11d474: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x11d474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x11d478: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11d478u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11d47c: 0xe6450010  swc1        $f5, 0x10($s2)
    ctx->pc = 0x11d47cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x11d480: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x11d480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x11d484: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x11d484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x11d488: 0x8e220134  lw          $v0, 0x134($s1)
    ctx->pc = 0x11d488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x11d48c: 0x0  nop
    ctx->pc = 0x11d48cu;
    // NOP
label_11d490:
    // 0x11d490: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D490u;
    {
        const bool branch_taken_0x11d490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d490) {
            ctx->pc = 0x11D494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D490u;
            // 0x11d494: 0xae200134  sw          $zero, 0x134($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D498u;
            goto label_11d498;
        }
    }
    ctx->pc = 0x11D498u;
label_11d498:
    // 0x11d498: 0xc092d94  jal         func_24B650
    ctx->pc = 0x11D498u;
    SET_GPR_U32(ctx, 31, 0x11D4A0u);
    ctx->pc = 0x11D49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D498u;
    // 0x11d49c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x11D498u, 0x11D4A0u)) {
        return;
    }
    ctx->pc = 0x11D4A0u;
label_11d4a0:
    // 0x11d4a0: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x11D4A0u;
    SET_GPR_U32(ctx, 31, 0x11D4A8u);
    ctx->pc = 0x11D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4A0u;
    // 0x11d4a4: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x11D4A0u, 0x11D4A8u)) {
        return;
    }
    ctx->pc = 0x11D4A8u;
label_11d4a8:
    // 0x11d4a8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x11d4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_11d4ac:
    // 0x11d4ac: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x11d4acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11d4b0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x11d4b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11d4b4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x11d4b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11d4b8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x11d4b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11d4bc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x11d4bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11d4c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11d4c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11d4c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11d4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11d4c8: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x11d4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11d4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4CCu;
        // 0x11d4d0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D4D4u;
    // 0x11d4d4: 0x0  nop
    ctx->pc = 0x11d4d4u;
    // NOP
    ctx->pc = 0x11d4d8u;
}
