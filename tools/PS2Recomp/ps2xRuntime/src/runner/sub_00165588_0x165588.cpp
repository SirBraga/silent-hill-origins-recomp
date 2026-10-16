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

// Function: sub_00165588
// Address: 0x165588 - 0x1656b8
void sub_00165588_0x165588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165588_0x165588");
#endif

    switch (ctx->pc) {
        case 0x165588u: goto label_165588;
        case 0x16558cu: goto label_16558c;
        case 0x165590u: goto label_165590;
        case 0x165594u: goto label_165594;
        case 0x165598u: goto label_165598;
        case 0x16559cu: goto label_16559c;
        case 0x1655a0u: goto label_1655a0;
        case 0x1655a4u: goto label_1655a4;
        case 0x1655a8u: goto label_1655a8;
        case 0x1655acu: goto label_1655ac;
        case 0x1655b0u: goto label_1655b0;
        case 0x1655b4u: goto label_1655b4;
        case 0x1655b8u: goto label_1655b8;
        case 0x1655bcu: goto label_1655bc;
        case 0x1655c0u: goto label_1655c0;
        case 0x1655c4u: goto label_1655c4;
        case 0x1655c8u: goto label_1655c8;
        case 0x1655ccu: goto label_1655cc;
        case 0x1655d0u: goto label_1655d0;
        case 0x1655d4u: goto label_1655d4;
        case 0x1655d8u: goto label_1655d8;
        case 0x1655dcu: goto label_1655dc;
        case 0x1655e0u: goto label_1655e0;
        case 0x1655e4u: goto label_1655e4;
        case 0x1655e8u: goto label_1655e8;
        case 0x1655ecu: goto label_1655ec;
        case 0x1655f0u: goto label_1655f0;
        case 0x1655f4u: goto label_1655f4;
        case 0x1655f8u: goto label_1655f8;
        case 0x1655fcu: goto label_1655fc;
        case 0x165600u: goto label_165600;
        case 0x165604u: goto label_165604;
        case 0x165608u: goto label_165608;
        case 0x16560cu: goto label_16560c;
        case 0x165610u: goto label_165610;
        case 0x165614u: goto label_165614;
        case 0x165618u: goto label_165618;
        case 0x16561cu: goto label_16561c;
        case 0x165620u: goto label_165620;
        case 0x165624u: goto label_165624;
        case 0x165628u: goto label_165628;
        case 0x16562cu: goto label_16562c;
        case 0x165630u: goto label_165630;
        case 0x165634u: goto label_165634;
        case 0x165638u: goto label_165638;
        case 0x16563cu: goto label_16563c;
        case 0x165640u: goto label_165640;
        case 0x165644u: goto label_165644;
        case 0x165648u: goto label_165648;
        case 0x16564cu: goto label_16564c;
        case 0x165650u: goto label_165650;
        case 0x165654u: goto label_165654;
        case 0x165658u: goto label_165658;
        case 0x16565cu: goto label_16565c;
        case 0x165660u: goto label_165660;
        case 0x165664u: goto label_165664;
        case 0x165668u: goto label_165668;
        case 0x16566cu: goto label_16566c;
        case 0x165670u: goto label_165670;
        case 0x165674u: goto label_165674;
        case 0x165678u: goto label_165678;
        case 0x16567cu: goto label_16567c;
        case 0x165680u: goto label_165680;
        case 0x165684u: goto label_165684;
        case 0x165688u: goto label_165688;
        case 0x16568cu: goto label_16568c;
        case 0x165690u: goto label_165690;
        case 0x165694u: goto label_165694;
        case 0x165698u: goto label_165698;
        case 0x16569cu: goto label_16569c;
        case 0x1656a0u: goto label_1656a0;
        case 0x1656a4u: goto label_1656a4;
        case 0x1656a8u: goto label_1656a8;
        case 0x1656acu: goto label_1656ac;
        case 0x1656b0u: goto label_1656b0;
        case 0x1656b4u: goto label_1656b4;
        default: break;
    }

    ctx->pc = 0x165588u;

label_165588:
    // 0x165588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16558c:
    // 0x16558c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x16558cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_165590:
    // 0x165590: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x165590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_165594:
    // 0x165594: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x165594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_165598:
    // 0x165598: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x165598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16559c:
    // 0x16559c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16559cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1655a0:
    // 0x1655a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1655a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1655a4:
    // 0x1655a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1655a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1655a8:
    // 0x1655a8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1655a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_1655ac:
    // 0x1655ac: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x1655acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_1655b0:
    // 0x1655b0: 0x24a53dd0  addiu       $a1, $a1, 0x3DD0
    ctx->pc = 0x1655b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15824));
label_1655b4:
    // 0x1655b4: 0x40f809  jalr        $v0
label_1655b8:
    if (ctx->pc == 0x1655B8u) {
        ctx->pc = 0x1655B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655B4u;
        // 0x1655b8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655BCu;
        goto label_1655bc;
    }
    ctx->pc = 0x1655B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1655BCu);
        ctx->pc = 0x1655B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655B4u;
        // 0x1655b8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1655B4u, 0x1655BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1655BCu;
label_1655bc:
    // 0x1655bc: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
label_1655c0:
    if (ctx->pc == 0x1655C0u) {
        ctx->pc = 0x1655C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655BCu;
        // 0x1655c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655C4u;
        goto label_1655c4;
    }
    ctx->pc = 0x1655BCu;
    {
        const bool branch_taken_0x1655bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1655bc) {
            ctx->pc = 0x1655C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1655BCu;
            // 0x1655c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1656A4u;
            goto label_1656a4;
        }
    }
    ctx->pc = 0x1655C4u;
label_1655c4:
    // 0x1655c4: 0x8e120018  lw          $s2, 0x18($s0)
    ctx->pc = 0x1655c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1655c8:
    // 0x1655c8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1655c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1655cc:
    // 0x1655cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1655ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1655d0:
    // 0x1655d0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1655d4:
    if (ctx->pc == 0x1655D4u) {
        ctx->pc = 0x1655D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655D0u;
        // 0x1655d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655D8u;
        goto label_1655d8;
    }
    ctx->pc = 0x1655D0u;
    {
        const bool branch_taken_0x1655d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1655D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655D0u;
        // 0x1655d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655d0) {
            ctx->pc = 0x1656A0u;
            goto label_1656a0;
        }
    }
    ctx->pc = 0x1655D8u;
label_1655d8:
    // 0x1655d8: 0xc058e24  jal         func_163890
label_1655dc:
    if (ctx->pc == 0x1655DCu) {
        ctx->pc = 0x1655DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655D8u;
        // 0x1655dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655E0u;
        goto label_1655e0;
    }
    ctx->pc = 0x1655D8u;
    SET_GPR_U32(ctx, 31, 0x1655E0u);
    ctx->pc = 0x1655DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655D8u;
    // 0x1655dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163890u, 0x1655D8u, 0x1655E0u)) {
        return;
    }
    ctx->pc = 0x1655E0u;
label_1655e0:
    // 0x1655e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1655e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1655e4:
    // 0x1655e4: 0x24040668  addiu       $a0, $zero, 0x668
    ctx->pc = 0x1655e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1640));
label_1655e8:
    // 0x1655e8: 0xc0808f0  jal         func_2023C0
label_1655ec:
    if (ctx->pc == 0x1655ECu) {
        ctx->pc = 0x1655ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655E8u;
        // 0x1655ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655F0u;
        goto label_1655f0;
    }
    ctx->pc = 0x1655E8u;
    SET_GPR_U32(ctx, 31, 0x1655F0u);
    ctx->pc = 0x1655ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655E8u;
    // 0x1655ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1655E8u, 0x1655F0u)) {
        return;
    }
    ctx->pc = 0x1655F0u;
label_1655f0:
    // 0x1655f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1655f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1655f4:
    // 0x1655f4: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1655f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_1655f8:
    // 0x1655f8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1655f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1655fc:
    // 0x1655fc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_165600:
    if (ctx->pc == 0x165600u) {
        ctx->pc = 0x165600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655FCu;
        // 0x165600: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165604u;
        goto label_165604;
    }
    ctx->pc = 0x1655FCu;
    {
        const bool branch_taken_0x1655fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655FCu;
        // 0x165600: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655fc) {
            ctx->pc = 0x16565Cu;
            goto label_16565c;
        }
    }
    ctx->pc = 0x165604u;
label_165604:
    // 0x165604: 0x26020660  addiu       $v0, $s0, 0x660
    ctx->pc = 0x165604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
label_165608:
    // 0x165608: 0x6a050007  ldl         $a1, 0x7($s0)
    ctx->pc = 0x165608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_16560c:
    // 0x16560c: 0x6e050000  ldr         $a1, 0x0($s0)
    ctx->pc = 0x16560cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_165610:
    // 0x165610: 0x6a06000f  ldl         $a2, 0xF($s0)
    ctx->pc = 0x165610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_165614:
    // 0x165614: 0x6e060008  ldr         $a2, 0x8($s0)
    ctx->pc = 0x165614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_165618:
    // 0x165618: 0x6a070017  ldl         $a3, 0x17($s0)
    ctx->pc = 0x165618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_16561c:
    // 0x16561c: 0x6e070010  ldr         $a3, 0x10($s0)
    ctx->pc = 0x16561cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_165620:
    // 0x165620: 0x6a08001f  ldl         $t0, 0x1F($s0)
    ctx->pc = 0x165620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_165624:
    // 0x165624: 0x6e080018  ldr         $t0, 0x18($s0)
    ctx->pc = 0x165624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_165628:
    // 0x165628: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x165628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_16562c:
    // 0x16562c: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x16562cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_165630:
    // 0x165630: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x165630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_165634:
    // 0x165634: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x165634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_165638:
    // 0x165638: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x165638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_16563c:
    // 0x16563c: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x16563cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_165640:
    // 0x165640: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x165640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_165644:
    // 0x165644: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x165644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_165648:
    // 0x165648: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x165648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_16564c:
    // 0x16564c: 0x1602ffee  bne         $s0, $v0, . + 4 + (-0x12 << 2)
label_165650:
    if (ctx->pc == 0x165650u) {
        ctx->pc = 0x165650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16564Cu;
        // 0x165650: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165654u;
        goto label_165654;
    }
    ctx->pc = 0x16564Cu;
    {
        const bool branch_taken_0x16564c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x165650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16564Cu;
        // 0x165650: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16564c) {
            ctx->pc = 0x165608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165608;
        }
    }
    ctx->pc = 0x165654u;
label_165654:
    // 0x165654: 0x1000000d  b           . + 4 + (0xD << 2)
label_165658:
    if (ctx->pc == 0x165658u) {
        ctx->pc = 0x16565Cu;
        goto label_16565c;
    }
    ctx->pc = 0x165654u;
    {
        const bool branch_taken_0x165654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165654) {
            ctx->pc = 0x16568Cu;
            goto label_16568c;
        }
    }
    ctx->pc = 0x16565Cu;
label_16565c:
    // 0x16565c: 0x26020660  addiu       $v0, $s0, 0x660
    ctx->pc = 0x16565cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
label_165660:
    // 0x165660: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x165660u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_165664:
    // 0x165664: 0xde060008  ld          $a2, 0x8($s0)
    ctx->pc = 0x165664u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_165668:
    // 0x165668: 0xde070010  ld          $a3, 0x10($s0)
    ctx->pc = 0x165668u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_16566c:
    // 0x16566c: 0xde080018  ld          $t0, 0x18($s0)
    ctx->pc = 0x16566cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_165670:
    // 0x165670: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x165670u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_165674:
    // 0x165674: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x165674u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
label_165678:
    // 0x165678: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x165678u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
label_16567c:
    // 0x16567c: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x16567cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
label_165680:
    // 0x165680: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x165680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_165684:
    // 0x165684: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
label_165688:
    if (ctx->pc == 0x165688u) {
        ctx->pc = 0x165688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165684u;
        // 0x165688: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16568Cu;
        goto label_16568c;
    }
    ctx->pc = 0x165684u;
    {
        const bool branch_taken_0x165684 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x165688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165684u;
        // 0x165688: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165684) {
            ctx->pc = 0x165660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165660;
        }
    }
    ctx->pc = 0x16568Cu;
label_16568c:
    // 0x16568c: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x16568cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_165690:
    // 0x165690: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x165690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_165694:
    // 0x165694: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x165694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_165698:
    // 0x165698: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x165698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_16569c:
    // 0x16569c: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x16569cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
label_1656a0:
    // 0x1656a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1656a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1656a4:
    // 0x1656a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1656a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1656a8:
    // 0x1656a8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1656a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1656ac:
    // 0x1656ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1656acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1656b0:
    // 0x1656b0: 0x3e00008  jr          $ra
label_1656b4:
    if (ctx->pc == 0x1656B4u) {
        ctx->pc = 0x1656B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656B0u;
        // 0x1656b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656B8u;
        goto label_fallthrough_0x1656b0;
    }
    ctx->pc = 0x1656B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1656B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656B0u;
        // 0x1656b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1656B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1656b0:
    ctx->pc = 0x1656B8u;
}
