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

// Function: sub_00133440
// Address: 0x133440 - 0x1335b8
void sub_00133440_0x133440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133440_0x133440");
#endif

    switch (ctx->pc) {
        case 0x13345cu: goto label_13345c;
        case 0x133474u: goto label_133474;
        case 0x1334a4u: goto label_1334a4;
        case 0x1334acu: goto label_1334ac;
        case 0x1334ecu: goto label_1334ec;
        case 0x13359cu: goto label_13359c;
        default: break;
    }

    ctx->pc = 0x133440u;

    // 0x133440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x133440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x133444: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x133444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x133448: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x133448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13344c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13344cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x133450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133454: 0xc04990e  jal         func_126438
    ctx->pc = 0x133454u;
    SET_GPR_U32(ctx, 31, 0x13345Cu);
    ctx->pc = 0x133458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133454u;
    // 0x133458: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126438u, 0x133454u, 0x13345Cu)) {
        return;
    }
    ctx->pc = 0x13345Cu;
label_13345c:
    // 0x13345c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13345cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x133460: 0x8c444250  lw          $a0, 0x4250($v0)
    ctx->pc = 0x133460u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4250u));
    // 0x133464: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133464u;
    {
        const bool branch_taken_0x133464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x133468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133464u;
        // 0x133468: 0x2492ffc0  addiu       $s2, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133464) {
            ctx->pc = 0x13348Cu;
            goto label_13348c;
        }
    }
    ctx->pc = 0x13346Cu;
    // 0x13346c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13346Cu;
    {
        const bool branch_taken_0x13346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13346c) {
            ctx->pc = 0x133490u;
            goto label_133490;
        }
    }
    ctx->pc = 0x133474u;
label_133474:
    // 0x133474: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x133474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x133478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x133478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13347c: 0x0  nop
    ctx->pc = 0x13347cu;
    // NOP
    // 0x133480: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x133480u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x133484: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x133484u;
    {
        const bool branch_taken_0x133484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133484u;
        // 0x133488: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133484) {
            ctx->pc = 0x133518u;
            goto label_133518;
        }
    }
    ctx->pc = 0x13348Cu;
label_13348c:
    // 0x13348c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13348cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133490:
    // 0x133490: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x133490u;
    {
        const bool branch_taken_0x133490 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x133494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133490u;
        // 0x133494: 0x26301880  addiu       $s0, $s1, 0x1880 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133490) {
            ctx->pc = 0x133560u;
            goto label_133560;
        }
    }
    ctx->pc = 0x133498u;
    // 0x133498: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x133498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x13349c: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x13349Cu;
    SET_GPR_U32(ctx, 31, 0x1334A4u);
    ctx->pc = 0x1334A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13349Cu;
    // 0x1334a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x13349Cu, 0x1334A4u)) {
        return;
    }
    ctx->pc = 0x1334A4u;
label_1334a4:
    // 0x1334a4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1334A4u;
    SET_GPR_U32(ctx, 31, 0x1334ACu);
    ctx->pc = 0x1334A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334A4u;
    // 0x1334a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1334A4u, 0x1334ACu)) {
        return;
    }
    ctx->pc = 0x1334ACu;
label_1334ac:
    // 0x1334ac: 0xc6201880  lwc1        $f0, 0x1880($s1)
    ctx->pc = 0x1334acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1334b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1334b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1334b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1334b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1334b8: 0xe6201880  swc1        $f0, 0x1880($s1)
    ctx->pc = 0x1334b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6272), bits); }
    // 0x1334bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1334bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1334c0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1334c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1334c4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1334c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1334c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1334c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1334cc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1334ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1334d0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1334d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1334d4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1334d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1334d8: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1334d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1334dc: 0xae201884  sw          $zero, 0x1884($s1)
    ctx->pc = 0x1334dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6276), GPR_U32(ctx, 0));
    // 0x1334e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1334e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1334e4: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1334E4u;
    SET_GPR_U32(ctx, 31, 0x1334ECu);
    ctx->pc = 0x1334E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334E4u;
    // 0x1334e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1334E4u, 0x1334ECu)) {
        return;
    }
    ctx->pc = 0x1334ECu;
label_1334ec:
    // 0x1334ec: 0x0  nop
    ctx->pc = 0x1334ecu;
    // NOP
    // 0x1334f0: 0x0  nop
    ctx->pc = 0x1334f0u;
    // NOP
    // 0x1334f4: 0x46000044  c1          0x44
    ctx->pc = 0x1334f4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1334f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1334f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1334fc: 0x0  nop
    ctx->pc = 0x1334fcu;
    // NOP
    // 0x133500: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x133500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133504: 0x0  nop
    ctx->pc = 0x133504u;
    // NOP
    // 0x133508: 0x4501ffda  bc1t        . + 4 + (-0x26 << 2)
    ctx->pc = 0x133508u;
    {
        const bool branch_taken_0x133508 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133508u;
        // 0x13350c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133508) {
            ctx->pc = 0x133474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133474;
        }
    }
    ctx->pc = 0x133510u;
    // 0x133510: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x133510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133514: 0x0  nop
    ctx->pc = 0x133514u;
    // NOP
label_133518:
    // 0x133518: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x133518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13351c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x13351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133520: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x133520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x133524: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x133524u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x133528: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x133528u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x13352c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x13352cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x133530: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x133530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x133534: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x133534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x133538: 0x6a221887  ldl         $v0, 0x1887($s1)
    ctx->pc = 0x133538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13353c: 0x6e221880  ldr         $v0, 0x1880($s1)
    ctx->pc = 0x13353cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x133540: 0x8e231888  lw          $v1, 0x1888($s1)
    ctx->pc = 0x133540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6280)));
    // 0x133544: 0xb2221897  sdl         $v0, 0x1897($s1)
    ctx->pc = 0x133544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133548: 0xb6221890  sdr         $v0, 0x1890($s1)
    ctx->pc = 0x133548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13354c: 0xae231898  sw          $v1, 0x1898($s1)
    ctx->pc = 0x13354cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6296), GPR_U32(ctx, 3));
    // 0x133550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133554: 0xae2218d0  sw          $v0, 0x18D0($s1)
    ctx->pc = 0x133554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6352), GPR_U32(ctx, 2));
    // 0x133558: 0x8e432d28  lw          $v1, 0x2D28($s2)
    ctx->pc = 0x133558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11560)));
    // 0x13355c: 0xae231b78  sw          $v1, 0x1B78($s1)
    ctx->pc = 0x13355cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7032), GPR_U32(ctx, 3));
label_133560:
    // 0x133560: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x133560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x133564: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x133564u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x133568: 0x8c85006c  lw          $a1, 0x6C($a0)
    ctx->pc = 0x133568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x13356c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x13356Cu;
    {
        const bool branch_taken_0x13356c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x133570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13356Cu;
        // 0x133570: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13356c) {
            ctx->pc = 0x13359Cu;
            goto label_13359c;
        }
    }
    ctx->pc = 0x133574u;
    // 0x133574: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x133574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x133578: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x133578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13357c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13357Cu;
    {
        const bool branch_taken_0x13357c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x133580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13357Cu;
        // 0x133580: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13357c) {
            ctx->pc = 0x1335A0u;
            goto label_1335a0;
        }
    }
    ctx->pc = 0x133584u;
    // 0x133584: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x133584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x133588: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x133588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13358c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13358Cu;
    {
        const bool branch_taken_0x13358c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x133590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13358Cu;
        // 0x133590: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13358c) {
            ctx->pc = 0x1335A4u;
            goto label_1335a4;
        }
    }
    ctx->pc = 0x133594u;
    // 0x133594: 0xc063c4e  jal         func_18F138
    ctx->pc = 0x133594u;
    SET_GPR_U32(ctx, 31, 0x13359Cu);
    ctx->pc = 0x133598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133594u;
    // 0x133598: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F138u, 0x133594u, 0x13359Cu)) {
        return;
    }
    ctx->pc = 0x13359Cu;
label_13359c:
    // 0x13359c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13359cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1335a0:
    // 0x1335a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1335a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1335a4:
    // 0x1335a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1335a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1335a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1335a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1335ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1335ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1335B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335ACu;
        // 0x1335b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1335ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1335B4u;
    // 0x1335b4: 0x0  nop
    ctx->pc = 0x1335b4u;
    // NOP
    ctx->pc = 0x1335b8u;
}
