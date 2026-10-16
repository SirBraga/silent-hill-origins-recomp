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

// Function: sub_00159238
// Address: 0x159238 - 0x1595d8
void sub_00159238_0x159238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159238_0x159238");
#endif

    switch (ctx->pc) {
        case 0x159288u: goto label_159288;
        case 0x1592b0u: goto label_1592b0;
        case 0x1592c4u: goto label_1592c4;
        case 0x1592e8u: goto label_1592e8;
        case 0x1593b0u: goto label_1593b0;
        case 0x159490u: goto label_159490;
        case 0x1594a8u: goto label_1594a8;
        case 0x1594c0u: goto label_1594c0;
        case 0x1594d4u: goto label_1594d4;
        case 0x1594e4u: goto label_1594e4;
        case 0x1594f4u: goto label_1594f4;
        case 0x159514u: goto label_159514;
        case 0x159520u: goto label_159520;
        case 0x15957cu: goto label_15957c;
        case 0x1595b8u: goto label_1595b8;
        default: break;
    }

    ctx->pc = 0x159238u;

    // 0x159238: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15923c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x15923cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x159240: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x159240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x159244: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x159244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x159248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15924c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x15924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x159250: 0x261102e8  addiu       $s1, $s0, 0x2E8
    ctx->pc = 0x159250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 744));
    // 0x159254: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x159258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15925c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x159260: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x159260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x159264: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x159264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x159268: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x159268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15926c: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x15926cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
    // 0x159270: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x159270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x159274: 0xae030284  sw          $v1, 0x284($s0)
    ctx->pc = 0x159274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 3));
    // 0x159278: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x159278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x15927c: 0x8c93002c  lw          $s3, 0x2C($a0)
    ctx->pc = 0x15927cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x159280: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x159280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x159284: 0xae030278  sw          $v1, 0x278($s0)
    ctx->pc = 0x159284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
label_159288:
    // 0x159288: 0xaca0fff4  sw          $zero, -0xC($a1)
    ctx->pc = 0x159288u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), GPR_U32(ctx, 0));
    // 0x15928c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x15928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x159290: 0xaca0fff8  sw          $zero, -0x8($a1)
    ctx->pc = 0x159290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 0));
    // 0x159294: 0xaca0fffc  sw          $zero, -0x4($a1)
    ctx->pc = 0x159294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 0));
    // 0x159298: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x159298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x15929c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15929Cu;
    {
        const bool branch_taken_0x15929c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1592A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15929Cu;
        // 0x1592a0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15929c) {
            ctx->pc = 0x159288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159288;
        }
    }
    ctx->pc = 0x1592A4u;
    // 0x1592a4: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x1592a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x1592a8: 0xc095988  jal         func_256620
    ctx->pc = 0x1592A8u;
    SET_GPR_U32(ctx, 31, 0x1592B0u);
    ctx->pc = 0x1592ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592A8u;
    // 0x1592ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256620u, 0x1592A8u, 0x1592B0u)) {
        return;
    }
    ctx->pc = 0x1592B0u;
label_1592b0:
    // 0x1592b0: 0x8e030280  lw          $v1, 0x280($s0)
    ctx->pc = 0x1592b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x1592b4: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x1592b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1592b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1592b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1592bc: 0xc080924  jal         func_202490
    ctx->pc = 0x1592BCu;
    SET_GPR_U32(ctx, 31, 0x1592C4u);
    ctx->pc = 0x1592C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592BCu;
    // 0x1592c0: 0x642018  mult        $a0, $v1, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1592BCu, 0x1592C4u)) {
        return;
    }
    ctx->pc = 0x1592C4u;
label_1592c4:
    // 0x1592c4: 0xae02035c  sw          $v0, 0x35C($s0)
    ctx->pc = 0x1592c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
    // 0x1592c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1592c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592cc: 0x8e040278  lw          $a0, 0x278($s0)
    ctx->pc = 0x1592ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1592d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1592d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592d4: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x1592d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x1592d8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1592d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1592dc: 0xae030360  sw          $v1, 0x360($s0)
    ctx->pc = 0x1592dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 3));
    // 0x1592e0: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1592E0u;
    {
        const bool branch_taken_0x1592e0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1592E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592E0u;
        // 0x1592e4: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592e0) {
            ctx->pc = 0x159368u;
            goto label_159368;
        }
    }
    ctx->pc = 0x1592E8u;
label_1592e8:
    // 0x1592e8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x1592e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1592ec: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x1592ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1592f0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1592f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1592f4: 0xb062001f  sdl         $v0, 0x1F($v1)
    ctx->pc = 0x1592f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1592f8: 0xb4620018  sdr         $v0, 0x18($v1)
    ctx->pc = 0x1592f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1592fc: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1592fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    // 0x159300: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x159300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x159304: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x159304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x159308: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x159308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15930c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x15930cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159310: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x159310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x159314: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x159314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x159318: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x159318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x15931c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x15931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159320: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x159320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x159324: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x159324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159328: 0x0  nop
    ctx->pc = 0x159328u;
    // NOP
    // 0x15932c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15932Cu;
    {
        const bool branch_taken_0x15932c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15932Cu;
        // 0x159330: 0xac60002c  sw          $zero, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15932c) {
            ctx->pc = 0x159338u;
            goto label_159338;
        }
    }
    ctx->pc = 0x159334u;
    // 0x159334: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x159334u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_159338:
    // 0x159338: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x159338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15933c: 0x0  nop
    ctx->pc = 0x15933cu;
    // NOP
    // 0x159340: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x159340u;
    {
        const bool branch_taken_0x159340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159340) {
            ctx->pc = 0x159344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159340u;
            // 0x159344: 0x8e020280  lw          $v0, 0x280($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159354u;
            goto label_159354;
        }
    }
    ctx->pc = 0x159348u;
    // 0x159348: 0xae030360  sw          $v1, 0x360($s0)
    ctx->pc = 0x159348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 3));
    // 0x15934c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x15934cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x159350: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x159350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_159354:
    // 0x159354: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x159354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x159358: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x159358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x15935c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x15935cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159360: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x159360u;
    {
        const bool branch_taken_0x159360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159360u;
        // 0x159364: 0x24630038  addiu       $v1, $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159360) {
            ctx->pc = 0x1592E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1592e8;
        }
    }
    ctx->pc = 0x159368u;
label_159368:
    // 0x159368: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x159368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x15936c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x15936cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x159370: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x159370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159374: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x159374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x159378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15937c: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x15937cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x159380: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x159380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x159384: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x159384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x159388: 0x8e05035c  lw          $a1, 0x35C($s0)
    ctx->pc = 0x159388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x15938c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15938cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159390: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x159390u;
    {
        const bool branch_taken_0x159390 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x159394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159390u;
        // 0x159394: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159390) {
            ctx->pc = 0x15946Cu;
            goto label_15946c;
        }
    }
    ctx->pc = 0x159398u;
    // 0x159398: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x159398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x15939c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x15939cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1593a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1593a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593a4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1593a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1593a8: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x1593a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1593ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1593acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1593b0:
    // 0x1593b0: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1593b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1593b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1593b8: 0x0  nop
    ctx->pc = 0x1593b8u;
    // NOP
    // 0x1593bc: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x1593BCu;
    {
        const bool branch_taken_0x1593bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1593bc) {
            ctx->pc = 0x1593C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1593BCu;
            // 0x1593c0: 0x8e020288  lw          $v0, 0x288($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159400u;
            goto label_159400;
        }
    }
    ctx->pc = 0x1593C4u;
    // 0x1593c4: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x1593c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x1593c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1593c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1593cc: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x1593ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    // 0x1593d0: 0xacaa0030  sw          $t2, 0x30($a1)
    ctx->pc = 0x1593d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 10));
    // 0x1593d4: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1593d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1593d8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1593d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593dc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1593dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1593e0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1593e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1593e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1593e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1593e8: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x1593e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1593ec: 0x0  nop
    ctx->pc = 0x1593ecu;
    // NOP
    // 0x1593f0: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x1593F0u;
    {
        const bool branch_taken_0x1593f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1593f0) {
            ctx->pc = 0x1593F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1593F0u;
            // 0x1593f4: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x159458u;
            goto label_159458;
        }
    }
    ctx->pc = 0x1593F8u;
    // 0x1593f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1593F8u;
    {
        const bool branch_taken_0x1593f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1593FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593F8u;
        // 0x1593fc: 0x8e020280  lw          $v0, 0x280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593f8) {
            ctx->pc = 0x15945Cu;
            goto label_15945c;
        }
    }
    ctx->pc = 0x159400u;
label_159400:
    // 0x159400: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x159400u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x159404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159408: 0xae020288  sw          $v0, 0x288($s0)
    ctx->pc = 0x159408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 2));
    // 0x15940c: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x15940cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x159410: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x159410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159414: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x159414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x159418: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x159418u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x15941c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x15941cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x159420: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x159420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x159424: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x159424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159428: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x159428u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x15942c: 0x123100a  movz        $v0, $t1, $v1
    ctx->pc = 0x15942cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9));
    // 0x159430: 0x102202a  slt         $a0, $t0, $v0
    ctx->pc = 0x159430u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159434: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x159434u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x159438: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x159438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15943c: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x15943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x159440: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x159440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159444: 0x244202dc  addiu       $v0, $v0, 0x2DC
    ctx->pc = 0x159444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 732));
    // 0x159448: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x159448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15944c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x159450: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x159450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x159454: 0xaca20034  sw          $v0, 0x34($a1)
    ctx->pc = 0x159454u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
label_159458:
    // 0x159458: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x159458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_15945c:
    // 0x15945c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15945cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x159460: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x159460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159464: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x159464u;
    {
        const bool branch_taken_0x159464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159464u;
        // 0x159468: 0x24a50038  addiu       $a1, $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159464) {
            ctx->pc = 0x1593B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1593b0;
        }
    }
    ctx->pc = 0x15946Cu;
label_15946c:
    // 0x15946c: 0x0  nop
    ctx->pc = 0x15946cu;
    // NOP
    // 0x159470: 0x0  nop
    ctx->pc = 0x159470u;
    // NOP
    // 0x159474: 0x460c0004  c1          0xC0004
    ctx->pc = 0x159474u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x159478: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x159478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15947c: 0x0  nop
    ctx->pc = 0x15947cu;
    // NOP
    // 0x159480: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x159480u;
    {
        const bool branch_taken_0x159480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x159480) {
            ctx->pc = 0x159484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159480u;
            // 0x159484: 0x8e020284  lw          $v0, 0x284($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159494u;
            goto label_159494;
        }
    }
    ctx->pc = 0x159488u;
    // 0x159488: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x159488u;
    SET_GPR_U32(ctx, 31, 0x159490u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x159488u, 0x159490u)) {
        return;
    }
    ctx->pc = 0x159490u;
label_159490:
    // 0x159490: 0x8e020284  lw          $v0, 0x284($s0)
    ctx->pc = 0x159490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_159494:
    // 0x159494: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x159494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159498: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x159498u;
    {
        const bool branch_taken_0x159498 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159498u;
        // 0x15949c: 0xe6000290  swc1        $f0, 0x290($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159498) {
            ctx->pc = 0x159504u;
            goto label_159504;
        }
    }
    ctx->pc = 0x1594A0u;
    // 0x1594a0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1594a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594a4: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x1594a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_1594a8:
    // 0x1594a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1594a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594ac: 0x27a70002  addiu       $a3, $sp, 0x2
    ctx->pc = 0x1594acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x1594b0: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1594b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1594b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1594b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594b8: 0xc095958  jal         func_256560
    ctx->pc = 0x1594B8u;
    SET_GPR_U32(ctx, 31, 0x1594C0u);
    ctx->pc = 0x1594BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1594B8u;
    // 0x1594bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256560u, 0x1594B8u, 0x1594C0u)) {
        return;
    }
    ctx->pc = 0x1594C0u;
label_1594c0:
    // 0x1594c0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1594c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1594c4: 0x97a60002  lhu         $a2, 0x2($sp)
    ctx->pc = 0x1594c4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1594c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1594c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594cc: 0xc05695e  jal         func_15A578
    ctx->pc = 0x1594CCu;
    SET_GPR_U32(ctx, 31, 0x1594D4u);
    ctx->pc = 0x1594D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1594CCu;
    // 0x1594d0: 0x97a50000  lhu         $a1, 0x0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15A578u, 0x1594CCu, 0x1594D4u)) {
        return;
    }
    ctx->pc = 0x1594D4u;
label_1594d4:
    // 0x1594d4: 0x97a50002  lhu         $a1, 0x2($sp)
    ctx->pc = 0x1594d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1594d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1594d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594dc: 0xc05695e  jal         func_15A578
    ctx->pc = 0x1594DCu;
    SET_GPR_U32(ctx, 31, 0x1594E4u);
    ctx->pc = 0x1594E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1594DCu;
    // 0x1594e0: 0x97a60004  lhu         $a2, 0x4($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15A578u, 0x1594DCu, 0x1594E4u)) {
        return;
    }
    ctx->pc = 0x1594E4u;
label_1594e4:
    // 0x1594e4: 0x97a50004  lhu         $a1, 0x4($sp)
    ctx->pc = 0x1594e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1594e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1594e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594ec: 0xc05695e  jal         func_15A578
    ctx->pc = 0x1594ECu;
    SET_GPR_U32(ctx, 31, 0x1594F4u);
    ctx->pc = 0x1594F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1594ECu;
    // 0x1594f0: 0x97a60000  lhu         $a2, 0x0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15A578u, 0x1594ECu, 0x1594F4u)) {
        return;
    }
    ctx->pc = 0x1594F4u;
label_1594f4:
    // 0x1594f4: 0x8e020284  lw          $v0, 0x284($s0)
    ctx->pc = 0x1594f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x1594f8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1594f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1594fc: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1594FCu;
    {
        const bool branch_taken_0x1594fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1594fc) {
            ctx->pc = 0x159500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1594FCu;
            // 0x159500: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1594A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1594a8;
        }
    }
    ctx->pc = 0x159504u;
label_159504:
    // 0x159504: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x159504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x159508: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x159508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15950c: 0xc09599c  jal         func_256670
    ctx->pc = 0x15950Cu;
    SET_GPR_U32(ctx, 31, 0x159514u);
    ctx->pc = 0x159510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15950Cu;
    // 0x159510: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256670u, 0x15950Cu, 0x159514u)) {
        return;
    }
    ctx->pc = 0x159514u;
label_159514:
    // 0x159514: 0x8e030298  lw          $v1, 0x298($s0)
    ctx->pc = 0x159514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x159518: 0x1860001d  blez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x159518u;
    {
        const bool branch_taken_0x159518 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x159518) {
            ctx->pc = 0x159590u;
            goto label_159590;
        }
    }
    ctx->pc = 0x159520u;
label_159520:
    // 0x159520: 0x8e030364  lw          $v1, 0x364($s0)
    ctx->pc = 0x159520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x159524: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x159524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x159528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15952c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15952cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159530: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x159530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159534: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x159534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159538: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x159538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15953c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15953cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x159540: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x159540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x159544: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x159544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159548: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x159548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15954c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x15954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159550: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x159550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159554: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x159554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x159558: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x159558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15955c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159560: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x159560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159564: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x159564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159568: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x159568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15956c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15956cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x159570: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x159570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x159574: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x159574u;
    SET_GPR_U32(ctx, 31, 0x15957Cu);
    ctx->pc = 0x159578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159574u;
    // 0x159578: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x159574u, 0x15957Cu)) {
        return;
    }
    ctx->pc = 0x15957Cu;
label_15957c:
    // 0x15957c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15957cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x159580: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x159580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x159584: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x159584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159588: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x159588u;
    {
        const bool branch_taken_0x159588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159588u;
        // 0x15958c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159588) {
            ctx->pc = 0x159520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159520;
        }
    }
    ctx->pc = 0x159590u;
label_159590:
    // 0x159590: 0xc6000298  lwc1        $f0, 0x298($s0)
    ctx->pc = 0x159590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15959c: 0x0  nop
    ctx->pc = 0x15959cu;
    // NOP
    // 0x1595a0: 0x0  nop
    ctx->pc = 0x1595a0u;
    // NOP
    // 0x1595a4: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1595a4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x1595a8: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1595a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1595ac: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x1595acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x1595b0: 0xc0569a8  jal         func_15A6A0
    ctx->pc = 0x1595B0u;
    SET_GPR_U32(ctx, 31, 0x1595B8u);
    ctx->pc = 0x1595B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595B0u;
    // 0x1595b4: 0xe60102ac  swc1        $f1, 0x2AC($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 684), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A6A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15A6A0u, 0x1595B0u, 0x1595B8u)) {
        return;
    }
    ctx->pc = 0x1595B8u;
label_1595b8:
    // 0x1595b8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1595b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1595bc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1595bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1595c0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1595c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1595c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1595c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1595c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1595c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1595cc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1595ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1595d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1595D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1595D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595D0u;
        // 0x1595d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1595D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1595D8u;
}
