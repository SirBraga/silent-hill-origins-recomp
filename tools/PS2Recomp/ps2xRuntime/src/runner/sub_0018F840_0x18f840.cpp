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

// Function: sub_0018F840
// Address: 0x18f840 - 0x18fae8
void sub_0018F840_0x18f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F840_0x18f840");
#endif

    switch (ctx->pc) {
        case 0x18f840u: goto label_18f840;
        case 0x18f844u: goto label_18f844;
        case 0x18f848u: goto label_18f848;
        case 0x18f84cu: goto label_18f84c;
        case 0x18f850u: goto label_18f850;
        case 0x18f854u: goto label_18f854;
        case 0x18f858u: goto label_18f858;
        case 0x18f85cu: goto label_18f85c;
        case 0x18f860u: goto label_18f860;
        case 0x18f864u: goto label_18f864;
        case 0x18f868u: goto label_18f868;
        case 0x18f86cu: goto label_18f86c;
        case 0x18f870u: goto label_18f870;
        case 0x18f874u: goto label_18f874;
        case 0x18f878u: goto label_18f878;
        case 0x18f87cu: goto label_18f87c;
        case 0x18f880u: goto label_18f880;
        case 0x18f884u: goto label_18f884;
        case 0x18f888u: goto label_18f888;
        case 0x18f88cu: goto label_18f88c;
        case 0x18f890u: goto label_18f890;
        case 0x18f894u: goto label_18f894;
        case 0x18f898u: goto label_18f898;
        case 0x18f89cu: goto label_18f89c;
        case 0x18f8a0u: goto label_18f8a0;
        case 0x18f8a4u: goto label_18f8a4;
        case 0x18f8a8u: goto label_18f8a8;
        case 0x18f8acu: goto label_18f8ac;
        case 0x18f8b0u: goto label_18f8b0;
        case 0x18f8b4u: goto label_18f8b4;
        case 0x18f8b8u: goto label_18f8b8;
        case 0x18f8bcu: goto label_18f8bc;
        case 0x18f8c0u: goto label_18f8c0;
        case 0x18f8c4u: goto label_18f8c4;
        case 0x18f8c8u: goto label_18f8c8;
        case 0x18f8ccu: goto label_18f8cc;
        case 0x18f8d0u: goto label_18f8d0;
        case 0x18f8d4u: goto label_18f8d4;
        case 0x18f8d8u: goto label_18f8d8;
        case 0x18f8dcu: goto label_18f8dc;
        case 0x18f8e0u: goto label_18f8e0;
        case 0x18f8e4u: goto label_18f8e4;
        case 0x18f8e8u: goto label_18f8e8;
        case 0x18f8ecu: goto label_18f8ec;
        case 0x18f8f0u: goto label_18f8f0;
        case 0x18f8f4u: goto label_18f8f4;
        case 0x18f8f8u: goto label_18f8f8;
        case 0x18f8fcu: goto label_18f8fc;
        case 0x18f900u: goto label_18f900;
        case 0x18f904u: goto label_18f904;
        case 0x18f908u: goto label_18f908;
        case 0x18f90cu: goto label_18f90c;
        case 0x18f910u: goto label_18f910;
        case 0x18f914u: goto label_18f914;
        case 0x18f918u: goto label_18f918;
        case 0x18f91cu: goto label_18f91c;
        case 0x18f920u: goto label_18f920;
        case 0x18f924u: goto label_18f924;
        case 0x18f928u: goto label_18f928;
        case 0x18f92cu: goto label_18f92c;
        case 0x18f930u: goto label_18f930;
        case 0x18f934u: goto label_18f934;
        case 0x18f938u: goto label_18f938;
        case 0x18f93cu: goto label_18f93c;
        case 0x18f940u: goto label_18f940;
        case 0x18f944u: goto label_18f944;
        case 0x18f948u: goto label_18f948;
        case 0x18f94cu: goto label_18f94c;
        case 0x18f950u: goto label_18f950;
        case 0x18f954u: goto label_18f954;
        case 0x18f958u: goto label_18f958;
        case 0x18f95cu: goto label_18f95c;
        case 0x18f960u: goto label_18f960;
        case 0x18f964u: goto label_18f964;
        case 0x18f968u: goto label_18f968;
        case 0x18f96cu: goto label_18f96c;
        case 0x18f970u: goto label_18f970;
        case 0x18f974u: goto label_18f974;
        case 0x18f978u: goto label_18f978;
        case 0x18f97cu: goto label_18f97c;
        case 0x18f980u: goto label_18f980;
        case 0x18f984u: goto label_18f984;
        case 0x18f988u: goto label_18f988;
        case 0x18f98cu: goto label_18f98c;
        case 0x18f990u: goto label_18f990;
        case 0x18f994u: goto label_18f994;
        case 0x18f998u: goto label_18f998;
        case 0x18f99cu: goto label_18f99c;
        case 0x18f9a0u: goto label_18f9a0;
        case 0x18f9a4u: goto label_18f9a4;
        case 0x18f9a8u: goto label_18f9a8;
        case 0x18f9acu: goto label_18f9ac;
        case 0x18f9b0u: goto label_18f9b0;
        case 0x18f9b4u: goto label_18f9b4;
        case 0x18f9b8u: goto label_18f9b8;
        case 0x18f9bcu: goto label_18f9bc;
        case 0x18f9c0u: goto label_18f9c0;
        case 0x18f9c4u: goto label_18f9c4;
        case 0x18f9c8u: goto label_18f9c8;
        case 0x18f9ccu: goto label_18f9cc;
        case 0x18f9d0u: goto label_18f9d0;
        case 0x18f9d4u: goto label_18f9d4;
        case 0x18f9d8u: goto label_18f9d8;
        case 0x18f9dcu: goto label_18f9dc;
        case 0x18f9e0u: goto label_18f9e0;
        case 0x18f9e4u: goto label_18f9e4;
        case 0x18f9e8u: goto label_18f9e8;
        case 0x18f9ecu: goto label_18f9ec;
        case 0x18f9f0u: goto label_18f9f0;
        case 0x18f9f4u: goto label_18f9f4;
        case 0x18f9f8u: goto label_18f9f8;
        case 0x18f9fcu: goto label_18f9fc;
        case 0x18fa00u: goto label_18fa00;
        case 0x18fa04u: goto label_18fa04;
        case 0x18fa08u: goto label_18fa08;
        case 0x18fa0cu: goto label_18fa0c;
        case 0x18fa10u: goto label_18fa10;
        case 0x18fa14u: goto label_18fa14;
        case 0x18fa18u: goto label_18fa18;
        case 0x18fa1cu: goto label_18fa1c;
        case 0x18fa20u: goto label_18fa20;
        case 0x18fa24u: goto label_18fa24;
        case 0x18fa28u: goto label_18fa28;
        case 0x18fa2cu: goto label_18fa2c;
        case 0x18fa30u: goto label_18fa30;
        case 0x18fa34u: goto label_18fa34;
        case 0x18fa38u: goto label_18fa38;
        case 0x18fa3cu: goto label_18fa3c;
        case 0x18fa40u: goto label_18fa40;
        case 0x18fa44u: goto label_18fa44;
        case 0x18fa48u: goto label_18fa48;
        case 0x18fa4cu: goto label_18fa4c;
        case 0x18fa50u: goto label_18fa50;
        case 0x18fa54u: goto label_18fa54;
        case 0x18fa58u: goto label_18fa58;
        case 0x18fa5cu: goto label_18fa5c;
        case 0x18fa60u: goto label_18fa60;
        case 0x18fa64u: goto label_18fa64;
        case 0x18fa68u: goto label_18fa68;
        case 0x18fa6cu: goto label_18fa6c;
        case 0x18fa70u: goto label_18fa70;
        case 0x18fa74u: goto label_18fa74;
        case 0x18fa78u: goto label_18fa78;
        case 0x18fa7cu: goto label_18fa7c;
        case 0x18fa80u: goto label_18fa80;
        case 0x18fa84u: goto label_18fa84;
        case 0x18fa88u: goto label_18fa88;
        case 0x18fa8cu: goto label_18fa8c;
        case 0x18fa90u: goto label_18fa90;
        case 0x18fa94u: goto label_18fa94;
        case 0x18fa98u: goto label_18fa98;
        case 0x18fa9cu: goto label_18fa9c;
        case 0x18faa0u: goto label_18faa0;
        case 0x18faa4u: goto label_18faa4;
        case 0x18faa8u: goto label_18faa8;
        case 0x18faacu: goto label_18faac;
        case 0x18fab0u: goto label_18fab0;
        case 0x18fab4u: goto label_18fab4;
        case 0x18fab8u: goto label_18fab8;
        case 0x18fabcu: goto label_18fabc;
        case 0x18fac0u: goto label_18fac0;
        case 0x18fac4u: goto label_18fac4;
        case 0x18fac8u: goto label_18fac8;
        case 0x18faccu: goto label_18facc;
        case 0x18fad0u: goto label_18fad0;
        case 0x18fad4u: goto label_18fad4;
        case 0x18fad8u: goto label_18fad8;
        case 0x18fadcu: goto label_18fadc;
        case 0x18fae0u: goto label_18fae0;
        case 0x18fae4u: goto label_18fae4;
        default: break;
    }

    ctx->pc = 0x18f840u;

label_18f840:
    // 0x18f840: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_18f844:
    // 0x18f844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f848:
    // 0x18f848: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18f848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_18f84c:
    // 0x18f84c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18f84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_18f850:
    // 0x18f850: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18f850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f854:
    // 0x18f854: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x18f854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_18f858:
    // 0x18f858: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18f858u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f85c:
    // 0x18f85c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18f85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_18f860:
    // 0x18f860: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18f860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_18f864:
    // 0x18f864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18f868:
    // 0x18f868: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x18f868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_18f86c:
    // 0x18f86c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_18f870:
    // 0x18f870: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x18f870u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18f874:
    // 0x18f874: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x18f874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_18f878:
    // 0x18f878: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_18f87c:
    if (ctx->pc == 0x18F87Cu) {
        ctx->pc = 0x18F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F878u;
        // 0x18f87c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F880u;
        goto label_18f880;
    }
    ctx->pc = 0x18F878u;
    {
        const bool branch_taken_0x18f878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F878u;
        // 0x18f87c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f878) {
            ctx->pc = 0x18F918u;
            goto label_18f918;
        }
    }
    ctx->pc = 0x18F880u;
label_18f880:
    // 0x18f880: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x18f880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_18f884:
    // 0x18f884: 0x54430025  bnel        $v0, $v1, . + 4 + (0x25 << 2)
label_18f888:
    if (ctx->pc == 0x18F888u) {
        ctx->pc = 0x18F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F884u;
        // 0x18f888: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F88Cu;
        goto label_18f88c;
    }
    ctx->pc = 0x18F884u;
    {
        const bool branch_taken_0x18f884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18f884) {
            ctx->pc = 0x18F888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F884u;
            // 0x18f888: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F91Cu;
            goto label_18f91c;
        }
    }
    ctx->pc = 0x18F88Cu;
label_18f88c:
    // 0x18f88c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_18f890:
    if (ctx->pc == 0x18F890u) {
        ctx->pc = 0x18F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F88Cu;
        // 0x18f890: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F894u;
        goto label_18f894;
    }
    ctx->pc = 0x18F88Cu;
    {
        const bool branch_taken_0x18f88c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F88Cu;
        // 0x18f890: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f88c) {
            ctx->pc = 0x18F8E0u;
            goto label_18f8e0;
        }
    }
    ctx->pc = 0x18F894u;
label_18f894:
    // 0x18f894: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x18f894u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_18f898:
    // 0x18f898: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_18f89c:
    if (ctx->pc == 0x18F89Cu) {
        ctx->pc = 0x18F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F898u;
        // 0x18f89c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8A0u;
        goto label_18f8a0;
    }
    ctx->pc = 0x18F898u;
    {
        const bool branch_taken_0x18f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F898u;
        // 0x18f89c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f898) {
            ctx->pc = 0x18F8E0u;
            goto label_18f8e0;
        }
    }
    ctx->pc = 0x18F8A0u;
label_18f8a0:
    // 0x18f8a0: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x18f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_18f8a4:
    // 0x18f8a4: 0x40f809  jalr        $v0
label_18f8a8:
    if (ctx->pc == 0x18F8A8u) {
        ctx->pc = 0x18F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8A4u;
        // 0x18f8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8ACu;
        goto label_18f8ac;
    }
    ctx->pc = 0x18F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F8ACu);
        ctx->pc = 0x18F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8A4u;
        // 0x18f8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F8A4u, 0x18F8ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F8ACu;
label_18f8ac:
    // 0x18f8ac: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x18f8acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18f8b0:
    // 0x18f8b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18f8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18f8b4:
    // 0x18f8b4: 0xc080924  jal         func_202490
label_18f8b8:
    if (ctx->pc == 0x18F8B8u) {
        ctx->pc = 0x18F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8B4u;
        // 0x18f8b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8BCu;
        goto label_18f8bc;
    }
    ctx->pc = 0x18F8B4u;
    SET_GPR_U32(ctx, 31, 0x18F8BCu);
    ctx->pc = 0x18F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F8B4u;
    // 0x18f8b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x18F8B4u, 0x18F8BCu)) {
        return;
    }
    ctx->pc = 0x18F8BCu;
label_18f8bc:
    // 0x18f8bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18f8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f8c0:
    // 0x18f8c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18f8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18f8c4:
    // 0x18f8c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18f8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f8c8:
    // 0x18f8c8: 0xc081b9a  jal         func_206E68
label_18f8cc:
    if (ctx->pc == 0x18F8CCu) {
        ctx->pc = 0x18F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8C8u;
        // 0x18f8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8D0u;
        goto label_18f8d0;
    }
    ctx->pc = 0x18F8C8u;
    SET_GPR_U32(ctx, 31, 0x18F8D0u);
    ctx->pc = 0x18F8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F8C8u;
    // 0x18f8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x18F8C8u, 0x18F8D0u)) {
        return;
    }
    ctx->pc = 0x18F8D0u;
label_18f8d0:
    // 0x18f8d0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18f8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f8d4:
    // 0x18f8d4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x18f8d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_18f8d8:
    // 0x18f8d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_18f8dc:
    if (ctx->pc == 0x18F8DCu) {
        ctx->pc = 0x18F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8D8u;
        // 0x18f8dc: 0xa220fffb  sb          $zero, -0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294967291), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8E0u;
        goto label_18f8e0;
    }
    ctx->pc = 0x18F8D8u;
    {
        const bool branch_taken_0x18f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8D8u;
        // 0x18f8dc: 0xa220fffb  sb          $zero, -0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294967291), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8d8) {
            ctx->pc = 0x18F8E4u;
            goto label_18f8e4;
        }
    }
    ctx->pc = 0x18F8E0u;
label_18f8e0:
    // 0x18f8e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18f8e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f8e4:
    // 0x18f8e4: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
label_18f8e8:
    if (ctx->pc == 0x18F8E8u) {
        ctx->pc = 0x18F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8E4u;
        // 0x18f8e8: 0x2685004c  addiu       $a1, $s4, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8ECu;
        goto label_18f8ec;
    }
    ctx->pc = 0x18F8E4u;
    {
        const bool branch_taken_0x18f8e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8E4u;
        // 0x18f8e8: 0x2685004c  addiu       $a1, $s4, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8e4) {
            ctx->pc = 0x18F9B8u;
            goto label_18f9b8;
        }
    }
    ctx->pc = 0x18F8ECu;
label_18f8ec:
    // 0x18f8ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f8f0:
    // 0x18f8f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18f8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18f8f4:
    // 0x18f8f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18f8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f8f8:
    // 0x18f8f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18f8f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f8fc:
    // 0x18f8fc: 0xc063616  jal         func_18D858
label_18f900:
    if (ctx->pc == 0x18F900u) {
        ctx->pc = 0x18F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8FCu;
        // 0x18f900: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F904u;
        goto label_18f904;
    }
    ctx->pc = 0x18F8FCu;
    SET_GPR_U32(ctx, 31, 0x18F904u);
    ctx->pc = 0x18F900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F8FCu;
    // 0x18f900: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D858u, 0x18F8FCu, 0x18F904u)) {
        return;
    }
    ctx->pc = 0x18F904u;
label_18f904:
    // 0x18f904: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18f904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f908:
    // 0x18f908: 0xc0808b8  jal         func_2022E0
label_18f90c:
    if (ctx->pc == 0x18F90Cu) {
        ctx->pc = 0x18F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F908u;
        // 0x18f90c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F910u;
        goto label_18f910;
    }
    ctx->pc = 0x18F908u;
    SET_GPR_U32(ctx, 31, 0x18F910u);
    ctx->pc = 0x18F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F908u;
    // 0x18f90c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18F908u, 0x18F910u)) {
        return;
    }
    ctx->pc = 0x18F910u;
label_18f910:
    // 0x18f910: 0x1000002a  b           . + 4 + (0x2A << 2)
label_18f914:
    if (ctx->pc == 0x18F914u) {
        ctx->pc = 0x18F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F910u;
        // 0x18f914: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F918u;
        goto label_18f918;
    }
    ctx->pc = 0x18F910u;
    {
        const bool branch_taken_0x18f910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F910u;
        // 0x18f914: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f910) {
            ctx->pc = 0x18F9BCu;
            goto label_18f9bc;
        }
    }
    ctx->pc = 0x18F918u;
label_18f918:
    // 0x18f918: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18f918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18f91c:
    // 0x18f91c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18f920:
    // 0x18f920: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x18f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_18f924:
    // 0x18f924: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
label_18f928:
    if (ctx->pc == 0x18F928u) {
        ctx->pc = 0x18F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F924u;
        // 0x18f928: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F92Cu;
        goto label_18f92c;
    }
    ctx->pc = 0x18F924u;
    {
        const bool branch_taken_0x18f924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F924u;
        // 0x18f928: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f924) {
            ctx->pc = 0x18F9BCu;
            goto label_18f9bc;
        }
    }
    ctx->pc = 0x18F92Cu;
label_18f92c:
    // 0x18f92c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18f92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18f930:
    // 0x18f930: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_18f934:
    if (ctx->pc == 0x18F934u) {
        ctx->pc = 0x18F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F930u;
        // 0x18f934: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F938u;
        goto label_18f938;
    }
    ctx->pc = 0x18F930u;
    {
        const bool branch_taken_0x18f930 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F930u;
        // 0x18f934: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f930) {
            ctx->pc = 0x18F984u;
            goto label_18f984;
        }
    }
    ctx->pc = 0x18F938u;
label_18f938:
    // 0x18f938: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x18f938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_18f93c:
    // 0x18f93c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_18f940:
    if (ctx->pc == 0x18F940u) {
        ctx->pc = 0x18F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F93Cu;
        // 0x18f940: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F944u;
        goto label_18f944;
    }
    ctx->pc = 0x18F93Cu;
    {
        const bool branch_taken_0x18f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F93Cu;
        // 0x18f940: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f93c) {
            ctx->pc = 0x18F984u;
            goto label_18f984;
        }
    }
    ctx->pc = 0x18F944u;
label_18f944:
    // 0x18f944: 0x2623108c  addiu       $v1, $s1, 0x108C
    ctx->pc = 0x18f944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4236));
label_18f948:
    // 0x18f948: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18f94c:
    // 0x18f94c: 0x40f809  jalr        $v0
label_18f950:
    if (ctx->pc == 0x18F950u) {
        ctx->pc = 0x18F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F94Cu;
        // 0x18f950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F954u;
        goto label_18f954;
    }
    ctx->pc = 0x18F94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F954u);
        ctx->pc = 0x18F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F94Cu;
        // 0x18f950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F94Cu, 0x18F954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F954u;
label_18f954:
    // 0x18f954: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18f954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18f958:
    // 0x18f958: 0xc080924  jal         func_202490
label_18f95c:
    if (ctx->pc == 0x18F95Cu) {
        ctx->pc = 0x18F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F958u;
        // 0x18f95c: 0x24440005  addiu       $a0, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F960u;
        goto label_18f960;
    }
    ctx->pc = 0x18F958u;
    SET_GPR_U32(ctx, 31, 0x18F960u);
    ctx->pc = 0x18F95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F958u;
    // 0x18f95c: 0x24440005  addiu       $a0, $v0, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x18F958u, 0x18F960u)) {
        return;
    }
    ctx->pc = 0x18F960u;
label_18f960:
    // 0x18f960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18f960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f964:
    // 0x18f964: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18f964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_18f968:
    // 0x18f968: 0x8e22108c  lw          $v0, 0x108C($s1)
    ctx->pc = 0x18f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4236)));
label_18f96c:
    // 0x18f96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f970:
    // 0x18f970: 0x24a594a8  addiu       $a1, $a1, -0x6B58
    ctx->pc = 0x18f970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939816));
label_18f974:
    // 0x18f974: 0x40f809  jalr        $v0
label_18f978:
    if (ctx->pc == 0x18F978u) {
        ctx->pc = 0x18F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F974u;
        // 0x18f978: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F97Cu;
        goto label_18f97c;
    }
    ctx->pc = 0x18F974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F97Cu);
        ctx->pc = 0x18F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F974u;
        // 0x18f978: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F974u, 0x18F97Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F97Cu;
label_18f97c:
    // 0x18f97c: 0x10000002  b           . + 4 + (0x2 << 2)
label_18f980:
    if (ctx->pc == 0x18F980u) {
        ctx->pc = 0x18F984u;
        goto label_18f984;
    }
    ctx->pc = 0x18F97Cu;
    {
        const bool branch_taken_0x18f97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f97c) {
            ctx->pc = 0x18F988u;
            goto label_18f988;
        }
    }
    ctx->pc = 0x18F984u;
label_18f984:
    // 0x18f984: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18f984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f988:
    // 0x18f988: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_18f98c:
    if (ctx->pc == 0x18F98Cu) {
        ctx->pc = 0x18F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F988u;
        // 0x18f98c: 0x2685002c  addiu       $a1, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F990u;
        goto label_18f990;
    }
    ctx->pc = 0x18F988u;
    {
        const bool branch_taken_0x18f988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F988u;
        // 0x18f98c: 0x2685002c  addiu       $a1, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f988) {
            ctx->pc = 0x18F9B4u;
            goto label_18f9b4;
        }
    }
    ctx->pc = 0x18F990u;
label_18f990:
    // 0x18f990: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f994:
    // 0x18f994: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18f994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f998:
    // 0x18f998: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18f998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f99c:
    // 0x18f99c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18f99cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f9a0:
    // 0x18f9a0: 0xc063616  jal         func_18D858
label_18f9a4:
    if (ctx->pc == 0x18F9A4u) {
        ctx->pc = 0x18F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9A0u;
        // 0x18f9a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9A8u;
        goto label_18f9a8;
    }
    ctx->pc = 0x18F9A0u;
    SET_GPR_U32(ctx, 31, 0x18F9A8u);
    ctx->pc = 0x18F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F9A0u;
    // 0x18f9a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D858u, 0x18F9A0u, 0x18F9A8u)) {
        return;
    }
    ctx->pc = 0x18F9A8u;
label_18f9a8:
    // 0x18f9a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18f9a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f9ac:
    // 0x18f9ac: 0xc0808b8  jal         func_2022E0
label_18f9b0:
    if (ctx->pc == 0x18F9B0u) {
        ctx->pc = 0x18F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9ACu;
        // 0x18f9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9B4u;
        goto label_18f9b4;
    }
    ctx->pc = 0x18F9ACu;
    SET_GPR_U32(ctx, 31, 0x18F9B4u);
    ctx->pc = 0x18F9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F9ACu;
    // 0x18f9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18F9ACu, 0x18F9B4u)) {
        return;
    }
    ctx->pc = 0x18F9B4u;
label_18f9b4:
    // 0x18f9b4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x18f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_18f9b8:
    // 0x18f9b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18f9bc:
    // 0x18f9bc: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_18f9c0:
    if (ctx->pc == 0x18F9C0u) {
        ctx->pc = 0x18F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9BCu;
        // 0x18f9c0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9C4u;
        goto label_18f9c4;
    }
    ctx->pc = 0x18F9BCu;
    {
        const bool branch_taken_0x18f9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f9bc) {
            ctx->pc = 0x18F9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F9BCu;
            // 0x18f9c0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FAC0u;
            goto label_18fac0;
        }
    }
    ctx->pc = 0x18F9C4u;
label_18f9c4:
    // 0x18f9c4: 0x5260003e  beql        $s3, $zero, . + 4 + (0x3E << 2)
label_18f9c8:
    if (ctx->pc == 0x18F9C8u) {
        ctx->pc = 0x18F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9C4u;
        // 0x18f9c8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9CCu;
        goto label_18f9cc;
    }
    ctx->pc = 0x18F9C4u;
    {
        const bool branch_taken_0x18f9c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f9c4) {
            ctx->pc = 0x18F9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F9C4u;
            // 0x18f9c8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FAC0u;
            goto label_18fac0;
        }
    }
    ctx->pc = 0x18F9CCu;
label_18f9cc:
    // 0x18f9cc: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x18f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_18f9d0:
    // 0x18f9d0: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x18f9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_18f9d4:
    // 0x18f9d4: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x18f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_18f9d8:
    // 0x18f9d8: 0x6102a  slt         $v0, $zero, $a2
    ctx->pc = 0x18f9d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_18f9dc:
    // 0x18f9dc: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x18f9dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_18f9e0:
    // 0x18f9e0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x18f9e0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_18f9e4:
    // 0x18f9e4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_18f9e8:
    if (ctx->pc == 0x18F9E8u) {
        ctx->pc = 0x18F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9E4u;
        // 0x18f9e8: 0x852023  subu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9ECu;
        goto label_18f9ec;
    }
    ctx->pc = 0x18F9E4u;
    {
        const bool branch_taken_0x18f9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9E4u;
        // 0x18f9e8: 0x852023  subu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9e4) {
            ctx->pc = 0x18FABCu;
            goto label_18fabc;
        }
    }
    ctx->pc = 0x18F9ECu;
label_18f9ec:
    // 0x18f9ec: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x18f9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_18f9f0:
    // 0x18f9f0: 0xc2200b  movn        $a0, $a2, $v0
    ctx->pc = 0x18f9f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6));
label_18f9f4:
    // 0x18f9f4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x18f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_18f9f8:
    // 0x18f9f8: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x18f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_18f9fc:
    // 0x18f9fc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x18f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18fa00:
    // 0x18fa00: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x18fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_18fa04:
    // 0x18fa04: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x18fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18fa08:
    // 0x18fa08: 0xaca20058  sw          $v0, 0x58($a1)
    ctx->pc = 0x18fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 2));
label_18fa0c:
    // 0x18fa0c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18fa10:
    // 0x18fa10: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x18fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_18fa14:
    // 0x18fa14: 0x1c400026  bgtz        $v0, . + 4 + (0x26 << 2)
label_18fa18:
    if (ctx->pc == 0x18FA18u) {
        ctx->pc = 0x18FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA14u;
        // 0x18fa18: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA1Cu;
        goto label_18fa1c;
    }
    ctx->pc = 0x18FA14u;
    {
        const bool branch_taken_0x18fa14 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x18FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA14u;
        // 0x18fa18: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa14) {
            ctx->pc = 0x18FAB0u;
            goto label_18fab0;
        }
    }
    ctx->pc = 0x18FA1Cu;
label_18fa1c:
    // 0x18fa1c: 0x2690002c  addiu       $s0, $s4, 0x2C
    ctx->pc = 0x18fa1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
label_18fa20:
    // 0x18fa20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18fa24:
    // 0x18fa24: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_18fa28:
    if (ctx->pc == 0x18FA28u) {
        ctx->pc = 0x18FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA24u;
        // 0x18fa28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA2Cu;
        goto label_18fa2c;
    }
    ctx->pc = 0x18FA24u;
    {
        const bool branch_taken_0x18fa24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fa24) {
            ctx->pc = 0x18FA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FA24u;
            // 0x18fa28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FA4Cu;
            goto label_18fa4c;
        }
    }
    ctx->pc = 0x18FA2Cu;
label_18fa2c:
    // 0x18fa2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fa30:
    // 0x18fa30: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_18fa34:
    if (ctx->pc == 0x18FA34u) {
        ctx->pc = 0x18FA38u;
        goto label_18fa38;
    }
    ctx->pc = 0x18FA30u;
    {
        const bool branch_taken_0x18fa30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18fa30) {
            ctx->pc = 0x18FA4Cu;
            goto label_18fa4c;
        }
    }
    ctx->pc = 0x18FA38u;
label_18fa38:
    // 0x18fa38: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x18fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18fa3c:
    // 0x18fa3c: 0x0  nop
    ctx->pc = 0x18fa3cu;
    // NOP
label_18fa40:
    // 0x18fa40: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
label_18fa44:
    if (ctx->pc == 0x18FA44u) {
        ctx->pc = 0x18FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA40u;
        // 0x18fa44: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA48u;
        goto label_18fa48;
    }
    ctx->pc = 0x18FA40u;
    {
        const bool branch_taken_0x18fa40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fa40) {
            ctx->pc = 0x18FA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FA40u;
            // 0x18fa44: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fa30;
        }
    }
    ctx->pc = 0x18FA48u;
label_18fa48:
    // 0x18fa48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18fa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fa4c:
    // 0x18fa4c: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_18fa50:
    if (ctx->pc == 0x18FA50u) {
        ctx->pc = 0x18FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA4Cu;
        // 0x18fa50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA54u;
        goto label_18fa54;
    }
    ctx->pc = 0x18FA4Cu;
    {
        const bool branch_taken_0x18fa4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fa4c) {
            ctx->pc = 0x18FA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FA4Cu;
            // 0x18fa50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FA9Cu;
            goto label_18fa9c;
        }
    }
    ctx->pc = 0x18FA54u;
label_18fa54:
    // 0x18fa54: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18fa58:
    // 0x18fa58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_18fa5c:
    if (ctx->pc == 0x18FA5Cu) {
        ctx->pc = 0x18FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA58u;
        // 0x18fa5c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA60u;
        goto label_18fa60;
    }
    ctx->pc = 0x18FA58u;
    {
        const bool branch_taken_0x18fa58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA58u;
        // 0x18fa5c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa58) {
            ctx->pc = 0x18FA68u;
            goto label_18fa68;
        }
    }
    ctx->pc = 0x18FA60u;
label_18fa60:
    // 0x18fa60: 0x10000002  b           . + 4 + (0x2 << 2)
label_18fa64:
    if (ctx->pc == 0x18FA64u) {
        ctx->pc = 0x18FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA60u;
        // 0x18fa64: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA68u;
        goto label_18fa68;
    }
    ctx->pc = 0x18FA60u;
    {
        const bool branch_taken_0x18fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA60u;
        // 0x18fa64: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa60) {
            ctx->pc = 0x18FA6Cu;
            goto label_18fa6c;
        }
    }
    ctx->pc = 0x18FA68u;
label_18fa68:
    // 0x18fa68: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18fa6c:
    // 0x18fa6c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18fa70:
    // 0x18fa70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_18fa74:
    if (ctx->pc == 0x18FA74u) {
        ctx->pc = 0x18FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA70u;
        // 0x18fa74: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA78u;
        goto label_18fa78;
    }
    ctx->pc = 0x18FA70u;
    {
        const bool branch_taken_0x18fa70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA70u;
        // 0x18fa74: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa70) {
            ctx->pc = 0x18FA80u;
            goto label_18fa80;
        }
    }
    ctx->pc = 0x18FA78u;
label_18fa78:
    // 0x18fa78: 0x10000002  b           . + 4 + (0x2 << 2)
label_18fa7c:
    if (ctx->pc == 0x18FA7Cu) {
        ctx->pc = 0x18FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA78u;
        // 0x18fa7c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA80u;
        goto label_18fa80;
    }
    ctx->pc = 0x18FA78u;
    {
        const bool branch_taken_0x18fa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA78u;
        // 0x18fa7c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa78) {
            ctx->pc = 0x18FA84u;
            goto label_18fa84;
        }
    }
    ctx->pc = 0x18FA80u;
label_18fa80:
    // 0x18fa80: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18fa84:
    // 0x18fa84: 0xc0808b8  jal         func_2022E0
label_18fa88:
    if (ctx->pc == 0x18FA88u) {
        ctx->pc = 0x18FA8Cu;
        goto label_18fa8c;
    }
    ctx->pc = 0x18FA84u;
    SET_GPR_U32(ctx, 31, 0x18FA8Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18FA84u, 0x18FA8Cu)) {
        return;
    }
    ctx->pc = 0x18FA8Cu;
label_18fa8c:
    // 0x18fa8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18fa90:
    // 0x18fa90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18fa94:
    // 0x18fa94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_18fa98:
    // 0x18fa98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18fa9c:
    // 0x18fa9c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_18faa0:
    if (ctx->pc == 0x18FAA0u) {
        ctx->pc = 0x18FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA9Cu;
        // 0x18faa0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAA4u;
        goto label_18faa4;
    }
    ctx->pc = 0x18FA9Cu;
    {
        const bool branch_taken_0x18fa9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fa9c) {
            ctx->pc = 0x18FAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FA9Cu;
            // 0x18faa0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FAB0u;
            goto label_18fab0;
        }
    }
    ctx->pc = 0x18FAA4u;
label_18faa4:
    // 0x18faa4: 0xc0808b8  jal         func_2022E0
label_18faa8:
    if (ctx->pc == 0x18FAA8u) {
        ctx->pc = 0x18FAACu;
        goto label_18faac;
    }
    ctx->pc = 0x18FAA4u;
    SET_GPR_U32(ctx, 31, 0x18FAACu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18FAA4u, 0x18FAACu)) {
        return;
    }
    ctx->pc = 0x18FAACu;
label_18faac:
    // 0x18faac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x18faacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_18fab0:
    // 0x18fab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18fab4:
    // 0x18fab4: 0xc0644f4  jal         func_1913D0
label_18fab8:
    if (ctx->pc == 0x18FAB8u) {
        ctx->pc = 0x18FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAB4u;
        // 0x18fab8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FABCu;
        goto label_18fabc;
    }
    ctx->pc = 0x18FAB4u;
    SET_GPR_U32(ctx, 31, 0x18FABCu);
    ctx->pc = 0x18FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FAB4u;
    // 0x18fab8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x18FAB4u, 0x18FABCu)) {
        return;
    }
    ctx->pc = 0x18FABCu;
label_18fabc:
    // 0x18fabc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x18fabcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18fac0:
    // 0x18fac0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18fac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18fac4:
    // 0x18fac4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18fac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18fac8:
    // 0x18fac8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18fac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18facc:
    // 0x18facc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18faccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18fad0:
    // 0x18fad0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18fad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18fad4:
    // 0x18fad4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x18fad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18fad8:
    // 0x18fad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18fad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18fadc:
    // 0x18fadc: 0x3e00008  jr          $ra
label_18fae0:
    if (ctx->pc == 0x18FAE0u) {
        ctx->pc = 0x18FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FADCu;
        // 0x18fae0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAE4u;
        goto label_18fae4;
    }
    ctx->pc = 0x18FADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FADCu;
        // 0x18fae0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FAE4u;
label_18fae4:
    // 0x18fae4: 0x0  nop
    ctx->pc = 0x18fae4u;
    // NOP
    ctx->pc = 0x18fae8u;
}
