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

// Function: sub_001BD470
// Address: 0x1bd470 - 0x1bd758
void sub_001BD470_0x1bd470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD470_0x1bd470");
#endif

    switch (ctx->pc) {
        case 0x1bd520u: goto label_1bd520;
        case 0x1bd534u: goto label_1bd534;
        case 0x1bd60cu: goto label_1bd60c;
        case 0x1bd618u: goto label_1bd618;
        case 0x1bd64cu: goto label_1bd64c;
        case 0x1bd6b4u: goto label_1bd6b4;
        case 0x1bd718u: goto label_1bd718;
        case 0x1bd724u: goto label_1bd724;
        default: break;
    }

    ctx->pc = 0x1bd470u;

    // 0x1bd470: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1bd470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1bd474: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1bd474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1bd478: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x1bd478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x1bd47c: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x1bd47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x1bd480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bd480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd484: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x1bd484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x1bd488: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bd488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd48c: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x1bd48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x1bd490: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1bd490u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd494: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x1bd494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x1bd498: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1bd498u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd49c: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x1bd49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x1bd4a0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1bd4a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4a4: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1bd4a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x1bd4a8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1bd4a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4ac: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x1bd4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x1bd4b0: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x1bd4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x1bd4b4: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x1bd4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x1bd4b8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1bd4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1bd4bc: 0x2446d5c8  addiu       $a2, $v0, -0x2A38
    ctx->pc = 0x1bd4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956488));
    // 0x1bd4c0: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x1bd4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1bd4c4: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x1bd4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1bd4c8: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x1bd4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bd4cc: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x1bd4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bd4d0: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD4D0u;
    {
        const bool branch_taken_0x1bd4d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4D0u;
        // 0x1bd4d4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4d0) {
            ctx->pc = 0x1BD4FCu;
            goto label_1bd4fc;
        }
    }
    ctx->pc = 0x1BD4D8u;
    // 0x1bd4d8: 0x93a20013  lbu         $v0, 0x13($sp)
    ctx->pc = 0x1bd4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x1bd4dc: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1bd4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd4e0: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x1bd4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd4e4: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BD4E4u;
    {
        const bool branch_taken_0x1bd4e4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4E4u;
        // 0x1bd4e8: 0xa3a20011  sb          $v0, 0x11($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4e4) {
            ctx->pc = 0x1BD518u;
            goto label_1bd518;
        }
    }
    ctx->pc = 0x1BD4ECu;
    // 0x1bd4ec: 0x240200cd  addiu       $v0, $zero, 0xCD
    ctx->pc = 0x1bd4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x1bd4f0: 0x240300b2  addiu       $v1, $zero, 0xB2
    ctx->pc = 0x1bd4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x1bd4f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD4F4u;
    {
        const bool branch_taken_0x1bd4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4F4u;
        // 0x1bd4f8: 0x24040069  addiu       $a0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4f4) {
            ctx->pc = 0x1BD50Cu;
            goto label_1bd50c;
        }
    }
    ctx->pc = 0x1BD4FCu;
label_1bd4fc:
    // 0x1bd4fc: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD4FCu;
    {
        const bool branch_taken_0x1bd4fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4FCu;
        // 0x1bd500: 0x240200a3  addiu       $v0, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4fc) {
            ctx->pc = 0x1BD518u;
            goto label_1bd518;
        }
    }
    ctx->pc = 0x1BD504u;
    // 0x1bd504: 0x2403008a  addiu       $v1, $zero, 0x8A
    ctx->pc = 0x1bd504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x1bd508: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1bd508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1bd50c:
    // 0x1bd50c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1bd50cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd510: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x1bd510u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd514: 0xa3a40012  sb          $a0, 0x12($sp)
    ctx->pc = 0x1bd514u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 4));
label_1bd518:
    // 0x1bd518: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1BD518u;
    SET_GPR_U32(ctx, 31, 0x1BD520u);
    ctx->pc = 0x1BD51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD518u;
    // 0x1bd51c: 0x8e2400f0  lw          $a0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1BD518u, 0x1BD520u)) {
        return;
    }
    ctx->pc = 0x1BD520u;
label_1bd520:
    // 0x1bd520: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1bd520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bd524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd528: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bd528u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd52c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BD52Cu;
    SET_GPR_U32(ctx, 31, 0x1BD534u);
    ctx->pc = 0x1BD530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD52Cu;
    // 0x1bd530: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BD52Cu, 0x1BD534u)) {
        return;
    }
    ctx->pc = 0x1BD534u;
label_1bd534:
    // 0x1bd534: 0x12c0001b  beqz        $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BD534u;
    {
        const bool branch_taken_0x1bd534 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD534u;
        // 0x1bd538: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd534) {
            ctx->pc = 0x1BD5A4u;
            goto label_1bd5a4;
        }
    }
    ctx->pc = 0x1BD53Cu;
    // 0x1bd53c: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x1bd53cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x1bd540: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1bd540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd544: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bd544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bd548: 0x24429330  addiu       $v0, $v0, -0x6CD0
    ctx->pc = 0x1bd548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939440));
    // 0x1bd54c: 0x24e40fc8  addiu       $a0, $a3, 0xFC8
    ctx->pc = 0x1bd54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4040));
    // 0x1bd550: 0xc4900018  lwc1        $f16, 0x18($a0)
    ctx->pc = 0x1bd550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1bd554: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1bd554u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd558: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bd558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bd55c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd560: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1bd560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd564: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1bd564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd568: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1bd568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd56c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1bd56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd570: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1bd570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1bd574: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1bd574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd578: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x1bd578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd57c: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x1bd57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd580: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bd580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd584: 0xc4cf000c  lwc1        $f15, 0xC($a2)
    ctx->pc = 0x1bd584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd588: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1bd588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bd58c: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x1bd58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd590: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1bd590u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1bd594: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1bd594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bd598: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bd598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd59c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1BD59Cu;
    {
        const bool branch_taken_0x1bd59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD59Cu;
        // 0x1bd5a0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd59c) {
            ctx->pc = 0x1BD604u;
            goto label_1bd604;
        }
    }
    ctx->pc = 0x1BD5A4u;
label_1bd5a4:
    // 0x1bd5a4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1bd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1bd5a8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1bd5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x1bd5ac: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1bd5acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bd5b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bd5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bd5b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd5b8: 0x26030fc8  addiu       $v1, $s0, 0xFC8
    ctx->pc = 0x1bd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    // 0x1bd5bc: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1bd5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1bd5c0: 0xc4700018  lwc1        $f16, 0x18($v1)
    ctx->pc = 0x1bd5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1bd5c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bd5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd5c8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1bd5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bd5cc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1bd5ccu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd5d0: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1bd5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1bd5d4: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1bd5d4u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1bd5d8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1bd5d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd5dc: 0xc4cf000c  lwc1        $f15, 0xC($a2)
    ctx->pc = 0x1bd5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd5e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1bd5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd5e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bd5e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd5e8: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x1bd5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd5ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bd5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd5f0: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1bd5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd5f4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1bd5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bd5f8: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x1bd5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd5fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bd5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bd600: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1bd600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bd604:
    // 0x1bd604: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1BD604u;
    SET_GPR_U32(ctx, 31, 0x1BD60Cu);
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1BD604u, 0x1BD60Cu)) {
        return;
    }
    ctx->pc = 0x1BD60Cu;
label_1bd60c:
    // 0x1bd60c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bd60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd610: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1BD610u;
    SET_GPR_U32(ctx, 31, 0x1BD618u);
    ctx->pc = 0x1BD614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD610u;
    // 0x1bd614: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1BD610u, 0x1BD618u)) {
        return;
    }
    ctx->pc = 0x1BD618u;
label_1bd618:
    // 0x1bd618: 0x27c5d5c8  addiu       $a1, $fp, -0x2A38
    ctx->pc = 0x1bd618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956488));
    // 0x1bd61c: 0x88a20003  lwl         $v0, 0x3($a1)
    ctx->pc = 0x1bd61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1bd620: 0x98a20000  lwr         $v0, 0x0($a1)
    ctx->pc = 0x1bd620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1bd624: 0xaba20123  swl         $v0, 0x123($sp)
    ctx->pc = 0x1bd624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 291); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bd628: 0xbba20120  swr         $v0, 0x120($sp)
    ctx->pc = 0x1bd628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bd62c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD62Cu;
    {
        const bool branch_taken_0x1bd62c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD62Cu;
        // 0x1bd630: 0x27b00120  addiu       $s0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd62c) {
            ctx->pc = 0x1BD644u;
            goto label_1bd644;
        }
    }
    ctx->pc = 0x1BD634u;
    // 0x1bd634: 0x93a20123  lbu         $v0, 0x123($sp)
    ctx->pc = 0x1bd634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 291)));
    // 0x1bd638: 0xa3a20120  sb          $v0, 0x120($sp)
    ctx->pc = 0x1bd638u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd63c: 0xa3a20122  sb          $v0, 0x122($sp)
    ctx->pc = 0x1bd63cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 290), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd640: 0xa3a20121  sb          $v0, 0x121($sp)
    ctx->pc = 0x1bd640u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 289), (uint8_t)GPR_U32(ctx, 2));
label_1bd644:
    // 0x1bd644: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1BD644u;
    SET_GPR_U32(ctx, 31, 0x1BD64Cu);
    ctx->pc = 0x1BD648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD644u;
    // 0x1bd648: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1BD644u, 0x1BD64Cu)) {
        return;
    }
    ctx->pc = 0x1BD64Cu;
label_1bd64c:
    // 0x1bd64c: 0x12c0001b  beqz        $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BD64Cu;
    {
        const bool branch_taken_0x1bd64c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD64Cu;
        // 0x1bd650: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd64c) {
            ctx->pc = 0x1BD6BCu;
            goto label_1bd6bc;
        }
    }
    ctx->pc = 0x1BD654u;
    // 0x1bd654: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bd658: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1bd658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd65c: 0x24429330  addiu       $v0, $v0, -0x6CD0
    ctx->pc = 0x1bd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939440));
    // 0x1bd660: 0x26640fc8  addiu       $a0, $s3, 0xFC8
    ctx->pc = 0x1bd660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4040));
    // 0x1bd664: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bd668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd66c: 0xc4900018  lwc1        $f16, 0x18($a0)
    ctx->pc = 0x1bd66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1bd670: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1bd670u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd674: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1bd674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1bd678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd67c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1bd67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd680: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1bd680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd684: 0xc4ef001c  lwc1        $f15, 0x1C($a3)
    ctx->pc = 0x1bd684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd688: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1bd688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd68c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bd68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd690: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x1bd690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd694: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1bd694u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1bd698: 0xc4cd0014  lwc1        $f13, 0x14($a2)
    ctx->pc = 0x1bd698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd69c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bd69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6a0: 0xc44e0018  lwc1        $f14, 0x18($v0)
    ctx->pc = 0x1bd6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd6a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bd6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd6a8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1bd6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bd6ac: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1BD6ACu;
    SET_GPR_U32(ctx, 31, 0x1BD6B4u);
    ctx->pc = 0x1BD6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD6ACu;
    // 0x1bd6b0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1BD6ACu, 0x1BD6B4u)) {
        return;
    }
    ctx->pc = 0x1BD6B4u;
label_1bd6b4:
    // 0x1bd6b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1BD6B4u;
    {
        const bool branch_taken_0x1bd6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6B4u;
        // 0x1bd6b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6b4) {
            ctx->pc = 0x1BD71Cu;
            goto label_1bd71c;
        }
    }
    ctx->pc = 0x1BD6BCu;
label_1bd6bc:
    // 0x1bd6bc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1bd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1bd6c0: 0x26630fc8  addiu       $v1, $s3, 0xFC8
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4040));
    // 0x1bd6c4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1bd6c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bd6c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bd6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bd6cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd6d0: 0xc4700018  lwc1        $f16, 0x18($v1)
    ctx->pc = 0x1bd6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1bd6d4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1bd6d4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd6d8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1bd6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bd6dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6e0: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1bd6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1bd6e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bd6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6e8: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1bd6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1bd6ec: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1bd6ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6f0: 0xc4ef001c  lwc1        $f15, 0x1C($a3)
    ctx->pc = 0x1bd6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bd6f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1bd6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6f8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bd6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6fc: 0xc4cd0014  lwc1        $f13, 0x14($a2)
    ctx->pc = 0x1bd6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd700: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1bd700u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1bd704: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x1bd704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd708: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bd708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd70c: 0xc44e0018  lwc1        $f14, 0x18($v0)
    ctx->pc = 0x1bd70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd710: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1BD710u;
    SET_GPR_U32(ctx, 31, 0x1BD718u);
    ctx->pc = 0x1BD714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD710u;
    // 0x1bd714: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1BD710u, 0x1BD718u)) {
        return;
    }
    ctx->pc = 0x1BD718u;
label_1bd718:
    // 0x1bd718: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bd718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bd71c:
    // 0x1bd71c: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1BD71Cu;
    SET_GPR_U32(ctx, 31, 0x1BD724u);
    ctx->pc = 0x1BD720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD71Cu;
    // 0x1bd720: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1BD71Cu, 0x1BD724u)) {
        return;
    }
    ctx->pc = 0x1BD724u;
label_1bd724:
    // 0x1bd724: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x1bd724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1bd728: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1bd728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1bd72c: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x1bd72cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1bd730: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x1bd730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1bd734: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x1bd734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1bd738: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x1bd738u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1bd73c: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x1bd73cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1bd740: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x1bd740u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1bd744: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x1bd744u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1bd748: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1bd748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1bd74c: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1bd74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bd750: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD750u;
        // 0x1bd754: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD758u;
}
