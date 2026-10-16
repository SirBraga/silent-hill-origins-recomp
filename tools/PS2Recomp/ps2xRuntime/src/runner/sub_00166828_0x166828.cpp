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

// Function: sub_00166828
// Address: 0x166828 - 0x166e28
void sub_00166828_0x166828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166828_0x166828");
#endif

    switch (ctx->pc) {
        case 0x166878u: goto label_166878;
        case 0x1668ecu: goto label_1668ec;
        case 0x166af0u: goto label_166af0;
        case 0x166afcu: goto label_166afc;
        case 0x166b50u: goto label_166b50;
        case 0x166b84u: goto label_166b84;
        case 0x166b8cu: goto label_166b8c;
        case 0x166c2cu: goto label_166c2c;
        case 0x166df4u: goto label_166df4;
        case 0x166e00u: goto label_166e00;
        case 0x166e08u: goto label_166e08;
        case 0x166e10u: goto label_166e10;
        default: break;
    }

    ctx->pc = 0x166828u;

    // 0x166828: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x166828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16682c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x166830: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x166830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x166834: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x166834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x166838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16683c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x16683cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x166840: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x166840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166844: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x166844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x166848: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x166848u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x16684c: 0x6a220037  ldl         $v0, 0x37($s1)
    ctx->pc = 0x16684cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x166850: 0x6e220030  ldr         $v0, 0x30($s1)
    ctx->pc = 0x166850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x166854: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x166854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x166858: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x166858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16685c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x16685cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166860: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x166860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x166864: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x166864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x166868: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x166868u;
    {
        const bool branch_taken_0x166868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166868u;
        // 0x16686c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166868) {
            ctx->pc = 0x166918u;
            goto label_166918;
        }
    }
    ctx->pc = 0x166870u;
    // 0x166870: 0xc05e396  jal         func_178E58
    ctx->pc = 0x166870u;
    SET_GPR_U32(ctx, 31, 0x166878u);
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x166870u, 0x166878u)) {
        return;
    }
    ctx->pc = 0x166878u;
label_166878:
    // 0x166878: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x166878u;
    {
        const bool branch_taken_0x166878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166878) {
            ctx->pc = 0x16687Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166878u;
            // 0x16687c: 0xc6040000  lwc1        $f4, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16691Cu;
            goto label_16691c;
        }
    }
    ctx->pc = 0x166880u;
    // 0x166880: 0x6a270037  ldl         $a3, 0x37($s1)
    ctx->pc = 0x166880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x166884: 0x6e270030  ldr         $a3, 0x30($s1)
    ctx->pc = 0x166884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x166888: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x166888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x16688c: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x16688cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166890: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x166890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166894: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x166894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x166898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16689c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16689cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1668a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1668a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1668a4: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x1668a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1668a8: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x1668a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1668ac: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1668acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1668b0: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x1668b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1668b4: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x1668b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1668b8: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x1668b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x1668bc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1668bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1668c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1668c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1668c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1668c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1668c8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1668c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1668cc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1668ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1668d0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1668d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1668d4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1668d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1668d8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1668d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1668dc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1668dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1668e0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1668e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1668e4: 0xc086156  jal         func_218558
    ctx->pc = 0x1668E4u;
    SET_GPR_U32(ctx, 31, 0x1668ECu);
    ctx->pc = 0x1668E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668E4u;
    // 0x1668e8: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x1668E4u, 0x1668ECu)) {
        return;
    }
    ctx->pc = 0x1668ECu;
label_1668ec:
    // 0x1668ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1668ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1668f0: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1668F0u;
    {
        const bool branch_taken_0x1668f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1668f0) {
            ctx->pc = 0x1668F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668F0u;
            // 0x1668f4: 0xc6040000  lwc1        $f4, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16691Cu;
            goto label_16691c;
        }
    }
    ctx->pc = 0x1668F8u;
    // 0x1668f8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1668f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1668fc: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x1668fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x166900: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x166900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x166904: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x166904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x166908: 0xb2040007  sdl         $a0, 0x7($s0)
    ctx->pc = 0x166908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16690c: 0xb6040000  sdr         $a0, 0x0($s0)
    ctx->pc = 0x16690cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166910: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x166910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x166914: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x166914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_166918:
    // 0x166918: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x166918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16691c:
    // 0x16691c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x166920: 0x24463f10  addiu       $a2, $v0, 0x3F10
    ctx->pc = 0x166920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16144));
    // 0x166924: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x166924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x166928: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x166928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x16692c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x16692cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x693F18u));
    // 0x166930: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x166930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166934: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x166934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166938: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x166938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x16693c: 0xc6090004  lwc1        $f9, 0x4($s0)
    ctx->pc = 0x16693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x166940: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x166940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x166944: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x166944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x166948: 0x46043002  mul.s       $f0, $f6, $f4
    ctx->pc = 0x166948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x16694c: 0xc6080008  lwc1        $f8, 0x8($s0)
    ctx->pc = 0x16694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x166950: 0x46093842  mul.s       $f1, $f7, $f9
    ctx->pc = 0x166950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x166954: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x166954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x166958: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x166958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16695c: 0x46082a82  mul.s       $f10, $f5, $f8
    ctx->pc = 0x16695cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x166960: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x166960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166964: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x166964u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x166968: 0xc60b000c  lwc1        $f11, 0xC($s0)
    ctx->pc = 0x166968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x16696c: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x16696cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x166970: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x166970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166974: 0x46091a42  mul.s       $f9, $f3, $f9
    ctx->pc = 0x166974u;
    ctx->f[9] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x166978: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x166978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x16697c: 0x46080a02  mul.s       $f8, $f1, $f8
    ctx->pc = 0x16697cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x166980: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x166980u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
    // 0x166984: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x166984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x166988: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x166988u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x16698c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16698cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x166990: 0x0  nop
    ctx->pc = 0x166990u;
    // NOP
    // 0x166994: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x166994u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x166998: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x166998u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16699c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16699cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1669a0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1669a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1669a4: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x1669a4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x1669a8: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1669a8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1669ac: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x1669acu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x1669b0: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x1669b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1669b4: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x1669b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1669b8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1669b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1669bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1669bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1669c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1669c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1669c4: 0x0  nop
    ctx->pc = 0x1669c4u;
    // NOP
    // 0x1669c8: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x1669c8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x1669cc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1669ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1669d0: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x1669d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1669d4: 0x6a070007  ldl         $a3, 0x7($s0)
    ctx->pc = 0x1669d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1669d8: 0x6e070000  ldr         $a3, 0x0($s0)
    ctx->pc = 0x1669d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1669dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1669dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1669e0: 0xb0470017  sdl         $a3, 0x17($v0)
    ctx->pc = 0x1669e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1669e4: 0xb4470010  sdr         $a3, 0x10($v0)
    ctx->pc = 0x1669e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1669e8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1669e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1669ec: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1669ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1669f0: 0x6a260027  ldl         $a2, 0x27($s1)
    ctx->pc = 0x1669f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1669f4: 0x6e260020  ldr         $a2, 0x20($s1)
    ctx->pc = 0x1669f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1669f8: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x1669f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1669fc: 0xb0660027  sdl         $a2, 0x27($v1)
    ctx->pc = 0x1669fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166a00: 0xb4660020  sdr         $a2, 0x20($v1)
    ctx->pc = 0x166a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166a04: 0xac670028  sw          $a3, 0x28($v1)
    ctx->pc = 0x166a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 7));
    // 0x166a08: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x166a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166a0c: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x166a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166a10: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x166a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166a14: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x166a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166a18: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x166a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166a1c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166a20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166a24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166a24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166a28: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x166a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x166a2c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x166a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166a30: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x166a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166a34: 0xc4620028  lwc1        $f2, 0x28($v1)
    ctx->pc = 0x166a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166a38: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x166a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166a3c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x166a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166a40: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166a44: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166a48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166a48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166a4c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x166a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x166a50: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x166a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166a54: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x166a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166a58: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x166a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166a5c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x166a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166a60: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x166a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166a64: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166a64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166a68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166a6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166a6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166a70: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x166a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x166a74: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x166a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166a78: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x166a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166a7c: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x166a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166a80: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x166a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166a84: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x166a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166a88: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166a8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166a90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166a90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166a94: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x166a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x166a98: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x166a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166a9c: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x166a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166aa0: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x166aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166aa4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x166aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166aa8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x166aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166aac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166aacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166ab0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166ab4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166ab4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166ab8: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x166ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x166abc: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x166abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166ac0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x166ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166ac4: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x166ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166ac8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x166ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166acc: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x166accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166ad0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166ad4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166ad8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166ad8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166adc: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x166adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x166ae0: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x166ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166ae4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x166ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x166ae8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x166AE8u;
    SET_GPR_U32(ctx, 31, 0x166AF0u);
    ctx->pc = 0x166AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166AE8u;
    // 0x166aec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x166AE8u, 0x166AF0u)) {
        return;
    }
    ctx->pc = 0x166AF0u;
label_166af0:
    // 0x166af0: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x166af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166af4: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x166AF4u;
    SET_GPR_U32(ctx, 31, 0x166AFCu);
    ctx->pc = 0x166AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166AF4u;
    // 0x166af8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x166AF4u, 0x166AFCu)) {
        return;
    }
    ctx->pc = 0x166AFCu;
label_166afc:
    // 0x166afc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x166afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166b00: 0x68450037  ldl         $a1, 0x37($v0)
    ctx->pc = 0x166b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x166b04: 0x6c450030  ldr         $a1, 0x30($v0)
    ctx->pc = 0x166b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x166b08: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x166b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x166b0c: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x166b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166b10: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x166b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166b14: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x166b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x166b18: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x166b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166b1c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x166b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166b20: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x166b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166b24: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x166b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166b28: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x166b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x166b2c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x166b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x166b30: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x166b30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x166b34: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x166b34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x166b38: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x166b38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x166b3c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x166b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x166b40: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x166b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x166b44: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x166b44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x166b48: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x166B48u;
    SET_GPR_U32(ctx, 31, 0x166B50u);
    ctx->pc = 0x166B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B48u;
    // 0x166b4c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x166B48u, 0x166B50u)) {
        return;
    }
    ctx->pc = 0x166B50u;
label_166b50:
    // 0x166b50: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x166b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166b54: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x166b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166b58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x166b58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x166b5c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x166b5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x166b60: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x166b60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x166b64: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x166b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x166b68: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x166b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x166b6c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x166b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166b70: 0xb0440037  sdl         $a0, 0x37($v0)
    ctx->pc = 0x166b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166b74: 0xb4440030  sdr         $a0, 0x30($v0)
    ctx->pc = 0x166b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166b78: 0xac450038  sw          $a1, 0x38($v0)
    ctx->pc = 0x166b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 5));
    // 0x166b7c: 0xc092d94  jal         func_24B650
    ctx->pc = 0x166B7Cu;
    SET_GPR_U32(ctx, 31, 0x166B84u);
    ctx->pc = 0x166B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B7Cu;
    // 0x166b80: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x166B7Cu, 0x166B84u)) {
        return;
    }
    ctx->pc = 0x166B84u;
label_166b84:
    // 0x166b84: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x166B84u;
    SET_GPR_U32(ctx, 31, 0x166B8Cu);
    ctx->pc = 0x166B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B84u;
    // 0x166b88: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x166B84u, 0x166B8Cu)) {
        return;
    }
    ctx->pc = 0x166B8Cu;
label_166b8c:
    // 0x166b8c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x166b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x166b90: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x166B90u;
    {
        const bool branch_taken_0x166b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b90) {
            ctx->pc = 0x166B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166B90u;
            // 0x166b94: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166C30u;
            goto label_166c30;
        }
    }
    ctx->pc = 0x166B98u;
    // 0x166b98: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x166b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x166b9c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x166b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x166ba0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x166ba4: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x166ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x166ba8: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x166ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x166bac: 0x6865001f  ldl         $a1, 0x1F($v1)
    ctx->pc = 0x166bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x166bb0: 0x6c650018  ldr         $a1, 0x18($v1)
    ctx->pc = 0x166bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x166bb4: 0x68660027  ldl         $a2, 0x27($v1)
    ctx->pc = 0x166bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x166bb8: 0x6c660020  ldr         $a2, 0x20($v1)
    ctx->pc = 0x166bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x166bbc: 0x6867002f  ldl         $a3, 0x2F($v1)
    ctx->pc = 0x166bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x166bc0: 0x6c670028  ldr         $a3, 0x28($v1)
    ctx->pc = 0x166bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x166bc4: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x166bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166bc8: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x166bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166bcc: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x166bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166bd0: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x166bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166bd4: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x166bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166bd8: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x166bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166bdc: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x166bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166be0: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x166be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166be4: 0x68620037  ldl         $v0, 0x37($v1)
    ctx->pc = 0x166be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x166be8: 0x6c620030  ldr         $v0, 0x30($v1)
    ctx->pc = 0x166be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x166bec: 0x6865003f  ldl         $a1, 0x3F($v1)
    ctx->pc = 0x166becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x166bf0: 0x6c650038  ldr         $a1, 0x38($v1)
    ctx->pc = 0x166bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x166bf4: 0x68660047  ldl         $a2, 0x47($v1)
    ctx->pc = 0x166bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x166bf8: 0x6c660040  ldr         $a2, 0x40($v1)
    ctx->pc = 0x166bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x166bfc: 0x6867004f  ldl         $a3, 0x4F($v1)
    ctx->pc = 0x166bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x166c00: 0x6c670048  ldr         $a3, 0x48($v1)
    ctx->pc = 0x166c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x166c04: 0xb0820027  sdl         $v0, 0x27($a0)
    ctx->pc = 0x166c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c08: 0xb4820020  sdr         $v0, 0x20($a0)
    ctx->pc = 0x166c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c0c: 0xb085002f  sdl         $a1, 0x2F($a0)
    ctx->pc = 0x166c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c10: 0xb4850028  sdr         $a1, 0x28($a0)
    ctx->pc = 0x166c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c14: 0xb0860037  sdl         $a2, 0x37($a0)
    ctx->pc = 0x166c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c18: 0xb4860030  sdr         $a2, 0x30($a0)
    ctx->pc = 0x166c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c1c: 0xb087003f  sdl         $a3, 0x3F($a0)
    ctx->pc = 0x166c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c20: 0xb4870038  sdr         $a3, 0x38($a0)
    ctx->pc = 0x166c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c24: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x166C24u;
    SET_GPR_U32(ctx, 31, 0x166C2Cu);
    ctx->pc = 0x166C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C24u;
    // 0x166c28: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x166C24u, 0x166C2Cu)) {
        return;
    }
    ctx->pc = 0x166C2Cu;
label_166c2c:
    // 0x166c2c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x166c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_166c30:
    // 0x166c30: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x166c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166c34: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x166c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x166c38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x166c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x166c3c: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x166c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x166c40: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x166c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x166c44: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x166c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x166c48: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x166c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x166c4c: 0x68460017  ldl         $a2, 0x17($v0)
    ctx->pc = 0x166c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x166c50: 0x6c460010  ldr         $a2, 0x10($v0)
    ctx->pc = 0x166c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x166c54: 0x6847001f  ldl         $a3, 0x1F($v0)
    ctx->pc = 0x166c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x166c58: 0x6c470018  ldr         $a3, 0x18($v0)
    ctx->pc = 0x166c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x166c5c: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x166c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c60: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x166c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c64: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x166c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c68: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x166c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c6c: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x166c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c70: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x166c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c74: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x166c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c78: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x166c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166c7c: 0x68440027  ldl         $a0, 0x27($v0)
    ctx->pc = 0x166c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x166c80: 0x6c440020  ldr         $a0, 0x20($v0)
    ctx->pc = 0x166c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x166c84: 0x6845002f  ldl         $a1, 0x2F($v0)
    ctx->pc = 0x166c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x166c88: 0x6c450028  ldr         $a1, 0x28($v0)
    ctx->pc = 0x166c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x166c8c: 0x68460037  ldl         $a2, 0x37($v0)
    ctx->pc = 0x166c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x166c90: 0x6c460030  ldr         $a2, 0x30($v0)
    ctx->pc = 0x166c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x166c94: 0x6847003f  ldl         $a3, 0x3F($v0)
    ctx->pc = 0x166c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x166c98: 0x6c470038  ldr         $a3, 0x38($v0)
    ctx->pc = 0x166c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x166c9c: 0xb0640027  sdl         $a0, 0x27($v1)
    ctx->pc = 0x166c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166ca0: 0xb4640020  sdr         $a0, 0x20($v1)
    ctx->pc = 0x166ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166ca4: 0xb065002f  sdl         $a1, 0x2F($v1)
    ctx->pc = 0x166ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166ca8: 0xb4650028  sdr         $a1, 0x28($v1)
    ctx->pc = 0x166ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166cac: 0xb0660037  sdl         $a2, 0x37($v1)
    ctx->pc = 0x166cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166cb0: 0xb4660030  sdr         $a2, 0x30($v1)
    ctx->pc = 0x166cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166cb4: 0xb067003f  sdl         $a3, 0x3F($v1)
    ctx->pc = 0x166cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166cb8: 0xb4670038  sdr         $a3, 0x38($v1)
    ctx->pc = 0x166cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166cbc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x166cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166cc0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x166cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x166cc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x166cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x166cc8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x166cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166ccc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x166cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x166cd0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x166cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x166cd4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x166cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x166cd8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x166cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166cdc: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x166cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x166ce0: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x166ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x166ce4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x166ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x166ce8: 0xb0830017  sdl         $v1, 0x17($a0)
    ctx->pc = 0x166ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166cec: 0xb4830010  sdr         $v1, 0x10($a0)
    ctx->pc = 0x166cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166cf0: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x166cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x166cf4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x166cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166cf8: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x166cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x166cfc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x166cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166d00: 0xe4420024  swc1        $f2, 0x24($v0)
    ctx->pc = 0x166d00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x166d04: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x166d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166d08: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x166d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x166d0c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x166d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166d10: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x166d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166d14: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x166d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166d18: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x166d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166d1c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x166d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166d20: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166d20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166d24: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166d28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166d28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166d2c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x166d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x166d30: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x166d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166d34: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x166d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166d38: 0xc4620028  lwc1        $f2, 0x28($v1)
    ctx->pc = 0x166d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166d3c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x166d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166d40: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x166d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166d44: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166d44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166d48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166d4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166d4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166d50: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x166d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x166d54: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x166d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166d58: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x166d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166d5c: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x166d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166d60: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x166d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166d64: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x166d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166d68: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166d68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166d6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166d70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166d70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166d74: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x166d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x166d78: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x166d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166d7c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x166d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166d80: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x166d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166d84: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x166d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166d88: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x166d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166d8c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166d90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166d94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166d94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166d98: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x166d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x166d9c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x166d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166da0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x166da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166da4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x166da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166da8: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x166da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166dac: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x166dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166db0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166db0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166db4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166db8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166db8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166dbc: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x166dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x166dc0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x166dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166dc4: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x166dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166dc8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x166dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166dcc: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x166dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166dd0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x166dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166dd4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x166dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x166dd8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x166dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x166ddc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x166ddcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x166de0: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x166de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x166de4: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x166de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166de8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x166de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x166dec: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x166DECu;
    SET_GPR_U32(ctx, 31, 0x166DF4u);
    ctx->pc = 0x166DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DECu;
    // 0x166df0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x166DECu, 0x166DF4u)) {
        return;
    }
    ctx->pc = 0x166DF4u;
label_166df4:
    // 0x166df4: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x166df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166df8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x166DF8u;
    SET_GPR_U32(ctx, 31, 0x166E00u);
    ctx->pc = 0x166DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DF8u;
    // 0x166dfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x166DF8u, 0x166E00u)) {
        return;
    }
    ctx->pc = 0x166E00u;
label_166e00:
    // 0x166e00: 0xc092d94  jal         func_24B650
    ctx->pc = 0x166E00u;
    SET_GPR_U32(ctx, 31, 0x166E08u);
    ctx->pc = 0x166E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E00u;
    // 0x166e04: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x166E00u, 0x166E08u)) {
        return;
    }
    ctx->pc = 0x166E08u;
label_166e08:
    // 0x166e08: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x166E08u;
    SET_GPR_U32(ctx, 31, 0x166E10u);
    ctx->pc = 0x166E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E08u;
    // 0x166e0c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x166E08u, 0x166E10u)) {
        return;
    }
    ctx->pc = 0x166E10u;
label_166e10:
    // 0x166e10: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x166e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x166e14: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x166e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x166e18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x166e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x166e1c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x166e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x166e20: 0x3e00008  jr          $ra
    ctx->pc = 0x166E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E20u;
        // 0x166e24: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166E28u;
}
