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

// Function: sub_00250738
// Address: 0x250738 - 0x250bc8
void sub_00250738_0x250738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250738_0x250738");
#endif

    switch (ctx->pc) {
        case 0x250738u: goto label_250738;
        case 0x25073cu: goto label_25073c;
        case 0x250740u: goto label_250740;
        case 0x250744u: goto label_250744;
        case 0x250748u: goto label_250748;
        case 0x25074cu: goto label_25074c;
        case 0x250750u: goto label_250750;
        case 0x250754u: goto label_250754;
        case 0x250758u: goto label_250758;
        case 0x25075cu: goto label_25075c;
        case 0x250760u: goto label_250760;
        case 0x250764u: goto label_250764;
        case 0x250768u: goto label_250768;
        case 0x25076cu: goto label_25076c;
        case 0x250770u: goto label_250770;
        case 0x250774u: goto label_250774;
        case 0x250778u: goto label_250778;
        case 0x25077cu: goto label_25077c;
        case 0x250780u: goto label_250780;
        case 0x250784u: goto label_250784;
        case 0x250788u: goto label_250788;
        case 0x25078cu: goto label_25078c;
        case 0x250790u: goto label_250790;
        case 0x250794u: goto label_250794;
        case 0x250798u: goto label_250798;
        case 0x25079cu: goto label_25079c;
        case 0x2507a0u: goto label_2507a0;
        case 0x2507a4u: goto label_2507a4;
        case 0x2507a8u: goto label_2507a8;
        case 0x2507acu: goto label_2507ac;
        case 0x2507b0u: goto label_2507b0;
        case 0x2507b4u: goto label_2507b4;
        case 0x2507b8u: goto label_2507b8;
        case 0x2507bcu: goto label_2507bc;
        case 0x2507c0u: goto label_2507c0;
        case 0x2507c4u: goto label_2507c4;
        case 0x2507c8u: goto label_2507c8;
        case 0x2507ccu: goto label_2507cc;
        case 0x2507d0u: goto label_2507d0;
        case 0x2507d4u: goto label_2507d4;
        case 0x2507d8u: goto label_2507d8;
        case 0x2507dcu: goto label_2507dc;
        case 0x2507e0u: goto label_2507e0;
        case 0x2507e4u: goto label_2507e4;
        case 0x2507e8u: goto label_2507e8;
        case 0x2507ecu: goto label_2507ec;
        case 0x2507f0u: goto label_2507f0;
        case 0x2507f4u: goto label_2507f4;
        case 0x2507f8u: goto label_2507f8;
        case 0x2507fcu: goto label_2507fc;
        case 0x250800u: goto label_250800;
        case 0x250804u: goto label_250804;
        case 0x250808u: goto label_250808;
        case 0x25080cu: goto label_25080c;
        case 0x250810u: goto label_250810;
        case 0x250814u: goto label_250814;
        case 0x250818u: goto label_250818;
        case 0x25081cu: goto label_25081c;
        case 0x250820u: goto label_250820;
        case 0x250824u: goto label_250824;
        case 0x250828u: goto label_250828;
        case 0x25082cu: goto label_25082c;
        case 0x250830u: goto label_250830;
        case 0x250834u: goto label_250834;
        case 0x250838u: goto label_250838;
        case 0x25083cu: goto label_25083c;
        case 0x250840u: goto label_250840;
        case 0x250844u: goto label_250844;
        case 0x250848u: goto label_250848;
        case 0x25084cu: goto label_25084c;
        case 0x250850u: goto label_250850;
        case 0x250854u: goto label_250854;
        case 0x250858u: goto label_250858;
        case 0x25085cu: goto label_25085c;
        case 0x250860u: goto label_250860;
        case 0x250864u: goto label_250864;
        case 0x250868u: goto label_250868;
        case 0x25086cu: goto label_25086c;
        case 0x250870u: goto label_250870;
        case 0x250874u: goto label_250874;
        case 0x250878u: goto label_250878;
        case 0x25087cu: goto label_25087c;
        case 0x250880u: goto label_250880;
        case 0x250884u: goto label_250884;
        case 0x250888u: goto label_250888;
        case 0x25088cu: goto label_25088c;
        case 0x250890u: goto label_250890;
        case 0x250894u: goto label_250894;
        case 0x250898u: goto label_250898;
        case 0x25089cu: goto label_25089c;
        case 0x2508a0u: goto label_2508a0;
        case 0x2508a4u: goto label_2508a4;
        case 0x2508a8u: goto label_2508a8;
        case 0x2508acu: goto label_2508ac;
        case 0x2508b0u: goto label_2508b0;
        case 0x2508b4u: goto label_2508b4;
        case 0x2508b8u: goto label_2508b8;
        case 0x2508bcu: goto label_2508bc;
        case 0x2508c0u: goto label_2508c0;
        case 0x2508c4u: goto label_2508c4;
        case 0x2508c8u: goto label_2508c8;
        case 0x2508ccu: goto label_2508cc;
        case 0x2508d0u: goto label_2508d0;
        case 0x2508d4u: goto label_2508d4;
        case 0x2508d8u: goto label_2508d8;
        case 0x2508dcu: goto label_2508dc;
        case 0x2508e0u: goto label_2508e0;
        case 0x2508e4u: goto label_2508e4;
        case 0x2508e8u: goto label_2508e8;
        case 0x2508ecu: goto label_2508ec;
        case 0x2508f0u: goto label_2508f0;
        case 0x2508f4u: goto label_2508f4;
        case 0x2508f8u: goto label_2508f8;
        case 0x2508fcu: goto label_2508fc;
        case 0x250900u: goto label_250900;
        case 0x250904u: goto label_250904;
        case 0x250908u: goto label_250908;
        case 0x25090cu: goto label_25090c;
        case 0x250910u: goto label_250910;
        case 0x250914u: goto label_250914;
        case 0x250918u: goto label_250918;
        case 0x25091cu: goto label_25091c;
        case 0x250920u: goto label_250920;
        case 0x250924u: goto label_250924;
        case 0x250928u: goto label_250928;
        case 0x25092cu: goto label_25092c;
        case 0x250930u: goto label_250930;
        case 0x250934u: goto label_250934;
        case 0x250938u: goto label_250938;
        case 0x25093cu: goto label_25093c;
        case 0x250940u: goto label_250940;
        case 0x250944u: goto label_250944;
        case 0x250948u: goto label_250948;
        case 0x25094cu: goto label_25094c;
        case 0x250950u: goto label_250950;
        case 0x250954u: goto label_250954;
        case 0x250958u: goto label_250958;
        case 0x25095cu: goto label_25095c;
        case 0x250960u: goto label_250960;
        case 0x250964u: goto label_250964;
        case 0x250968u: goto label_250968;
        case 0x25096cu: goto label_25096c;
        case 0x250970u: goto label_250970;
        case 0x250974u: goto label_250974;
        case 0x250978u: goto label_250978;
        case 0x25097cu: goto label_25097c;
        case 0x250980u: goto label_250980;
        case 0x250984u: goto label_250984;
        case 0x250988u: goto label_250988;
        case 0x25098cu: goto label_25098c;
        case 0x250990u: goto label_250990;
        case 0x250994u: goto label_250994;
        case 0x250998u: goto label_250998;
        case 0x25099cu: goto label_25099c;
        case 0x2509a0u: goto label_2509a0;
        case 0x2509a4u: goto label_2509a4;
        case 0x2509a8u: goto label_2509a8;
        case 0x2509acu: goto label_2509ac;
        case 0x2509b0u: goto label_2509b0;
        case 0x2509b4u: goto label_2509b4;
        case 0x2509b8u: goto label_2509b8;
        case 0x2509bcu: goto label_2509bc;
        case 0x2509c0u: goto label_2509c0;
        case 0x2509c4u: goto label_2509c4;
        case 0x2509c8u: goto label_2509c8;
        case 0x2509ccu: goto label_2509cc;
        case 0x2509d0u: goto label_2509d0;
        case 0x2509d4u: goto label_2509d4;
        case 0x2509d8u: goto label_2509d8;
        case 0x2509dcu: goto label_2509dc;
        case 0x2509e0u: goto label_2509e0;
        case 0x2509e4u: goto label_2509e4;
        case 0x2509e8u: goto label_2509e8;
        case 0x2509ecu: goto label_2509ec;
        case 0x2509f0u: goto label_2509f0;
        case 0x2509f4u: goto label_2509f4;
        case 0x2509f8u: goto label_2509f8;
        case 0x2509fcu: goto label_2509fc;
        case 0x250a00u: goto label_250a00;
        case 0x250a04u: goto label_250a04;
        case 0x250a08u: goto label_250a08;
        case 0x250a0cu: goto label_250a0c;
        case 0x250a10u: goto label_250a10;
        case 0x250a14u: goto label_250a14;
        case 0x250a18u: goto label_250a18;
        case 0x250a1cu: goto label_250a1c;
        case 0x250a20u: goto label_250a20;
        case 0x250a24u: goto label_250a24;
        case 0x250a28u: goto label_250a28;
        case 0x250a2cu: goto label_250a2c;
        case 0x250a30u: goto label_250a30;
        case 0x250a34u: goto label_250a34;
        case 0x250a38u: goto label_250a38;
        case 0x250a3cu: goto label_250a3c;
        case 0x250a40u: goto label_250a40;
        case 0x250a44u: goto label_250a44;
        case 0x250a48u: goto label_250a48;
        case 0x250a4cu: goto label_250a4c;
        case 0x250a50u: goto label_250a50;
        case 0x250a54u: goto label_250a54;
        case 0x250a58u: goto label_250a58;
        case 0x250a5cu: goto label_250a5c;
        case 0x250a60u: goto label_250a60;
        case 0x250a64u: goto label_250a64;
        case 0x250a68u: goto label_250a68;
        case 0x250a6cu: goto label_250a6c;
        case 0x250a70u: goto label_250a70;
        case 0x250a74u: goto label_250a74;
        case 0x250a78u: goto label_250a78;
        case 0x250a7cu: goto label_250a7c;
        case 0x250a80u: goto label_250a80;
        case 0x250a84u: goto label_250a84;
        case 0x250a88u: goto label_250a88;
        case 0x250a8cu: goto label_250a8c;
        case 0x250a90u: goto label_250a90;
        case 0x250a94u: goto label_250a94;
        case 0x250a98u: goto label_250a98;
        case 0x250a9cu: goto label_250a9c;
        case 0x250aa0u: goto label_250aa0;
        case 0x250aa4u: goto label_250aa4;
        case 0x250aa8u: goto label_250aa8;
        case 0x250aacu: goto label_250aac;
        case 0x250ab0u: goto label_250ab0;
        case 0x250ab4u: goto label_250ab4;
        case 0x250ab8u: goto label_250ab8;
        case 0x250abcu: goto label_250abc;
        case 0x250ac0u: goto label_250ac0;
        case 0x250ac4u: goto label_250ac4;
        case 0x250ac8u: goto label_250ac8;
        case 0x250accu: goto label_250acc;
        case 0x250ad0u: goto label_250ad0;
        case 0x250ad4u: goto label_250ad4;
        case 0x250ad8u: goto label_250ad8;
        case 0x250adcu: goto label_250adc;
        case 0x250ae0u: goto label_250ae0;
        case 0x250ae4u: goto label_250ae4;
        case 0x250ae8u: goto label_250ae8;
        case 0x250aecu: goto label_250aec;
        case 0x250af0u: goto label_250af0;
        case 0x250af4u: goto label_250af4;
        case 0x250af8u: goto label_250af8;
        case 0x250afcu: goto label_250afc;
        case 0x250b00u: goto label_250b00;
        case 0x250b04u: goto label_250b04;
        case 0x250b08u: goto label_250b08;
        case 0x250b0cu: goto label_250b0c;
        case 0x250b10u: goto label_250b10;
        case 0x250b14u: goto label_250b14;
        case 0x250b18u: goto label_250b18;
        case 0x250b1cu: goto label_250b1c;
        case 0x250b20u: goto label_250b20;
        case 0x250b24u: goto label_250b24;
        case 0x250b28u: goto label_250b28;
        case 0x250b2cu: goto label_250b2c;
        case 0x250b30u: goto label_250b30;
        case 0x250b34u: goto label_250b34;
        case 0x250b38u: goto label_250b38;
        case 0x250b3cu: goto label_250b3c;
        case 0x250b40u: goto label_250b40;
        case 0x250b44u: goto label_250b44;
        case 0x250b48u: goto label_250b48;
        case 0x250b4cu: goto label_250b4c;
        case 0x250b50u: goto label_250b50;
        case 0x250b54u: goto label_250b54;
        case 0x250b58u: goto label_250b58;
        case 0x250b5cu: goto label_250b5c;
        case 0x250b60u: goto label_250b60;
        case 0x250b64u: goto label_250b64;
        case 0x250b68u: goto label_250b68;
        case 0x250b6cu: goto label_250b6c;
        case 0x250b70u: goto label_250b70;
        case 0x250b74u: goto label_250b74;
        case 0x250b78u: goto label_250b78;
        case 0x250b7cu: goto label_250b7c;
        case 0x250b80u: goto label_250b80;
        case 0x250b84u: goto label_250b84;
        case 0x250b88u: goto label_250b88;
        case 0x250b8cu: goto label_250b8c;
        case 0x250b90u: goto label_250b90;
        case 0x250b94u: goto label_250b94;
        case 0x250b98u: goto label_250b98;
        case 0x250b9cu: goto label_250b9c;
        case 0x250ba0u: goto label_250ba0;
        case 0x250ba4u: goto label_250ba4;
        case 0x250ba8u: goto label_250ba8;
        case 0x250bacu: goto label_250bac;
        case 0x250bb0u: goto label_250bb0;
        case 0x250bb4u: goto label_250bb4;
        case 0x250bb8u: goto label_250bb8;
        case 0x250bbcu: goto label_250bbc;
        case 0x250bc0u: goto label_250bc0;
        case 0x250bc4u: goto label_250bc4;
        default: break;
    }

    ctx->pc = 0x250738u;

label_250738:
    // 0x250738: 0x27bdf650  addiu       $sp, $sp, -0x9B0
    ctx->pc = 0x250738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964816));
label_25073c:
    // 0x25073c: 0x7fb40950  sq          $s4, 0x950($sp)
    ctx->pc = 0x25073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 20));
label_250740:
    // 0x250740: 0x7fb00990  sq          $s0, 0x990($sp)
    ctx->pc = 0x250740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2448), GPR_VEC(ctx, 16));
label_250744:
    // 0x250744: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x250744u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_250748:
    // 0x250748: 0x7fb10980  sq          $s1, 0x980($sp)
    ctx->pc = 0x250748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2432), GPR_VEC(ctx, 17));
label_25074c:
    // 0x25074c: 0x7fb20970  sq          $s2, 0x970($sp)
    ctx->pc = 0x25074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2416), GPR_VEC(ctx, 18));
label_250750:
    // 0x250750: 0x7fb30960  sq          $s3, 0x960($sp)
    ctx->pc = 0x250750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 19));
label_250754:
    // 0x250754: 0x7fb50940  sq          $s5, 0x940($sp)
    ctx->pc = 0x250754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 21));
label_250758:
    // 0x250758: 0x7fb60930  sq          $s6, 0x930($sp)
    ctx->pc = 0x250758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 22));
label_25075c:
    // 0x25075c: 0x7fb70920  sq          $s7, 0x920($sp)
    ctx->pc = 0x25075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 23));
label_250760:
    // 0x250760: 0x7fbe0910  sq          $fp, 0x910($sp)
    ctx->pc = 0x250760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 30));
label_250764:
    // 0x250764: 0xffbf0900  sd          $ra, 0x900($sp)
    ctx->pc = 0x250764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2304), GPR_U64(ctx, 31));
label_250768:
    // 0x250768: 0xe7b409a0  swc1        $f20, 0x9A0($sp)
    ctx->pc = 0x250768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2464), bits); }
label_25076c:
    // 0x25076c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x25076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_250770:
    // 0x250770: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x250770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_250774:
    // 0x250774: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_250778:
    if (ctx->pc == 0x250778u) {
        ctx->pc = 0x250778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250774u;
        // 0x250778: 0x8e9e0000  lw          $fp, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25077Cu;
        goto label_25077c;
    }
    ctx->pc = 0x250774u;
    {
        const bool branch_taken_0x250774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x250778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250774u;
        // 0x250778: 0x8e9e0000  lw          $fp, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250774) {
            ctx->pc = 0x250830u;
            goto label_250830;
        }
    }
    ctx->pc = 0x25077Cu;
label_25077c:
    // 0x25077c: 0xc089850  jal         func_226140
label_250780:
    if (ctx->pc == 0x250780u) {
        ctx->pc = 0x250780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25077Cu;
        // 0x250780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250784u;
        goto label_250784;
    }
    ctx->pc = 0x25077Cu;
    SET_GPR_U32(ctx, 31, 0x250784u);
    ctx->pc = 0x250780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25077Cu;
    // 0x250780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226140u, 0x25077Cu, 0x250784u)) {
        return;
    }
    ctx->pc = 0x250784u;
label_250784:
    // 0x250784: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_250788:
    if (ctx->pc == 0x250788u) {
        ctx->pc = 0x250788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250784u;
        // 0x250788: 0x7a030010  lq          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25078Cu;
        goto label_25078c;
    }
    ctx->pc = 0x250784u;
    {
        const bool branch_taken_0x250784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250784) {
            ctx->pc = 0x250788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250784u;
            // 0x250788: 0x7a030010  lq          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2507C0u;
            goto label_2507c0;
        }
    }
    ctx->pc = 0x25078Cu;
label_25078c:
    // 0x25078c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_250790:
    // 0x250790: 0xc08994a  jal         func_226528
label_250794:
    if (ctx->pc == 0x250794u) {
        ctx->pc = 0x250794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250790u;
        // 0x250794: 0x33d52000  andi        $s5, $fp, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250798u;
        goto label_250798;
    }
    ctx->pc = 0x250790u;
    SET_GPR_U32(ctx, 31, 0x250798u);
    ctx->pc = 0x250794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250790u;
    // 0x250794: 0x33d52000  andi        $s5, $fp, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x250790u, 0x250798u)) {
        return;
    }
    ctx->pc = 0x250798u;
label_250798:
    // 0x250798: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x250798u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25079c:
    // 0x25079c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x25079cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2507a0:
    // 0x2507a0: 0x7fa30800  sq          $v1, 0x800($sp)
    ctx->pc = 0x2507a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 3));
label_2507a4:
    // 0x2507a4: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x2507a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2507a8:
    // 0x2507a8: 0x7fa40810  sq          $a0, 0x810($sp)
    ctx->pc = 0x2507a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 4));
label_2507ac:
    // 0x2507ac: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x2507acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2507b0:
    // 0x2507b0: 0x7fa30820  sq          $v1, 0x820($sp)
    ctx->pc = 0x2507b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 3));
label_2507b4:
    // 0x2507b4: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x2507b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2507b8:
    // 0x2507b8: 0x10000033  b           . + 4 + (0x33 << 2)
label_2507bc:
    if (ctx->pc == 0x2507BCu) {
        ctx->pc = 0x2507BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507B8u;
        // 0x2507bc: 0x7fa40830  sq          $a0, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2507C0u;
        goto label_2507c0;
    }
    ctx->pc = 0x2507B8u;
    {
        const bool branch_taken_0x2507b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2507BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507B8u;
        // 0x2507bc: 0x7fa40830  sq          $a0, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2507b8) {
            ctx->pc = 0x250888u;
            goto label_250888;
        }
    }
    ctx->pc = 0x2507C0u;
label_2507c0:
    // 0x2507c0: 0x33d52000  andi        $s5, $fp, 0x2000
    ctx->pc = 0x2507c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
label_2507c4:
    // 0x2507c4: 0x7fa30800  sq          $v1, 0x800($sp)
    ctx->pc = 0x2507c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 3));
label_2507c8:
    // 0x2507c8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x2507c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_2507cc:
    // 0x2507cc: 0x7fa20810  sq          $v0, 0x810($sp)
    ctx->pc = 0x2507ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 2));
label_2507d0:
    // 0x2507d0: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x2507d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_2507d4:
    // 0x2507d4: 0x7fa30820  sq          $v1, 0x820($sp)
    ctx->pc = 0x2507d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 3));
label_2507d8:
    // 0x2507d8: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x2507d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_2507dc:
    // 0x2507dc: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x2507dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_2507e0:
    // 0x2507e0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2507e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2507e4:
    // 0x2507e4: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
label_2507e8:
    if (ctx->pc == 0x2507E8u) {
        ctx->pc = 0x2507E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507E4u;
        // 0x2507e8: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2507ECu;
        goto label_2507ec;
    }
    ctx->pc = 0x2507E4u;
    {
        const bool branch_taken_0x2507e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2507E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507E4u;
        // 0x2507e8: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2507e4) {
            ctx->pc = 0x250888u;
            goto label_250888;
        }
    }
    ctx->pc = 0x2507ECu;
label_2507ec:
    // 0x2507ec: 0x7ba80800  lq          $t0, 0x800($sp)
    ctx->pc = 0x2507ecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
label_2507f0:
    // 0x2507f0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2507f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2507f4:
    // 0x2507f4: 0x7ba70810  lq          $a3, 0x810($sp)
    ctx->pc = 0x2507f4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 2064)));
label_2507f8:
    // 0x2507f8: 0x27a40800  addiu       $a0, $sp, 0x800
    ctx->pc = 0x2507f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
label_2507fc:
    // 0x2507fc: 0x7ba30820  lq          $v1, 0x820($sp)
    ctx->pc = 0x2507fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2080)));
label_250800:
    // 0x250800: 0x27a50840  addiu       $a1, $sp, 0x840
    ctx->pc = 0x250800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_250804:
    // 0x250804: 0x7ba20830  lq          $v0, 0x830($sp)
    ctx->pc = 0x250804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
label_250808:
    // 0x250808: 0x7fa80840  sq          $t0, 0x840($sp)
    ctx->pc = 0x250808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 8));
label_25080c:
    // 0x25080c: 0x7fa70850  sq          $a3, 0x850($sp)
    ctx->pc = 0x25080cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 7));
label_250810:
    // 0x250810: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x250810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_250814:
    // 0x250814: 0xc092d9c  jal         func_24B670
label_250818:
    if (ctx->pc == 0x250818u) {
        ctx->pc = 0x250818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250814u;
        // 0x250818: 0x7fa20870  sq          $v0, 0x870($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25081Cu;
        goto label_25081c;
    }
    ctx->pc = 0x250814u;
    SET_GPR_U32(ctx, 31, 0x25081Cu);
    ctx->pc = 0x250818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250814u;
    // 0x250818: 0x7fa20870  sq          $v0, 0x870($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x250814u, 0x25081Cu)) {
        return;
    }
    ctx->pc = 0x25081Cu;
label_25081c:
    // 0x25081c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x25081cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_250820:
    // 0x250820: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_250824:
    if (ctx->pc == 0x250824u) {
        ctx->pc = 0x250824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250820u;
        // 0x250824: 0x7ba80800  lq          $t0, 0x800($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250828u;
        goto label_250828;
    }
    ctx->pc = 0x250820u;
    {
        const bool branch_taken_0x250820 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x250824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250820u;
        // 0x250824: 0x7ba80800  lq          $t0, 0x800($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250820) {
            ctx->pc = 0x2507F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2507f0;
        }
    }
    ctx->pc = 0x250828u;
label_250828:
    // 0x250828: 0x10000017  b           . + 4 + (0x17 << 2)
label_25082c:
    if (ctx->pc == 0x25082Cu) {
        ctx->pc = 0x250830u;
        goto label_250830;
    }
    ctx->pc = 0x250828u;
    {
        const bool branch_taken_0x250828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250828) {
            ctx->pc = 0x250888u;
            goto label_250888;
        }
    }
    ctx->pc = 0x250830u;
label_250830:
    // 0x250830: 0x8fa3080c  lw          $v1, 0x80C($sp)
    ctx->pc = 0x250830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2060)));
label_250834:
    // 0x250834: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x250834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_250838:
    // 0x250838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25083c:
    // 0x25083c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x25083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_250840:
    // 0x250840: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_250844:
    // 0x250844: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x250844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_250848:
    // 0x250848: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x250848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_25084c:
    // 0x25084c: 0xe7a00830  swc1        $f0, 0x830($sp)
    ctx->pc = 0x25084cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2096), bits); }
label_250850:
    // 0x250850: 0x33d52000  andi        $s5, $fp, 0x2000
    ctx->pc = 0x250850u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
label_250854:
    // 0x250854: 0xe7a10800  swc1        $f1, 0x800($sp)
    ctx->pc = 0x250854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2048), bits); }
label_250858:
    // 0x250858: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x250858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_25085c:
    // 0x25085c: 0xafa3080c  sw          $v1, 0x80C($sp)
    ctx->pc = 0x25085cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2060), GPR_U32(ctx, 3));
label_250860:
    // 0x250860: 0xe7a10828  swc1        $f1, 0x828($sp)
    ctx->pc = 0x250860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2088), bits); }
label_250864:
    // 0x250864: 0xe7a10814  swc1        $f1, 0x814($sp)
    ctx->pc = 0x250864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2068), bits); }
label_250868:
    // 0x250868: 0xe7a00810  swc1        $f0, 0x810($sp)
    ctx->pc = 0x250868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2064), bits); }
label_25086c:
    // 0x25086c: 0xe7a00808  swc1        $f0, 0x808($sp)
    ctx->pc = 0x25086cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2056), bits); }
label_250870:
    // 0x250870: 0xe7a00804  swc1        $f0, 0x804($sp)
    ctx->pc = 0x250870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2052), bits); }
label_250874:
    // 0x250874: 0xe7a00824  swc1        $f0, 0x824($sp)
    ctx->pc = 0x250874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2084), bits); }
label_250878:
    // 0x250878: 0xe7a00820  swc1        $f0, 0x820($sp)
    ctx->pc = 0x250878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2080), bits); }
label_25087c:
    // 0x25087c: 0xe7a00818  swc1        $f0, 0x818($sp)
    ctx->pc = 0x25087cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2072), bits); }
label_250880:
    // 0x250880: 0xe7a00838  swc1        $f0, 0x838($sp)
    ctx->pc = 0x250880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2104), bits); }
label_250884:
    // 0x250884: 0xe7a00834  swc1        $f0, 0x834($sp)
    ctx->pc = 0x250884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2100), bits); }
label_250888:
    // 0x250888: 0x52a0001d  beql        $s5, $zero, . + 4 + (0x1D << 2)
label_25088c:
    if (ctx->pc == 0x25088Cu) {
        ctx->pc = 0x25088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250888u;
        // 0x25088c: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250890u;
        goto label_250890;
    }
    ctx->pc = 0x250888u;
    {
        const bool branch_taken_0x250888 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x250888) {
            ctx->pc = 0x25088Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250888u;
            // 0x25088c: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250900u;
            goto label_250900;
        }
    }
    ctx->pc = 0x250890u;
label_250890:
    // 0x250890: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x250890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_250894:
    // 0x250894: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x250894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_250898:
    // 0x250898: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x250898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_25089c:
    // 0x25089c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x25089cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2508a0:
    // 0x2508a0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_2508a4:
    if (ctx->pc == 0x2508A4u) {
        ctx->pc = 0x2508A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508A0u;
        // 0x2508a4: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2508A8u;
        goto label_2508a8;
    }
    ctx->pc = 0x2508A0u;
    {
        const bool branch_taken_0x2508a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2508a0) {
            ctx->pc = 0x2508A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2508A0u;
            // 0x2508a4: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250900u;
            goto label_250900;
        }
    }
    ctx->pc = 0x2508A8u;
label_2508a8:
    // 0x2508a8: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x2508a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_2508ac:
    // 0x2508ac: 0x8ca31084  lw          $v1, 0x1084($a1)
    ctx->pc = 0x2508acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4228)));
label_2508b0:
    // 0x2508b0: 0x24a61084  addiu       $a2, $a1, 0x1084
    ctx->pc = 0x2508b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4228));
label_2508b4:
    // 0x2508b4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2508b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2508b8:
    // 0x2508b8: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2508b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2508bc:
    // 0x2508bc: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x2508bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_2508c0:
    // 0x2508c0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2508c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_2508c4:
    // 0x2508c4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x2508c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2508c8:
    // 0x2508c8: 0x8ca61084  lw          $a2, 0x1084($a1)
    ctx->pc = 0x2508c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4228)));
label_2508cc:
    // 0x2508cc: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x2508ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2508d0:
    // 0x2508d0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2508d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2508d4:
    // 0x2508d4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2508d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2508d8:
    // 0x2508d8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2508d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2508dc:
    // 0x2508dc: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x2508dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_2508e0:
    // 0x2508e0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2508e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2508e4:
    // 0x2508e4: 0xaca21084  sw          $v0, 0x1084($a1)
    ctx->pc = 0x2508e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4228), GPR_U32(ctx, 2));
label_2508e8:
    // 0x2508e8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2508e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2508ec:
    // 0x2508ec: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x2508ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_2508f0:
    // 0x2508f0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x2508f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_2508f4:
    // 0x2508f4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2508f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2508f8:
    // 0x2508f8: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x2508f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_2508fc:
    // 0x2508fc: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2508fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_250900:
    // 0x250900: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x250900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_250904:
    // 0x250904: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x250904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_250908:
    // 0x250908: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x250908u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25090c:
    // 0x25090c: 0x8c57003c  lw          $s7, 0x3C($v0)
    ctx->pc = 0x25090cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_250910:
    // 0x250910: 0x2451004c  addiu       $s1, $v0, 0x4C
    ctx->pc = 0x250910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_250914:
    // 0x250914: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x250914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_250918:
    // 0x250918: 0xafa208f0  sw          $v0, 0x8F0($sp)
    ctx->pc = 0x250918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2288), GPR_U32(ctx, 2));
label_25091c:
    // 0x25091c: 0x1860009b  blez        $v1, . + 4 + (0x9B << 2)
label_250920:
    if (ctx->pc == 0x250920u) {
        ctx->pc = 0x250920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25091Cu;
        // 0x250920: 0x8e930010  lw          $s3, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250924u;
        goto label_250924;
    }
    ctx->pc = 0x25091Cu;
    {
        const bool branch_taken_0x25091c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x250920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25091Cu;
        // 0x250920: 0x8e930010  lw          $s3, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25091c) {
            ctx->pc = 0x250B8Cu;
            goto label_250b8c;
        }
    }
    ctx->pc = 0x250924u;
label_250924:
    // 0x250924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_250928:
    // 0x250928: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x250928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25092c:
    // 0x25092c: 0x0  nop
    ctx->pc = 0x25092cu;
    // NOP
label_250930:
    // 0x250930: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x250930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_250934:
    // 0x250934: 0x24421120  addiu       $v0, $v0, 0x1120
    ctx->pc = 0x250934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4384));
label_250938:
    // 0x250938: 0x16e20041  bne         $s7, $v0, . + 4 + (0x41 << 2)
label_25093c:
    if (ctx->pc == 0x25093Cu) {
        ctx->pc = 0x25093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250938u;
        // 0x25093c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250940u;
        goto label_250940;
    }
    ctx->pc = 0x250938u;
    {
        const bool branch_taken_0x250938 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x25093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250938u;
        // 0x25093c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250938) {
            ctx->pc = 0x250A40u;
            goto label_250a40;
        }
    }
    ctx->pc = 0x250940u;
label_250940:
    // 0x250940: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x250940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_250944:
    // 0x250944: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x250944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_250948:
    // 0x250948: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x250948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25094c:
    // 0x25094c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x25094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250950:
    // 0x250950: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x250950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_250954:
    // 0x250954: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x250954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_250958:
    // 0x250958: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x250958u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_25095c:
    // 0x25095c: 0x460001c2  mul.s       $f7, $f0, $f0
    ctx->pc = 0x25095cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_250960:
    // 0x250960: 0xafa2084c  sw          $v0, 0x84C($sp)
    ctx->pc = 0x250960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2124), GPR_U32(ctx, 2));
label_250964:
    // 0x250964: 0x460022c2  mul.s       $f11, $f4, $f0
    ctx->pc = 0x250964u;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_250968:
    // 0x250968: 0xe7a208c4  swc1        $f2, 0x8C4($sp)
    ctx->pc = 0x250968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2244), bits); }
label_25096c:
    // 0x25096c: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x25096cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_250970:
    // 0x250970: 0xe7a508c0  swc1        $f5, 0x8C0($sp)
    ctx->pc = 0x250970u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2240), bits); }
label_250974:
    // 0x250974: 0x46012242  mul.s       $f9, $f4, $f1
    ctx->pc = 0x250974u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_250978:
    // 0x250978: 0xe7a708c8  swc1        $f7, 0x8C8($sp)
    ctx->pc = 0x250978u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2248), bits); }
label_25097c:
    // 0x25097c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25097cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_250980:
    // 0x250980: 0xe7ab08e8  swc1        $f11, 0x8E8($sp)
    ctx->pc = 0x250980u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2280), bits); }
label_250984:
    // 0x250984: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x250984u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_250988:
    // 0x250988: 0xe7a308d0  swc1        $f3, 0x8D0($sp)
    ctx->pc = 0x250988u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2256), bits); }
label_25098c:
    // 0x25098c: 0x46022a80  add.s       $f10, $f5, $f2
    ctx->pc = 0x25098cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_250990:
    // 0x250990: 0xafa00870  sw          $zero, 0x870($sp)
    ctx->pc = 0x250990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 0));
label_250994:
    // 0x250994: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x250994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_250998:
    // 0x250998: 0xe7a008d4  swc1        $f0, 0x8D4($sp)
    ctx->pc = 0x250998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2260), bits); }
label_25099c:
    // 0x25099c: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x25099cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
label_2509a0:
    // 0x2509a0: 0xe7a908e0  swc1        $f9, 0x8E0($sp)
    ctx->pc = 0x2509a0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2272), bits); }
label_2509a4:
    // 0x2509a4: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2509a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_2509a8:
    // 0x2509a8: 0xe7a408e4  swc1        $f4, 0x8E4($sp)
    ctx->pc = 0x2509a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2276), bits); }
label_2509ac:
    // 0x2509ac: 0x46040200  add.s       $f8, $f0, $f4
    ctx->pc = 0x2509acu;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2509b0:
    // 0x2509b0: 0xe7a108d8  swc1        $f1, 0x8D8($sp)
    ctx->pc = 0x2509b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2264), bits); }
label_2509b4:
    // 0x2509b4: 0x460b0981  sub.s       $f6, $f1, $f11
    ctx->pc = 0x2509b4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
label_2509b8:
    // 0x2509b8: 0xafa00874  sw          $zero, 0x874($sp)
    ctx->pc = 0x2509b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2164), GPR_U32(ctx, 0));
label_2509bc:
    // 0x2509bc: 0x460919c1  sub.s       $f7, $f3, $f9
    ctx->pc = 0x2509bcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
label_2509c0:
    // 0x2509c0: 0xafa00878  sw          $zero, 0x878($sp)
    ctx->pc = 0x2509c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2168), GPR_U32(ctx, 0));
label_2509c4:
    // 0x2509c4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2509c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2509c8:
    // 0x2509c8: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x2509c8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_2509cc:
    // 0x2509cc: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x2509ccu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
label_2509d0:
    // 0x2509d0: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x2509d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
label_2509d4:
    // 0x2509d4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2509d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_2509d8:
    // 0x2509d8: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x2509d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
label_2509dc:
    // 0x2509dc: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x2509dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_2509e0:
    // 0x2509e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2509e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2509e4:
    // 0x2509e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2509e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2509e8:
    // 0x2509e8: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x2509e8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_2509ec:
    // 0x2509ec: 0xe7a20840  swc1        $f2, 0x840($sp)
    ctx->pc = 0x2509ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2112), bits); }
label_2509f0:
    // 0x2509f0: 0x4605a141  sub.s       $f5, $f20, $f5
    ctx->pc = 0x2509f0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[20], ctx->f[5]);
label_2509f4:
    // 0x2509f4: 0xe7a10844  swc1        $f1, 0x844($sp)
    ctx->pc = 0x2509f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2116), bits); }
label_2509f8:
    // 0x2509f8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2509f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2509fc:
    // 0x2509fc: 0xe7a00848  swc1        $f0, 0x848($sp)
    ctx->pc = 0x2509fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2120), bits); }
label_250a00:
    // 0x250a00: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x250a00u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_250a04:
    // 0x250a04: 0xe7a60850  swc1        $f6, 0x850($sp)
    ctx->pc = 0x250a04u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2128), bits); }
label_250a08:
    // 0x250a08: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x250a08u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_250a0c:
    // 0x250a0c: 0xe7a50854  swc1        $f5, 0x854($sp)
    ctx->pc = 0x250a0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2132), bits); }
label_250a10:
    // 0x250a10: 0x460aa281  sub.s       $f10, $f20, $f10
    ctx->pc = 0x250a10u;
    ctx->f[10] = FPU_SUB_S(ctx->f[20], ctx->f[10]);
label_250a14:
    // 0x250a14: 0xe7a30858  swc1        $f3, 0x858($sp)
    ctx->pc = 0x250a14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2136), bits); }
label_250a18:
    // 0x250a18: 0xe7a80860  swc1        $f8, 0x860($sp)
    ctx->pc = 0x250a18u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2144), bits); }
label_250a1c:
    // 0x250a1c: 0xe7a70864  swc1        $f7, 0x864($sp)
    ctx->pc = 0x250a1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2148), bits); }
label_250a20:
    // 0x250a20: 0xe7aa0868  swc1        $f10, 0x868($sp)
    ctx->pc = 0x250a20u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2152), bits); }
label_250a24:
    // 0x250a24: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x250a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250a28:
    // 0x250a28: 0xe7a00870  swc1        $f0, 0x870($sp)
    ctx->pc = 0x250a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2160), bits); }
label_250a2c:
    // 0x250a2c: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x250a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_250a30:
    // 0x250a30: 0xe7a10874  swc1        $f1, 0x874($sp)
    ctx->pc = 0x250a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2164), bits); }
label_250a34:
    // 0x250a34: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x250a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250a38:
    // 0x250a38: 0x10000003  b           . + 4 + (0x3 << 2)
label_250a3c:
    if (ctx->pc == 0x250A3Cu) {
        ctx->pc = 0x250A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A38u;
        // 0x250a3c: 0xe7a00878  swc1        $f0, 0x878($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250A40u;
        goto label_250a40;
    }
    ctx->pc = 0x250A38u;
    {
        const bool branch_taken_0x250a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A38u;
        // 0x250a3c: 0xe7a00878  swc1        $f0, 0x878($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a38) {
            ctx->pc = 0x250A48u;
            goto label_250a48;
        }
    }
    ctx->pc = 0x250A40u;
label_250a40:
    // 0x250a40: 0x2e0f809  jalr        $s7
label_250a44:
    if (ctx->pc == 0x250A44u) {
        ctx->pc = 0x250A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A40u;
        // 0x250a44: 0x27a40840  addiu       $a0, $sp, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250A48u;
        goto label_250a48;
    }
    ctx->pc = 0x250A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x250A48u);
        ctx->pc = 0x250A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A40u;
        // 0x250a44: 0x27a40840  addiu       $a0, $sp, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250A40u, 0x250A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250A48u;
label_250a48:
    // 0x250a48: 0x27a50840  addiu       $a1, $sp, 0x840
    ctx->pc = 0x250a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_250a4c:
    // 0x250a4c: 0x27a40880  addiu       $a0, $sp, 0x880
    ctx->pc = 0x250a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_250a50:
    // 0x250a50: 0xc092d9c  jal         func_24B670
label_250a54:
    if (ctx->pc == 0x250A54u) {
        ctx->pc = 0x250A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A50u;
        // 0x250a54: 0x27a60800  addiu       $a2, $sp, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250A58u;
        goto label_250a58;
    }
    ctx->pc = 0x250A50u;
    SET_GPR_U32(ctx, 31, 0x250A58u);
    ctx->pc = 0x250A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250A50u;
    // 0x250a54: 0x27a60800  addiu       $a2, $sp, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x250A50u, 0x250A58u)) {
        return;
    }
    ctx->pc = 0x250A58u;
label_250a58:
    // 0x250a58: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x250a58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_250a5c:
    // 0x250a5c: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_250a60:
    if (ctx->pc == 0x250A60u) {
        ctx->pc = 0x250A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A5Cu;
        // 0x250a60: 0x33c21000  andi        $v0, $fp, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250A64u;
        goto label_250a64;
    }
    ctx->pc = 0x250A5Cu;
    {
        const bool branch_taken_0x250a5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A5Cu;
        // 0x250a60: 0x33c21000  andi        $v0, $fp, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a5c) {
            ctx->pc = 0x250ACCu;
            goto label_250acc;
        }
    }
    ctx->pc = 0x250A64u;
label_250a64:
    // 0x250a64: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_250a68:
    if (ctx->pc == 0x250A68u) {
        ctx->pc = 0x250A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A64u;
        // 0x250a68: 0x7ba20840  lq          $v0, 0x840($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250A6Cu;
        goto label_250a6c;
    }
    ctx->pc = 0x250A64u;
    {
        const bool branch_taken_0x250a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A64u;
        // 0x250a68: 0x7ba20840  lq          $v0, 0x840($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a64) {
            ctx->pc = 0x250A94u;
            goto label_250a94;
        }
    }
    ctx->pc = 0x250A6Cu;
label_250a6c:
    // 0x250a6c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x250a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_250a70:
    // 0x250a70: 0x7ba30850  lq          $v1, 0x850($sp)
    ctx->pc = 0x250a70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_250a74:
    // 0x250a74: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x250a74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_250a78:
    // 0x250a78: 0x7ba20860  lq          $v0, 0x860($sp)
    ctx->pc = 0x250a78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
label_250a7c:
    // 0x250a7c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x250a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_250a80:
    // 0x250a80: 0x7ba30870  lq          $v1, 0x870($sp)
    ctx->pc = 0x250a80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_250a84:
    // 0x250a84: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
label_250a88:
    if (ctx->pc == 0x250A88u) {
        ctx->pc = 0x250A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A84u;
        // 0x250a88: 0x7e030040  sq          $v1, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250A8Cu;
        goto label_250a8c;
    }
    ctx->pc = 0x250A84u;
    {
        const bool branch_taken_0x250a84 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x250A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A84u;
        // 0x250a88: 0x7e030040  sq          $v1, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a84) {
            ctx->pc = 0x250A9Cu;
            goto label_250a9c;
        }
    }
    ctx->pc = 0x250A8Cu;
label_250a8c:
    // 0x250a8c: 0xc08992e  jal         func_2264B8
label_250a90:
    if (ctx->pc == 0x250A90u) {
        ctx->pc = 0x250A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A8Cu;
        // 0x250a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250A94u;
        goto label_250a94;
    }
    ctx->pc = 0x250A8Cu;
    SET_GPR_U32(ctx, 31, 0x250A94u);
    ctx->pc = 0x250A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250A8Cu;
    // 0x250a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x250A8Cu, 0x250A94u)) {
        return;
    }
    ctx->pc = 0x250A94u;
label_250a94:
    // 0x250a94: 0x52a0000e  beql        $s5, $zero, . + 4 + (0xE << 2)
label_250a98:
    if (ctx->pc == 0x250A98u) {
        ctx->pc = 0x250A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A94u;
        // 0x250a98: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250A9Cu;
        goto label_250a9c;
    }
    ctx->pc = 0x250A94u;
    {
        const bool branch_taken_0x250a94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x250a94) {
            ctx->pc = 0x250A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250A94u;
            // 0x250a98: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250AD0u;
            goto label_250ad0;
        }
    }
    ctx->pc = 0x250A9Cu;
label_250a9c:
    // 0x250a9c: 0x7ba20880  lq          $v0, 0x880($sp)
    ctx->pc = 0x250a9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_250aa0:
    // 0x250aa0: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x250aa0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_250aa4:
    // 0x250aa4: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x250aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
label_250aa8:
    // 0x250aa8: 0x308400fb  andi        $a0, $a0, 0xFB
    ctx->pc = 0x250aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)251);
label_250aac:
    // 0x250aac: 0x7ba30890  lq          $v1, 0x890($sp)
    ctx->pc = 0x250aacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_250ab0:
    // 0x250ab0: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x250ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_250ab4:
    // 0x250ab4: 0x7e030060  sq          $v1, 0x60($s0)
    ctx->pc = 0x250ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 3));
label_250ab8:
    // 0x250ab8: 0x7ba208a0  lq          $v0, 0x8A0($sp)
    ctx->pc = 0x250ab8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_250abc:
    // 0x250abc: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x250abcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
label_250ac0:
    // 0x250ac0: 0x7ba308b0  lq          $v1, 0x8B0($sp)
    ctx->pc = 0x250ac0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_250ac4:
    // 0x250ac4: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x250ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
label_250ac8:
    // 0x250ac8: 0x7e030080  sq          $v1, 0x80($s0)
    ctx->pc = 0x250ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
label_250acc:
    // 0x250acc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x250accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_250ad0:
    // 0x250ad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x250ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250ad4:
    // 0x250ad4: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x250ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_250ad8:
    // 0x250ad8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_250adc:
    if (ctx->pc == 0x250ADCu) {
        ctx->pc = 0x250ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AD8u;
        // 0x250adc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250AE0u;
        goto label_250ae0;
    }
    ctx->pc = 0x250AD8u;
    {
        const bool branch_taken_0x250ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x250ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AD8u;
        // 0x250adc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ad8) {
            ctx->pc = 0x250B08u;
            goto label_250b08;
        }
    }
    ctx->pc = 0x250AE0u;
label_250ae0:
    // 0x250ae0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_250ae4:
    if (ctx->pc == 0x250AE4u) {
        ctx->pc = 0x250AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AE0u;
        // 0x250ae4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250AE8u;
        goto label_250ae8;
    }
    ctx->pc = 0x250AE0u;
    {
        const bool branch_taken_0x250ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AE0u;
        // 0x250ae4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ae0) {
            ctx->pc = 0x250AF8u;
            goto label_250af8;
        }
    }
    ctx->pc = 0x250AE8u;
label_250ae8:
    // 0x250ae8: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_250aec:
    if (ctx->pc == 0x250AECu) {
        ctx->pc = 0x250AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AE8u;
        // 0x250aec: 0x7ba20880  lq          $v0, 0x880($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250AF0u;
        goto label_250af0;
    }
    ctx->pc = 0x250AE8u;
    {
        const bool branch_taken_0x250ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AE8u;
        // 0x250aec: 0x7ba20880  lq          $v0, 0x880($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ae8) {
            ctx->pc = 0x250B54u;
            goto label_250b54;
        }
    }
    ctx->pc = 0x250AF0u;
label_250af0:
    // 0x250af0: 0x10000020  b           . + 4 + (0x20 << 2)
label_250af4:
    if (ctx->pc == 0x250AF4u) {
        ctx->pc = 0x250AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AF0u;
        // 0x250af4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250AF8u;
        goto label_250af8;
    }
    ctx->pc = 0x250AF0u;
    {
        const bool branch_taken_0x250af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AF0u;
        // 0x250af4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250af0) {
            ctx->pc = 0x250B74u;
            goto label_250b74;
        }
    }
    ctx->pc = 0x250AF8u;
label_250af8:
    // 0x250af8: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_250afc:
    if (ctx->pc == 0x250AFCu) {
        ctx->pc = 0x250AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AF8u;
        // 0x250afc: 0x7ba20800  lq          $v0, 0x800($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B00u;
        goto label_250b00;
    }
    ctx->pc = 0x250AF8u;
    {
        const bool branch_taken_0x250af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x250AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AF8u;
        // 0x250afc: 0x7ba20800  lq          $v0, 0x800($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250af8) {
            ctx->pc = 0x250B30u;
            goto label_250b30;
        }
    }
    ctx->pc = 0x250B00u;
label_250b00:
    // 0x250b00: 0x1000001c  b           . + 4 + (0x1C << 2)
label_250b04:
    if (ctx->pc == 0x250B04u) {
        ctx->pc = 0x250B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B00u;
        // 0x250b04: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B08u;
        goto label_250b08;
    }
    ctx->pc = 0x250B00u;
    {
        const bool branch_taken_0x250b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B00u;
        // 0x250b04: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b00) {
            ctx->pc = 0x250B74u;
            goto label_250b74;
        }
    }
    ctx->pc = 0x250B08u;
label_250b08:
    // 0x250b08: 0x2652ffc0  addiu       $s2, $s2, -0x40
    ctx->pc = 0x250b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
label_250b0c:
    // 0x250b0c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x250b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_250b10:
    // 0x250b10: 0x7fa20800  sq          $v0, 0x800($sp)
    ctx->pc = 0x250b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 2));
label_250b14:
    // 0x250b14: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x250b14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_250b18:
    // 0x250b18: 0x7fa30810  sq          $v1, 0x810($sp)
    ctx->pc = 0x250b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 3));
label_250b1c:
    // 0x250b1c: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x250b1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_250b20:
    // 0x250b20: 0x7fa20820  sq          $v0, 0x820($sp)
    ctx->pc = 0x250b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 2));
label_250b24:
    // 0x250b24: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x250b24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_250b28:
    // 0x250b28: 0x10000011  b           . + 4 + (0x11 << 2)
label_250b2c:
    if (ctx->pc == 0x250B2Cu) {
        ctx->pc = 0x250B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B28u;
        // 0x250b2c: 0x7fa30830  sq          $v1, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B30u;
        goto label_250b30;
    }
    ctx->pc = 0x250B28u;
    {
        const bool branch_taken_0x250b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B28u;
        // 0x250b2c: 0x7fa30830  sq          $v1, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b28) {
            ctx->pc = 0x250B70u;
            goto label_250b70;
        }
    }
    ctx->pc = 0x250B30u;
label_250b30:
    // 0x250b30: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x250b30u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_250b34:
    // 0x250b34: 0x7ba30810  lq          $v1, 0x810($sp)
    ctx->pc = 0x250b34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2064)));
label_250b38:
    // 0x250b38: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x250b38u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_250b3c:
    // 0x250b3c: 0x7ba20820  lq          $v0, 0x820($sp)
    ctx->pc = 0x250b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2080)));
label_250b40:
    // 0x250b40: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x250b40u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_250b44:
    // 0x250b44: 0x7ba30830  lq          $v1, 0x830($sp)
    ctx->pc = 0x250b44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
label_250b48:
    // 0x250b48: 0x7e430030  sq          $v1, 0x30($s2)
    ctx->pc = 0x250b48u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
label_250b4c:
    // 0x250b4c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x250b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_250b50:
    // 0x250b50: 0x7ba20880  lq          $v0, 0x880($sp)
    ctx->pc = 0x250b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_250b54:
    // 0x250b54: 0x7ba30890  lq          $v1, 0x890($sp)
    ctx->pc = 0x250b54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_250b58:
    // 0x250b58: 0x7ba408a0  lq          $a0, 0x8A0($sp)
    ctx->pc = 0x250b58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_250b5c:
    // 0x250b5c: 0x7ba508b0  lq          $a1, 0x8B0($sp)
    ctx->pc = 0x250b5cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_250b60:
    // 0x250b60: 0x7fa20800  sq          $v0, 0x800($sp)
    ctx->pc = 0x250b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 2));
label_250b64:
    // 0x250b64: 0x7fa30810  sq          $v1, 0x810($sp)
    ctx->pc = 0x250b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 3));
label_250b68:
    // 0x250b68: 0x7fa40820  sq          $a0, 0x820($sp)
    ctx->pc = 0x250b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 4));
label_250b6c:
    // 0x250b6c: 0x7fa50830  sq          $a1, 0x830($sp)
    ctx->pc = 0x250b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 5));
label_250b70:
    // 0x250b70: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x250b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_250b74:
    // 0x250b74: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x250b74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_250b78:
    // 0x250b78: 0x8fa308f0  lw          $v1, 0x8F0($sp)
    ctx->pc = 0x250b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2288)));
label_250b7c:
    // 0x250b7c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x250b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_250b80:
    // 0x250b80: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x250b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_250b84:
    // 0x250b84: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
label_250b88:
    if (ctx->pc == 0x250B88u) {
        ctx->pc = 0x250B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B84u;
        // 0x250b88: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B8Cu;
        goto label_250b8c;
    }
    ctx->pc = 0x250B84u;
    {
        const bool branch_taken_0x250b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B84u;
        // 0x250b88: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b84) {
            ctx->pc = 0x250930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250930;
        }
    }
    ctx->pc = 0x250B8Cu;
label_250b8c:
    // 0x250b8c: 0x7bb00990  lq          $s0, 0x990($sp)
    ctx->pc = 0x250b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2448)));
label_250b90:
    // 0x250b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250b94:
    // 0x250b94: 0x7bb10980  lq          $s1, 0x980($sp)
    ctx->pc = 0x250b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2432)));
label_250b98:
    // 0x250b98: 0x7bb20970  lq          $s2, 0x970($sp)
    ctx->pc = 0x250b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2416)));
label_250b9c:
    // 0x250b9c: 0x7bb30960  lq          $s3, 0x960($sp)
    ctx->pc = 0x250b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2400)));
label_250ba0:
    // 0x250ba0: 0x7bb40950  lq          $s4, 0x950($sp)
    ctx->pc = 0x250ba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_250ba4:
    // 0x250ba4: 0x7bb50940  lq          $s5, 0x940($sp)
    ctx->pc = 0x250ba4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_250ba8:
    // 0x250ba8: 0x7bb60930  lq          $s6, 0x930($sp)
    ctx->pc = 0x250ba8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_250bac:
    // 0x250bac: 0x7bb70920  lq          $s7, 0x920($sp)
    ctx->pc = 0x250bacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_250bb0:
    // 0x250bb0: 0x7bbe0910  lq          $fp, 0x910($sp)
    ctx->pc = 0x250bb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_250bb4:
    // 0x250bb4: 0xdfbf0900  ld          $ra, 0x900($sp)
    ctx->pc = 0x250bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2304)));
label_250bb8:
    // 0x250bb8: 0xc7b409a0  lwc1        $f20, 0x9A0($sp)
    ctx->pc = 0x250bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_250bbc:
    // 0x250bbc: 0x3e00008  jr          $ra
label_250bc0:
    if (ctx->pc == 0x250BC0u) {
        ctx->pc = 0x250BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BBCu;
        // 0x250bc0: 0x27bd09b0  addiu       $sp, $sp, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250BC4u;
        goto label_250bc4;
    }
    ctx->pc = 0x250BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BBCu;
        // 0x250bc0: 0x27bd09b0  addiu       $sp, $sp, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250BC4u;
label_250bc4:
    // 0x250bc4: 0x0  nop
    ctx->pc = 0x250bc4u;
    // NOP
    ctx->pc = 0x250bc8u;
}
