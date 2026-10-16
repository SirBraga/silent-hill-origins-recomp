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

// Function: sub_002856A0
// Address: 0x2856a0 - 0x2858a8
void sub_002856A0_0x2856a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002856A0_0x2856a0");
#endif

    switch (ctx->pc) {
        case 0x2856a0u: goto label_2856a0;
        case 0x2856a4u: goto label_2856a4;
        case 0x2856a8u: goto label_2856a8;
        case 0x2856acu: goto label_2856ac;
        case 0x2856b0u: goto label_2856b0;
        case 0x2856b4u: goto label_2856b4;
        case 0x2856b8u: goto label_2856b8;
        case 0x2856bcu: goto label_2856bc;
        case 0x2856c0u: goto label_2856c0;
        case 0x2856c4u: goto label_2856c4;
        case 0x2856c8u: goto label_2856c8;
        case 0x2856ccu: goto label_2856cc;
        case 0x2856d0u: goto label_2856d0;
        case 0x2856d4u: goto label_2856d4;
        case 0x2856d8u: goto label_2856d8;
        case 0x2856dcu: goto label_2856dc;
        case 0x2856e0u: goto label_2856e0;
        case 0x2856e4u: goto label_2856e4;
        case 0x2856e8u: goto label_2856e8;
        case 0x2856ecu: goto label_2856ec;
        case 0x2856f0u: goto label_2856f0;
        case 0x2856f4u: goto label_2856f4;
        case 0x2856f8u: goto label_2856f8;
        case 0x2856fcu: goto label_2856fc;
        case 0x285700u: goto label_285700;
        case 0x285704u: goto label_285704;
        case 0x285708u: goto label_285708;
        case 0x28570cu: goto label_28570c;
        case 0x285710u: goto label_285710;
        case 0x285714u: goto label_285714;
        case 0x285718u: goto label_285718;
        case 0x28571cu: goto label_28571c;
        case 0x285720u: goto label_285720;
        case 0x285724u: goto label_285724;
        case 0x285728u: goto label_285728;
        case 0x28572cu: goto label_28572c;
        case 0x285730u: goto label_285730;
        case 0x285734u: goto label_285734;
        case 0x285738u: goto label_285738;
        case 0x28573cu: goto label_28573c;
        case 0x285740u: goto label_285740;
        case 0x285744u: goto label_285744;
        case 0x285748u: goto label_285748;
        case 0x28574cu: goto label_28574c;
        case 0x285750u: goto label_285750;
        case 0x285754u: goto label_285754;
        case 0x285758u: goto label_285758;
        case 0x28575cu: goto label_28575c;
        case 0x285760u: goto label_285760;
        case 0x285764u: goto label_285764;
        case 0x285768u: goto label_285768;
        case 0x28576cu: goto label_28576c;
        case 0x285770u: goto label_285770;
        case 0x285774u: goto label_285774;
        case 0x285778u: goto label_285778;
        case 0x28577cu: goto label_28577c;
        case 0x285780u: goto label_285780;
        case 0x285784u: goto label_285784;
        case 0x285788u: goto label_285788;
        case 0x28578cu: goto label_28578c;
        case 0x285790u: goto label_285790;
        case 0x285794u: goto label_285794;
        case 0x285798u: goto label_285798;
        case 0x28579cu: goto label_28579c;
        case 0x2857a0u: goto label_2857a0;
        case 0x2857a4u: goto label_2857a4;
        case 0x2857a8u: goto label_2857a8;
        case 0x2857acu: goto label_2857ac;
        case 0x2857b0u: goto label_2857b0;
        case 0x2857b4u: goto label_2857b4;
        case 0x2857b8u: goto label_2857b8;
        case 0x2857bcu: goto label_2857bc;
        case 0x2857c0u: goto label_2857c0;
        case 0x2857c4u: goto label_2857c4;
        case 0x2857c8u: goto label_2857c8;
        case 0x2857ccu: goto label_2857cc;
        case 0x2857d0u: goto label_2857d0;
        case 0x2857d4u: goto label_2857d4;
        case 0x2857d8u: goto label_2857d8;
        case 0x2857dcu: goto label_2857dc;
        case 0x2857e0u: goto label_2857e0;
        case 0x2857e4u: goto label_2857e4;
        case 0x2857e8u: goto label_2857e8;
        case 0x2857ecu: goto label_2857ec;
        case 0x2857f0u: goto label_2857f0;
        case 0x2857f4u: goto label_2857f4;
        case 0x2857f8u: goto label_2857f8;
        case 0x2857fcu: goto label_2857fc;
        case 0x285800u: goto label_285800;
        case 0x285804u: goto label_285804;
        case 0x285808u: goto label_285808;
        case 0x28580cu: goto label_28580c;
        case 0x285810u: goto label_285810;
        case 0x285814u: goto label_285814;
        case 0x285818u: goto label_285818;
        case 0x28581cu: goto label_28581c;
        case 0x285820u: goto label_285820;
        case 0x285824u: goto label_285824;
        case 0x285828u: goto label_285828;
        case 0x28582cu: goto label_28582c;
        case 0x285830u: goto label_285830;
        case 0x285834u: goto label_285834;
        case 0x285838u: goto label_285838;
        case 0x28583cu: goto label_28583c;
        case 0x285840u: goto label_285840;
        case 0x285844u: goto label_285844;
        case 0x285848u: goto label_285848;
        case 0x28584cu: goto label_28584c;
        case 0x285850u: goto label_285850;
        case 0x285854u: goto label_285854;
        case 0x285858u: goto label_285858;
        case 0x28585cu: goto label_28585c;
        case 0x285860u: goto label_285860;
        case 0x285864u: goto label_285864;
        case 0x285868u: goto label_285868;
        case 0x28586cu: goto label_28586c;
        case 0x285870u: goto label_285870;
        case 0x285874u: goto label_285874;
        case 0x285878u: goto label_285878;
        case 0x28587cu: goto label_28587c;
        case 0x285880u: goto label_285880;
        case 0x285884u: goto label_285884;
        case 0x285888u: goto label_285888;
        case 0x28588cu: goto label_28588c;
        case 0x285890u: goto label_285890;
        case 0x285894u: goto label_285894;
        case 0x285898u: goto label_285898;
        case 0x28589cu: goto label_28589c;
        case 0x2858a0u: goto label_2858a0;
        case 0x2858a4u: goto label_2858a4;
        default: break;
    }

    ctx->pc = 0x2856a0u;

label_2856a0:
    // 0x2856a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2856a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2856a4:
    // 0x2856a4: 0x8f828fa4  lw          $v0, -0x705C($gp)
    ctx->pc = 0x2856a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938532)));
label_2856a8:
    // 0x2856a8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2856a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2856ac:
    // 0x2856ac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2856acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2856b0:
    // 0x2856b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2856b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2856b4:
    // 0x2856b4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2856b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2856b8:
    // 0x2856b8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2856b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2856bc:
    // 0x2856bc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2856bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2856c0:
    // 0x2856c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2856c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2856c4:
    // 0x2856c4: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
label_2856c8:
    if (ctx->pc == 0x2856C8u) {
        ctx->pc = 0x2856C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856C4u;
        // 0x2856c8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2856CCu;
        goto label_2856cc;
    }
    ctx->pc = 0x2856C4u;
    {
        const bool branch_taken_0x2856c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2856C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856C4u;
        // 0x2856c8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856c4) {
            ctx->pc = 0x285870u;
            goto label_285870;
        }
    }
    ctx->pc = 0x2856CCu;
label_2856cc:
    // 0x2856cc: 0xc0a0f56  jal         func_283D58
label_2856d0:
    if (ctx->pc == 0x2856D0u) {
        ctx->pc = 0x2856D4u;
        goto label_2856d4;
    }
    ctx->pc = 0x2856CCu;
    SET_GPR_U32(ctx, 31, 0x2856D4u);
    ctx->pc = 0x283D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283D58u, 0x2856CCu, 0x2856D4u)) {
        return;
    }
    ctx->pc = 0x2856D4u;
label_2856d4:
    // 0x2856d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2856d8:
    if (ctx->pc == 0x2856D8u) {
        ctx->pc = 0x2856D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856D4u;
        // 0x2856d8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2856DCu;
        goto label_2856dc;
    }
    ctx->pc = 0x2856D4u;
    {
        const bool branch_taken_0x2856d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2856D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856D4u;
        // 0x2856d8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856d4) {
            ctx->pc = 0x2856F8u;
            goto label_2856f8;
        }
    }
    ctx->pc = 0x2856DCu;
label_2856dc:
    // 0x2856dc: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x2856dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_2856e0:
    // 0x2856e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2856e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2856e4:
    // 0x2856e4: 0xc092848  jal         func_24A120
label_2856e8:
    if (ctx->pc == 0x2856E8u) {
        ctx->pc = 0x2856E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856E4u;
        // 0x2856e8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2856ECu;
        goto label_2856ec;
    }
    ctx->pc = 0x2856E4u;
    SET_GPR_U32(ctx, 31, 0x2856ECu);
    ctx->pc = 0x2856E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2856E4u;
    // 0x2856e8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2856E4u, 0x2856ECu)) {
        return;
    }
    ctx->pc = 0x2856ECu;
label_2856ec:
    // 0x2856ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2856ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2856f0:
    // 0x2856f0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2856f4:
    if (ctx->pc == 0x2856F4u) {
        ctx->pc = 0x2856F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856F0u;
        // 0x2856f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2856F8u;
        goto label_2856f8;
    }
    ctx->pc = 0x2856F0u;
    {
        const bool branch_taken_0x2856f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856F0u;
        // 0x2856f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856f0) {
            ctx->pc = 0x285860u;
            goto label_285860;
        }
    }
    ctx->pc = 0x2856F8u;
label_2856f8:
    // 0x2856f8: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2856f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2856fc:
    // 0x2856fc: 0x24426380  addiu       $v0, $v0, 0x6380
    ctx->pc = 0x2856fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25472));
label_285700:
    // 0x285700: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x285700u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
label_285704:
    // 0x285704: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x285704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285708:
    // 0x285708: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x285708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_28570c:
    // 0x28570c: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x28570cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_285710:
    // 0x285710: 0xc0a0fe4  jal         func_283F90
label_285714:
    if (ctx->pc == 0x285714u) {
        ctx->pc = 0x285714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285710u;
        // 0x285714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285718u;
        goto label_285718;
    }
    ctx->pc = 0x285710u;
    SET_GPR_U32(ctx, 31, 0x285718u);
    ctx->pc = 0x285714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285710u;
    // 0x285714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283F90u, 0x285710u, 0x285718u)) {
        return;
    }
    ctx->pc = 0x285718u;
label_285718:
    // 0x285718: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_28571c:
    if (ctx->pc == 0x28571Cu) {
        ctx->pc = 0x28571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285718u;
        // 0x28571c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285720u;
        goto label_285720;
    }
    ctx->pc = 0x285718u;
    {
        const bool branch_taken_0x285718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285718u;
        // 0x28571c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285718) {
            ctx->pc = 0x285828u;
            goto label_285828;
        }
    }
    ctx->pc = 0x285720u;
label_285720:
    // 0x285720: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x285720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_285724:
    // 0x285724: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x285724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_285728:
    // 0x285728: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_28572c:
    if (ctx->pc == 0x28572Cu) {
        ctx->pc = 0x28572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285728u;
        // 0x28572c: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285730u;
        goto label_285730;
    }
    ctx->pc = 0x285728u;
    {
        const bool branch_taken_0x285728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285728u;
        // 0x28572c: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285728) {
            ctx->pc = 0x285820u;
            goto label_285820;
        }
    }
    ctx->pc = 0x285730u;
label_285730:
    // 0x285730: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x285730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_285734:
    // 0x285734: 0x2662000f  addiu       $v0, $s3, 0xF
    ctx->pc = 0x285734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
label_285738:
    // 0x285738: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x285738u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_28573c:
    // 0x28573c: 0x26920fc8  addiu       $s2, $s4, 0xFC8
    ctx->pc = 0x28573cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_285740:
    // 0x285740: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x285740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_285744:
    // 0x285744: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x285744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_285748:
    // 0x285748: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x285748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_28574c:
    // 0x28574c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_285750:
    if (ctx->pc == 0x285750u) {
        ctx->pc = 0x285750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28574Cu;
        // 0x285750: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285754u;
        goto label_285754;
    }
    ctx->pc = 0x28574Cu;
    {
        const bool branch_taken_0x28574c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28574Cu;
        // 0x285750: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28574c) {
            ctx->pc = 0x2857A8u;
            goto label_2857a8;
        }
    }
    ctx->pc = 0x285754u;
label_285754:
    // 0x285754: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
label_285758:
    if (ctx->pc == 0x285758u) {
        ctx->pc = 0x285758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285754u;
        // 0x285758: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28575Cu;
        goto label_28575c;
    }
    ctx->pc = 0x285754u;
    {
        const bool branch_taken_0x285754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285754) {
            ctx->pc = 0x285758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285754u;
            // 0x285758: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2857CCu;
            goto label_2857cc;
        }
    }
    ctx->pc = 0x28575Cu;
label_28575c:
    // 0x28575c: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x28575cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_285760:
    // 0x285760: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_285764:
    if (ctx->pc == 0x285764u) {
        ctx->pc = 0x285764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285760u;
        // 0x285764: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285768u;
        goto label_285768;
    }
    ctx->pc = 0x285760u;
    {
        const bool branch_taken_0x285760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285760u;
        // 0x285764: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285760) {
            ctx->pc = 0x2857A8u;
            goto label_2857a8;
        }
    }
    ctx->pc = 0x285768u;
label_285768:
    // 0x285768: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_28576c:
    if (ctx->pc == 0x28576Cu) {
        ctx->pc = 0x28576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285768u;
        // 0x28576c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285770u;
        goto label_285770;
    }
    ctx->pc = 0x285768u;
    {
        const bool branch_taken_0x285768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285768u;
        // 0x28576c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285768) {
            ctx->pc = 0x285790u;
            goto label_285790;
        }
    }
    ctx->pc = 0x285770u;
label_285770:
    // 0x285770: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_285774:
    if (ctx->pc == 0x285774u) {
        ctx->pc = 0x285774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285770u;
        // 0x285774: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285778u;
        goto label_285778;
    }
    ctx->pc = 0x285770u;
    {
        const bool branch_taken_0x285770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285770) {
            ctx->pc = 0x285774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285770u;
            // 0x285774: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2857CCu;
            goto label_2857cc;
        }
    }
    ctx->pc = 0x285778u;
label_285778:
    // 0x285778: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x285778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_28577c:
    // 0x28577c: 0x40f809  jalr        $v0
label_285780:
    if (ctx->pc == 0x285780u) {
        ctx->pc = 0x285780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28577Cu;
        // 0x285780: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285784u;
        goto label_285784;
    }
    ctx->pc = 0x28577Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285784u);
        ctx->pc = 0x285780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28577Cu;
        // 0x285780: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28577Cu, 0x285784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285784u;
label_285784:
    // 0x285784: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x285784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_285788:
    // 0x285788: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x285788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_28578c:
    // 0x28578c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x28578cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285790:
    // 0x285790: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x285790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_285794:
    // 0x285794: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x285794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_285798:
    // 0x285798: 0x40f809  jalr        $v0
label_28579c:
    if (ctx->pc == 0x28579Cu) {
        ctx->pc = 0x28579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285798u;
        // 0x28579c: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857A0u;
        goto label_2857a0;
    }
    ctx->pc = 0x285798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2857A0u);
        ctx->pc = 0x28579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285798u;
        // 0x28579c: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285798u, 0x2857A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2857A0u;
label_2857a0:
    // 0x2857a0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2857a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2857a4:
    // 0x2857a4: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x2857a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_2857a8:
    // 0x2857a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2857a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2857ac:
    // 0x2857ac: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2857acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2857b0:
    // 0x2857b0: 0x40f809  jalr        $v0
label_2857b4:
    if (ctx->pc == 0x2857B4u) {
        ctx->pc = 0x2857B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857B0u;
        // 0x2857b4: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857B8u;
        goto label_2857b8;
    }
    ctx->pc = 0x2857B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2857B8u);
        ctx->pc = 0x2857B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857B0u;
        // 0x2857b4: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2857B0u, 0x2857B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2857B8u;
label_2857b8:
    // 0x2857b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2857b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2857bc:
    // 0x2857bc: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2857bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2857c0:
    // 0x2857c0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2857c4:
    if (ctx->pc == 0x2857C4u) {
        ctx->pc = 0x2857C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857C0u;
        // 0x2857c4: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857C8u;
        goto label_2857c8;
    }
    ctx->pc = 0x2857C0u;
    {
        const bool branch_taken_0x2857c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2857C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857C0u;
        // 0x2857c4: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857c0) {
            ctx->pc = 0x285820u;
            goto label_285820;
        }
    }
    ctx->pc = 0x2857C8u;
label_2857c8:
    // 0x2857c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2857c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2857cc:
    // 0x2857cc: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2857ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2857d0:
    // 0x2857d0: 0x40f809  jalr        $v0
label_2857d4:
    if (ctx->pc == 0x2857D4u) {
        ctx->pc = 0x2857D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857D0u;
        // 0x2857d4: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857D8u;
        goto label_2857d8;
    }
    ctx->pc = 0x2857D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2857D8u);
        ctx->pc = 0x2857D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857D0u;
        // 0x2857d4: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2857D0u, 0x2857D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2857D8u;
label_2857d8:
    // 0x2857d8: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x2857d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_2857dc:
    // 0x2857dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2857dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2857e0:
    // 0x2857e0: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2857e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2857e4:
    // 0x2857e4: 0x40f809  jalr        $v0
label_2857e8:
    if (ctx->pc == 0x2857E8u) {
        ctx->pc = 0x2857ECu;
        goto label_2857ec;
    }
    ctx->pc = 0x2857E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2857ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2857E4u, 0x2857ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2857ECu;
label_2857ec:
    // 0x2857ec: 0x8e04fff8  lw          $a0, -0x8($s0)
    ctx->pc = 0x2857ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
label_2857f0:
    // 0x2857f0: 0xae00fffc  sw          $zero, -0x4($s0)
    ctx->pc = 0x2857f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 0));
label_2857f4:
    // 0x2857f4: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2857f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2857f8:
    // 0x2857f8: 0x40f809  jalr        $v0
label_2857fc:
    if (ctx->pc == 0x2857FCu) {
        ctx->pc = 0x285800u;
        goto label_285800;
    }
    ctx->pc = 0x2857F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285800u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2857F8u, 0x285800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285800u;
label_285800:
    // 0x285800: 0xae00fff8  sw          $zero, -0x8($s0)
    ctx->pc = 0x285800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 0));
label_285804:
    // 0x285804: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x285804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_285808:
    // 0x285808: 0x40f809  jalr        $v0
label_28580c:
    if (ctx->pc == 0x28580Cu) {
        ctx->pc = 0x28580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285808u;
        // 0x28580c: 0x8e04fff4  lw          $a0, -0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285810u;
        goto label_285810;
    }
    ctx->pc = 0x285808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285810u);
        ctx->pc = 0x28580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285808u;
        // 0x28580c: 0x8e04fff4  lw          $a0, -0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285808u, 0x285810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285810u;
label_285810:
    // 0x285810: 0xae00fff4  sw          $zero, -0xC($s0)
    ctx->pc = 0x285810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 0));
label_285814:
    // 0x285814: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x285814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_285818:
    // 0x285818: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
label_28581c:
    if (ctx->pc == 0x28581Cu) {
        ctx->pc = 0x28581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285818u;
        // 0x28581c: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285820u;
        goto label_285820;
    }
    ctx->pc = 0x285818u;
    {
        const bool branch_taken_0x285818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285818u;
        // 0x28581c: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285818) {
            ctx->pc = 0x2857C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2857c8;
        }
    }
    ctx->pc = 0x285820u;
label_285820:
    // 0x285820: 0x10000007  b           . + 4 + (0x7 << 2)
label_285824:
    if (ctx->pc == 0x285824u) {
        ctx->pc = 0x285824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285820u;
        // 0x285824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285828u;
        goto label_285828;
    }
    ctx->pc = 0x285820u;
    {
        const bool branch_taken_0x285820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285820u;
        // 0x285824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285820) {
            ctx->pc = 0x285840u;
            goto label_285840;
        }
    }
    ctx->pc = 0x285828u;
label_285828:
    // 0x285828: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x285828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28582c:
    // 0x28582c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x28582cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_285830:
    // 0x285830: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x285830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_285834:
    // 0x285834: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_285838:
    if (ctx->pc == 0x285838u) {
        ctx->pc = 0x285838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285834u;
        // 0x285838: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28583Cu;
        goto label_28583c;
    }
    ctx->pc = 0x285834u;
    {
        const bool branch_taken_0x285834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285834u;
        // 0x285838: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285834) {
            ctx->pc = 0x285710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285710;
        }
    }
    ctx->pc = 0x28583Cu;
label_28583c:
    // 0x28583c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285840:
    // 0x285840: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_285844:
    if (ctx->pc == 0x285844u) {
        ctx->pc = 0x285844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285840u;
        // 0x285844: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285848u;
        goto label_285848;
    }
    ctx->pc = 0x285840u;
    {
        const bool branch_taken_0x285840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285840u;
        // 0x285844: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285840) {
            ctx->pc = 0x285870u;
            goto label_285870;
        }
    }
    ctx->pc = 0x285848u;
label_285848:
    // 0x285848: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x285848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28584c:
    // 0x28584c: 0xc092848  jal         func_24A120
label_285850:
    if (ctx->pc == 0x285850u) {
        ctx->pc = 0x285850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28584Cu;
        // 0x285850: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285854u;
        goto label_285854;
    }
    ctx->pc = 0x28584Cu;
    SET_GPR_U32(ctx, 31, 0x285854u);
    ctx->pc = 0x285850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28584Cu;
    // 0x285850: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x28584Cu, 0x285854u)) {
        return;
    }
    ctx->pc = 0x285854u;
label_285854:
    // 0x285854: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x285854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_285858:
    // 0x285858: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x285858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28585c:
    // 0x28585c: 0x0  nop
    ctx->pc = 0x28585cu;
    // NOP
label_285860:
    // 0x285860: 0xc09281a  jal         func_24A068
label_285864:
    if (ctx->pc == 0x285864u) {
        ctx->pc = 0x285868u;
        goto label_285868;
    }
    ctx->pc = 0x285860u;
    SET_GPR_U32(ctx, 31, 0x285868u);
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x285860u, 0x285868u)) {
        return;
    }
    ctx->pc = 0x285868u;
label_285868:
    // 0x285868: 0x10000005  b           . + 4 + (0x5 << 2)
label_28586c:
    if (ctx->pc == 0x28586Cu) {
        ctx->pc = 0x28586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285868u;
        // 0x28586c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285870u;
        goto label_285870;
    }
    ctx->pc = 0x285868u;
    {
        const bool branch_taken_0x285868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285868u;
        // 0x28586c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285868) {
            ctx->pc = 0x285880u;
            goto label_285880;
        }
    }
    ctx->pc = 0x285870u;
label_285870:
    // 0x285870: 0x8f838fa4  lw          $v1, -0x705C($gp)
    ctx->pc = 0x285870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938532)));
label_285874:
    // 0x285874: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x285874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_285878:
    // 0x285878: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28587c:
    // 0x28587c: 0xaf838fa4  sw          $v1, -0x705C($gp)
    ctx->pc = 0x28587cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938532), GPR_U32(ctx, 3));
label_285880:
    // 0x285880: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x285880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_285884:
    // 0x285884: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x285884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_285888:
    // 0x285888: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x285888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28588c:
    // 0x28588c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x28588cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_285890:
    // 0x285890: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x285890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_285894:
    // 0x285894: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x285894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_285898:
    // 0x285898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28589c:
    // 0x28589c: 0x3e00008  jr          $ra
label_2858a0:
    if (ctx->pc == 0x2858A0u) {
        ctx->pc = 0x2858A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28589Cu;
        // 0x2858a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858A4u;
        goto label_2858a4;
    }
    ctx->pc = 0x28589Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2858A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28589Cu;
        // 0x2858a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28589Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2858A4u;
label_2858a4:
    // 0x2858a4: 0x0  nop
    ctx->pc = 0x2858a4u;
    // NOP
    ctx->pc = 0x2858a8u;
}
