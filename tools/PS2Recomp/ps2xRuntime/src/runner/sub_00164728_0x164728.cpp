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

// Function: sub_00164728
// Address: 0x164728 - 0x164b70
void sub_00164728_0x164728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164728_0x164728");
#endif

    switch (ctx->pc) {
        case 0x164728u: goto label_164728;
        case 0x16472cu: goto label_16472c;
        case 0x164730u: goto label_164730;
        case 0x164734u: goto label_164734;
        case 0x164738u: goto label_164738;
        case 0x16473cu: goto label_16473c;
        case 0x164740u: goto label_164740;
        case 0x164744u: goto label_164744;
        case 0x164748u: goto label_164748;
        case 0x16474cu: goto label_16474c;
        case 0x164750u: goto label_164750;
        case 0x164754u: goto label_164754;
        case 0x164758u: goto label_164758;
        case 0x16475cu: goto label_16475c;
        case 0x164760u: goto label_164760;
        case 0x164764u: goto label_164764;
        case 0x164768u: goto label_164768;
        case 0x16476cu: goto label_16476c;
        case 0x164770u: goto label_164770;
        case 0x164774u: goto label_164774;
        case 0x164778u: goto label_164778;
        case 0x16477cu: goto label_16477c;
        case 0x164780u: goto label_164780;
        case 0x164784u: goto label_164784;
        case 0x164788u: goto label_164788;
        case 0x16478cu: goto label_16478c;
        case 0x164790u: goto label_164790;
        case 0x164794u: goto label_164794;
        case 0x164798u: goto label_164798;
        case 0x16479cu: goto label_16479c;
        case 0x1647a0u: goto label_1647a0;
        case 0x1647a4u: goto label_1647a4;
        case 0x1647a8u: goto label_1647a8;
        case 0x1647acu: goto label_1647ac;
        case 0x1647b0u: goto label_1647b0;
        case 0x1647b4u: goto label_1647b4;
        case 0x1647b8u: goto label_1647b8;
        case 0x1647bcu: goto label_1647bc;
        case 0x1647c0u: goto label_1647c0;
        case 0x1647c4u: goto label_1647c4;
        case 0x1647c8u: goto label_1647c8;
        case 0x1647ccu: goto label_1647cc;
        case 0x1647d0u: goto label_1647d0;
        case 0x1647d4u: goto label_1647d4;
        case 0x1647d8u: goto label_1647d8;
        case 0x1647dcu: goto label_1647dc;
        case 0x1647e0u: goto label_1647e0;
        case 0x1647e4u: goto label_1647e4;
        case 0x1647e8u: goto label_1647e8;
        case 0x1647ecu: goto label_1647ec;
        case 0x1647f0u: goto label_1647f0;
        case 0x1647f4u: goto label_1647f4;
        case 0x1647f8u: goto label_1647f8;
        case 0x1647fcu: goto label_1647fc;
        case 0x164800u: goto label_164800;
        case 0x164804u: goto label_164804;
        case 0x164808u: goto label_164808;
        case 0x16480cu: goto label_16480c;
        case 0x164810u: goto label_164810;
        case 0x164814u: goto label_164814;
        case 0x164818u: goto label_164818;
        case 0x16481cu: goto label_16481c;
        case 0x164820u: goto label_164820;
        case 0x164824u: goto label_164824;
        case 0x164828u: goto label_164828;
        case 0x16482cu: goto label_16482c;
        case 0x164830u: goto label_164830;
        case 0x164834u: goto label_164834;
        case 0x164838u: goto label_164838;
        case 0x16483cu: goto label_16483c;
        case 0x164840u: goto label_164840;
        case 0x164844u: goto label_164844;
        case 0x164848u: goto label_164848;
        case 0x16484cu: goto label_16484c;
        case 0x164850u: goto label_164850;
        case 0x164854u: goto label_164854;
        case 0x164858u: goto label_164858;
        case 0x16485cu: goto label_16485c;
        case 0x164860u: goto label_164860;
        case 0x164864u: goto label_164864;
        case 0x164868u: goto label_164868;
        case 0x16486cu: goto label_16486c;
        case 0x164870u: goto label_164870;
        case 0x164874u: goto label_164874;
        case 0x164878u: goto label_164878;
        case 0x16487cu: goto label_16487c;
        case 0x164880u: goto label_164880;
        case 0x164884u: goto label_164884;
        case 0x164888u: goto label_164888;
        case 0x16488cu: goto label_16488c;
        case 0x164890u: goto label_164890;
        case 0x164894u: goto label_164894;
        case 0x164898u: goto label_164898;
        case 0x16489cu: goto label_16489c;
        case 0x1648a0u: goto label_1648a0;
        case 0x1648a4u: goto label_1648a4;
        case 0x1648a8u: goto label_1648a8;
        case 0x1648acu: goto label_1648ac;
        case 0x1648b0u: goto label_1648b0;
        case 0x1648b4u: goto label_1648b4;
        case 0x1648b8u: goto label_1648b8;
        case 0x1648bcu: goto label_1648bc;
        case 0x1648c0u: goto label_1648c0;
        case 0x1648c4u: goto label_1648c4;
        case 0x1648c8u: goto label_1648c8;
        case 0x1648ccu: goto label_1648cc;
        case 0x1648d0u: goto label_1648d0;
        case 0x1648d4u: goto label_1648d4;
        case 0x1648d8u: goto label_1648d8;
        case 0x1648dcu: goto label_1648dc;
        case 0x1648e0u: goto label_1648e0;
        case 0x1648e4u: goto label_1648e4;
        case 0x1648e8u: goto label_1648e8;
        case 0x1648ecu: goto label_1648ec;
        case 0x1648f0u: goto label_1648f0;
        case 0x1648f4u: goto label_1648f4;
        case 0x1648f8u: goto label_1648f8;
        case 0x1648fcu: goto label_1648fc;
        case 0x164900u: goto label_164900;
        case 0x164904u: goto label_164904;
        case 0x164908u: goto label_164908;
        case 0x16490cu: goto label_16490c;
        case 0x164910u: goto label_164910;
        case 0x164914u: goto label_164914;
        case 0x164918u: goto label_164918;
        case 0x16491cu: goto label_16491c;
        case 0x164920u: goto label_164920;
        case 0x164924u: goto label_164924;
        case 0x164928u: goto label_164928;
        case 0x16492cu: goto label_16492c;
        case 0x164930u: goto label_164930;
        case 0x164934u: goto label_164934;
        case 0x164938u: goto label_164938;
        case 0x16493cu: goto label_16493c;
        case 0x164940u: goto label_164940;
        case 0x164944u: goto label_164944;
        case 0x164948u: goto label_164948;
        case 0x16494cu: goto label_16494c;
        case 0x164950u: goto label_164950;
        case 0x164954u: goto label_164954;
        case 0x164958u: goto label_164958;
        case 0x16495cu: goto label_16495c;
        case 0x164960u: goto label_164960;
        case 0x164964u: goto label_164964;
        case 0x164968u: goto label_164968;
        case 0x16496cu: goto label_16496c;
        case 0x164970u: goto label_164970;
        case 0x164974u: goto label_164974;
        case 0x164978u: goto label_164978;
        case 0x16497cu: goto label_16497c;
        case 0x164980u: goto label_164980;
        case 0x164984u: goto label_164984;
        case 0x164988u: goto label_164988;
        case 0x16498cu: goto label_16498c;
        case 0x164990u: goto label_164990;
        case 0x164994u: goto label_164994;
        case 0x164998u: goto label_164998;
        case 0x16499cu: goto label_16499c;
        case 0x1649a0u: goto label_1649a0;
        case 0x1649a4u: goto label_1649a4;
        case 0x1649a8u: goto label_1649a8;
        case 0x1649acu: goto label_1649ac;
        case 0x1649b0u: goto label_1649b0;
        case 0x1649b4u: goto label_1649b4;
        case 0x1649b8u: goto label_1649b8;
        case 0x1649bcu: goto label_1649bc;
        case 0x1649c0u: goto label_1649c0;
        case 0x1649c4u: goto label_1649c4;
        case 0x1649c8u: goto label_1649c8;
        case 0x1649ccu: goto label_1649cc;
        case 0x1649d0u: goto label_1649d0;
        case 0x1649d4u: goto label_1649d4;
        case 0x1649d8u: goto label_1649d8;
        case 0x1649dcu: goto label_1649dc;
        case 0x1649e0u: goto label_1649e0;
        case 0x1649e4u: goto label_1649e4;
        case 0x1649e8u: goto label_1649e8;
        case 0x1649ecu: goto label_1649ec;
        case 0x1649f0u: goto label_1649f0;
        case 0x1649f4u: goto label_1649f4;
        case 0x1649f8u: goto label_1649f8;
        case 0x1649fcu: goto label_1649fc;
        case 0x164a00u: goto label_164a00;
        case 0x164a04u: goto label_164a04;
        case 0x164a08u: goto label_164a08;
        case 0x164a0cu: goto label_164a0c;
        case 0x164a10u: goto label_164a10;
        case 0x164a14u: goto label_164a14;
        case 0x164a18u: goto label_164a18;
        case 0x164a1cu: goto label_164a1c;
        case 0x164a20u: goto label_164a20;
        case 0x164a24u: goto label_164a24;
        case 0x164a28u: goto label_164a28;
        case 0x164a2cu: goto label_164a2c;
        case 0x164a30u: goto label_164a30;
        case 0x164a34u: goto label_164a34;
        case 0x164a38u: goto label_164a38;
        case 0x164a3cu: goto label_164a3c;
        case 0x164a40u: goto label_164a40;
        case 0x164a44u: goto label_164a44;
        case 0x164a48u: goto label_164a48;
        case 0x164a4cu: goto label_164a4c;
        case 0x164a50u: goto label_164a50;
        case 0x164a54u: goto label_164a54;
        case 0x164a58u: goto label_164a58;
        case 0x164a5cu: goto label_164a5c;
        case 0x164a60u: goto label_164a60;
        case 0x164a64u: goto label_164a64;
        case 0x164a68u: goto label_164a68;
        case 0x164a6cu: goto label_164a6c;
        case 0x164a70u: goto label_164a70;
        case 0x164a74u: goto label_164a74;
        case 0x164a78u: goto label_164a78;
        case 0x164a7cu: goto label_164a7c;
        case 0x164a80u: goto label_164a80;
        case 0x164a84u: goto label_164a84;
        case 0x164a88u: goto label_164a88;
        case 0x164a8cu: goto label_164a8c;
        case 0x164a90u: goto label_164a90;
        case 0x164a94u: goto label_164a94;
        case 0x164a98u: goto label_164a98;
        case 0x164a9cu: goto label_164a9c;
        case 0x164aa0u: goto label_164aa0;
        case 0x164aa4u: goto label_164aa4;
        case 0x164aa8u: goto label_164aa8;
        case 0x164aacu: goto label_164aac;
        case 0x164ab0u: goto label_164ab0;
        case 0x164ab4u: goto label_164ab4;
        case 0x164ab8u: goto label_164ab8;
        case 0x164abcu: goto label_164abc;
        case 0x164ac0u: goto label_164ac0;
        case 0x164ac4u: goto label_164ac4;
        case 0x164ac8u: goto label_164ac8;
        case 0x164accu: goto label_164acc;
        case 0x164ad0u: goto label_164ad0;
        case 0x164ad4u: goto label_164ad4;
        case 0x164ad8u: goto label_164ad8;
        case 0x164adcu: goto label_164adc;
        case 0x164ae0u: goto label_164ae0;
        case 0x164ae4u: goto label_164ae4;
        case 0x164ae8u: goto label_164ae8;
        case 0x164aecu: goto label_164aec;
        case 0x164af0u: goto label_164af0;
        case 0x164af4u: goto label_164af4;
        case 0x164af8u: goto label_164af8;
        case 0x164afcu: goto label_164afc;
        case 0x164b00u: goto label_164b00;
        case 0x164b04u: goto label_164b04;
        case 0x164b08u: goto label_164b08;
        case 0x164b0cu: goto label_164b0c;
        case 0x164b10u: goto label_164b10;
        case 0x164b14u: goto label_164b14;
        case 0x164b18u: goto label_164b18;
        case 0x164b1cu: goto label_164b1c;
        case 0x164b20u: goto label_164b20;
        case 0x164b24u: goto label_164b24;
        case 0x164b28u: goto label_164b28;
        case 0x164b2cu: goto label_164b2c;
        case 0x164b30u: goto label_164b30;
        case 0x164b34u: goto label_164b34;
        case 0x164b38u: goto label_164b38;
        case 0x164b3cu: goto label_164b3c;
        case 0x164b40u: goto label_164b40;
        case 0x164b44u: goto label_164b44;
        case 0x164b48u: goto label_164b48;
        case 0x164b4cu: goto label_164b4c;
        case 0x164b50u: goto label_164b50;
        case 0x164b54u: goto label_164b54;
        case 0x164b58u: goto label_164b58;
        case 0x164b5cu: goto label_164b5c;
        case 0x164b60u: goto label_164b60;
        case 0x164b64u: goto label_164b64;
        case 0x164b68u: goto label_164b68;
        case 0x164b6cu: goto label_164b6c;
        default: break;
    }

    ctx->pc = 0x164728u;

label_164728:
    // 0x164728: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x164728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_16472c:
    // 0x16472c: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x16472cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
label_164730:
    // 0x164730: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x164730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
label_164734:
    // 0x164734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164738:
    // 0x164738: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x164738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
label_16473c:
    // 0x16473c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16473cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_164740:
    // 0x164740: 0xe7b50218  swc1        $f21, 0x218($sp)
    ctx->pc = 0x164740u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_164744:
    // 0x164744: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x164744u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164748:
    // 0x164748: 0xe7b40210  swc1        $f20, 0x210($sp)
    ctx->pc = 0x164748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_16474c:
    // 0x16474c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x16474cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_164750:
    // 0x164750: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x164750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
label_164754:
    // 0x164754: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x164754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
label_164758:
    // 0x164758: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x164758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
label_16475c:
    // 0x16475c: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x16475cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
label_164760:
    // 0x164760: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x164760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
label_164764:
    // 0x164764: 0x7fbe0180  sq          $fp, 0x180($sp)
    ctx->pc = 0x164764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 30));
label_164768:
    // 0x164768: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x164768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
label_16476c:
    // 0x16476c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16476cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_164770:
    // 0x164770: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x164770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_164774:
    // 0x164774: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x164774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_164778:
    // 0x164778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_16477c:
    if (ctx->pc == 0x16477Cu) {
        ctx->pc = 0x16477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164778u;
        // 0x16477c: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x164780u;
        goto label_164780;
    }
    ctx->pc = 0x164778u;
    {
        const bool branch_taken_0x164778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164778u;
        // 0x16477c: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164778) {
            ctx->pc = 0x16478Cu;
            goto label_16478c;
        }
    }
    ctx->pc = 0x164780u;
label_164780:
    // 0x164780: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x164780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_164784:
    // 0x164784: 0x40f809  jalr        $v0
label_164788:
    if (ctx->pc == 0x164788u) {
        ctx->pc = 0x164788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164784u;
        // 0x164788: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16478Cu;
        goto label_16478c;
    }
    ctx->pc = 0x164784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16478Cu);
        ctx->pc = 0x164788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164784u;
        // 0x164788: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164784u, 0x16478Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16478Cu;
label_16478c:
    // 0x16478c: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x16478cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_164790:
    // 0x164790: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x164790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_164794:
    // 0x164794: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_164798:
    // 0x164798: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x164798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16479c:
    // 0x16479c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1647a0:
    // 0x1647a0: 0x8e360004  lw          $s6, 0x4($s1)
    ctx->pc = 0x1647a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1647a4:
    // 0x1647a4: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x1647a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1647a8:
    // 0x1647a8: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
label_1647ac:
    if (ctx->pc == 0x1647ACu) {
        ctx->pc = 0x1647ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647A8u;
        // 0x1647ac: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647B0u;
        goto label_1647b0;
    }
    ctx->pc = 0x1647A8u;
    {
        const bool branch_taken_0x1647a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647A8u;
        // 0x1647ac: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647a8) {
            ctx->pc = 0x1647FCu;
            goto label_1647fc;
        }
    }
    ctx->pc = 0x1647B0u;
label_1647b0:
    // 0x1647b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1647b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1647b4:
    // 0x1647b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1647b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1647b8:
    // 0x1647b8: 0xc0590f6  jal         func_1643D8
label_1647bc:
    if (ctx->pc == 0x1647BCu) {
        ctx->pc = 0x1647BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647B8u;
        // 0x1647bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647C0u;
        goto label_1647c0;
    }
    ctx->pc = 0x1647B8u;
    SET_GPR_U32(ctx, 31, 0x1647C0u);
    ctx->pc = 0x1647BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647B8u;
    // 0x1647bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1643D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1643D8u, 0x1647B8u, 0x1647C0u)) {
        return;
    }
    ctx->pc = 0x1647C0u;
label_1647c0:
    // 0x1647c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1647c4:
    if (ctx->pc == 0x1647C4u) {
        ctx->pc = 0x1647C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647C0u;
        // 0x1647c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647C8u;
        goto label_1647c8;
    }
    ctx->pc = 0x1647C0u;
    {
        const bool branch_taken_0x1647c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647C0u;
        // 0x1647c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647c0) {
            ctx->pc = 0x1647D4u;
            goto label_1647d4;
        }
    }
    ctx->pc = 0x1647C8u;
label_1647c8:
    // 0x1647c8: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x1647c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1647cc:
    // 0x1647cc: 0xc0899e8  jal         func_2267A0
label_1647d0:
    if (ctx->pc == 0x1647D0u) {
        ctx->pc = 0x1647D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647CCu;
        // 0x1647d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647D4u;
        goto label_1647d4;
    }
    ctx->pc = 0x1647CCu;
    SET_GPR_U32(ctx, 31, 0x1647D4u);
    ctx->pc = 0x1647D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647CCu;
    // 0x1647d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267A0u, 0x1647CCu, 0x1647D4u)) {
        return;
    }
    ctx->pc = 0x1647D4u;
label_1647d4:
    // 0x1647d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1647d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1647d8:
    // 0x1647d8: 0xc076f1e  jal         func_1DBC78
label_1647dc:
    if (ctx->pc == 0x1647DCu) {
        ctx->pc = 0x1647DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647D8u;
        // 0x1647dc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647E0u;
        goto label_1647e0;
    }
    ctx->pc = 0x1647D8u;
    SET_GPR_U32(ctx, 31, 0x1647E0u);
    ctx->pc = 0x1647DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647D8u;
    // 0x1647dc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBC78u, 0x1647D8u, 0x1647E0u)) {
        return;
    }
    ctx->pc = 0x1647E0u;
label_1647e0:
    // 0x1647e0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1647e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1647e4:
    // 0x1647e4: 0x50800098  beql        $a0, $zero, . + 4 + (0x98 << 2)
label_1647e8:
    if (ctx->pc == 0x1647E8u) {
        ctx->pc = 0x1647E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647E4u;
        // 0x1647e8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647ECu;
        goto label_1647ec;
    }
    ctx->pc = 0x1647E4u;
    {
        const bool branch_taken_0x1647e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1647e4) {
            ctx->pc = 0x1647E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1647E4u;
            // 0x1647e8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164A48u;
            goto label_164a48;
        }
    }
    ctx->pc = 0x1647ECu;
label_1647ec:
    // 0x1647ec: 0xc07b60a  jal         func_1ED828
label_1647f0:
    if (ctx->pc == 0x1647F0u) {
        ctx->pc = 0x1647F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647ECu;
        // 0x1647f0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647F4u;
        goto label_1647f4;
    }
    ctx->pc = 0x1647ECu;
    SET_GPR_U32(ctx, 31, 0x1647F4u);
    ctx->pc = 0x1647F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647ECu;
    // 0x1647f0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED828u, 0x1647ECu, 0x1647F4u)) {
        return;
    }
    ctx->pc = 0x1647F4u;
label_1647f4:
    // 0x1647f4: 0x10000094  b           . + 4 + (0x94 << 2)
label_1647f8:
    if (ctx->pc == 0x1647F8u) {
        ctx->pc = 0x1647F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647F4u;
        // 0x1647f8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647FCu;
        goto label_1647fc;
    }
    ctx->pc = 0x1647F4u;
    {
        const bool branch_taken_0x1647f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647F4u;
        // 0x1647f8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647f4) {
            ctx->pc = 0x164A48u;
            goto label_164a48;
        }
    }
    ctx->pc = 0x1647FCu;
label_1647fc:
    // 0x1647fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1647fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164800:
    // 0x164800: 0x54620091  bnel        $v1, $v0, . + 4 + (0x91 << 2)
label_164804:
    if (ctx->pc == 0x164804u) {
        ctx->pc = 0x164804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164800u;
        // 0x164804: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164808u;
        goto label_164808;
    }
    ctx->pc = 0x164800u;
    {
        const bool branch_taken_0x164800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164800) {
            ctx->pc = 0x164804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164800u;
            // 0x164804: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164A48u;
            goto label_164a48;
        }
    }
    ctx->pc = 0x164808u;
label_164808:
    // 0x164808: 0x8e330038  lw          $s3, 0x38($s1)
    ctx->pc = 0x164808u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_16480c:
    // 0x16480c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164810:
    // 0x164810: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x164810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_164814:
    // 0x164814: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x164814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_164818:
    // 0x164818: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x164818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_16481c:
    // 0x16481c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16481cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_164820:
    // 0x164820: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x164820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_164824:
    // 0x164824: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x164824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_164828:
    // 0x164828: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x164828u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16482c:
    // 0x16482c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16482cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_164830:
    // 0x164830: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x164830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_164834:
    // 0x164834: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x164834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_164838:
    // 0x164838: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x164838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_16483c:
    // 0x16483c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x16483cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_164840:
    // 0x164840: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x164840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_164844:
    // 0x164844: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x164844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_164848:
    // 0x164848: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x164848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_16484c:
    // 0x16484c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x16484cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_164850:
    // 0x164850: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x164850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_164854:
    // 0x164854: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x164854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_164858:
    // 0x164858: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x164858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_16485c:
    // 0x16485c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x16485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_164860:
    // 0x164860: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
label_164864:
    if (ctx->pc == 0x164864u) {
        ctx->pc = 0x164864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164860u;
        // 0x164864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164868u;
        goto label_164868;
    }
    ctx->pc = 0x164860u;
    {
        const bool branch_taken_0x164860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164860u;
        // 0x164864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164860) {
            ctx->pc = 0x164A18u;
            goto label_164a18;
        }
    }
    ctx->pc = 0x164868u;
label_164868:
    // 0x164868: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x164868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_16486c:
    // 0x16486c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x16486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_164870:
    // 0x164870: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x164870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_164874:
    // 0x164874: 0x40f809  jalr        $v0
label_164878:
    if (ctx->pc == 0x164878u) {
        ctx->pc = 0x164878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164874u;
        // 0x164878: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16487Cu;
        goto label_16487c;
    }
    ctx->pc = 0x164874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16487Cu);
        ctx->pc = 0x164878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164874u;
        // 0x164878: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164874u, 0x16487Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16487Cu;
label_16487c:
    // 0x16487c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x16487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_164880:
    // 0x164880: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_164884:
    if (ctx->pc == 0x164884u) {
        ctx->pc = 0x164884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164880u;
        // 0x164884: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164888u;
        goto label_164888;
    }
    ctx->pc = 0x164880u;
    {
        const bool branch_taken_0x164880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164880) {
            ctx->pc = 0x164884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164880u;
            // 0x164884: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164898u;
            goto label_164898;
        }
    }
    ctx->pc = 0x164888u;
label_164888:
    // 0x164888: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x164888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_16488c:
    // 0x16488c: 0x40f809  jalr        $v0
label_164890:
    if (ctx->pc == 0x164890u) {
        ctx->pc = 0x164890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16488Cu;
        // 0x164890: 0x27a40164  addiu       $a0, $sp, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164894u;
        goto label_164894;
    }
    ctx->pc = 0x16488Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164894u);
        ctx->pc = 0x164890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16488Cu;
        // 0x164890: 0x27a40164  addiu       $a0, $sp, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16488Cu, 0x164894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164894u;
label_164894:
    // 0x164894: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x164894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_164898:
    // 0x164898: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_16489c:
    if (ctx->pc == 0x16489Cu) {
        ctx->pc = 0x16489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164898u;
        // 0x16489c: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1648A0u;
        goto label_1648a0;
    }
    ctx->pc = 0x164898u;
    {
        const bool branch_taken_0x164898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164898) {
            ctx->pc = 0x16489Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164898u;
            // 0x16489c: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164924u;
            goto label_164924;
        }
    }
    ctx->pc = 0x1648A0u;
label_1648a0:
    // 0x1648a0: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x1648a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1648a4:
    // 0x1648a4: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x1648a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1648a8:
    // 0x1648a8: 0x6ba300af  ldl         $v1, 0xAF($sp)
    ctx->pc = 0x1648a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1648ac:
    // 0x1648ac: 0x6fa300a8  ldr         $v1, 0xA8($sp)
    ctx->pc = 0x1648acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1648b0:
    // 0x1648b0: 0x6ba400b7  ldl         $a0, 0xB7($sp)
    ctx->pc = 0x1648b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1648b4:
    // 0x1648b4: 0x6fa400b0  ldr         $a0, 0xB0($sp)
    ctx->pc = 0x1648b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1648b8:
    // 0x1648b8: 0x6ba500bf  ldl         $a1, 0xBF($sp)
    ctx->pc = 0x1648b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1648bc:
    // 0x1648bc: 0x6fa500b8  ldr         $a1, 0xB8($sp)
    ctx->pc = 0x1648bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1648c0:
    // 0x1648c0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1648c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1648c4:
    // 0x1648c4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1648c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1648c8:
    // 0x1648c8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1648c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1648cc:
    // 0x1648cc: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1648ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1648d0:
    // 0x1648d0: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x1648d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1648d4:
    // 0x1648d4: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x1648d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1648d8:
    // 0x1648d8: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x1648d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1648dc:
    // 0x1648dc: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x1648dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1648e0:
    // 0x1648e0: 0x6ba200c7  ldl         $v0, 0xC7($sp)
    ctx->pc = 0x1648e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1648e4:
    // 0x1648e4: 0x6fa200c0  ldr         $v0, 0xC0($sp)
    ctx->pc = 0x1648e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1648e8:
    // 0x1648e8: 0x6ba300cf  ldl         $v1, 0xCF($sp)
    ctx->pc = 0x1648e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1648ec:
    // 0x1648ec: 0x6fa300c8  ldr         $v1, 0xC8($sp)
    ctx->pc = 0x1648ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1648f0:
    // 0x1648f0: 0x6ba400d7  ldl         $a0, 0xD7($sp)
    ctx->pc = 0x1648f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1648f4:
    // 0x1648f4: 0x6fa400d0  ldr         $a0, 0xD0($sp)
    ctx->pc = 0x1648f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1648f8:
    // 0x1648f8: 0x6ba500df  ldl         $a1, 0xDF($sp)
    ctx->pc = 0x1648f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1648fc:
    // 0x1648fc: 0x6fa500d8  ldr         $a1, 0xD8($sp)
    ctx->pc = 0x1648fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_164900:
    // 0x164900: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x164900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_164904:
    // 0x164904: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x164904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164908:
    // 0x164908: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x164908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_16490c:
    // 0x16490c: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x16490cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164910:
    // 0x164910: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x164910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_164914:
    // 0x164914: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x164914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164918:
    // 0x164918: 0xb3a5003f  sdl         $a1, 0x3F($sp)
    ctx->pc = 0x164918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_16491c:
    // 0x16491c: 0xb7a50038  sdr         $a1, 0x38($sp)
    ctx->pc = 0x16491cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164920:
    // 0x164920: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x164920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_164924:
    // 0x164924: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x164924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164928:
    // 0x164928: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x164928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16492c:
    // 0x16492c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_164930:
    if (ctx->pc == 0x164930u) {
        ctx->pc = 0x164930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16492Cu;
        // 0x164930: 0x27b50040  addiu       $s5, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164934u;
        goto label_164934;
    }
    ctx->pc = 0x16492Cu;
    {
        const bool branch_taken_0x16492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16492Cu;
        // 0x164930: 0x27b50040  addiu       $s5, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16492c) {
            ctx->pc = 0x164A14u;
            goto label_164a14;
        }
    }
    ctx->pc = 0x164934u;
label_164934:
    // 0x164934: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x164934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_164938:
    // 0x164938: 0x26700002  addiu       $s0, $s3, 0x2
    ctx->pc = 0x164938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_16493c:
    // 0x16493c: 0x0  nop
    ctx->pc = 0x16493cu;
    // NOP
label_164940:
    // 0x164940: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x164940u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_164944:
    // 0x164944: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x164944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_164948:
    // 0x164948: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x164948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_16494c:
    // 0x16494c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x16494cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_164950:
    // 0x164950: 0x8e26005c  lw          $a2, 0x5C($s1)
    ctx->pc = 0x164950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_164954:
    // 0x164954: 0x40f809  jalr        $v0
label_164958:
    if (ctx->pc == 0x164958u) {
        ctx->pc = 0x164958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164954u;
        // 0x164958: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16495Cu;
        goto label_16495c;
    }
    ctx->pc = 0x164954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16495Cu);
        ctx->pc = 0x164958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164954u;
        // 0x164958: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164954u, 0x16495Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16495Cu;
label_16495c:
    // 0x16495c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x16495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_164960:
    // 0x164960: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x164960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_164964:
    // 0x164964: 0x6ba700e7  ldl         $a3, 0xE7($sp)
    ctx->pc = 0x164964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_164968:
    // 0x164968: 0x6fa700e0  ldr         $a3, 0xE0($sp)
    ctx->pc = 0x164968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_16496c:
    // 0x16496c: 0x6ba800ef  ldl         $t0, 0xEF($sp)
    ctx->pc = 0x16496cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_164970:
    // 0x164970: 0x6fa800e8  ldr         $t0, 0xE8($sp)
    ctx->pc = 0x164970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_164974:
    // 0x164974: 0x6ba200f7  ldl         $v0, 0xF7($sp)
    ctx->pc = 0x164974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_164978:
    // 0x164978: 0x6fa200f0  ldr         $v0, 0xF0($sp)
    ctx->pc = 0x164978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_16497c:
    // 0x16497c: 0x6ba300ff  ldl         $v1, 0xFF($sp)
    ctx->pc = 0x16497cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_164980:
    // 0x164980: 0x6fa300f8  ldr         $v1, 0xF8($sp)
    ctx->pc = 0x164980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_164984:
    // 0x164984: 0xb3a70127  sdl         $a3, 0x127($sp)
    ctx->pc = 0x164984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_164988:
    // 0x164988: 0xb7a70120  sdr         $a3, 0x120($sp)
    ctx->pc = 0x164988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_16498c:
    // 0x16498c: 0xb3a8012f  sdl         $t0, 0x12F($sp)
    ctx->pc = 0x16498cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_164990:
    // 0x164990: 0xb7a80128  sdr         $t0, 0x128($sp)
    ctx->pc = 0x164990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164994:
    // 0x164994: 0xb3a20137  sdl         $v0, 0x137($sp)
    ctx->pc = 0x164994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_164998:
    // 0x164998: 0xb7a20130  sdr         $v0, 0x130($sp)
    ctx->pc = 0x164998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_16499c:
    // 0x16499c: 0xb3a3013f  sdl         $v1, 0x13F($sp)
    ctx->pc = 0x16499cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1649a0:
    // 0x1649a0: 0xb7a30138  sdr         $v1, 0x138($sp)
    ctx->pc = 0x1649a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1649a4:
    // 0x1649a4: 0x6ba70107  ldl         $a3, 0x107($sp)
    ctx->pc = 0x1649a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1649a8:
    // 0x1649a8: 0x6fa70100  ldr         $a3, 0x100($sp)
    ctx->pc = 0x1649a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1649ac:
    // 0x1649ac: 0x6ba8010f  ldl         $t0, 0x10F($sp)
    ctx->pc = 0x1649acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1649b0:
    // 0x1649b0: 0x6fa80108  ldr         $t0, 0x108($sp)
    ctx->pc = 0x1649b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1649b4:
    // 0x1649b4: 0x6ba20117  ldl         $v0, 0x117($sp)
    ctx->pc = 0x1649b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1649b8:
    // 0x1649b8: 0x6fa20110  ldr         $v0, 0x110($sp)
    ctx->pc = 0x1649b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1649bc:
    // 0x1649bc: 0x6ba3011f  ldl         $v1, 0x11F($sp)
    ctx->pc = 0x1649bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1649c0:
    // 0x1649c0: 0x6fa30118  ldr         $v1, 0x118($sp)
    ctx->pc = 0x1649c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1649c4:
    // 0x1649c4: 0xb3a70147  sdl         $a3, 0x147($sp)
    ctx->pc = 0x1649c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1649c8:
    // 0x1649c8: 0xb7a70140  sdr         $a3, 0x140($sp)
    ctx->pc = 0x1649c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1649cc:
    // 0x1649cc: 0xb3a8014f  sdl         $t0, 0x14F($sp)
    ctx->pc = 0x1649ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1649d0:
    // 0x1649d0: 0xb7a80148  sdr         $t0, 0x148($sp)
    ctx->pc = 0x1649d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1649d4:
    // 0x1649d4: 0xb3a20157  sdl         $v0, 0x157($sp)
    ctx->pc = 0x1649d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1649d8:
    // 0x1649d8: 0xb7a20150  sdr         $v0, 0x150($sp)
    ctx->pc = 0x1649d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1649dc:
    // 0x1649dc: 0xb3a3015f  sdl         $v1, 0x15F($sp)
    ctx->pc = 0x1649dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1649e0:
    // 0x1649e0: 0xb7a30158  sdr         $v1, 0x158($sp)
    ctx->pc = 0x1649e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1649e4:
    // 0x1649e4: 0xc092fa4  jal         func_24BE90
label_1649e8:
    if (ctx->pc == 0x1649E8u) {
        ctx->pc = 0x1649E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649E4u;
        // 0x1649e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1649ECu;
        goto label_1649ec;
    }
    ctx->pc = 0x1649E4u;
    SET_GPR_U32(ctx, 31, 0x1649ECu);
    ctx->pc = 0x1649E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649E4u;
    // 0x1649e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x1649E4u, 0x1649ECu)) {
        return;
    }
    ctx->pc = 0x1649ECu;
label_1649ec:
    // 0x1649ec: 0x6ba40157  ldl         $a0, 0x157($sp)
    ctx->pc = 0x1649ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1649f0:
    // 0x1649f0: 0x6fa40150  ldr         $a0, 0x150($sp)
    ctx->pc = 0x1649f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1649f4:
    // 0x1649f4: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x1649f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_1649f8:
    // 0x1649f8: 0xb2440007  sdl         $a0, 0x7($s2)
    ctx->pc = 0x1649f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1649fc:
    // 0x1649fc: 0xb6440000  sdr         $a0, 0x0($s2)
    ctx->pc = 0x1649fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_164a00:
    // 0x164a00: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x164a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
label_164a04:
    // 0x164a04: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x164a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_164a08:
    // 0x164a08: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x164a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_164a0c:
    // 0x164a0c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_164a10:
    if (ctx->pc == 0x164A10u) {
        ctx->pc = 0x164A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A0Cu;
        // 0x164a10: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A14u;
        goto label_164a14;
    }
    ctx->pc = 0x164A0Cu;
    {
        const bool branch_taken_0x164a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A0Cu;
        // 0x164a10: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a0c) {
            ctx->pc = 0x164940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164940;
        }
    }
    ctx->pc = 0x164A14u;
label_164a14:
    // 0x164a14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x164a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_164a18:
    // 0x164a18: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x164a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_164a1c:
    // 0x164a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164a20:
    // 0x164a20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_164a24:
    // 0x164a24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x164a24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_164a28:
    // 0x164a28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x164a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_164a2c:
    // 0x164a2c: 0xc056b84  jal         func_15AE10
label_164a30:
    if (ctx->pc == 0x164A30u) {
        ctx->pc = 0x164A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A2Cu;
        // 0x164a30: 0x3a2300b  movn        $a2, $sp, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A34u;
        goto label_164a34;
    }
    ctx->pc = 0x164A2Cu;
    SET_GPR_U32(ctx, 31, 0x164A34u);
    ctx->pc = 0x164A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A2Cu;
    // 0x164a30: 0x3a2300b  movn        $a2, $sp, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AE10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15AE10u, 0x164A2Cu, 0x164A34u)) {
        return;
    }
    ctx->pc = 0x164A34u;
label_164a34:
    // 0x164a34: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x164a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_164a38:
    // 0x164a38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_164a3c:
    if (ctx->pc == 0x164A3Cu) {
        ctx->pc = 0x164A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A38u;
        // 0x164a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A40u;
        goto label_164a40;
    }
    ctx->pc = 0x164A38u;
    {
        const bool branch_taken_0x164a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A38u;
        // 0x164a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a38) {
            ctx->pc = 0x164A44u;
            goto label_164a44;
        }
    }
    ctx->pc = 0x164A40u;
label_164a40:
    // 0x164a40: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x164a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_164a44:
    // 0x164a44: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x164a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_164a48:
    // 0x164a48: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
label_164a4c:
    if (ctx->pc == 0x164A4Cu) {
        ctx->pc = 0x164A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A48u;
        // 0x164a4c: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A50u;
        goto label_164a50;
    }
    ctx->pc = 0x164A48u;
    {
        const bool branch_taken_0x164a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a48) {
            ctx->pc = 0x164A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164A48u;
            // 0x164a4c: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164B38u;
            goto label_164b38;
        }
    }
    ctx->pc = 0x164A50u;
label_164a50:
    // 0x164a50: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x164a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_164a54:
    // 0x164a54: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_164a58:
    if (ctx->pc == 0x164A58u) {
        ctx->pc = 0x164A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A54u;
        // 0x164a58: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A5Cu;
        goto label_164a5c;
    }
    ctx->pc = 0x164A54u;
    {
        const bool branch_taken_0x164a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a54) {
            ctx->pc = 0x164A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164A54u;
            // 0x164a58: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164B38u;
            goto label_164b38;
        }
    }
    ctx->pc = 0x164A5Cu;
label_164a5c:
    // 0x164a5c: 0xc080d20  jal         func_203480
label_164a60:
    if (ctx->pc == 0x164A60u) {
        ctx->pc = 0x164A64u;
        goto label_164a64;
    }
    ctx->pc = 0x164A5Cu;
    SET_GPR_U32(ctx, 31, 0x164A64u);
    ctx->pc = 0x203480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203480u, 0x164A5Cu, 0x164A64u)) {
        return;
    }
    ctx->pc = 0x164A64u;
label_164a64:
    // 0x164a64: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_164a68:
    if (ctx->pc == 0x164A68u) {
        ctx->pc = 0x164A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A64u;
        // 0x164a68: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A6Cu;
        goto label_164a6c;
    }
    ctx->pc = 0x164A64u;
    {
        const bool branch_taken_0x164a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A64u;
        // 0x164a68: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a64) {
            ctx->pc = 0x164B34u;
            goto label_164b34;
        }
    }
    ctx->pc = 0x164A6Cu;
label_164a6c:
    // 0x164a6c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x164a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_164a70:
    // 0x164a70: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x164a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_164a74:
    // 0x164a74: 0xc09d64c  jal         func_275930
label_164a78:
    if (ctx->pc == 0x164A78u) {
        ctx->pc = 0x164A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A74u;
        // 0x164a78: 0xc4940004  lwc1        $f20, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A7Cu;
        goto label_164a7c;
    }
    ctx->pc = 0x164A74u;
    SET_GPR_U32(ctx, 31, 0x164A7Cu);
    ctx->pc = 0x164A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A74u;
    // 0x164a78: 0xc4940004  lwc1        $f20, 0x4($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x164A74u, 0x164A7Cu)) {
        return;
    }
    ctx->pc = 0x164A7Cu;
label_164a7c:
    // 0x164a7c: 0xc0942f2  jal         func_250BC8
label_164a80:
    if (ctx->pc == 0x164A80u) {
        ctx->pc = 0x164A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A7Cu;
        // 0x164a80: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A84u;
        goto label_164a84;
    }
    ctx->pc = 0x164A7Cu;
    SET_GPR_U32(ctx, 31, 0x164A84u);
    ctx->pc = 0x164A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A7Cu;
    // 0x164a80: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x164A7Cu, 0x164A84u)) {
        return;
    }
    ctx->pc = 0x164A84u;
label_164a84:
    // 0x164a84: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
label_164a88:
    if (ctx->pc == 0x164A88u) {
        ctx->pc = 0x164A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A84u;
        // 0x164a88: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A8Cu;
        goto label_164a8c;
    }
    ctx->pc = 0x164A84u;
    {
        const bool branch_taken_0x164a84 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A84u;
        // 0x164a88: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a84) {
            ctx->pc = 0x164A98u;
            goto label_164a98;
        }
    }
    ctx->pc = 0x164A8Cu;
label_164a8c:
    // 0x164a8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x164a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164a90:
    // 0x164a90: 0xc077b78  jal         func_1DEDE0
label_164a94:
    if (ctx->pc == 0x164A94u) {
        ctx->pc = 0x164A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A90u;
        // 0x164a94: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A98u;
        goto label_164a98;
    }
    ctx->pc = 0x164A90u;
    SET_GPR_U32(ctx, 31, 0x164A98u);
    ctx->pc = 0x164A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A90u;
    // 0x164a94: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DEDE0u, 0x164A90u, 0x164A98u)) {
        return;
    }
    ctx->pc = 0x164A98u;
label_164a98:
    // 0x164a98: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x164a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_164a9c:
    // 0x164a9c: 0x96250034  lhu         $a1, 0x34($s1)
    ctx->pc = 0x164a9cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
label_164aa0:
    // 0x164aa0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x164aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_164aa4:
    // 0x164aa4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x164aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_164aa8:
    // 0x164aa8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_164aac:
    if (ctx->pc == 0x164AACu) {
        ctx->pc = 0x164AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AA8u;
        // 0x164aac: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x164AB0u;
        goto label_164ab0;
    }
    ctx->pc = 0x164AA8u;
    {
        const bool branch_taken_0x164aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AA8u;
        // 0x164aac: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164aa8) {
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164AB0u;
label_164ab0:
    // 0x164ab0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x164ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_164ab4:
    // 0x164ab4: 0x0  nop
    ctx->pc = 0x164ab4u;
    // NOP
label_164ab8:
    // 0x164ab8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_164abc:
    if (ctx->pc == 0x164ABCu) {
        ctx->pc = 0x164ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AB8u;
        // 0x164abc: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164AC0u;
        goto label_164ac0;
    }
    ctx->pc = 0x164AB8u;
    {
        const bool branch_taken_0x164ab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AB8u;
        // 0x164abc: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ab8) {
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164AC0u;
label_164ac0:
    // 0x164ac0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_164ac4:
    if (ctx->pc == 0x164AC4u) {
        ctx->pc = 0x164AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AC0u;
        // 0x164ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164AC8u;
        goto label_164ac8;
    }
    ctx->pc = 0x164AC0u;
    {
        const bool branch_taken_0x164ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AC0u;
        // 0x164ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ac0) {
            ctx->pc = 0x164B0Cu;
            goto label_164b0c;
        }
    }
    ctx->pc = 0x164AC8u;
label_164ac8:
    // 0x164ac8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x164ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_164acc:
    // 0x164acc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x164accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_164ad0:
    // 0x164ad0: 0xc076ec8  jal         func_1DBB20
label_164ad4:
    if (ctx->pc == 0x164AD4u) {
        ctx->pc = 0x164AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AD0u;
        // 0x164ad4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164AD8u;
        goto label_164ad8;
    }
    ctx->pc = 0x164AD0u;
    SET_GPR_U32(ctx, 31, 0x164AD8u);
    ctx->pc = 0x164AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AD0u;
    // 0x164ad4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBB20u, 0x164AD0u, 0x164AD8u)) {
        return;
    }
    ctx->pc = 0x164AD8u;
label_164ad8:
    // 0x164ad8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x164ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_164adc:
    // 0x164adc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x164adcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_164ae0:
    // 0x164ae0: 0xc09d926  jal         func_276498
label_164ae4:
    if (ctx->pc == 0x164AE4u) {
        ctx->pc = 0x164AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AE0u;
        // 0x164ae4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164AE8u;
        goto label_164ae8;
    }
    ctx->pc = 0x164AE0u;
    SET_GPR_U32(ctx, 31, 0x164AE8u);
    ctx->pc = 0x164AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AE0u;
    // 0x164ae4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x164AE0u, 0x164AE8u)) {
        return;
    }
    ctx->pc = 0x164AE8u;
label_164ae8:
    // 0x164ae8: 0xc0942f2  jal         func_250BC8
label_164aec:
    if (ctx->pc == 0x164AECu) {
        ctx->pc = 0x164AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AE8u;
        // 0x164aec: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164AF0u;
        goto label_164af0;
    }
    ctx->pc = 0x164AE8u;
    SET_GPR_U32(ctx, 31, 0x164AF0u);
    ctx->pc = 0x164AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AE8u;
    // 0x164aec: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x164AE8u, 0x164AF0u)) {
        return;
    }
    ctx->pc = 0x164AF0u;
label_164af0:
    // 0x164af0: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
label_164af4:
    if (ctx->pc == 0x164AF4u) {
        ctx->pc = 0x164AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AF0u;
        // 0x164af4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164AF8u;
        goto label_164af8;
    }
    ctx->pc = 0x164AF0u;
    {
        const bool branch_taken_0x164af0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x164AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AF0u;
        // 0x164af4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164af0) {
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164AF8u;
label_164af8:
    // 0x164af8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x164af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_164afc:
    // 0x164afc: 0xc077b78  jal         func_1DEDE0
label_164b00:
    if (ctx->pc == 0x164B00u) {
        ctx->pc = 0x164B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AFCu;
        // 0x164b00: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B04u;
        goto label_164b04;
    }
    ctx->pc = 0x164AFCu;
    SET_GPR_U32(ctx, 31, 0x164B04u);
    ctx->pc = 0x164B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164AFCu;
    // 0x164b00: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DEDE0u, 0x164AFCu, 0x164B04u)) {
        return;
    }
    ctx->pc = 0x164B04u;
label_164b04:
    // 0x164b04: 0x10000007  b           . + 4 + (0x7 << 2)
label_164b08:
    if (ctx->pc == 0x164B08u) {
        ctx->pc = 0x164B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B04u;
        // 0x164b08: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B0Cu;
        goto label_164b0c;
    }
    ctx->pc = 0x164B04u;
    {
        const bool branch_taken_0x164b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B04u;
        // 0x164b08: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b04) {
            ctx->pc = 0x164B24u;
            goto label_164b24;
        }
    }
    ctx->pc = 0x164B0Cu;
label_164b0c:
    // 0x164b0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x164b0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_164b10:
    // 0x164b10: 0xc09d926  jal         func_276498
label_164b14:
    if (ctx->pc == 0x164B14u) {
        ctx->pc = 0x164B18u;
        goto label_164b18;
    }
    ctx->pc = 0x164B10u;
    SET_GPR_U32(ctx, 31, 0x164B18u);
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x164B10u, 0x164B18u)) {
        return;
    }
    ctx->pc = 0x164B18u;
label_164b18:
    // 0x164b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164b1c:
    // 0x164b1c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x164b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_164b20:
    // 0x164b20: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x164b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_164b24:
    // 0x164b24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_164b28:
    if (ctx->pc == 0x164B28u) {
        ctx->pc = 0x164B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B24u;
        // 0x164b28: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B2Cu;
        goto label_164b2c;
    }
    ctx->pc = 0x164B24u;
    {
        const bool branch_taken_0x164b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B24u;
        // 0x164b28: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b24) {
            ctx->pc = 0x164B38u;
            goto label_164b38;
        }
    }
    ctx->pc = 0x164B2Cu;
label_164b2c:
    // 0x164b2c: 0xc041fd6  jal         func_107F58
label_164b30:
    if (ctx->pc == 0x164B30u) {
        ctx->pc = 0x164B34u;
        goto label_164b34;
    }
    ctx->pc = 0x164B2Cu;
    SET_GPR_U32(ctx, 31, 0x164B34u);
    ctx->pc = 0x107F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107F58u, 0x164B2Cu, 0x164B34u)) {
        return;
    }
    ctx->pc = 0x164B34u;
label_164b34:
    // 0x164b34: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x164b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_164b38:
    // 0x164b38: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x164b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_164b3c:
    // 0x164b3c: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x164b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_164b40:
    // 0x164b40: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x164b40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_164b44:
    // 0x164b44: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x164b44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_164b48:
    // 0x164b48: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x164b48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_164b4c:
    // 0x164b4c: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x164b4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_164b50:
    // 0x164b50: 0x7bb70190  lq          $s7, 0x190($sp)
    ctx->pc = 0x164b50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_164b54:
    // 0x164b54: 0x7bbe0180  lq          $fp, 0x180($sp)
    ctx->pc = 0x164b54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_164b58:
    // 0x164b58: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x164b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_164b5c:
    // 0x164b5c: 0xc7b50218  lwc1        $f21, 0x218($sp)
    ctx->pc = 0x164b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_164b60:
    // 0x164b60: 0xc7b40210  lwc1        $f20, 0x210($sp)
    ctx->pc = 0x164b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_164b64:
    // 0x164b64: 0x3e00008  jr          $ra
label_164b68:
    if (ctx->pc == 0x164B68u) {
        ctx->pc = 0x164B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B64u;
        // 0x164b68: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B6Cu;
        goto label_164b6c;
    }
    ctx->pc = 0x164B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B64u;
        // 0x164b68: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164B6Cu;
label_164b6c:
    // 0x164b6c: 0x0  nop
    ctx->pc = 0x164b6cu;
    // NOP
    ctx->pc = 0x164b70u;
}
