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

// Function: sub_002157B8
// Address: 0x2157b8 - 0x215dd8
void sub_002157B8_0x2157b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002157B8_0x2157b8");
#endif

    switch (ctx->pc) {
        case 0x215864u: goto label_215864;
        case 0x2158a0u: goto label_2158a0;
        case 0x2158e8u: goto label_2158e8;
        case 0x215b28u: goto label_215b28;
        case 0x215b64u: goto label_215b64;
        case 0x215b78u: goto label_215b78;
        case 0x215ba0u: goto label_215ba0;
        case 0x215c08u: goto label_215c08;
        case 0x215c70u: goto label_215c70;
        case 0x215d34u: goto label_215d34;
        default: break;
    }

    ctx->pc = 0x2157b8u;

    // 0x2157b8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2157b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2157bc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x2157bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x2157c0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2157c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2157c4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2157c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2157c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2157c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157cc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2157ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2157d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2157d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157d4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2157d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2157d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2157d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157dc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2157dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2157e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2157e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2157e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2157e8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2157e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157ec: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2157ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2157f0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2157f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2157f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2157f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2157f8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2157f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x2157fc: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2157fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x215800: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x215800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x215804: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x215804u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x215808: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x215808u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x21580c: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x21580cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33830Cu));
    // 0x215810: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x215810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x215814: 0x8c620198  lw          $v0, 0x198($v1)
    ctx->pc = 0x215814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x215818: 0x94890004  lhu         $t1, 0x4($a0)
    ctx->pc = 0x215818u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21581c: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x21581cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x215820: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x215820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x215824: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x215824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215828: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x215828u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21582c: 0x0  nop
    ctx->pc = 0x21582cu;
    // NOP
    // 0x215830: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x215834: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x215834u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x215838: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215838u;
    {
        const bool branch_taken_0x215838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215838u;
        // 0x21583c: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215838) {
            ctx->pc = 0x21584Cu;
            goto label_21584c;
        }
    }
    ctx->pc = 0x215840u;
    // 0x215840: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x215840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x215844: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x215844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x215848: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x215848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21584c:
    // 0x21584c: 0x0  nop
    ctx->pc = 0x21584cu;
    // NOP
    // 0x215850: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x215850u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x215854: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x215854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x215858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21585c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x21585Cu;
    SET_GPR_U32(ctx, 31, 0x215864u);
    ctx->pc = 0x215860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21585Cu;
    // 0x215860: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x21585Cu, 0x215864u)) {
        return;
    }
    ctx->pc = 0x215864u;
label_215864:
    // 0x215864: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x215864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215868: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x215868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21586c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x21586cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x215870: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x215870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x215874: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x215874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x215878: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x215878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21587c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x21587cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215880: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x215880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215884: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x215884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x215888: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x215888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21588c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x21588cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x215890: 0x12200142  beqz        $s1, . + 4 + (0x142 << 2)
    ctx->pc = 0x215890u;
    {
        const bool branch_taken_0x215890 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x215894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215890u;
        // 0x215894: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215890) {
            ctx->pc = 0x215D9Cu;
            goto label_215d9c;
        }
    }
    ctx->pc = 0x215898u;
    // 0x215898: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x215898u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21589c: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x21589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_2158a0:
    // 0x2158a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2158a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158a4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2158a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2158a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2158a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2158acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2158b0: 0x8e180278  lw          $t8, 0x278($s0)
    ctx->pc = 0x2158b0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x2158b4: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x2158b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    // 0x2158b8: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x2158b8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x2158bc: 0x122000fc  beqz        $s1, . + 4 + (0xFC << 2)
    ctx->pc = 0x2158BCu;
    {
        const bool branch_taken_0x2158bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158BCu;
        // 0x2158c0: 0x8e190284  lw          $t9, 0x284($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158bc) {
            ctx->pc = 0x215CB0u;
            goto label_215cb0;
        }
    }
    ctx->pc = 0x2158C4u;
    // 0x2158c4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2158c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2158c8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x2158c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x2158cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2158ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2158d0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2158d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2158d4: 0x245702a0  addiu       $s7, $v0, 0x2A0
    ctx->pc = 0x2158d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x2158d8: 0x246d2d40  addiu       $t5, $v1, 0x2D40
    ctx->pc = 0x2158d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 11584));
    // 0x2158dc: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x2158dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2158e0: 0x3c0e005c  lui         $t6, 0x5C
    ctx->pc = 0x2158e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)92 << 16));
    // 0x2158e4: 0x0  nop
    ctx->pc = 0x2158e4u;
    // NOP
label_2158e8:
    // 0x2158e8: 0x8e070264  lw          $a3, 0x264($s0)
    ctx->pc = 0x2158e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x2158ec: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x2158ecu;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
    // 0x2158f0: 0x9208025c  lbu         $t0, 0x25C($s0)
    ctx->pc = 0x2158f0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x2158f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2158f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158f8: 0x2271021  addu        $v0, $s1, $a3
    ctx->pc = 0x2158f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2158fc: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2158fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215900: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x215900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215904: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x215904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x215908: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x215908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x21590c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x21590cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x215910: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x215910u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215914: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x215914u;
    {
        const bool branch_taken_0x215914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215914u;
        // 0x215918: 0xa7a40020  sh          $a0, 0x20($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215914) {
            ctx->pc = 0x215928u;
            goto label_215928;
        }
    }
    ctx->pc = 0x21591Cu;
    // 0x21591c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x21591cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215920: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x215920u;
    {
        const bool branch_taken_0x215920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215920u;
        // 0x215924: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215920) {
            ctx->pc = 0x215AB4u;
            goto label_215ab4;
        }
    }
    ctx->pc = 0x215928u;
label_215928:
    // 0x215928: 0x8e060260  lw          $a2, 0x260($s0)
    ctx->pc = 0x215928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x21592c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x21592cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215930: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x215930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215934: 0x144f0003  bne         $v0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x215934u;
    {
        const bool branch_taken_0x215934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x215938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215934u;
        // 0x215938: 0x2268821  addu        $s1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215934) {
            ctx->pc = 0x215944u;
            goto label_215944;
        }
    }
    ctx->pc = 0x21593Cu;
    // 0x21593c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x21593Cu;
    {
        const bool branch_taken_0x21593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21593Cu;
        // 0x215940: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21593c) {
            ctx->pc = 0x215AB4u;
            goto label_215ab4;
        }
    }
    ctx->pc = 0x215944u;
label_215944:
    // 0x215944: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x215944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x215948: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x215948u;
    {
        const bool branch_taken_0x215948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215948) {
            ctx->pc = 0x21594Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215948u;
            // 0x21594c: 0x9602002c  lhu         $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215A68u;
            goto label_215a68;
        }
    }
    ctx->pc = 0x215950u;
    // 0x215950: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x215950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x215954: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x215954u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215958: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x215958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21595c: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x21595cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x215960: 0x97a70020  lhu         $a3, 0x20($sp)
    ctx->pc = 0x215960u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215964: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x215964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x215968: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x215968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21596c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x21596cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x215970: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x215970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x215974: 0x10fe001b  beq         $a3, $fp, . + 4 + (0x1B << 2)
    ctx->pc = 0x215974u;
    {
        const bool branch_taken_0x215974 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 30));
        ctx->pc = 0x215978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215974u;
        // 0x215978: 0x3066ffff  andi        $a2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215974) {
            ctx->pc = 0x2159E4u;
            goto label_2159e4;
        }
    }
    ctx->pc = 0x21597Cu;
    // 0x21597c: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x21597cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x215980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215980u;
    {
        const bool branch_taken_0x215980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215980u;
        // 0x215984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215980) {
            ctx->pc = 0x215998u;
            goto label_215998;
        }
    }
    ctx->pc = 0x215988u;
    // 0x215988: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x215988u;
    {
        const bool branch_taken_0x215988 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x21598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215988u;
        // 0x21598c: 0x97ab0020  lhu         $t3, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215988) {
            ctx->pc = 0x2159B4u;
            goto label_2159b4;
        }
    }
    ctx->pc = 0x215990u;
    // 0x215990: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x215990u;
    {
        const bool branch_taken_0x215990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215990u;
        // 0x215994: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215990) {
            ctx->pc = 0x215AB4u;
            goto label_215ab4;
        }
    }
    ctx->pc = 0x215998u;
label_215998:
    // 0x215998: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x215998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21599c: 0x10e20013  beq         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21599Cu;
    {
        const bool branch_taken_0x21599c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2159A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21599Cu;
        // 0x2159a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21599c) {
            ctx->pc = 0x2159ECu;
            goto label_2159ec;
        }
    }
    ctx->pc = 0x2159A4u;
    // 0x2159a4: 0x10e20025  beq         $a3, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2159A4u;
    {
        const bool branch_taken_0x2159a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2159A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159A4u;
        // 0x2159a8: 0x97ab0020  lhu         $t3, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159a4) {
            ctx->pc = 0x215A3Cu;
            goto label_215a3c;
        }
    }
    ctx->pc = 0x2159ACu;
    // 0x2159ac: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2159ACu;
    {
        const bool branch_taken_0x2159ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159ACu;
        // 0x2159b0: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159ac) {
            ctx->pc = 0x215AB4u;
            goto label_215ab4;
        }
    }
    ctx->pc = 0x2159B4u;
label_2159b4:
    // 0x2159b4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2159B4u;
    {
        const bool branch_taken_0x2159b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159B4u;
        // 0x2159b8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159b4) {
            ctx->pc = 0x2159D0u;
            goto label_2159d0;
        }
    }
    ctx->pc = 0x2159BCu;
    // 0x2159bc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2159bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2159c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2159c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2159c4: 0xae030280  sw          $v1, 0x280($s0)
    ctx->pc = 0x2159c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 3));
    // 0x2159c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2159C8u;
    {
        const bool branch_taken_0x2159c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159C8u;
        // 0x2159cc: 0xae030284  sw          $v1, 0x284($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159c8) {
            ctx->pc = 0x2159DCu;
            goto label_2159dc;
        }
    }
    ctx->pc = 0x2159D0u;
label_2159d0:
    // 0x2159d0: 0x8e02027c  lw          $v0, 0x27C($s0)
    ctx->pc = 0x2159d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x2159d4: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x2159d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
    // 0x2159d8: 0xae020284  sw          $v0, 0x284($s0)
    ctx->pc = 0x2159d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
label_2159dc:
    // 0x2159dc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2159DCu;
    {
        const bool branch_taken_0x2159dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159DCu;
        // 0x2159e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159dc) {
            ctx->pc = 0x215AACu;
            goto label_215aac;
        }
    }
    ctx->pc = 0x2159E4u;
label_2159e4:
    // 0x2159e4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2159E4u;
    {
        const bool branch_taken_0x2159e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159E4u;
        // 0x2159e8: 0xa7a00020  sh          $zero, 0x20($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159e4) {
            ctx->pc = 0x215AACu;
            goto label_215aac;
        }
    }
    ctx->pc = 0x2159ECu;
label_2159ec:
    // 0x2159ec: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2159ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2159f0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2159f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2159f4: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2159f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2159f8: 0xae040274  sw          $a0, 0x274($s0)
    ctx->pc = 0x2159f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 4));
    // 0x2159fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2159fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215a00: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x215a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x215a04: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x215a04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x215a08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215a0c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x215a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215a10: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x215a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x215a14: 0xae170280  sw          $s7, 0x280($s0)
    ctx->pc = 0x215a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 23));
    // 0x215a18: 0x8c62830c  lw          $v0, -0x7CF4($v1)
    ctx->pc = 0x215a18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33830Cu));
    // 0x215a1c: 0x8c430198  lw          $v1, 0x198($v0)
    ctx->pc = 0x215a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x215a20: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x215A20u;
    {
        const bool branch_taken_0x215a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215a20) {
            ctx->pc = 0x215A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215A20u;
            // 0x215a24: 0x46002882  mul.s       $f2, $f5, $f0 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x215AACu;
            goto label_215aac;
        }
    }
    ctx->pc = 0x215A28u;
    // 0x215a28: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x215a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x215a2c: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x215a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x215a30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215a34: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x215A34u;
    {
        const bool branch_taken_0x215a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A34u;
        // 0x215a38: 0x46002882  mul.s       $f2, $f5, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a34) {
            ctx->pc = 0x215AACu;
            goto label_215aac;
        }
    }
    ctx->pc = 0x215A3Cu;
label_215a3c:
    // 0x215a3c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x215a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x215a40: 0x8c4302a8  lw          $v1, 0x2A8($v0)
    ctx->pc = 0x215a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C02A8u));
    // 0x215a44: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x215A44u;
    {
        const bool branch_taken_0x215a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A44u;
        // 0x215a48: 0x8dc202a4  lw          $v0, 0x2A4($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a44) {
            ctx->pc = 0x215AACu;
            goto label_215aac;
        }
    }
    ctx->pc = 0x215A4Cu;
    // 0x215a4c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x215A4Cu;
    {
        const bool branch_taken_0x215a4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x215A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A4Cu;
        // 0x215a50: 0xae020274  sw          $v0, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a4c) {
            ctx->pc = 0x215A5Cu;
            goto label_215a5c;
        }
    }
    ctx->pc = 0x215A54u;
    // 0x215a54: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x215a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x215a58: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x215a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
label_215a5c:
    // 0x215a5c: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x215a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x215a60: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x215A60u;
    {
        const bool branch_taken_0x215a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A60u;
        // 0x215a64: 0xae020278  sw          $v0, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a60) {
            ctx->pc = 0x215AACu;
            goto label_215aac;
        }
    }
    ctx->pc = 0x215A68u;
label_215a68:
    // 0x215a68: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x215a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x215a6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215A6Cu;
    {
        const bool branch_taken_0x215a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A6Cu;
        // 0x215a70: 0x97a20020  lhu         $v0, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a6c) {
            ctx->pc = 0x215A84u;
            goto label_215a84;
        }
    }
    ctx->pc = 0x215A74u;
    // 0x215a74: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x215a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x215a78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215a7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215a80: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x215a80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_215a84:
    // 0x215a84: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x215A84u;
    {
        const bool branch_taken_0x215a84 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A84u;
        // 0x215a88: 0x8dc202a4  lw          $v0, 0x2A4($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a84) {
            ctx->pc = 0x215AACu;
            goto label_215aac;
        }
    }
    ctx->pc = 0x215A8Cu;
    // 0x215a8c: 0x8e030274  lw          $v1, 0x274($s0)
    ctx->pc = 0x215a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x215a90: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215A90u;
    {
        const bool branch_taken_0x215a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x215A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A90u;
        // 0x215a94: 0x97ab0020  lhu         $t3, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a90) {
            ctx->pc = 0x215AB0u;
            goto label_215ab0;
        }
    }
    ctx->pc = 0x215A98u;
    // 0x215a98: 0x91220006  lbu         $v0, 0x6($t1)
    ctx->pc = 0x215a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x215a9c: 0xa1a20006  sb          $v0, 0x6($t5)
    ctx->pc = 0x215a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x215aa0: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x215aa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x215aa4: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x215aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215aa8: 0xa5a30002  sh          $v1, 0x2($t5)
    ctx->pc = 0x215aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 3));
label_215aac:
    // 0x215aac: 0x97ab0020  lhu         $t3, 0x20($sp)
    ctx->pc = 0x215aacu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_215ab0:
    // 0x215ab0: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x215ab0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_215ab4:
    // 0x215ab4: 0x3162ffff  andi        $v0, $t3, 0xFFFF
    ctx->pc = 0x215ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x215ab8: 0x5040007d  beql        $v0, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x215AB8u;
    {
        const bool branch_taken_0x215ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215ab8) {
            ctx->pc = 0x215ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215AB8u;
            // 0x215abc: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215CB0u;
            goto label_215cb0;
        }
    }
    ctx->pc = 0x215AC0u;
    // 0x215ac0: 0x144f0003  bne         $v0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x215AC0u;
    {
        const bool branch_taken_0x215ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x215ac0) {
            ctx->pc = 0x215AD0u;
            goto label_215ad0;
        }
    }
    ctx->pc = 0x215AC8u;
    // 0x215ac8: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x215AC8u;
    {
        const bool branch_taken_0x215ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AC8u;
        // 0x215acc: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ac8) {
            ctx->pc = 0x215CB0u;
            goto label_215cb0;
        }
    }
    ctx->pc = 0x215AD0u;
label_215ad0:
    // 0x215ad0: 0x11800044  beqz        $t4, . + 4 + (0x44 << 2)
    ctx->pc = 0x215AD0u;
    {
        const bool branch_taken_0x215ad0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AD0u;
        // 0x215ad4: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ad0) {
            ctx->pc = 0x215BE4u;
            goto label_215be4;
        }
    }
    ctx->pc = 0x215AD8u;
    // 0x215ad8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x215ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x215adc: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x215adcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C02ACu));
    // 0x215ae0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x215AE0u;
    {
        const bool branch_taken_0x215ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AE0u;
        // 0x215ae4: 0x3164ffff  andi        $a0, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ae0) {
            ctx->pc = 0x215BC8u;
            goto label_215bc8;
        }
    }
    ctx->pc = 0x215AE8u;
    // 0x215ae8: 0x8e090264  lw          $t1, 0x264($s0)
    ctx->pc = 0x215ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x215aec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x215aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215af0: 0x9208025c  lbu         $t0, 0x25C($s0)
    ctx->pc = 0x215af0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x215af4: 0x2291821  addu        $v1, $s1, $t1
    ctx->pc = 0x215af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x215af8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x215af8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215afc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x215afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215b00: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x215b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x215b04: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x215b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x215b08: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x215b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x215b0c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x215b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x215b10: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x215b10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x215b14: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x215B14u;
    {
        const bool branch_taken_0x215b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B14u;
        // 0x215b18: 0x97aa0020  lhu         $t2, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b14) {
            ctx->pc = 0x215B54u;
            goto label_215b54;
        }
    }
    ctx->pc = 0x215B1Cu;
    // 0x215b1c: 0x8e070260  lw          $a3, 0x260($s0)
    ctx->pc = 0x215b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x215b20: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x215b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x215b24: 0x0  nop
    ctx->pc = 0x215b24u;
    // NOP
label_215b28:
    // 0x215b28: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x215b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x215b2c: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x215b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x215b30: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x215b30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x215b34: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x215b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215b38: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x215b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x215b3c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x215b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x215b40: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x215b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x215b44: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x215b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x215b48: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x215b48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x215b4c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x215B4Cu;
    {
        const bool branch_taken_0x215b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x215b4c) {
            ctx->pc = 0x215B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215B4Cu;
            // 0x215b50: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215b28;
        }
    }
    ctx->pc = 0x215B54u;
label_215b54:
    // 0x215b54: 0x2542ffd0  addiu       $v0, $t2, -0x30
    ctx->pc = 0x215b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967248));
    // 0x215b58: 0x2c42004b  sltiu       $v0, $v0, 0x4B
    ctx->pc = 0x215b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)75) ? 1 : 0);
    // 0x215b5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215B5Cu;
    {
        const bool branch_taken_0x215b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B5Cu;
        // 0x215b60: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b5c) {
            ctx->pc = 0x215B6Cu;
            goto label_215b6c;
        }
    }
    ctx->pc = 0x215B64u;
label_215b64:
    // 0x215b64: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x215B64u;
    {
        const bool branch_taken_0x215b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B64u;
        // 0x215b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b64) {
            ctx->pc = 0x215BBCu;
            goto label_215bbc;
        }
    }
    ctx->pc = 0x215B6Cu;
label_215b6c:
    // 0x215b6c: 0x94436530  lhu         $v1, 0x6530($v0)
    ctx->pc = 0x215b6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 25904)));
    // 0x215b70: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x215B70u;
    {
        const bool branch_taken_0x215b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B70u;
        // 0x215b74: 0x24466530  addiu       $a2, $v0, 0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b70) {
            ctx->pc = 0x215B90u;
            goto label_215b90;
        }
    }
    ctx->pc = 0x215B78u;
label_215b78:
    // 0x215b78: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x215b78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x215b7c: 0x1082fff9  beq         $a0, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x215B7Cu;
    {
        const bool branch_taken_0x215b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x215B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B7Cu;
        // 0x215b80: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b7c) {
            ctx->pc = 0x215B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215b64;
        }
    }
    ctx->pc = 0x215B84u;
    // 0x215b84: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x215b84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x215b88: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x215B88u;
    {
        const bool branch_taken_0x215b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215b88) {
            ctx->pc = 0x215B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215b78;
        }
    }
    ctx->pc = 0x215B90u;
label_215b90:
    // 0x215b90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x215b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x215b94: 0x94436560  lhu         $v1, 0x6560($v0)
    ctx->pc = 0x215b94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x6A6560u));
    // 0x215b98: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x215B98u;
    {
        const bool branch_taken_0x215b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B98u;
        // 0x215b9c: 0x24446560  addiu       $a0, $v0, 0x6560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b98) {
            ctx->pc = 0x215BB8u;
            goto label_215bb8;
        }
    }
    ctx->pc = 0x215BA0u;
label_215ba0:
    // 0x215ba0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x215ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215ba4: 0x1142ffef  beq         $t2, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x215BA4u;
    {
        const bool branch_taken_0x215ba4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x215BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BA4u;
        // 0x215ba8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ba4) {
            ctx->pc = 0x215B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215b64;
        }
    }
    ctx->pc = 0x215BACu;
    // 0x215bac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x215bacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215bb0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x215BB0u;
    {
        const bool branch_taken_0x215bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215bb0) {
            ctx->pc = 0x215BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215ba0;
        }
    }
    ctx->pc = 0x215BB8u;
label_215bb8:
    // 0x215bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215bbc:
    // 0x215bbc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x215BBCu;
    {
        const bool branch_taken_0x215bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215bbc) {
            ctx->pc = 0x215BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215BBCu;
            // 0x215bc0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215BE0u;
            goto label_215be0;
        }
    }
    ctx->pc = 0x215BC4u;
    // 0x215bc4: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x215bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_215bc8:
    // 0x215bc8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x215bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x215bcc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215BCCu;
    {
        const bool branch_taken_0x215bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x215BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BCCu;
        // 0x215bd0: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bcc) {
            ctx->pc = 0x215BDCu;
            goto label_215bdc;
        }
    }
    ctx->pc = 0x215BD4u;
    // 0x215bd4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215BD4u;
    {
        const bool branch_taken_0x215bd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x215bd4) {
            ctx->pc = 0x215BE4u;
            goto label_215be4;
        }
    }
    ctx->pc = 0x215BDCu;
label_215bdc:
    // 0x215bdc: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x215bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215be0:
    // 0x215be0: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x215be0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
label_215be4:
    // 0x215be4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x215be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215be8: 0x0  nop
    ctx->pc = 0x215be8u;
    // NOP
    // 0x215bec: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x215BECu;
    {
        const bool branch_taken_0x215bec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215bec) {
            ctx->pc = 0x215C1Cu;
            goto label_215c1c;
        }
    }
    ctx->pc = 0x215BF4u;
    // 0x215bf4: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x215BF4u;
    {
        const bool branch_taken_0x215bf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x215BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BF4u;
        // 0x215bf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bf4) {
            ctx->pc = 0x215CB4u;
            goto label_215cb4;
        }
    }
    ctx->pc = 0x215BFCu;
    // 0x215bfc: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x215bfcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
    // 0x215c00: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x215C00u;
    {
        const bool branch_taken_0x215c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C00u;
        // 0x215c04: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c00) {
            ctx->pc = 0x215CB4u;
            goto label_215cb4;
        }
    }
    ctx->pc = 0x215C08u;
label_215c08:
    // 0x215c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215c0c: 0x0  nop
    ctx->pc = 0x215c0cu;
    // NOP
    // 0x215c10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x215c14: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x215C14u;
    {
        const bool branch_taken_0x215c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C14u;
        // 0x215c18: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c14) {
            ctx->pc = 0x215CA0u;
            goto label_215ca0;
        }
    }
    ctx->pc = 0x215C1Cu;
label_215c1c:
    // 0x215c1c: 0x11800022  beqz        $t4, . + 4 + (0x22 << 2)
    ctx->pc = 0x215C1Cu;
    {
        const bool branch_taken_0x215c1c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C1Cu;
        // 0x215c20: 0x97a70020  lhu         $a3, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c1c) {
            ctx->pc = 0x215CA8u;
            goto label_215ca8;
        }
    }
    ctx->pc = 0x215C24u;
    // 0x215c24: 0x85820002  lh          $v0, 0x2($t4)
    ctx->pc = 0x215c24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x215c28: 0x81830006  lb          $v1, 0x6($t4)
    ctx->pc = 0x215c28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x215c2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215c30: 0x0  nop
    ctx->pc = 0x215c30u;
    // NOP
    // 0x215c34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x215c38: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x215C38u;
    {
        const bool branch_taken_0x215c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C38u;
        // 0x215c3c: 0x46020042  mul.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c38) {
            ctx->pc = 0x215CA4u;
            goto label_215ca4;
        }
    }
    ctx->pc = 0x215C40u;
    // 0x215c40: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x215c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x215c44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x215C44u;
    {
        const bool branch_taken_0x215c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C44u;
        // 0x215c48: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c44) {
            ctx->pc = 0x215C94u;
            goto label_215c94;
        }
    }
    ctx->pc = 0x215C4Cu;
    // 0x215c4c: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x215c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x215c50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x215c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c54: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x215c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x215c58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x215c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x215c5c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x215c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x215c60: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x215c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c64: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x215c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x215c68: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x215C68u;
    {
        const bool branch_taken_0x215c68 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x215C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C68u;
        // 0x215c6c: 0x8c43005c  lw          $v1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c68) {
            ctx->pc = 0x215C94u;
            goto label_215c94;
        }
    }
    ctx->pc = 0x215C70u;
label_215c70:
    // 0x215c70: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x215c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215c74: 0x14480004  bne         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215C74u;
    {
        const bool branch_taken_0x215c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x215C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C74u;
        // 0x215c78: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c74) {
            ctx->pc = 0x215C88u;
            goto label_215c88;
        }
    }
    ctx->pc = 0x215C7Cu;
    // 0x215c7c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x215c7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x215c80: 0x5054ffe1  beql        $v0, $s4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x215C80u;
    {
        const bool branch_taken_0x215c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x215c80) {
            ctx->pc = 0x215C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215C80u;
            // 0x215c84: 0x84620004  lh          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215c08;
        }
    }
    ctx->pc = 0x215C88u;
label_215c88:
    // 0x215c88: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x215c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x215c8c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x215C8Cu;
    {
        const bool branch_taken_0x215c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C8Cu;
        // 0x215c90: 0x24630006  addiu       $v1, $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c8c) {
            ctx->pc = 0x215C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215c70;
        }
    }
    ctx->pc = 0x215C94u;
label_215c94:
    // 0x215c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x215c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215c98: 0x0  nop
    ctx->pc = 0x215c98u;
    // NOP
    // 0x215c9c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x215c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_215ca0:
    // 0x215ca0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215ca0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_215ca4:
    // 0x215ca4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x215ca4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_215ca8:
    // 0x215ca8: 0x1620ff0f  bnez        $s1, . + 4 + (-0xF1 << 2)
    ctx->pc = 0x215CA8u;
    {
        const bool branch_taken_0x215ca8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x215CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CA8u;
        // 0x215cac: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ca8) {
            ctx->pc = 0x2158E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2158e8;
        }
    }
    ctx->pc = 0x215CB0u;
label_215cb0:
    // 0x215cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215cb4:
    // 0x215cb4: 0x12a20008  beq         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x215CB4u;
    {
        const bool branch_taken_0x215cb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x215CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CB4u;
        // 0x215cb8: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cb4) {
            ctx->pc = 0x215CD8u;
            goto label_215cd8;
        }
    }
    ctx->pc = 0x215CBCu;
    // 0x215cbc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x215CBCu;
    {
        const bool branch_taken_0x215cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215cbc) {
            ctx->pc = 0x215CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215CBCu;
            // 0x215cc0: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215CD0u;
            goto label_215cd0;
        }
    }
    ctx->pc = 0x215CC4u;
    // 0x215cc4: 0x52be000b  beql        $s5, $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x215CC4u;
    {
        const bool branch_taken_0x215cc4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 30));
        if (branch_taken_0x215cc4) {
            ctx->pc = 0x215CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215CC4u;
            // 0x215cc8: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x215CF4u;
            goto label_215cf4;
        }
    }
    ctx->pc = 0x215CCCu;
    // 0x215ccc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x215cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215cd0:
    // 0x215cd0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x215CD0u;
    {
        const bool branch_taken_0x215cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CD0u;
        // 0x215cd4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cd0) {
            ctx->pc = 0x215D04u;
            goto label_215d04;
        }
    }
    ctx->pc = 0x215CD8u;
label_215cd8:
    // 0x215cd8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x215cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215cdc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x215cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x215ce0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x215ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x215ce4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x215ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x215ce8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x215ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215cec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x215CECu;
    {
        const bool branch_taken_0x215cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CECu;
        // 0x215cf0: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cec) {
            ctx->pc = 0x215CFCu;
            goto label_215cfc;
        }
    }
    ctx->pc = 0x215CF4u;
label_215cf4:
    // 0x215cf4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x215cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215cf8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x215cf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_215cfc:
    // 0x215cfc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215d00: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x215d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_215d04:
    // 0x215d04: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x215D04u;
    {
        const bool branch_taken_0x215d04 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D04u;
        // 0x215d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d04) {
            ctx->pc = 0x215D34u;
            goto label_215d34;
        }
    }
    ctx->pc = 0x215D0Cu;
    // 0x215d0c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x215d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x215d10: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x215d10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x215d14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x215d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215d18: 0xae180278  sw          $t8, 0x278($s0)
    ctx->pc = 0x215d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 24));
    // 0x215d1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x215d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d20: 0x460c1b00  add.s       $f12, $f3, $f12
    ctx->pc = 0x215d20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x215d24: 0xae190284  sw          $t9, 0x284($s0)
    ctx->pc = 0x215d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 25));
    // 0x215d28: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x215d28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x215d2c: 0xc085422  jal         func_215088
    ctx->pc = 0x215D2Cu;
    SET_GPR_U32(ctx, 31, 0x215D34u);
    ctx->pc = 0x215D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D2Cu;
    // 0x215d30: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x215088u, 0x215D2Cu, 0x215D34u)) {
        return;
    }
    ctx->pc = 0x215D34u;
label_215d34:
    // 0x215d34: 0x97a20020  lhu         $v0, 0x20($sp)
    ctx->pc = 0x215d34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215d38: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x215D38u;
    {
        const bool branch_taken_0x215d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D38u;
        // 0x215d3c: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d38) {
            ctx->pc = 0x215D8Cu;
            goto label_215d8c;
        }
    }
    ctx->pc = 0x215D40u;
    // 0x215d40: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x215d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x215d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215d48: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x215d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d4c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x215d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x215d50: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x215d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x215d54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x215d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215d58: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x215d58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x215d5c: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x215d5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215d60: 0x0  nop
    ctx->pc = 0x215d60u;
    // NOP
    // 0x215d64: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x215D64u;
    {
        const bool branch_taken_0x215d64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x215D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D64u;
        // 0x215d68: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d64) {
            ctx->pc = 0x215D84u;
            goto label_215d84;
        }
    }
    ctx->pc = 0x215D6Cu;
    // 0x215d6c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x215d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215d70: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x215d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x215d74: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x215d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215d78: 0x0  nop
    ctx->pc = 0x215d78u;
    // NOP
    // 0x215d7c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x215D7Cu;
    {
        const bool branch_taken_0x215d7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x215d7c) {
            ctx->pc = 0x215D8Cu;
            goto label_215d8c;
        }
    }
    ctx->pc = 0x215D84u;
label_215d84:
    // 0x215d84: 0x5620fec6  bnel        $s1, $zero, . + 4 + (-0x13A << 2)
    ctx->pc = 0x215D84u;
    {
        const bool branch_taken_0x215d84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x215d84) {
            ctx->pc = 0x215D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215D84u;
            // 0x215d88: 0x8e020270  lw          $v0, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2158A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2158a0;
        }
    }
    ctx->pc = 0x215D8Cu;
label_215d8c:
    // 0x215d8c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x215D8Cu;
    {
        const bool branch_taken_0x215d8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D8Cu;
        // 0x215d90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d8c) {
            ctx->pc = 0x215DA0u;
            goto label_215da0;
        }
    }
    ctx->pc = 0x215D94u;
    // 0x215d94: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x215d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215d98: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x215d98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
label_215d9c:
    // 0x215d9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x215d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215da0:
    // 0x215da0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x215da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x215da4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x215da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x215da8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x215da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x215dac: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x215dacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x215db0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x215db0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x215db4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x215db4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x215db8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x215db8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x215dbc: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x215dbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x215dc0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x215dc0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215dc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x215dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215dc8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x215dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x215dcc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x215dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x215dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x215DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DD0u;
        // 0x215dd4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215DD8u;
}
