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

// Function: sub_00141480
// Address: 0x141480 - 0x1416d0
void sub_00141480_0x141480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141480_0x141480");
#endif

    switch (ctx->pc) {
        case 0x1414acu: goto label_1414ac;
        case 0x1414c0u: goto label_1414c0;
        case 0x1414d8u: goto label_1414d8;
        case 0x1414ecu: goto label_1414ec;
        case 0x141520u: goto label_141520;
        case 0x141544u: goto label_141544;
        case 0x141560u: goto label_141560;
        case 0x14162cu: goto label_14162c;
        case 0x14166cu: goto label_14166c;
        default: break;
    }

    ctx->pc = 0x141480u;

    // 0x141480: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x141480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x141484: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x141484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x141488: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x141488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14148c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14148cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141490: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x141490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141494: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x141494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x141498: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x141498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x14149c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x14149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1414a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1414a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1414a4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x1414A4u;
    SET_GPR_U32(ctx, 31, 0x1414ACu);
    ctx->pc = 0x1414A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1414A4u;
    // 0x1414a8: 0x3c140034  lui         $s4, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x1414A4u, 0x1414ACu)) {
        return;
    }
    ctx->pc = 0x1414ACu;
label_1414ac:
    // 0x1414ac: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1414acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1414b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1414b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414b4: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x1414b4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x1414b8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1414B8u;
    SET_GPR_U32(ctx, 31, 0x1414C0u);
    ctx->pc = 0x1414BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1414B8u;
    // 0x1414bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1414B8u, 0x1414C0u)) {
        return;
    }
    ctx->pc = 0x1414C0u;
label_1414c0:
    // 0x1414c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1414c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1414c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1414c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1414c8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1414C8u;
    {
        const bool branch_taken_0x1414c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1414CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414C8u;
        // 0x1414cc: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414c8) {
            ctx->pc = 0x141530u;
            goto label_141530;
        }
    }
    ctx->pc = 0x1414D0u;
    // 0x1414d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1414d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1414d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1414d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1414d8:
    // 0x1414d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1414d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1414dc: 0x5452000b  bnel        $v0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1414DCu;
    {
        const bool branch_taken_0x1414dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1414dc) {
            ctx->pc = 0x1414E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1414DCu;
            // 0x1414e0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14150Cu;
            goto label_14150c;
        }
    }
    ctx->pc = 0x1414E4u;
    // 0x1414e4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1414E4u;
    SET_GPR_U32(ctx, 31, 0x1414ECu);
    ctx->pc = 0x1414E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1414E4u;
    // 0x1414e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1414E4u, 0x1414ECu)) {
        return;
    }
    ctx->pc = 0x1414ECu;
label_1414ec:
    // 0x1414ec: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1414ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1414f0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1414f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1414f4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1414f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1414f8: 0xb2030053  sdl         $v1, 0x53($s0)
    ctx->pc = 0x1414f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1414fc: 0xb603004c  sdr         $v1, 0x4C($s0)
    ctx->pc = 0x1414fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141500: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x141500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x141504: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x141504u;
    {
        const bool branch_taken_0x141504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141504u;
        // 0x141508: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141504) {
            ctx->pc = 0x141534u;
            goto label_141534;
        }
    }
    ctx->pc = 0x14150Cu;
label_14150c:
    // 0x14150c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14150cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141514: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x141514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141518: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x141518u;
    SET_GPR_U32(ctx, 31, 0x141520u);
    ctx->pc = 0x14151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141518u;
    // 0x14151c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x141518u, 0x141520u)) {
        return;
    }
    ctx->pc = 0x141520u;
label_141520:
    // 0x141520: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x141520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141524: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141528: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x141528u;
    {
        const bool branch_taken_0x141528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141528u;
        // 0x14152c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141528) {
            ctx->pc = 0x1414D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1414d8;
        }
    }
    ctx->pc = 0x141530u;
label_141530:
    // 0x141530: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x141530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_141534:
    // 0x141534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141538: 0x8c464850  lw          $a2, 0x4850($v0)
    ctx->pc = 0x141538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18512)));
    // 0x14153c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x14153Cu;
    SET_GPR_U32(ctx, 31, 0x141544u);
    ctx->pc = 0x141540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14153Cu;
    // 0x141540: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x14153Cu, 0x141544u)) {
        return;
    }
    ctx->pc = 0x141544u;
label_141544:
    // 0x141544: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x141544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141548: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x141548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14154c: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x14154Cu;
    {
        const bool branch_taken_0x14154c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14154c) {
            ctx->pc = 0x141550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14154Cu;
            // 0x141550: 0xc60100a0  lwc1        $f1, 0xA0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x141680u;
            goto label_141680;
        }
    }
    ctx->pc = 0x141554u;
    // 0x141554: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141558: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x141558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14155c: 0x0  nop
    ctx->pc = 0x14155cu;
    // NOP
label_141560:
    // 0x141560: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x141560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x141564: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x141564u;
    {
        const bool branch_taken_0x141564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141564u;
        // 0x141568: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141564) {
            ctx->pc = 0x141650u;
            goto label_141650;
        }
    }
    ctx->pc = 0x14156Cu;
    // 0x14156c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14156cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x141570: 0x24420b60  addiu       $v0, $v0, 0xB60
    ctx->pc = 0x141570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2912));
    // 0x141574: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x141574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141578: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x141578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14157c: 0x800008  jr          $a0
    ctx->pc = 0x14157Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141584u: goto label_141584;
            case 0x141594u: goto label_141594;
            case 0x1415A4u: goto label_1415a4;
            case 0x1415B4u: goto label_1415b4;
            case 0x1415C4u: goto label_1415c4;
            case 0x1415E4u: goto label_1415e4;
            case 0x1415F4u: goto label_1415f4;
            case 0x141604u: goto label_141604;
            case 0x141614u: goto label_141614;
            case 0x141634u: goto label_141634;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14157Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x141584u;
label_141584:
    // 0x141584: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141588: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x141588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14158c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x14158Cu;
    {
        const bool branch_taken_0x14158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14158Cu;
        // 0x141590: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14158c) {
            ctx->pc = 0x141650u;
            goto label_141650;
        }
    }
    ctx->pc = 0x141594u;
label_141594:
    // 0x141594: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141598: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x141598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14159c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14159Cu;
    {
        const bool branch_taken_0x14159c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14159Cu;
        // 0x1415a0: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14159c) {
            ctx->pc = 0x141650u;
            goto label_141650;
        }
    }
    ctx->pc = 0x1415A4u;
label_1415a4:
    // 0x1415a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1415a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1415a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1415ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1415ACu;
    {
        const bool branch_taken_0x1415ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415ACu;
        // 0x1415b0: 0xe60000a4  swc1        $f0, 0xA4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415ac) {
            ctx->pc = 0x141650u;
            goto label_141650;
        }
    }
    ctx->pc = 0x1415B4u;
label_1415b4:
    // 0x1415b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1415b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1415b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1415bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1415BCu;
    {
        const bool branch_taken_0x1415bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415BCu;
        // 0x1415c0: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415bc) {
            ctx->pc = 0x141650u;
            goto label_141650;
        }
    }
    ctx->pc = 0x1415C4u;
label_1415c4:
    // 0x1415c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1415c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1415c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1415cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1415CCu;
    {
        const bool branch_taken_0x1415cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415CCu;
        // 0x1415d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415cc) {
            ctx->pc = 0x1415DCu;
            goto label_1415dc;
        }
    }
    ctx->pc = 0x1415D4u;
    // 0x1415d4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1415D4u;
    {
        const bool branch_taken_0x1415d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415D4u;
        // 0x1415d8: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415d4) {
            ctx->pc = 0x141650u;
            goto label_141650;
        }
    }
    ctx->pc = 0x1415DCu;
label_1415dc:
    // 0x1415dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1415DCu;
    {
        const bool branch_taken_0x1415dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415DCu;
        // 0x1415e0: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415dc) {
            ctx->pc = 0x141650u;
            goto label_141650;
        }
    }
    ctx->pc = 0x1415E4u;
label_1415e4:
    // 0x1415e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1415e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1415e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1415ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1415ECu;
    {
        const bool branch_taken_0x1415ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415ECu;
        // 0x1415f0: 0xe60000d8  swc1        $f0, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415ec) {
            ctx->pc = 0x141650u;
            goto label_141650;
        }
    }
    ctx->pc = 0x1415F4u;
label_1415f4:
    // 0x1415f4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1415f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415f8: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1415f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1415fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1415FCu;
    {
        const bool branch_taken_0x1415fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415FCu;
        // 0x141600: 0x260500b8  addiu       $a1, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415fc) {
            ctx->pc = 0x141620u;
            goto label_141620;
        }
    }
    ctx->pc = 0x141604u;
label_141604:
    // 0x141604: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x141604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141608: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x141608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x14160c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14160Cu;
    {
        const bool branch_taken_0x14160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14160Cu;
        // 0x141610: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14160c) {
            ctx->pc = 0x141620u;
            goto label_141620;
        }
    }
    ctx->pc = 0x141614u;
label_141614:
    // 0x141614: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x141614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141618: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x141618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x14161c: 0x260500c8  addiu       $a1, $s0, 0xC8
    ctx->pc = 0x14161cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_141620:
    // 0x141620: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x141620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141624: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x141624u;
    SET_GPR_U32(ctx, 31, 0x14162Cu);
    ctx->pc = 0x141628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141624u;
    // 0x141628: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x141624u, 0x14162Cu)) {
        return;
    }
    ctx->pc = 0x14162Cu;
label_14162c:
    // 0x14162c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14162Cu;
    {
        const bool branch_taken_0x14162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14162Cu;
        // 0x141630: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14162c) {
            ctx->pc = 0x141654u;
            goto label_141654;
        }
    }
    ctx->pc = 0x141634u;
label_141634:
    // 0x141634: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141638: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x141638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14163c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14163Cu;
    {
        const bool branch_taken_0x14163c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14163Cu;
        // 0x141640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14163c) {
            ctx->pc = 0x14164Cu;
            goto label_14164c;
        }
    }
    ctx->pc = 0x141644u;
    // 0x141644: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x141644u;
    {
        const bool branch_taken_0x141644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141644u;
        // 0x141648: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141644) {
            ctx->pc = 0x141650u;
            goto label_141650;
        }
    }
    ctx->pc = 0x14164Cu;
label_14164c:
    // 0x14164c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x14164cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_141650:
    // 0x141650: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x141650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_141654:
    // 0x141654: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x141654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141658: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14165c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141660: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x141660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141664: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x141664u;
    SET_GPR_U32(ctx, 31, 0x14166Cu);
    ctx->pc = 0x141668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141664u;
    // 0x141668: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x141664u, 0x14166Cu)) {
        return;
    }
    ctx->pc = 0x14166Cu;
label_14166c:
    // 0x14166c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141670: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141674: 0x5460ffba  bnel        $v1, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x141674u;
    {
        const bool branch_taken_0x141674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141674) {
            ctx->pc = 0x141678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141674u;
            // 0x141678: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141560;
        }
    }
    ctx->pc = 0x14167Cu;
    // 0x14167c: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x14167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141680:
    // 0x141680: 0xc60200a4  lwc1        $f2, 0xA4($s0)
    ctx->pc = 0x141680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x141684: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x141684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141688: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x141688u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14168c: 0xc60300a8  lwc1        $f3, 0xA8($s0)
    ctx->pc = 0x14168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x141690: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x141690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x141694: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x141694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141698: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x141698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14169c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x14169cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1416a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1416a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1416a4: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1416a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x1416a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1416a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1416ac: 0xe60100ac  swc1        $f1, 0xAC($s0)
    ctx->pc = 0x1416acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x1416b0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1416b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1416b4: 0x8e828470  lw          $v0, -0x7B90($s4)
    ctx->pc = 0x1416b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935664)));
    // 0x1416b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1416b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1416bc: 0xae828470  sw          $v0, -0x7B90($s4)
    ctx->pc = 0x1416bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294935664), GPR_U32(ctx, 2));
    // 0x1416c0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1416c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1416c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1416C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1416C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416C4u;
        // 0x1416c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1416C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1416CCu;
    // 0x1416cc: 0x0  nop
    ctx->pc = 0x1416ccu;
    // NOP
    ctx->pc = 0x1416d0u;
}
