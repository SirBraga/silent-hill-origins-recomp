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

// Function: sub_0025D820
// Address: 0x25d820 - 0x25da98
void sub_0025D820_0x25d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D820_0x25d820");
#endif

    switch (ctx->pc) {
        case 0x25d820u: goto label_25d820;
        case 0x25d824u: goto label_25d824;
        case 0x25d828u: goto label_25d828;
        case 0x25d82cu: goto label_25d82c;
        case 0x25d830u: goto label_25d830;
        case 0x25d834u: goto label_25d834;
        case 0x25d838u: goto label_25d838;
        case 0x25d83cu: goto label_25d83c;
        case 0x25d840u: goto label_25d840;
        case 0x25d844u: goto label_25d844;
        case 0x25d848u: goto label_25d848;
        case 0x25d84cu: goto label_25d84c;
        case 0x25d850u: goto label_25d850;
        case 0x25d854u: goto label_25d854;
        case 0x25d858u: goto label_25d858;
        case 0x25d85cu: goto label_25d85c;
        case 0x25d860u: goto label_25d860;
        case 0x25d864u: goto label_25d864;
        case 0x25d868u: goto label_25d868;
        case 0x25d86cu: goto label_25d86c;
        case 0x25d870u: goto label_25d870;
        case 0x25d874u: goto label_25d874;
        case 0x25d878u: goto label_25d878;
        case 0x25d87cu: goto label_25d87c;
        case 0x25d880u: goto label_25d880;
        case 0x25d884u: goto label_25d884;
        case 0x25d888u: goto label_25d888;
        case 0x25d88cu: goto label_25d88c;
        case 0x25d890u: goto label_25d890;
        case 0x25d894u: goto label_25d894;
        case 0x25d898u: goto label_25d898;
        case 0x25d89cu: goto label_25d89c;
        case 0x25d8a0u: goto label_25d8a0;
        case 0x25d8a4u: goto label_25d8a4;
        case 0x25d8a8u: goto label_25d8a8;
        case 0x25d8acu: goto label_25d8ac;
        case 0x25d8b0u: goto label_25d8b0;
        case 0x25d8b4u: goto label_25d8b4;
        case 0x25d8b8u: goto label_25d8b8;
        case 0x25d8bcu: goto label_25d8bc;
        case 0x25d8c0u: goto label_25d8c0;
        case 0x25d8c4u: goto label_25d8c4;
        case 0x25d8c8u: goto label_25d8c8;
        case 0x25d8ccu: goto label_25d8cc;
        case 0x25d8d0u: goto label_25d8d0;
        case 0x25d8d4u: goto label_25d8d4;
        case 0x25d8d8u: goto label_25d8d8;
        case 0x25d8dcu: goto label_25d8dc;
        case 0x25d8e0u: goto label_25d8e0;
        case 0x25d8e4u: goto label_25d8e4;
        case 0x25d8e8u: goto label_25d8e8;
        case 0x25d8ecu: goto label_25d8ec;
        case 0x25d8f0u: goto label_25d8f0;
        case 0x25d8f4u: goto label_25d8f4;
        case 0x25d8f8u: goto label_25d8f8;
        case 0x25d8fcu: goto label_25d8fc;
        case 0x25d900u: goto label_25d900;
        case 0x25d904u: goto label_25d904;
        case 0x25d908u: goto label_25d908;
        case 0x25d90cu: goto label_25d90c;
        case 0x25d910u: goto label_25d910;
        case 0x25d914u: goto label_25d914;
        case 0x25d918u: goto label_25d918;
        case 0x25d91cu: goto label_25d91c;
        case 0x25d920u: goto label_25d920;
        case 0x25d924u: goto label_25d924;
        case 0x25d928u: goto label_25d928;
        case 0x25d92cu: goto label_25d92c;
        case 0x25d930u: goto label_25d930;
        case 0x25d934u: goto label_25d934;
        case 0x25d938u: goto label_25d938;
        case 0x25d93cu: goto label_25d93c;
        case 0x25d940u: goto label_25d940;
        case 0x25d944u: goto label_25d944;
        case 0x25d948u: goto label_25d948;
        case 0x25d94cu: goto label_25d94c;
        case 0x25d950u: goto label_25d950;
        case 0x25d954u: goto label_25d954;
        case 0x25d958u: goto label_25d958;
        case 0x25d95cu: goto label_25d95c;
        case 0x25d960u: goto label_25d960;
        case 0x25d964u: goto label_25d964;
        case 0x25d968u: goto label_25d968;
        case 0x25d96cu: goto label_25d96c;
        case 0x25d970u: goto label_25d970;
        case 0x25d974u: goto label_25d974;
        case 0x25d978u: goto label_25d978;
        case 0x25d97cu: goto label_25d97c;
        case 0x25d980u: goto label_25d980;
        case 0x25d984u: goto label_25d984;
        case 0x25d988u: goto label_25d988;
        case 0x25d98cu: goto label_25d98c;
        case 0x25d990u: goto label_25d990;
        case 0x25d994u: goto label_25d994;
        case 0x25d998u: goto label_25d998;
        case 0x25d99cu: goto label_25d99c;
        case 0x25d9a0u: goto label_25d9a0;
        case 0x25d9a4u: goto label_25d9a4;
        case 0x25d9a8u: goto label_25d9a8;
        case 0x25d9acu: goto label_25d9ac;
        case 0x25d9b0u: goto label_25d9b0;
        case 0x25d9b4u: goto label_25d9b4;
        case 0x25d9b8u: goto label_25d9b8;
        case 0x25d9bcu: goto label_25d9bc;
        case 0x25d9c0u: goto label_25d9c0;
        case 0x25d9c4u: goto label_25d9c4;
        case 0x25d9c8u: goto label_25d9c8;
        case 0x25d9ccu: goto label_25d9cc;
        case 0x25d9d0u: goto label_25d9d0;
        case 0x25d9d4u: goto label_25d9d4;
        case 0x25d9d8u: goto label_25d9d8;
        case 0x25d9dcu: goto label_25d9dc;
        case 0x25d9e0u: goto label_25d9e0;
        case 0x25d9e4u: goto label_25d9e4;
        case 0x25d9e8u: goto label_25d9e8;
        case 0x25d9ecu: goto label_25d9ec;
        case 0x25d9f0u: goto label_25d9f0;
        case 0x25d9f4u: goto label_25d9f4;
        case 0x25d9f8u: goto label_25d9f8;
        case 0x25d9fcu: goto label_25d9fc;
        case 0x25da00u: goto label_25da00;
        case 0x25da04u: goto label_25da04;
        case 0x25da08u: goto label_25da08;
        case 0x25da0cu: goto label_25da0c;
        case 0x25da10u: goto label_25da10;
        case 0x25da14u: goto label_25da14;
        case 0x25da18u: goto label_25da18;
        case 0x25da1cu: goto label_25da1c;
        case 0x25da20u: goto label_25da20;
        case 0x25da24u: goto label_25da24;
        case 0x25da28u: goto label_25da28;
        case 0x25da2cu: goto label_25da2c;
        case 0x25da30u: goto label_25da30;
        case 0x25da34u: goto label_25da34;
        case 0x25da38u: goto label_25da38;
        case 0x25da3cu: goto label_25da3c;
        case 0x25da40u: goto label_25da40;
        case 0x25da44u: goto label_25da44;
        case 0x25da48u: goto label_25da48;
        case 0x25da4cu: goto label_25da4c;
        case 0x25da50u: goto label_25da50;
        case 0x25da54u: goto label_25da54;
        case 0x25da58u: goto label_25da58;
        case 0x25da5cu: goto label_25da5c;
        case 0x25da60u: goto label_25da60;
        case 0x25da64u: goto label_25da64;
        case 0x25da68u: goto label_25da68;
        case 0x25da6cu: goto label_25da6c;
        case 0x25da70u: goto label_25da70;
        case 0x25da74u: goto label_25da74;
        case 0x25da78u: goto label_25da78;
        case 0x25da7cu: goto label_25da7c;
        case 0x25da80u: goto label_25da80;
        case 0x25da84u: goto label_25da84;
        case 0x25da88u: goto label_25da88;
        case 0x25da8cu: goto label_25da8c;
        case 0x25da90u: goto label_25da90;
        case 0x25da94u: goto label_25da94;
        default: break;
    }

    ctx->pc = 0x25d820u;

label_25d820:
    // 0x25d820: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x25d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_25d824:
    // 0x25d824: 0x8f828604  lw          $v0, -0x79FC($gp)
    ctx->pc = 0x25d824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936068)));
label_25d828:
    // 0x25d828: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x25d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_25d82c:
    // 0x25d82c: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x25d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_25d830:
    // 0x25d830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25d830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d834:
    // 0x25d834: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x25d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_25d838:
    // 0x25d838: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x25d838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_25d83c:
    // 0x25d83c: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x25d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_25d840:
    // 0x25d840: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x25d840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_25d844:
    // 0x25d844: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x25d844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_25d848:
    // 0x25d848: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x25d848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
label_25d84c:
    // 0x25d84c: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x25d84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
label_25d850:
    // 0x25d850: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x25d850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
label_25d854:
    // 0x25d854: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x25d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_25d858:
    // 0x25d858: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x25d858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_25d85c:
    // 0x25d85c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25d860:
    // 0x25d860: 0x40f809  jalr        $v0
label_25d864:
    if (ctx->pc == 0x25D864u) {
        ctx->pc = 0x25D868u;
        goto label_25d868;
    }
    ctx->pc = 0x25D860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D868u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D860u, 0x25D868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D868u;
label_25d868:
    // 0x25d868: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_25d86c:
    if (ctx->pc == 0x25D86Cu) {
        ctx->pc = 0x25D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D868u;
        // 0x25d86c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D870u;
        goto label_25d870;
    }
    ctx->pc = 0x25D868u;
    {
        const bool branch_taken_0x25d868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D868u;
        // 0x25d86c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d868) {
            ctx->pc = 0x25DA44u;
            goto label_25da44;
        }
    }
    ctx->pc = 0x25D870u;
label_25d870:
    // 0x25d870: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x25d870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_25d874:
    // 0x25d874: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x25d874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_25d878:
    // 0x25d878: 0x5440007a  bnel        $v0, $zero, . + 4 + (0x7A << 2)
label_25d87c:
    if (ctx->pc == 0x25D87Cu) {
        ctx->pc = 0x25D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D878u;
        // 0x25d87c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D880u;
        goto label_25d880;
    }
    ctx->pc = 0x25D878u;
    {
        const bool branch_taken_0x25d878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d878) {
            ctx->pc = 0x25D87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D878u;
            // 0x25d87c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DA64u;
            goto label_25da64;
        }
    }
    ctx->pc = 0x25D880u;
label_25d880:
    // 0x25d880: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x25d880u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25d884:
    // 0x25d884: 0x12a00076  beqz        $s5, . + 4 + (0x76 << 2)
label_25d888:
    if (ctx->pc == 0x25D888u) {
        ctx->pc = 0x25D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D884u;
        // 0x25d888: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D88Cu;
        goto label_25d88c;
    }
    ctx->pc = 0x25D884u;
    {
        const bool branch_taken_0x25d884 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D884u;
        // 0x25d888: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d884) {
            ctx->pc = 0x25DA60u;
            goto label_25da60;
        }
    }
    ctx->pc = 0x25D88Cu;
label_25d88c:
    // 0x25d88c: 0x12000075  beqz        $s0, . + 4 + (0x75 << 2)
label_25d890:
    if (ctx->pc == 0x25D890u) {
        ctx->pc = 0x25D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D88Cu;
        // 0x25d890: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D894u;
        goto label_25d894;
    }
    ctx->pc = 0x25D88Cu;
    {
        const bool branch_taken_0x25d88c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D88Cu;
        // 0x25d890: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d88c) {
            ctx->pc = 0x25DA64u;
            goto label_25da64;
        }
    }
    ctx->pc = 0x25D894u;
label_25d894:
    // 0x25d894: 0xc6540014  lwc1        $f20, 0x14($s2)
    ctx->pc = 0x25d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25d898:
    // 0x25d898: 0xc0975f2  jal         func_25D7C8
label_25d89c:
    if (ctx->pc == 0x25D89Cu) {
        ctx->pc = 0x25D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D898u;
        // 0x25d89c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D8A0u;
        goto label_25d8a0;
    }
    ctx->pc = 0x25D898u;
    SET_GPR_U32(ctx, 31, 0x25D8A0u);
    ctx->pc = 0x25D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D898u;
    // 0x25d89c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D7C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D7C8u, 0x25D898u, 0x25D8A0u)) {
        return;
    }
    ctx->pc = 0x25D8A0u;
label_25d8a0:
    // 0x25d8a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25d8a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d8a4:
    // 0x25d8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d8a8:
    // 0x25d8a8: 0xc08994a  jal         func_226528
label_25d8ac:
    if (ctx->pc == 0x25D8ACu) {
        ctx->pc = 0x25D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8A8u;
        // 0x25d8ac: 0x265e002c  addiu       $fp, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D8B0u;
        goto label_25d8b0;
    }
    ctx->pc = 0x25D8A8u;
    SET_GPR_U32(ctx, 31, 0x25D8B0u);
    ctx->pc = 0x25D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D8A8u;
    // 0x25d8ac: 0x265e002c  addiu       $fp, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x25D8A8u, 0x25D8B0u)) {
        return;
    }
    ctx->pc = 0x25D8B0u;
label_25d8b0:
    // 0x25d8b0: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x25d8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_25d8b4:
    // 0x25d8b4: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x25d8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_25d8b8:
    // 0x25d8b8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x25d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_25d8bc:
    // 0x25d8bc: 0xb3a30107  sdl         $v1, 0x107($sp)
    ctx->pc = 0x25d8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25d8c0:
    // 0x25d8c0: 0xb7a30100  sdr         $v1, 0x100($sp)
    ctx->pc = 0x25d8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25d8c4:
    // 0x25d8c4: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x25d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
label_25d8c8:
    // 0x25d8c8: 0x27b40110  addiu       $s4, $sp, 0x110
    ctx->pc = 0x25d8c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_25d8cc:
    // 0x25d8cc: 0x6ba30107  ldl         $v1, 0x107($sp)
    ctx->pc = 0x25d8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_25d8d0:
    // 0x25d8d0: 0x6fa30100  ldr         $v1, 0x100($sp)
    ctx->pc = 0x25d8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_25d8d4:
    // 0x25d8d4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x25d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_25d8d8:
    // 0x25d8d8: 0xb3a30117  sdl         $v1, 0x117($sp)
    ctx->pc = 0x25d8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25d8dc:
    // 0x25d8dc: 0xb7a30110  sdr         $v1, 0x110($sp)
    ctx->pc = 0x25d8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25d8e0:
    // 0x25d8e0: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x25d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_25d8e4:
    // 0x25d8e4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_25d8e8:
    // 0x25d8e8: 0x27b70100  addiu       $s7, $sp, 0x100
    ctx->pc = 0x25d8e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_25d8ec:
    // 0x25d8ec: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x25d8ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_25d8f0:
    // 0x25d8f0: 0xc7a20110  lwc1        $f2, 0x110($sp)
    ctx->pc = 0x25d8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25d8f4:
    // 0x25d8f4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x25d8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25d8f8:
    // 0x25d8f8: 0xc7a40114  lwc1        $f4, 0x114($sp)
    ctx->pc = 0x25d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25d8fc:
    // 0x25d8fc: 0xc7a50118  lwc1        $f5, 0x118($sp)
    ctx->pc = 0x25d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_25d900:
    // 0x25d900: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x25d900u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_25d904:
    // 0x25d904: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x25d904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25d908:
    // 0x25d908: 0x46142100  add.s       $f4, $f4, $f20
    ctx->pc = 0x25d908u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[20]);
label_25d90c:
    // 0x25d90c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x25d90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d910:
    // 0x25d910: 0x46142940  add.s       $f5, $f5, $f20
    ctx->pc = 0x25d910u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
label_25d914:
    // 0x25d914: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x25d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d918:
    // 0x25d918: 0x461418c1  sub.s       $f3, $f3, $f20
    ctx->pc = 0x25d918u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
label_25d91c:
    // 0x25d91c: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x25d91cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_25d920:
    // 0x25d920: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x25d920u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_25d924:
    // 0x25d924: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x25d924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_25d928:
    // 0x25d928: 0xe7a40114  swc1        $f4, 0x114($sp)
    ctx->pc = 0x25d928u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_25d92c:
    // 0x25d92c: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x25d92cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_25d930:
    // 0x25d930: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x25d930u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_25d934:
    // 0x25d934: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x25d934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_25d938:
    // 0x25d938: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x25d938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_25d93c:
    // 0x25d93c: 0x8eb0001c  lw          $s0, 0x1C($s5)
    ctx->pc = 0x25d93cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_25d940:
    // 0x25d940: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25d940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25d944:
    // 0x25d944: 0x0  nop
    ctx->pc = 0x25d944u;
    // NOP
label_25d948:
    // 0x25d948: 0x461001c  bgez        $v1, . + 4 + (0x1C << 2)
label_25d94c:
    if (ctx->pc == 0x25D94Cu) {
        ctx->pc = 0x25D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D948u;
        // 0x25d94c: 0x2e31021  addu        $v0, $s7, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D950u;
        goto label_25d950;
    }
    ctx->pc = 0x25D948u;
    {
        const bool branch_taken_0x25d948 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x25D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D948u;
        // 0x25d94c: 0x2e31021  addu        $v0, $s7, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d948) {
            ctx->pc = 0x25D9BCu;
            goto label_25d9bc;
        }
    }
    ctx->pc = 0x25D950u;
label_25d950:
    // 0x25d950: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25d950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25d954:
    // 0x25d954: 0x8c633fe8  lw          $v1, 0x3FE8($v1)
    ctx->pc = 0x25d954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16360)));
label_25d958:
    // 0x25d958: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25d958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25d95c:
    // 0x25d95c: 0x8ec20118  lw          $v0, 0x118($s6)
    ctx->pc = 0x25d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 280)));
label_25d960:
    // 0x25d960: 0x34a50507  ori         $a1, $a1, 0x507
    ctx->pc = 0x25d960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
label_25d964:
    // 0x25d964: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x25d964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_25d968:
    // 0x25d968: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x25d968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_25d96c:
    // 0x25d96c: 0x40f809  jalr        $v0
label_25d970:
    if (ctx->pc == 0x25D970u) {
        ctx->pc = 0x25D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D96Cu;
        // 0x25d970: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D974u;
        goto label_25d974;
    }
    ctx->pc = 0x25D96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D974u);
        ctx->pc = 0x25D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D96Cu;
        // 0x25d970: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D96Cu, 0x25D974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D974u;
label_25d974:
    // 0x25d974: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x25d974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
label_25d978:
    // 0x25d978: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x25d978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_25d97c:
    // 0x25d97c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x25d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_25d980:
    // 0x25d980: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x25d980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_25d984:
    // 0x25d984: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x25d984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_25d988:
    // 0x25d988: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x25d988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_25d98c:
    // 0x25d98c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x25d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_25d990:
    // 0x25d990: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x25d990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_25d994:
    // 0x25d994: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25d994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_25d998:
    // 0x25d998: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x25d998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_25d99c:
    // 0x25d99c: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x25d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_25d9a0:
    // 0x25d9a0: 0xac5e0010  sw          $fp, 0x10($v0)
    ctx->pc = 0x25d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 30));
label_25d9a4:
    // 0x25d9a4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x25d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_25d9a8:
    // 0x25d9a8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x25d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_25d9ac:
    // 0x25d9ac: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x25d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_25d9b0:
    // 0x25d9b0: 0xae45002c  sw          $a1, 0x2C($s2)
    ctx->pc = 0x25d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 5));
label_25d9b4:
    // 0x25d9b4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_25d9b8:
    if (ctx->pc == 0x25D9B8u) {
        ctx->pc = 0x25D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9B4u;
        // 0x25d9b8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9BCu;
        goto label_25d9bc;
    }
    ctx->pc = 0x25D9B4u;
    {
        const bool branch_taken_0x25d9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9B4u;
        // 0x25d9b8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9b4) {
            ctx->pc = 0x25DA30u;
            goto label_25da30;
        }
    }
    ctx->pc = 0x25D9BCu;
label_25d9bc:
    // 0x25d9bc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x25d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d9c0:
    // 0x25d9c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d9c4:
    // 0x25d9c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25d9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25d9c8:
    // 0x25d9c8: 0x0  nop
    ctx->pc = 0x25d9c8u;
    // NOP
label_25d9cc:
    // 0x25d9cc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_25d9d0:
    if (ctx->pc == 0x25D9D0u) {
        ctx->pc = 0x25D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9CCu;
        // 0x25d9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9D4u;
        goto label_25d9d4;
    }
    ctx->pc = 0x25D9CCu;
    {
        const bool branch_taken_0x25d9cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9CCu;
        // 0x25d9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9cc) {
            ctx->pc = 0x25DA08u;
            goto label_25da08;
        }
    }
    ctx->pc = 0x25D9D4u;
label_25d9d4:
    // 0x25d9d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25d9d8:
    // 0x25d9d8: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x25d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25d9dc:
    // 0x25d9dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x25d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_25d9e0:
    // 0x25d9e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25d9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d9e4:
    // 0x25d9e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25d9e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25d9e8:
    // 0x25d9e8: 0x0  nop
    ctx->pc = 0x25d9e8u;
    // NOP
label_25d9ec:
    // 0x25d9ec: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_25d9f0:
    if (ctx->pc == 0x25D9F0u) {
        ctx->pc = 0x25D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9ECu;
        // 0x25d9f0: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9F4u;
        goto label_25d9f4;
    }
    ctx->pc = 0x25D9ECu;
    {
        const bool branch_taken_0x25d9ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9ECu;
        // 0x25d9f0: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9ec) {
            ctx->pc = 0x25DA34u;
            goto label_25da34;
        }
    }
    ctx->pc = 0x25D9F4u;
label_25d9f4:
    // 0x25d9f4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25d9f8:
    // 0x25d9f8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x25d9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_25d9fc:
    // 0x25d9fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x25d9fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25da00:
    // 0x25da00: 0x1000000c  b           . + 4 + (0xC << 2)
label_25da04:
    if (ctx->pc == 0x25DA04u) {
        ctx->pc = 0x25DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA00u;
        // 0x25da04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA08u;
        goto label_25da08;
    }
    ctx->pc = 0x25DA00u;
    {
        const bool branch_taken_0x25da00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA00u;
        // 0x25da04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da00) {
            ctx->pc = 0x25DA34u;
            goto label_25da34;
        }
    }
    ctx->pc = 0x25DA08u;
label_25da08:
    // 0x25da08: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x25da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_25da0c:
    // 0x25da0c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x25da0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25da10:
    // 0x25da10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25da14:
    // 0x25da14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25da14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25da18:
    // 0x25da18: 0x0  nop
    ctx->pc = 0x25da18u;
    // NOP
label_25da1c:
    // 0x25da1c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_25da20:
    if (ctx->pc == 0x25DA20u) {
        ctx->pc = 0x25DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA1Cu;
        // 0x25da20: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA24u;
        goto label_25da24;
    }
    ctx->pc = 0x25DA1Cu;
    {
        const bool branch_taken_0x25da1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25da1c) {
            ctx->pc = 0x25DA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DA1Cu;
            // 0x25da20: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DA2Cu;
            goto label_25da2c;
        }
    }
    ctx->pc = 0x25DA24u;
label_25da24:
    // 0x25da24: 0x10000003  b           . + 4 + (0x3 << 2)
label_25da28:
    if (ctx->pc == 0x25DA28u) {
        ctx->pc = 0x25DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA24u;
        // 0x25da28: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA2Cu;
        goto label_25da2c;
    }
    ctx->pc = 0x25DA24u;
    {
        const bool branch_taken_0x25da24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA24u;
        // 0x25da28: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da24) {
            ctx->pc = 0x25DA34u;
            goto label_25da34;
        }
    }
    ctx->pc = 0x25DA2Cu;
label_25da2c:
    // 0x25da2c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x25da2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_25da30:
    // 0x25da30: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x25da30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_25da34:
    // 0x25da34: 0x663ffc4  bgezl       $s3, . + 4 + (-0x3C << 2)
label_25da38:
    if (ctx->pc == 0x25DA38u) {
        ctx->pc = 0x25DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA34u;
        // 0x25da38: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA3Cu;
        goto label_25da3c;
    }
    ctx->pc = 0x25DA34u;
    {
        const bool branch_taken_0x25da34 = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x25da34) {
            ctx->pc = 0x25DA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DA34u;
            // 0x25da38: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d948;
        }
    }
    ctx->pc = 0x25DA3Cu;
label_25da3c:
    // 0x25da3c: 0x10000009  b           . + 4 + (0x9 << 2)
label_25da40:
    if (ctx->pc == 0x25DA40u) {
        ctx->pc = 0x25DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA3Cu;
        // 0x25da40: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA44u;
        goto label_25da44;
    }
    ctx->pc = 0x25DA3Cu;
    {
        const bool branch_taken_0x25da3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA3Cu;
        // 0x25da40: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da3c) {
            ctx->pc = 0x25DA64u;
            goto label_25da64;
        }
    }
    ctx->pc = 0x25DA44u;
label_25da44:
    // 0x25da44: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25da44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25da48:
    // 0x25da48: 0x34840016  ori         $a0, $a0, 0x16
    ctx->pc = 0x25da48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
label_25da4c:
    // 0x25da4c: 0xc092848  jal         func_24A120
label_25da50:
    if (ctx->pc == 0x25DA50u) {
        ctx->pc = 0x25DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA4Cu;
        // 0x25da50: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA54u;
        goto label_25da54;
    }
    ctx->pc = 0x25DA4Cu;
    SET_GPR_U32(ctx, 31, 0x25DA54u);
    ctx->pc = 0x25DA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA4Cu;
    // 0x25da50: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25DA4Cu, 0x25DA54u)) {
        return;
    }
    ctx->pc = 0x25DA54u;
label_25da54:
    // 0x25da54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25da54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25da58:
    // 0x25da58: 0xc09281a  jal         func_24A068
label_25da5c:
    if (ctx->pc == 0x25DA5Cu) {
        ctx->pc = 0x25DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA58u;
        // 0x25da5c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA60u;
        goto label_25da60;
    }
    ctx->pc = 0x25DA58u;
    SET_GPR_U32(ctx, 31, 0x25DA60u);
    ctx->pc = 0x25DA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA58u;
    // 0x25da5c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25DA58u, 0x25DA60u)) {
        return;
    }
    ctx->pc = 0x25DA60u;
label_25da60:
    // 0x25da60: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25da60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25da64:
    // 0x25da64: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x25da64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_25da68:
    // 0x25da68: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x25da68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_25da6c:
    // 0x25da6c: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x25da6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_25da70:
    // 0x25da70: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x25da70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_25da74:
    // 0x25da74: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x25da74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_25da78:
    // 0x25da78: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x25da78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_25da7c:
    // 0x25da7c: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x25da7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_25da80:
    // 0x25da80: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x25da80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_25da84:
    // 0x25da84: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x25da84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_25da88:
    // 0x25da88: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x25da88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_25da8c:
    // 0x25da8c: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x25da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25da90:
    // 0x25da90: 0x3e00008  jr          $ra
label_25da94:
    if (ctx->pc == 0x25DA94u) {
        ctx->pc = 0x25DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA90u;
        // 0x25da94: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA98u;
        goto label_fallthrough_0x25da90;
    }
    ctx->pc = 0x25DA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA90u;
        // 0x25da94: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25da90:
    ctx->pc = 0x25DA98u;
}
