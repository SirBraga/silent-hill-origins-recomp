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

// Function: sub_001B4718
// Address: 0x1b4718 - 0x1b4b78
void sub_001B4718_0x1b4718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4718_0x1b4718");
#endif

    switch (ctx->pc) {
        case 0x1b4718u: goto label_1b4718;
        case 0x1b471cu: goto label_1b471c;
        case 0x1b4720u: goto label_1b4720;
        case 0x1b4724u: goto label_1b4724;
        case 0x1b4728u: goto label_1b4728;
        case 0x1b472cu: goto label_1b472c;
        case 0x1b4730u: goto label_1b4730;
        case 0x1b4734u: goto label_1b4734;
        case 0x1b4738u: goto label_1b4738;
        case 0x1b473cu: goto label_1b473c;
        case 0x1b4740u: goto label_1b4740;
        case 0x1b4744u: goto label_1b4744;
        case 0x1b4748u: goto label_1b4748;
        case 0x1b474cu: goto label_1b474c;
        case 0x1b4750u: goto label_1b4750;
        case 0x1b4754u: goto label_1b4754;
        case 0x1b4758u: goto label_1b4758;
        case 0x1b475cu: goto label_1b475c;
        case 0x1b4760u: goto label_1b4760;
        case 0x1b4764u: goto label_1b4764;
        case 0x1b4768u: goto label_1b4768;
        case 0x1b476cu: goto label_1b476c;
        case 0x1b4770u: goto label_1b4770;
        case 0x1b4774u: goto label_1b4774;
        case 0x1b4778u: goto label_1b4778;
        case 0x1b477cu: goto label_1b477c;
        case 0x1b4780u: goto label_1b4780;
        case 0x1b4784u: goto label_1b4784;
        case 0x1b4788u: goto label_1b4788;
        case 0x1b478cu: goto label_1b478c;
        case 0x1b4790u: goto label_1b4790;
        case 0x1b4794u: goto label_1b4794;
        case 0x1b4798u: goto label_1b4798;
        case 0x1b479cu: goto label_1b479c;
        case 0x1b47a0u: goto label_1b47a0;
        case 0x1b47a4u: goto label_1b47a4;
        case 0x1b47a8u: goto label_1b47a8;
        case 0x1b47acu: goto label_1b47ac;
        case 0x1b47b0u: goto label_1b47b0;
        case 0x1b47b4u: goto label_1b47b4;
        case 0x1b47b8u: goto label_1b47b8;
        case 0x1b47bcu: goto label_1b47bc;
        case 0x1b47c0u: goto label_1b47c0;
        case 0x1b47c4u: goto label_1b47c4;
        case 0x1b47c8u: goto label_1b47c8;
        case 0x1b47ccu: goto label_1b47cc;
        case 0x1b47d0u: goto label_1b47d0;
        case 0x1b47d4u: goto label_1b47d4;
        case 0x1b47d8u: goto label_1b47d8;
        case 0x1b47dcu: goto label_1b47dc;
        case 0x1b47e0u: goto label_1b47e0;
        case 0x1b47e4u: goto label_1b47e4;
        case 0x1b47e8u: goto label_1b47e8;
        case 0x1b47ecu: goto label_1b47ec;
        case 0x1b47f0u: goto label_1b47f0;
        case 0x1b47f4u: goto label_1b47f4;
        case 0x1b47f8u: goto label_1b47f8;
        case 0x1b47fcu: goto label_1b47fc;
        case 0x1b4800u: goto label_1b4800;
        case 0x1b4804u: goto label_1b4804;
        case 0x1b4808u: goto label_1b4808;
        case 0x1b480cu: goto label_1b480c;
        case 0x1b4810u: goto label_1b4810;
        case 0x1b4814u: goto label_1b4814;
        case 0x1b4818u: goto label_1b4818;
        case 0x1b481cu: goto label_1b481c;
        case 0x1b4820u: goto label_1b4820;
        case 0x1b4824u: goto label_1b4824;
        case 0x1b4828u: goto label_1b4828;
        case 0x1b482cu: goto label_1b482c;
        case 0x1b4830u: goto label_1b4830;
        case 0x1b4834u: goto label_1b4834;
        case 0x1b4838u: goto label_1b4838;
        case 0x1b483cu: goto label_1b483c;
        case 0x1b4840u: goto label_1b4840;
        case 0x1b4844u: goto label_1b4844;
        case 0x1b4848u: goto label_1b4848;
        case 0x1b484cu: goto label_1b484c;
        case 0x1b4850u: goto label_1b4850;
        case 0x1b4854u: goto label_1b4854;
        case 0x1b4858u: goto label_1b4858;
        case 0x1b485cu: goto label_1b485c;
        case 0x1b4860u: goto label_1b4860;
        case 0x1b4864u: goto label_1b4864;
        case 0x1b4868u: goto label_1b4868;
        case 0x1b486cu: goto label_1b486c;
        case 0x1b4870u: goto label_1b4870;
        case 0x1b4874u: goto label_1b4874;
        case 0x1b4878u: goto label_1b4878;
        case 0x1b487cu: goto label_1b487c;
        case 0x1b4880u: goto label_1b4880;
        case 0x1b4884u: goto label_1b4884;
        case 0x1b4888u: goto label_1b4888;
        case 0x1b488cu: goto label_1b488c;
        case 0x1b4890u: goto label_1b4890;
        case 0x1b4894u: goto label_1b4894;
        case 0x1b4898u: goto label_1b4898;
        case 0x1b489cu: goto label_1b489c;
        case 0x1b48a0u: goto label_1b48a0;
        case 0x1b48a4u: goto label_1b48a4;
        case 0x1b48a8u: goto label_1b48a8;
        case 0x1b48acu: goto label_1b48ac;
        case 0x1b48b0u: goto label_1b48b0;
        case 0x1b48b4u: goto label_1b48b4;
        case 0x1b48b8u: goto label_1b48b8;
        case 0x1b48bcu: goto label_1b48bc;
        case 0x1b48c0u: goto label_1b48c0;
        case 0x1b48c4u: goto label_1b48c4;
        case 0x1b48c8u: goto label_1b48c8;
        case 0x1b48ccu: goto label_1b48cc;
        case 0x1b48d0u: goto label_1b48d0;
        case 0x1b48d4u: goto label_1b48d4;
        case 0x1b48d8u: goto label_1b48d8;
        case 0x1b48dcu: goto label_1b48dc;
        case 0x1b48e0u: goto label_1b48e0;
        case 0x1b48e4u: goto label_1b48e4;
        case 0x1b48e8u: goto label_1b48e8;
        case 0x1b48ecu: goto label_1b48ec;
        case 0x1b48f0u: goto label_1b48f0;
        case 0x1b48f4u: goto label_1b48f4;
        case 0x1b48f8u: goto label_1b48f8;
        case 0x1b48fcu: goto label_1b48fc;
        case 0x1b4900u: goto label_1b4900;
        case 0x1b4904u: goto label_1b4904;
        case 0x1b4908u: goto label_1b4908;
        case 0x1b490cu: goto label_1b490c;
        case 0x1b4910u: goto label_1b4910;
        case 0x1b4914u: goto label_1b4914;
        case 0x1b4918u: goto label_1b4918;
        case 0x1b491cu: goto label_1b491c;
        case 0x1b4920u: goto label_1b4920;
        case 0x1b4924u: goto label_1b4924;
        case 0x1b4928u: goto label_1b4928;
        case 0x1b492cu: goto label_1b492c;
        case 0x1b4930u: goto label_1b4930;
        case 0x1b4934u: goto label_1b4934;
        case 0x1b4938u: goto label_1b4938;
        case 0x1b493cu: goto label_1b493c;
        case 0x1b4940u: goto label_1b4940;
        case 0x1b4944u: goto label_1b4944;
        case 0x1b4948u: goto label_1b4948;
        case 0x1b494cu: goto label_1b494c;
        case 0x1b4950u: goto label_1b4950;
        case 0x1b4954u: goto label_1b4954;
        case 0x1b4958u: goto label_1b4958;
        case 0x1b495cu: goto label_1b495c;
        case 0x1b4960u: goto label_1b4960;
        case 0x1b4964u: goto label_1b4964;
        case 0x1b4968u: goto label_1b4968;
        case 0x1b496cu: goto label_1b496c;
        case 0x1b4970u: goto label_1b4970;
        case 0x1b4974u: goto label_1b4974;
        case 0x1b4978u: goto label_1b4978;
        case 0x1b497cu: goto label_1b497c;
        case 0x1b4980u: goto label_1b4980;
        case 0x1b4984u: goto label_1b4984;
        case 0x1b4988u: goto label_1b4988;
        case 0x1b498cu: goto label_1b498c;
        case 0x1b4990u: goto label_1b4990;
        case 0x1b4994u: goto label_1b4994;
        case 0x1b4998u: goto label_1b4998;
        case 0x1b499cu: goto label_1b499c;
        case 0x1b49a0u: goto label_1b49a0;
        case 0x1b49a4u: goto label_1b49a4;
        case 0x1b49a8u: goto label_1b49a8;
        case 0x1b49acu: goto label_1b49ac;
        case 0x1b49b0u: goto label_1b49b0;
        case 0x1b49b4u: goto label_1b49b4;
        case 0x1b49b8u: goto label_1b49b8;
        case 0x1b49bcu: goto label_1b49bc;
        case 0x1b49c0u: goto label_1b49c0;
        case 0x1b49c4u: goto label_1b49c4;
        case 0x1b49c8u: goto label_1b49c8;
        case 0x1b49ccu: goto label_1b49cc;
        case 0x1b49d0u: goto label_1b49d0;
        case 0x1b49d4u: goto label_1b49d4;
        case 0x1b49d8u: goto label_1b49d8;
        case 0x1b49dcu: goto label_1b49dc;
        case 0x1b49e0u: goto label_1b49e0;
        case 0x1b49e4u: goto label_1b49e4;
        case 0x1b49e8u: goto label_1b49e8;
        case 0x1b49ecu: goto label_1b49ec;
        case 0x1b49f0u: goto label_1b49f0;
        case 0x1b49f4u: goto label_1b49f4;
        case 0x1b49f8u: goto label_1b49f8;
        case 0x1b49fcu: goto label_1b49fc;
        case 0x1b4a00u: goto label_1b4a00;
        case 0x1b4a04u: goto label_1b4a04;
        case 0x1b4a08u: goto label_1b4a08;
        case 0x1b4a0cu: goto label_1b4a0c;
        case 0x1b4a10u: goto label_1b4a10;
        case 0x1b4a14u: goto label_1b4a14;
        case 0x1b4a18u: goto label_1b4a18;
        case 0x1b4a1cu: goto label_1b4a1c;
        case 0x1b4a20u: goto label_1b4a20;
        case 0x1b4a24u: goto label_1b4a24;
        case 0x1b4a28u: goto label_1b4a28;
        case 0x1b4a2cu: goto label_1b4a2c;
        case 0x1b4a30u: goto label_1b4a30;
        case 0x1b4a34u: goto label_1b4a34;
        case 0x1b4a38u: goto label_1b4a38;
        case 0x1b4a3cu: goto label_1b4a3c;
        case 0x1b4a40u: goto label_1b4a40;
        case 0x1b4a44u: goto label_1b4a44;
        case 0x1b4a48u: goto label_1b4a48;
        case 0x1b4a4cu: goto label_1b4a4c;
        case 0x1b4a50u: goto label_1b4a50;
        case 0x1b4a54u: goto label_1b4a54;
        case 0x1b4a58u: goto label_1b4a58;
        case 0x1b4a5cu: goto label_1b4a5c;
        case 0x1b4a60u: goto label_1b4a60;
        case 0x1b4a64u: goto label_1b4a64;
        case 0x1b4a68u: goto label_1b4a68;
        case 0x1b4a6cu: goto label_1b4a6c;
        case 0x1b4a70u: goto label_1b4a70;
        case 0x1b4a74u: goto label_1b4a74;
        case 0x1b4a78u: goto label_1b4a78;
        case 0x1b4a7cu: goto label_1b4a7c;
        case 0x1b4a80u: goto label_1b4a80;
        case 0x1b4a84u: goto label_1b4a84;
        case 0x1b4a88u: goto label_1b4a88;
        case 0x1b4a8cu: goto label_1b4a8c;
        case 0x1b4a90u: goto label_1b4a90;
        case 0x1b4a94u: goto label_1b4a94;
        case 0x1b4a98u: goto label_1b4a98;
        case 0x1b4a9cu: goto label_1b4a9c;
        case 0x1b4aa0u: goto label_1b4aa0;
        case 0x1b4aa4u: goto label_1b4aa4;
        case 0x1b4aa8u: goto label_1b4aa8;
        case 0x1b4aacu: goto label_1b4aac;
        case 0x1b4ab0u: goto label_1b4ab0;
        case 0x1b4ab4u: goto label_1b4ab4;
        case 0x1b4ab8u: goto label_1b4ab8;
        case 0x1b4abcu: goto label_1b4abc;
        case 0x1b4ac0u: goto label_1b4ac0;
        case 0x1b4ac4u: goto label_1b4ac4;
        case 0x1b4ac8u: goto label_1b4ac8;
        case 0x1b4accu: goto label_1b4acc;
        case 0x1b4ad0u: goto label_1b4ad0;
        case 0x1b4ad4u: goto label_1b4ad4;
        case 0x1b4ad8u: goto label_1b4ad8;
        case 0x1b4adcu: goto label_1b4adc;
        case 0x1b4ae0u: goto label_1b4ae0;
        case 0x1b4ae4u: goto label_1b4ae4;
        case 0x1b4ae8u: goto label_1b4ae8;
        case 0x1b4aecu: goto label_1b4aec;
        case 0x1b4af0u: goto label_1b4af0;
        case 0x1b4af4u: goto label_1b4af4;
        case 0x1b4af8u: goto label_1b4af8;
        case 0x1b4afcu: goto label_1b4afc;
        case 0x1b4b00u: goto label_1b4b00;
        case 0x1b4b04u: goto label_1b4b04;
        case 0x1b4b08u: goto label_1b4b08;
        case 0x1b4b0cu: goto label_1b4b0c;
        case 0x1b4b10u: goto label_1b4b10;
        case 0x1b4b14u: goto label_1b4b14;
        case 0x1b4b18u: goto label_1b4b18;
        case 0x1b4b1cu: goto label_1b4b1c;
        case 0x1b4b20u: goto label_1b4b20;
        case 0x1b4b24u: goto label_1b4b24;
        case 0x1b4b28u: goto label_1b4b28;
        case 0x1b4b2cu: goto label_1b4b2c;
        case 0x1b4b30u: goto label_1b4b30;
        case 0x1b4b34u: goto label_1b4b34;
        case 0x1b4b38u: goto label_1b4b38;
        case 0x1b4b3cu: goto label_1b4b3c;
        case 0x1b4b40u: goto label_1b4b40;
        case 0x1b4b44u: goto label_1b4b44;
        case 0x1b4b48u: goto label_1b4b48;
        case 0x1b4b4cu: goto label_1b4b4c;
        case 0x1b4b50u: goto label_1b4b50;
        case 0x1b4b54u: goto label_1b4b54;
        case 0x1b4b58u: goto label_1b4b58;
        case 0x1b4b5cu: goto label_1b4b5c;
        case 0x1b4b60u: goto label_1b4b60;
        case 0x1b4b64u: goto label_1b4b64;
        case 0x1b4b68u: goto label_1b4b68;
        case 0x1b4b6cu: goto label_1b4b6c;
        case 0x1b4b70u: goto label_1b4b70;
        case 0x1b4b74u: goto label_1b4b74;
        default: break;
    }

    ctx->pc = 0x1b4718u;

label_1b4718:
    // 0x1b4718: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1b4718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1b471c:
    // 0x1b471c: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1b471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_1b4720:
    // 0x1b4720: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1b4720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_1b4724:
    // 0x1b4724: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b4724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b4728:
    // 0x1b4728: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x1b4728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_1b472c:
    // 0x1b472c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b472cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b4730:
    // 0x1b4730: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x1b4730u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1b4734:
    // 0x1b4734: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b4734u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4738:
    // 0x1b4738: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1b4738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1b473c:
    // 0x1b473c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1b473cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_1b4740:
    // 0x1b4740: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1b4740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_1b4744:
    // 0x1b4744: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b4744u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1b4748:
    // 0x1b4748: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1b4748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_1b474c:
    // 0x1b474c: 0x124000ff  beqz        $s2, . + 4 + (0xFF << 2)
label_1b4750:
    if (ctx->pc == 0x1B4750u) {
        ctx->pc = 0x1B4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B474Cu;
        // 0x1b4750: 0xffbf0130  sd          $ra, 0x130($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4754u;
        goto label_1b4754;
    }
    ctx->pc = 0x1B474Cu;
    {
        const bool branch_taken_0x1b474c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B474Cu;
        // 0x1b4750: 0xffbf0130  sd          $ra, 0x130($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b474c) {
            ctx->pc = 0x1B4B4Cu;
            goto label_1b4b4c;
        }
    }
    ctx->pc = 0x1B4754u;
label_1b4754:
    // 0x1b4754: 0x8e91000c  lw          $s1, 0xC($s4)
    ctx->pc = 0x1b4754u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1b4758:
    // 0x1b4758: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x1b4758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1b475c:
    // 0x1b475c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1b475cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1b4760:
    // 0x1b4760: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1b4760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1b4764:
    // 0x1b4764: 0xc092e7c  jal         func_24B9F0
label_1b4768:
    if (ctx->pc == 0x1B4768u) {
        ctx->pc = 0x1B4768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4764u;
        // 0x1b4768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B476Cu;
        goto label_1b476c;
    }
    ctx->pc = 0x1B4764u;
    SET_GPR_U32(ctx, 31, 0x1B476Cu);
    ctx->pc = 0x1B4768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4764u;
    // 0x1b4768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x1B4764u, 0x1B476Cu)) {
        return;
    }
    ctx->pc = 0x1B476Cu;
label_1b476c:
    // 0x1b476c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b476cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4770:
    // 0x1b4770: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4774:
    // 0x1b4774: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1b4774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1b4778:
    // 0x1b4778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b477c:
    // 0x1b477c: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x1b477cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_1b4780:
    // 0x1b4780: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1b4780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_1b4784:
    // 0x1b4784: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x1b4784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_1b4788:
    // 0x1b4788: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1b4788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1b478c:
    // 0x1b478c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1b478cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1b4790:
    // 0x1b4790: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b4790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b4794:
    // 0x1b4794: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b4794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1b4798:
    // 0x1b4798: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b479c:
    // 0x1b479c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b479cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1b47a0:
    // 0x1b47a0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1b47a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1b47a4:
    // 0x1b47a4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b47a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1b47a8:
    // 0x1b47a8: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1b47a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1b47ac:
    // 0x1b47ac: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b47acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1b47b0:
    // 0x1b47b0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1b47b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_1b47b4:
    // 0x1b47b4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1b47b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1b47b8:
    // 0x1b47b8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1b47b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1b47bc:
    // 0x1b47bc: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1b47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1b47c0:
    // 0x1b47c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1b47c4:
    if (ctx->pc == 0x1B47C4u) {
        ctx->pc = 0x1B47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47C0u;
        // 0x1b47c4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B47C8u;
        goto label_1b47c8;
    }
    ctx->pc = 0x1B47C0u;
    {
        const bool branch_taken_0x1b47c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47C0u;
        // 0x1b47c4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47c0) {
            ctx->pc = 0x1B47F8u;
            goto label_1b47f8;
        }
    }
    ctx->pc = 0x1B47C8u;
label_1b47c8:
    // 0x1b47c8: 0x2443c3e0  addiu       $v1, $v0, -0x3C20
    ctx->pc = 0x1b47c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951904));
label_1b47cc:
    // 0x1b47cc: 0xc442c3e0  lwc1        $f2, -0x3C20($v0)
    ctx->pc = 0x1b47ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b47d0:
    // 0x1b47d0: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x1b47d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b47d4:
    // 0x1b47d4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1b47d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b47d8:
    // 0x1b47d8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b47d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b47dc:
    // 0x1b47dc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1b47dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b47e0:
    // 0x1b47e0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b47e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1b47e4:
    // 0x1b47e4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b47e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b47e8:
    // 0x1b47e8: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1b47e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1b47ec:
    // 0x1b47ec: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x1b47ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1b47f0:
    // 0x1b47f0: 0xc095c4a  jal         func_257128
label_1b47f4:
    if (ctx->pc == 0x1B47F4u) {
        ctx->pc = 0x1B47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47F0u;
        // 0x1b47f4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B47F8u;
        goto label_1b47f8;
    }
    ctx->pc = 0x1B47F0u;
    SET_GPR_U32(ctx, 31, 0x1B47F8u);
    ctx->pc = 0x1B47F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47F0u;
    // 0x1b47f4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257128u, 0x1B47F0u, 0x1B47F8u)) {
        return;
    }
    ctx->pc = 0x1B47F8u;
label_1b47f8:
    // 0x1b47f8: 0xc08992e  jal         func_2264B8
label_1b47fc:
    if (ctx->pc == 0x1B47FCu) {
        ctx->pc = 0x1B47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47F8u;
        // 0x1b47fc: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4800u;
        goto label_1b4800;
    }
    ctx->pc = 0x1B47F8u;
    SET_GPR_U32(ctx, 31, 0x1B4800u);
    ctx->pc = 0x1B47FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47F8u;
    // 0x1b47fc: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1B47F8u, 0x1B4800u)) {
        return;
    }
    ctx->pc = 0x1B4800u;
label_1b4800:
    // 0x1b4800: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_1b4804:
    if (ctx->pc == 0x1B4804u) {
        ctx->pc = 0x1B4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4800u;
        // 0x1b4804: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4808u;
        goto label_1b4808;
    }
    ctx->pc = 0x1B4800u;
    {
        const bool branch_taken_0x1b4800 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4800u;
        // 0x1b4804: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4800) {
            ctx->pc = 0x1B4820u;
            goto label_1b4820;
        }
    }
    ctx->pc = 0x1B4808u;
label_1b4808:
    // 0x1b4808: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1b4808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1b480c:
    // 0x1b480c: 0x24a5c398  addiu       $a1, $a1, -0x3C68
    ctx->pc = 0x1b480cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951832));
label_1b4810:
    // 0x1b4810: 0xc08941c  jal         func_225070
label_1b4814:
    if (ctx->pc == 0x1B4814u) {
        ctx->pc = 0x1B4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4810u;
        // 0x1b4814: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4818u;
        goto label_1b4818;
    }
    ctx->pc = 0x1B4810u;
    SET_GPR_U32(ctx, 31, 0x1B4818u);
    ctx->pc = 0x1B4814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4810u;
    // 0x1b4814: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225070u, 0x1B4810u, 0x1B4818u)) {
        return;
    }
    ctx->pc = 0x1B4818u;
label_1b4818:
    // 0x1b4818: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b481c:
    if (ctx->pc == 0x1B481Cu) {
        ctx->pc = 0x1B4820u;
        goto label_1b4820;
    }
    ctx->pc = 0x1B4818u;
    {
        const bool branch_taken_0x1b4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4818) {
            ctx->pc = 0x1B4830u;
            goto label_1b4830;
        }
    }
    ctx->pc = 0x1B4820u;
label_1b4820:
    // 0x1b4820: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1b4820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1b4824:
    // 0x1b4824: 0x24a5c398  addiu       $a1, $a1, -0x3C68
    ctx->pc = 0x1b4824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951832));
label_1b4828:
    // 0x1b4828: 0xc08941c  jal         func_225070
label_1b482c:
    if (ctx->pc == 0x1B482Cu) {
        ctx->pc = 0x1B482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4828u;
        // 0x1b482c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4830u;
        goto label_1b4830;
    }
    ctx->pc = 0x1B4828u;
    SET_GPR_U32(ctx, 31, 0x1B4830u);
    ctx->pc = 0x1B482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4828u;
    // 0x1b482c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225070u, 0x1B4828u, 0x1B4830u)) {
        return;
    }
    ctx->pc = 0x1B4830u;
label_1b4830:
    // 0x1b4830: 0xc0893a2  jal         func_224E88
label_1b4834:
    if (ctx->pc == 0x1B4834u) {
        ctx->pc = 0x1B4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4830u;
        // 0x1b4834: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4838u;
        goto label_1b4838;
    }
    ctx->pc = 0x1B4830u;
    SET_GPR_U32(ctx, 31, 0x1B4838u);
    ctx->pc = 0x1B4834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4830u;
    // 0x1b4834: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x1B4830u, 0x1B4838u)) {
        return;
    }
    ctx->pc = 0x1B4838u;
label_1b4838:
    // 0x1b4838: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1b4838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1b483c:
    // 0x1b483c: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_1b4840:
    if (ctx->pc == 0x1B4840u) {
        ctx->pc = 0x1B4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B483Cu;
        // 0x1b4840: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4844u;
        goto label_1b4844;
    }
    ctx->pc = 0x1B483Cu;
    {
        const bool branch_taken_0x1b483c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b483c) {
            ctx->pc = 0x1B4840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B483Cu;
            // 0x1b4840: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4860u;
            goto label_1b4860;
        }
    }
    ctx->pc = 0x1B4844u;
label_1b4844:
    // 0x1b4844: 0xc06325e  jal         func_18C978
label_1b4848:
    if (ctx->pc == 0x1B4848u) {
        ctx->pc = 0x1B4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4844u;
        // 0x1b4848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B484Cu;
        goto label_1b484c;
    }
    ctx->pc = 0x1B4844u;
    SET_GPR_U32(ctx, 31, 0x1B484Cu);
    ctx->pc = 0x1B4848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4844u;
    // 0x1b4848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18C978u, 0x1B4844u, 0x1B484Cu)) {
        return;
    }
    ctx->pc = 0x1B484Cu;
label_1b484c:
    // 0x1b484c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1b484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b4850:
    // 0x1b4850: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b4850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4854:
    // 0x1b4854: 0xc09795e  jal         func_25E578
label_1b4858:
    if (ctx->pc == 0x1B4858u) {
        ctx->pc = 0x1B4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4854u;
        // 0x1b4858: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B485Cu;
        goto label_1b485c;
    }
    ctx->pc = 0x1B4854u;
    SET_GPR_U32(ctx, 31, 0x1B485Cu);
    ctx->pc = 0x1B4858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4854u;
    // 0x1b4858: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E578u, 0x1B4854u, 0x1B485Cu)) {
        return;
    }
    ctx->pc = 0x1B485Cu;
label_1b485c:
    // 0x1b485c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1b485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1b4860:
    // 0x1b4860: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_1b4864:
    if (ctx->pc == 0x1B4864u) {
        ctx->pc = 0x1B4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4860u;
        // 0x1b4864: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4868u;
        goto label_1b4868;
    }
    ctx->pc = 0x1B4860u;
    {
        const bool branch_taken_0x1b4860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4860u;
        // 0x1b4864: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4860) {
            ctx->pc = 0x1B4A58u;
            goto label_1b4a58;
        }
    }
    ctx->pc = 0x1B4868u;
label_1b4868:
    // 0x1b4868: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1b4868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1b486c:
    // 0x1b486c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1b486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1b4870:
    // 0x1b4870: 0x2453c3b0  addiu       $s3, $v0, -0x3C50
    ctx->pc = 0x1b4870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951856));
label_1b4874:
    // 0x1b4874: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x1b4874u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1b4878:
    // 0x1b4878: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b4878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b487c:
    // 0x1b487c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1b4880:
    // 0x1b4880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4884:
    // 0x1b4884: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b4884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4888:
    // 0x1b4888: 0x68820017  ldl         $v0, 0x17($a0)
    ctx->pc = 0x1b4888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1b488c:
    // 0x1b488c: 0x6c820010  ldr         $v0, 0x10($a0)
    ctx->pc = 0x1b488cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1b4890:
    // 0x1b4890: 0x6883001f  ldl         $v1, 0x1F($a0)
    ctx->pc = 0x1b4890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b4894:
    // 0x1b4894: 0x6c830018  ldr         $v1, 0x18($a0)
    ctx->pc = 0x1b4894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b4898:
    // 0x1b4898: 0x68870027  ldl         $a3, 0x27($a0)
    ctx->pc = 0x1b4898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1b489c:
    // 0x1b489c: 0x6c870020  ldr         $a3, 0x20($a0)
    ctx->pc = 0x1b489cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1b48a0:
    // 0x1b48a0: 0x6888002f  ldl         $t0, 0x2F($a0)
    ctx->pc = 0x1b48a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1b48a4:
    // 0x1b48a4: 0x6c880028  ldr         $t0, 0x28($a0)
    ctx->pc = 0x1b48a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1b48a8:
    // 0x1b48a8: 0xb2420017  sdl         $v0, 0x17($s2)
    ctx->pc = 0x1b48a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48ac:
    // 0x1b48ac: 0xb6420010  sdr         $v0, 0x10($s2)
    ctx->pc = 0x1b48acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48b0:
    // 0x1b48b0: 0xb243001f  sdl         $v1, 0x1F($s2)
    ctx->pc = 0x1b48b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48b4:
    // 0x1b48b4: 0xb6430018  sdr         $v1, 0x18($s2)
    ctx->pc = 0x1b48b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48b8:
    // 0x1b48b8: 0xb2470027  sdl         $a3, 0x27($s2)
    ctx->pc = 0x1b48b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48bc:
    // 0x1b48bc: 0xb6470020  sdr         $a3, 0x20($s2)
    ctx->pc = 0x1b48bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48c0:
    // 0x1b48c0: 0xb248002f  sdl         $t0, 0x2F($s2)
    ctx->pc = 0x1b48c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48c4:
    // 0x1b48c4: 0xb6480028  sdr         $t0, 0x28($s2)
    ctx->pc = 0x1b48c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48c8:
    // 0x1b48c8: 0x68820037  ldl         $v0, 0x37($a0)
    ctx->pc = 0x1b48c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1b48cc:
    // 0x1b48cc: 0x6c820030  ldr         $v0, 0x30($a0)
    ctx->pc = 0x1b48ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1b48d0:
    // 0x1b48d0: 0x6883003f  ldl         $v1, 0x3F($a0)
    ctx->pc = 0x1b48d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b48d4:
    // 0x1b48d4: 0x6c830038  ldr         $v1, 0x38($a0)
    ctx->pc = 0x1b48d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b48d8:
    // 0x1b48d8: 0x68870047  ldl         $a3, 0x47($a0)
    ctx->pc = 0x1b48d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1b48dc:
    // 0x1b48dc: 0x6c870040  ldr         $a3, 0x40($a0)
    ctx->pc = 0x1b48dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1b48e0:
    // 0x1b48e0: 0x6888004f  ldl         $t0, 0x4F($a0)
    ctx->pc = 0x1b48e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1b48e4:
    // 0x1b48e4: 0x6c880048  ldr         $t0, 0x48($a0)
    ctx->pc = 0x1b48e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1b48e8:
    // 0x1b48e8: 0xb2420037  sdl         $v0, 0x37($s2)
    ctx->pc = 0x1b48e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48ec:
    // 0x1b48ec: 0xb6420030  sdr         $v0, 0x30($s2)
    ctx->pc = 0x1b48ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48f0:
    // 0x1b48f0: 0xb243003f  sdl         $v1, 0x3F($s2)
    ctx->pc = 0x1b48f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48f4:
    // 0x1b48f4: 0xb6430038  sdr         $v1, 0x38($s2)
    ctx->pc = 0x1b48f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48f8:
    // 0x1b48f8: 0xb2470047  sdl         $a3, 0x47($s2)
    ctx->pc = 0x1b48f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b48fc:
    // 0x1b48fc: 0xb6470040  sdr         $a3, 0x40($s2)
    ctx->pc = 0x1b48fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4900:
    // 0x1b4900: 0xb248004f  sdl         $t0, 0x4F($s2)
    ctx->pc = 0x1b4900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4904:
    // 0x1b4904: 0xb6480048  sdr         $t0, 0x48($s2)
    ctx->pc = 0x1b4904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4908:
    // 0x1b4908: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1b4908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b490c:
    // 0x1b490c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4910:
    // 0x1b4910: 0xc68c0030  lwc1        $f12, 0x30($s4)
    ctx->pc = 0x1b4910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b4914:
    // 0x1b4914: 0xc092e32  jal         func_24B8C8
label_1b4918:
    if (ctx->pc == 0x1B4918u) {
        ctx->pc = 0x1B4918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4914u;
        // 0x1b4918: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B491Cu;
        goto label_1b491c;
    }
    ctx->pc = 0x1B4914u;
    SET_GPR_U32(ctx, 31, 0x1B491Cu);
    ctx->pc = 0x1B4918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4914u;
    // 0x1b4918: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1B4914u, 0x1B491Cu)) {
        return;
    }
    ctx->pc = 0x1B491Cu;
label_1b491c:
    // 0x1b491c: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x1b491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4920:
    // 0x1b4920: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b4920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1b4924:
    // 0x1b4924: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1b4924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1b4928:
    // 0x1b4928: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b4928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b492c:
    // 0x1b492c: 0x24a5c3c0  addiu       $a1, $a1, -0x3C40
    ctx->pc = 0x1b492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951872));
label_1b4930:
    // 0x1b4930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4934:
    // 0x1b4934: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b4934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4938:
    // 0x1b4938: 0xc092e32  jal         func_24B8C8
label_1b493c:
    if (ctx->pc == 0x1B493Cu) {
        ctx->pc = 0x1B493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4938u;
        // 0x1b493c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4940u;
        goto label_1b4940;
    }
    ctx->pc = 0x1B4938u;
    SET_GPR_U32(ctx, 31, 0x1B4940u);
    ctx->pc = 0x1B493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4938u;
    // 0x1b493c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1B4938u, 0x1B4940u)) {
        return;
    }
    ctx->pc = 0x1B4940u;
label_1b4940:
    // 0x1b4940: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x1b4940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4944:
    // 0x1b4944: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b4944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1b4948:
    // 0x1b4948: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b4948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1b494c:
    // 0x1b494c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b494cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b4950:
    // 0x1b4950: 0x24a5c3d0  addiu       $a1, $a1, -0x3C30
    ctx->pc = 0x1b4950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951888));
label_1b4954:
    // 0x1b4954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4958:
    // 0x1b4958: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b4958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b495c:
    // 0x1b495c: 0xc092e32  jal         func_24B8C8
label_1b4960:
    if (ctx->pc == 0x1B4960u) {
        ctx->pc = 0x1B4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B495Cu;
        // 0x1b4960: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4964u;
        goto label_1b4964;
    }
    ctx->pc = 0x1B495Cu;
    SET_GPR_U32(ctx, 31, 0x1B4964u);
    ctx->pc = 0x1B4960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B495Cu;
    // 0x1b4960: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1B495Cu, 0x1B4964u)) {
        return;
    }
    ctx->pc = 0x1B4964u;
label_1b4964:
    // 0x1b4964: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1b4964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b4968:
    // 0x1b4968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b496c:
    // 0x1b496c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b496cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b4970:
    // 0x1b4970: 0xc0c493d  jal         func_3124F4
label_1b4974:
    if (ctx->pc == 0x1B4974u) {
        ctx->pc = 0x1B4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4970u;
        // 0x1b4974: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4978u;
        goto label_1b4978;
    }
    ctx->pc = 0x1B4970u;
    SET_GPR_U32(ctx, 31, 0x1B4978u);
    ctx->pc = 0x1B4974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4970u;
    // 0x1b4974: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B4970u, 0x1B4978u)) {
        return;
    }
    ctx->pc = 0x1B4978u;
label_1b4978:
    // 0x1b4978: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x1b4978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b497c:
    // 0x1b497c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4980:
    // 0x1b4980: 0x3c013bc4  lui         $at, 0x3BC4
    ctx->pc = 0x1b4980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15300 << 16));
label_1b4984:
    // 0x1b4984: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1b4984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1b4988:
    // 0x1b4988: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b498c:
    // 0x1b498c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b4990:
    // 0x1b4990: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b4990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b4994:
    // 0x1b4994: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1b4994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1b4998:
    // 0x1b4998: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1b4998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1b499c:
    // 0x1b499c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1b499cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1b49a0:
    // 0x1b49a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b49a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b49a4:
    // 0x1b49a4: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1b49a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b49a8:
    // 0x1b49a8: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1b49a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b49ac:
    // 0x1b49ac: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1b49acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1b49b0:
    // 0x1b49b0: 0xc092f34  jal         func_24BCD0
label_1b49b4:
    if (ctx->pc == 0x1B49B4u) {
        ctx->pc = 0x1B49B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49B0u;
        // 0x1b49b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B49B8u;
        goto label_1b49b8;
    }
    ctx->pc = 0x1B49B0u;
    SET_GPR_U32(ctx, 31, 0x1B49B8u);
    ctx->pc = 0x1B49B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49B0u;
    // 0x1b49b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x1B49B0u, 0x1B49B8u)) {
        return;
    }
    ctx->pc = 0x1B49B8u;
label_1b49b8:
    // 0x1b49b8: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x1b49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1b49bc:
    // 0x1b49bc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1b49c0:
    if (ctx->pc == 0x1B49C0u) {
        ctx->pc = 0x1B49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49BCu;
        // 0x1b49c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B49C4u;
        goto label_1b49c4;
    }
    ctx->pc = 0x1B49BCu;
    {
        const bool branch_taken_0x1b49bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49BCu;
        // 0x1b49c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49bc) {
            ctx->pc = 0x1B4A10u;
            goto label_1b4a10;
        }
    }
    ctx->pc = 0x1B49C4u;
label_1b49c4:
    // 0x1b49c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b49c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b49c8:
    // 0x1b49c8: 0xc0c493d  jal         func_3124F4
label_1b49cc:
    if (ctx->pc == 0x1B49CCu) {
        ctx->pc = 0x1B49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49C8u;
        // 0x1b49cc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B49D0u;
        goto label_1b49d0;
    }
    ctx->pc = 0x1B49C8u;
    SET_GPR_U32(ctx, 31, 0x1B49D0u);
    ctx->pc = 0x1B49CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49C8u;
    // 0x1b49cc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B49C8u, 0x1B49D0u)) {
        return;
    }
    ctx->pc = 0x1B49D0u;
label_1b49d0:
    // 0x1b49d0: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x1b49d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b49d4:
    // 0x1b49d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b49d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b49d8:
    // 0x1b49d8: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1b49d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
label_1b49dc:
    // 0x1b49dc: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x1b49dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
label_1b49e0:
    // 0x1b49e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b49e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b49e4:
    // 0x1b49e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b49e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b49e8:
    // 0x1b49e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b49e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b49ec:
    // 0x1b49ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b49ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b49f0:
    // 0x1b49f0: 0xc092f34  jal         func_24BCD0
label_1b49f4:
    if (ctx->pc == 0x1B49F4u) {
        ctx->pc = 0x1B49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49F0u;
        // 0x1b49f4: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B49F8u;
        goto label_1b49f8;
    }
    ctx->pc = 0x1B49F0u;
    SET_GPR_U32(ctx, 31, 0x1B49F8u);
    ctx->pc = 0x1B49F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49F0u;
    // 0x1b49f4: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x1B49F0u, 0x1B49F8u)) {
        return;
    }
    ctx->pc = 0x1B49F8u;
label_1b49f8:
    // 0x1b49f8: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x1b49f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_1b49fc:
    // 0x1b49fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b49fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b4a00:
    // 0x1b4a00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b4a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b4a04:
    // 0x1b4a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4a08:
    // 0x1b4a08: 0xc092e32  jal         func_24B8C8
label_1b4a0c:
    if (ctx->pc == 0x1B4A0Cu) {
        ctx->pc = 0x1B4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A08u;
        // 0x1b4a0c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A10u;
        goto label_1b4a10;
    }
    ctx->pc = 0x1B4A08u;
    SET_GPR_U32(ctx, 31, 0x1B4A10u);
    ctx->pc = 0x1B4A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A08u;
    // 0x1b4a0c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1B4A08u, 0x1B4A10u)) {
        return;
    }
    ctx->pc = 0x1B4A10u;
label_1b4a10:
    // 0x1b4a10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4a14:
    // 0x1b4a14: 0x0  nop
    ctx->pc = 0x1b4a14u;
    // NOP
label_1b4a18:
    // 0x1b4a18: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1b4a18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4a1c:
    // 0x1b4a1c: 0x0  nop
    ctx->pc = 0x1b4a1cu;
    // NOP
label_1b4a20:
    // 0x1b4a20: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1b4a24:
    if (ctx->pc == 0x1B4A24u) {
        ctx->pc = 0x1B4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A20u;
        // 0x1b4a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A28u;
        goto label_1b4a28;
    }
    ctx->pc = 0x1B4A20u;
    {
        const bool branch_taken_0x1b4a20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A20u;
        // 0x1b4a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a20) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B4A28u;
label_1b4a28:
    // 0x1b4a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4a2c:
    // 0x1b4a2c: 0xc0c493d  jal         func_3124F4
label_1b4a30:
    if (ctx->pc == 0x1B4A30u) {
        ctx->pc = 0x1B4A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A2Cu;
        // 0x1b4a30: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A34u;
        goto label_1b4a34;
    }
    ctx->pc = 0x1B4A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B4A34u);
    ctx->pc = 0x1B4A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A2Cu;
    // 0x1b4a30: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B4A2Cu, 0x1B4A34u)) {
        return;
    }
    ctx->pc = 0x1B4A34u;
label_1b4a34:
    // 0x1b4a34: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1b4a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1b4a38:
    // 0x1b4a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4a3c:
    // 0x1b4a3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b4a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b4a40:
    // 0x1b4a40: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1b4a40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1b4a44:
    // 0x1b4a44: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x1b4a44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1b4a48:
    // 0x1b4a48: 0xc092ea4  jal         func_24BA90
label_1b4a4c:
    if (ctx->pc == 0x1B4A4Cu) {
        ctx->pc = 0x1B4A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A48u;
        // 0x1b4a4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A50u;
        goto label_1b4a50;
    }
    ctx->pc = 0x1B4A48u;
    SET_GPR_U32(ctx, 31, 0x1B4A50u);
    ctx->pc = 0x1B4A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A48u;
    // 0x1b4a4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BA90u, 0x1B4A48u, 0x1B4A50u)) {
        return;
    }
    ctx->pc = 0x1B4A50u;
label_1b4a50:
    // 0x1b4a50: 0xc08992e  jal         func_2264B8
label_1b4a54:
    if (ctx->pc == 0x1B4A54u) {
        ctx->pc = 0x1B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A50u;
        // 0x1b4a54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A58u;
        goto label_1b4a58;
    }
    ctx->pc = 0x1B4A50u;
    SET_GPR_U32(ctx, 31, 0x1B4A58u);
    ctx->pc = 0x1B4A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A50u;
    // 0x1b4a54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1B4A50u, 0x1B4A58u)) {
        return;
    }
    ctx->pc = 0x1B4A58u;
label_1b4a58:
    // 0x1b4a58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4a5c:
    // 0x1b4a5c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b4a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b4a60:
    // 0x1b4a60: 0xc0971bc  jal         func_25C6F0
label_1b4a64:
    if (ctx->pc == 0x1B4A64u) {
        ctx->pc = 0x1B4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A60u;
        // 0x1b4a64: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A68u;
        goto label_1b4a68;
    }
    ctx->pc = 0x1B4A60u;
    SET_GPR_U32(ctx, 31, 0x1B4A68u);
    ctx->pc = 0x1B4A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A60u;
    // 0x1b4a64: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C6F0u, 0x1B4A60u, 0x1B4A68u)) {
        return;
    }
    ctx->pc = 0x1B4A68u;
label_1b4a68:
    // 0x1b4a68: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x1b4a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4a6c:
    // 0x1b4a6c: 0x0  nop
    ctx->pc = 0x1b4a6cu;
    // NOP
label_1b4a70:
    // 0x1b4a70: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_1b4a74:
    if (ctx->pc == 0x1B4A74u) {
        ctx->pc = 0x1B4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A70u;
        // 0x1b4a74: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A78u;
        goto label_1b4a78;
    }
    ctx->pc = 0x1B4A70u;
    {
        const bool branch_taken_0x1b4a70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A70u;
        // 0x1b4a74: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a70) {
            ctx->pc = 0x1B4B44u;
            goto label_1b4b44;
        }
    }
    ctx->pc = 0x1B4A78u;
label_1b4a78:
    // 0x1b4a78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4a7c:
    // 0x1b4a7c: 0x26310fd8  addiu       $s1, $s1, 0xFD8
    ctx->pc = 0x1b4a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
label_1b4a80:
    // 0x1b4a80: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b4a84:
    // 0x1b4a84: 0x40f809  jalr        $v0
label_1b4a88:
    if (ctx->pc == 0x1B4A88u) {
        ctx->pc = 0x1B4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A84u;
        // 0x1b4a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A8Cu;
        goto label_1b4a8c;
    }
    ctx->pc = 0x1B4A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4A8Cu);
        ctx->pc = 0x1B4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A84u;
        // 0x1b4a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4A84u, 0x1B4A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4A8Cu;
label_1b4a8c:
    // 0x1b4a8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b4a90:
    // 0x1b4a90: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b4a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b4a94:
    // 0x1b4a94: 0x40f809  jalr        $v0
label_1b4a98:
    if (ctx->pc == 0x1B4A98u) {
        ctx->pc = 0x1B4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A94u;
        // 0x1b4a98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A9Cu;
        goto label_1b4a9c;
    }
    ctx->pc = 0x1B4A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4A9Cu);
        ctx->pc = 0x1B4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A94u;
        // 0x1b4a98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4A94u, 0x1B4A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4A9Cu;
label_1b4a9c:
    // 0x1b4a9c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b4aa0:
    // 0x1b4aa0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b4aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b4aa4:
    // 0x1b4aa4: 0x40f809  jalr        $v0
label_1b4aa8:
    if (ctx->pc == 0x1B4AA8u) {
        ctx->pc = 0x1B4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AA4u;
        // 0x1b4aa8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4AACu;
        goto label_1b4aac;
    }
    ctx->pc = 0x1B4AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4AACu);
        ctx->pc = 0x1B4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AA4u;
        // 0x1b4aa8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4AA4u, 0x1B4AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4AACu;
label_1b4aac:
    // 0x1b4aac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b4ab0:
    // 0x1b4ab0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1b4ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b4ab4:
    // 0x1b4ab4: 0x40f809  jalr        $v0
label_1b4ab8:
    if (ctx->pc == 0x1B4AB8u) {
        ctx->pc = 0x1B4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AB4u;
        // 0x1b4ab8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4ABCu;
        goto label_1b4abc;
    }
    ctx->pc = 0x1B4AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4ABCu);
        ctx->pc = 0x1B4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AB4u;
        // 0x1b4ab8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4AB4u, 0x1B4ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4ABCu;
label_1b4abc:
    // 0x1b4abc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1b4abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1b4ac0:
    // 0x1b4ac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4ac4:
    // 0x1b4ac4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1b4ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b4ac8:
    // 0x1b4ac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b4acc:
    // 0x1b4acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4ad0:
    // 0x1b4ad0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b4ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b4ad4:
    // 0x1b4ad4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4ad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1b4ad8:
    // 0x1b4ad8: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1b4ad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1b4adc:
    // 0x1b4adc: 0xc0c493d  jal         func_3124F4
label_1b4ae0:
    if (ctx->pc == 0x1B4AE0u) {
        ctx->pc = 0x1B4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4ADCu;
        // 0x1b4ae0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4AE4u;
        goto label_1b4ae4;
    }
    ctx->pc = 0x1B4ADCu;
    SET_GPR_U32(ctx, 31, 0x1B4AE4u);
    ctx->pc = 0x1B4AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4ADCu;
    // 0x1b4ae0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B4ADCu, 0x1B4AE4u)) {
        return;
    }
    ctx->pc = 0x1B4AE4u;
label_1b4ae4:
    // 0x1b4ae4: 0xc6300008  lwc1        $f16, 0x8($s1)
    ctx->pc = 0x1b4ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1b4ae8:
    // 0x1b4ae8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b4ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b4aec:
    // 0x1b4aec: 0x108027  nor         $s0, $zero, $s0
    ctx->pc = 0x1b4aecu;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
label_1b4af0:
    // 0x1b4af0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b4af4:
    // 0x1b4af4: 0xa3b00013  sb          $s0, 0x13($sp)
    ctx->pc = 0x1b4af4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 16));
label_1b4af8:
    // 0x1b4af8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b4af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b4afc:
    // 0x1b4afc: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1b4afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_1b4b00:
    // 0x1b4b00: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1b4b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b4b04:
    // 0x1b4b04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b4b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b4b08:
    // 0x1b4b08: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1b4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1b4b0c:
    // 0x1b4b0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4b10:
    // 0x1b4b10: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1b4b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
label_1b4b14:
    // 0x1b4b14: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1b4b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1b4b18:
    // 0x1b4b18: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4b18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b4b1c:
    // 0x1b4b1c: 0xc4510080  lwc1        $f17, 0x80($v0)
    ctx->pc = 0x1b4b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_1b4b20:
    // 0x1b4b20: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x1b4b20u;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
label_1b4b24:
    // 0x1b4b24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b4b24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b4b28:
    // 0x1b4b28: 0x460064c6  mov.s       $f19, $f12
    ctx->pc = 0x1b4b28u;
    ctx->f[19] = FPU_MOV_S(ctx->f[12]);
label_1b4b2c:
    // 0x1b4b2c: 0x4611a443  div.s       $f17, $f20, $f17
    ctx->pc = 0x1b4b2cu;
    ctx->f[17] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[17]);
label_1b4b30:
    // 0x1b4b30: 0xc06ce2a  jal         func_1B38A8
label_1b4b34:
    if (ctx->pc == 0x1B4B34u) {
        ctx->pc = 0x1B4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B30u;
        // 0x1b4b34: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4B38u;
        goto label_1b4b38;
    }
    ctx->pc = 0x1B4B30u;
    SET_GPR_U32(ctx, 31, 0x1B4B38u);
    ctx->pc = 0x1B4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B30u;
    // 0x1b4b34: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B4B30u, 0x1B4B38u)) {
        return;
    }
    ctx->pc = 0x1B4B38u;
label_1b4b38:
    // 0x1b4b38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b4b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b4b3c:
    // 0x1b4b3c: 0xc06cff8  jal         func_1B3FE0
label_1b4b40:
    if (ctx->pc == 0x1B4B40u) {
        ctx->pc = 0x1B4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B3Cu;
        // 0x1b4b40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4B44u;
        goto label_1b4b44;
    }
    ctx->pc = 0x1B4B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B44u);
    ctx->pc = 0x1B4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B3Cu;
    // 0x1b4b40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B4B3Cu, 0x1B4B44u)) {
        return;
    }
    ctx->pc = 0x1B4B44u;
label_1b4b44:
    // 0x1b4b44: 0xc08939a  jal         func_224E68
label_1b4b48:
    if (ctx->pc == 0x1B4B48u) {
        ctx->pc = 0x1B4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B44u;
        // 0x1b4b48: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4B4Cu;
        goto label_1b4b4c;
    }
    ctx->pc = 0x1B4B44u;
    SET_GPR_U32(ctx, 31, 0x1B4B4Cu);
    ctx->pc = 0x1B4B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B44u;
    // 0x1b4b48: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x1B4B44u, 0x1B4B4Cu)) {
        return;
    }
    ctx->pc = 0x1B4B4Cu;
label_1b4b4c:
    // 0x1b4b4c: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1b4b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1b4b50:
    // 0x1b4b50: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1b4b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1b4b54:
    // 0x1b4b54: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1b4b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1b4b58:
    // 0x1b4b58: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1b4b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1b4b5c:
    // 0x1b4b5c: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1b4b5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1b4b60:
    // 0x1b4b60: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1b4b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1b4b64:
    // 0x1b4b64: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1b4b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b4b68:
    // 0x1b4b68: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1b4b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b4b6c:
    // 0x1b4b6c: 0x3e00008  jr          $ra
label_1b4b70:
    if (ctx->pc == 0x1B4B70u) {
        ctx->pc = 0x1B4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B6Cu;
        // 0x1b4b70: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4B74u;
        goto label_1b4b74;
    }
    ctx->pc = 0x1B4B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B6Cu;
        // 0x1b4b70: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4B74u;
label_1b4b74:
    // 0x1b4b74: 0x0  nop
    ctx->pc = 0x1b4b74u;
    // NOP
    ctx->pc = 0x1b4b78u;
}
