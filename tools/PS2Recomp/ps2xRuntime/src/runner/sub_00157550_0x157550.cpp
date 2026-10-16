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

// Function: sub_00157550
// Address: 0x157550 - 0x157820
void sub_00157550_0x157550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157550_0x157550");
#endif

    switch (ctx->pc) {
        case 0x1575a0u: goto label_1575a0;
        case 0x1575acu: goto label_1575ac;
        case 0x1575c0u: goto label_1575c0;
        case 0x1575dcu: goto label_1575dc;
        case 0x1575fcu: goto label_1575fc;
        case 0x157638u: goto label_157638;
        case 0x1576e4u: goto label_1576e4;
        case 0x1577e0u: goto label_1577e0;
        default: break;
    }

    ctx->pc = 0x157550u;

    // 0x157550: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x157550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x157554: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x157554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x157558: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x157558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x15755c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x15755cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x157560: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x157560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x157564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x157564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157568: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x157568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15756c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15756cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157570: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x157570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x157574: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x157574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x157578: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x157578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x15757c: 0x8e420850  lw          $v0, 0x850($s2)
    ctx->pc = 0x15757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2128)));
    // 0x157580: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x157580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x157584: 0x24420710  addiu       $v0, $v0, 0x710
    ctx->pc = 0x157584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
    // 0x157588: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x157588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15758c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x15758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x157590: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157590u;
    {
        const bool branch_taken_0x157590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157590u;
        // 0x157594: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157590) {
            ctx->pc = 0x1575A0u;
            goto label_1575a0;
        }
    }
    ctx->pc = 0x157598u;
    // 0x157598: 0xc05745c  jal         func_15D170
    ctx->pc = 0x157598u;
    SET_GPR_U32(ctx, 31, 0x1575A0u);
    ctx->pc = 0x15759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157598u;
    // 0x15759c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15D170u, 0x157598u, 0x1575A0u)) {
        return;
    }
    ctx->pc = 0x1575A0u;
label_1575a0:
    // 0x1575a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1575a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1575a4: 0xc05882a  jal         func_1620A8
    ctx->pc = 0x1575A4u;
    SET_GPR_U32(ctx, 31, 0x1575ACu);
    ctx->pc = 0x1575A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1575A4u;
    // 0x1575a8: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1620A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1620A8u, 0x1575A4u, 0x1575ACu)) {
        return;
    }
    ctx->pc = 0x1575ACu;
label_1575ac:
    // 0x1575ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1575acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1575b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1575b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1575b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1575b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575b8: 0xc05741e  jal         func_15D078
    ctx->pc = 0x1575B8u;
    SET_GPR_U32(ctx, 31, 0x1575C0u);
    ctx->pc = 0x1575BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1575B8u;
    // 0x1575bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15D078u, 0x1575B8u, 0x1575C0u)) {
        return;
    }
    ctx->pc = 0x1575C0u;
label_1575c0:
    // 0x1575c0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1575c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1575c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1575c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575c8: 0x8c62870c  lw          $v0, -0x78F4($v1)
    ctx->pc = 0x1575c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33870Cu));
    // 0x1575cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1575ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1575d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1575d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575d4: 0xc057422  jal         func_15D088
    ctx->pc = 0x1575D4u;
    SET_GPR_U32(ctx, 31, 0x1575DCu);
    ctx->pc = 0x1575D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1575D4u;
    // 0x1575d8: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15D088u, 0x1575D4u, 0x1575DCu)) {
        return;
    }
    ctx->pc = 0x1575DCu;
label_1575dc:
    // 0x1575dc: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x1575dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1575e0: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x1575e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1575e4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1575e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1575e8: 0xb2220047  sdl         $v0, 0x47($s1)
    ctx->pc = 0x1575e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1575ec: 0xb6220040  sdr         $v0, 0x40($s1)
    ctx->pc = 0x1575ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1575f0: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x1575f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x1575f4: 0xc092d94  jal         func_24B650
    ctx->pc = 0x1575F4u;
    SET_GPR_U32(ctx, 31, 0x1575FCu);
    ctx->pc = 0x1575F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1575F4u;
    // 0x1575f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x1575F4u, 0x1575FCu)) {
        return;
    }
    ctx->pc = 0x1575FCu;
label_1575fc:
    // 0x1575fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1575fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x157600: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157604: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x157604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x157608: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x157608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x15760c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x15760cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x157610: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x157610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x157614: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x157614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x157618: 0x6a860007  ldl         $a2, 0x7($s4)
    ctx->pc = 0x157618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x15761c: 0x6e860000  ldr         $a2, 0x0($s4)
    ctx->pc = 0x15761cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x157620: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x157620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x157624: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x157624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157628: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x157628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15762c: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x15762cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x157630: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x157630u;
    SET_GPR_U32(ctx, 31, 0x157638u);
    ctx->pc = 0x157634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157630u;
    // 0x157634: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x157630u, 0x157638u)) {
        return;
    }
    ctx->pc = 0x157638u;
label_157638:
    // 0x157638: 0x0  nop
    ctx->pc = 0x157638u;
    // NOP
    // 0x15763c: 0x0  nop
    ctx->pc = 0x15763cu;
    // NOP
    // 0x157640: 0x46000044  c1          0x44
    ctx->pc = 0x157640u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x157644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157648: 0x0  nop
    ctx->pc = 0x157648u;
    // NOP
    // 0x15764c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15764cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157650: 0x0  nop
    ctx->pc = 0x157650u;
    // NOP
    // 0x157654: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x157654u;
    {
        const bool branch_taken_0x157654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157654u;
        // 0x157658: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157654) {
            ctx->pc = 0x157670u;
            goto label_157670;
        }
    }
    ctx->pc = 0x15765Cu;
    // 0x15765c: 0x0  nop
    ctx->pc = 0x15765cu;
    // NOP
    // 0x157660: 0x0  nop
    ctx->pc = 0x157660u;
    // NOP
    // 0x157664: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x157664u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[1]);
    // 0x157668: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157668u;
    {
        const bool branch_taken_0x157668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157668u;
        // 0x15766c: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157668) {
            ctx->pc = 0x157678u;
            goto label_157678;
        }
    }
    ctx->pc = 0x157670u;
label_157670:
    // 0x157670: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x157670u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x157674: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x157674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_157678:
    // 0x157678: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x157678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15767c: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x15767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x157680: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x157680u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157684: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x157684u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x157688: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x157688u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x15768c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x15768cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x157690: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x157690u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x157694: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x157694u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x157698: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x157698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15769c: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x15769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1576a0: 0x460219c2  mul.s       $f7, $f3, $f2
    ctx->pc = 0x1576a0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1576a4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1576a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1576a8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1576a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1576ac: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1576acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1576b0: 0x46060042  mul.s       $f1, $f0, $f6
    ctx->pc = 0x1576b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1576b4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1576b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1576b8: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x1576b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x1576bc: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x1576bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x1576c0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1576c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1576c4: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x1576c4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x1576c8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1576c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1576cc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1576ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1576d0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1576d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1576d4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1576d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1576d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576dc: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1576DCu;
    SET_GPR_U32(ctx, 31, 0x1576E4u);
    ctx->pc = 0x1576E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576DCu;
    // 0x1576e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1576DCu, 0x1576E4u)) {
        return;
    }
    ctx->pc = 0x1576E4u;
label_1576e4:
    // 0x1576e4: 0x0  nop
    ctx->pc = 0x1576e4u;
    // NOP
    // 0x1576e8: 0x0  nop
    ctx->pc = 0x1576e8u;
    // NOP
    // 0x1576ec: 0x46000044  c1          0x44
    ctx->pc = 0x1576ecu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1576f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1576f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1576f4: 0x0  nop
    ctx->pc = 0x1576f4u;
    // NOP
    // 0x1576f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1576f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1576fc: 0x0  nop
    ctx->pc = 0x1576fcu;
    // NOP
    // 0x157700: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x157700u;
    {
        const bool branch_taken_0x157700 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157700u;
        // 0x157704: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157700) {
            ctx->pc = 0x157720u;
            goto label_157720;
        }
    }
    ctx->pc = 0x157708u;
    // 0x157708: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15770c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15770cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157710: 0x0  nop
    ctx->pc = 0x157710u;
    // NOP
    // 0x157714: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x157714u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x157718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157718u;
    {
        const bool branch_taken_0x157718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157718u;
        // 0x15771c: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157718) {
            ctx->pc = 0x157728u;
            goto label_157728;
        }
    }
    ctx->pc = 0x157720u;
label_157720:
    // 0x157720: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x157720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157724: 0x0  nop
    ctx->pc = 0x157724u;
    // NOP
label_157728:
    // 0x157728: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x157728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15772c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x15772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157730: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x157730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x157734: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x157734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x157738: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x157738u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x15773c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x15773cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x157740: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x157740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x157744: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x157744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x157748: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x157748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15774c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157750: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x157750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157754: 0xc7a70008  lwc1        $f7, 0x8($sp)
    ctx->pc = 0x157754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x157758: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x157758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15775c: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x15775cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x157760: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x157760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157764: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x157764u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x157768: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x157768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15776c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x15776cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x157770: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x157770u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x157774: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x157774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x157778: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x157778u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x15777c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x15777cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x157780: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x157780u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x157784: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x157784u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x157788: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x157788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15778c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x15778cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x157790: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x157790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x157794: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x157794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x157798: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x157798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15779c: 0xb2240027  sdl         $a0, 0x27($s1)
    ctx->pc = 0x15779cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1577a0: 0xb6240020  sdr         $a0, 0x20($s1)
    ctx->pc = 0x1577a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1577a4: 0xae250028  sw          $a1, 0x28($s1)
    ctx->pc = 0x1577a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
    // 0x1577a8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1577a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1577ac: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1577acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1577b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1577b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1577b4: 0xb2220037  sdl         $v0, 0x37($s1)
    ctx->pc = 0x1577b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1577b8: 0xb6220030  sdr         $v0, 0x30($s1)
    ctx->pc = 0x1577b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1577bc: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x1577bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x1577c0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1577c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1577c4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1577c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1577c8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1577c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1577cc: 0xb2260017  sdl         $a2, 0x17($s1)
    ctx->pc = 0x1577ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1577d0: 0xb6260010  sdr         $a2, 0x10($s1)
    ctx->pc = 0x1577d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1577d4: 0xae270018  sw          $a3, 0x18($s1)
    ctx->pc = 0x1577d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 7));
    // 0x1577d8: 0xc092d94  jal         func_24B650
    ctx->pc = 0x1577D8u;
    SET_GPR_U32(ctx, 31, 0x1577E0u);
    ctx->pc = 0x1577DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1577D8u;
    // 0x1577dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x1577D8u, 0x1577E0u)) {
        return;
    }
    ctx->pc = 0x1577E0u;
label_1577e0:
    // 0x1577e0: 0x8e430850  lw          $v1, 0x850($s2)
    ctx->pc = 0x1577e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2128)));
    // 0x1577e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1577e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1577e8: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1577e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1577ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1577ECu;
    {
        const bool branch_taken_0x1577ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1577F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577ECu;
        // 0x1577f0: 0xae430850  sw          $v1, 0x850($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577ec) {
            ctx->pc = 0x1577F8u;
            goto label_1577f8;
        }
    }
    ctx->pc = 0x1577F4u;
    // 0x1577f4: 0xae400850  sw          $zero, 0x850($s2)
    ctx->pc = 0x1577f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2128), GPR_U32(ctx, 0));
label_1577f8:
    // 0x1577f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1577f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1577fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1577fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x157800: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x157800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157804: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x157804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157808: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15780c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15780cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157810: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x157810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x157814: 0x3e00008  jr          $ra
    ctx->pc = 0x157814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157814u;
        // 0x157818: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15781Cu;
    // 0x15781c: 0x0  nop
    ctx->pc = 0x15781cu;
    // NOP
    ctx->pc = 0x157820u;
}
