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

// Function: sub_00144740
// Address: 0x144740 - 0x144cc0
void sub_00144740_0x144740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144740_0x144740");
#endif

    switch (ctx->pc) {
        case 0x144740u: goto label_144740;
        case 0x144744u: goto label_144744;
        case 0x144748u: goto label_144748;
        case 0x14474cu: goto label_14474c;
        case 0x144750u: goto label_144750;
        case 0x144754u: goto label_144754;
        case 0x144758u: goto label_144758;
        case 0x14475cu: goto label_14475c;
        case 0x144760u: goto label_144760;
        case 0x144764u: goto label_144764;
        case 0x144768u: goto label_144768;
        case 0x14476cu: goto label_14476c;
        case 0x144770u: goto label_144770;
        case 0x144774u: goto label_144774;
        case 0x144778u: goto label_144778;
        case 0x14477cu: goto label_14477c;
        case 0x144780u: goto label_144780;
        case 0x144784u: goto label_144784;
        case 0x144788u: goto label_144788;
        case 0x14478cu: goto label_14478c;
        case 0x144790u: goto label_144790;
        case 0x144794u: goto label_144794;
        case 0x144798u: goto label_144798;
        case 0x14479cu: goto label_14479c;
        case 0x1447a0u: goto label_1447a0;
        case 0x1447a4u: goto label_1447a4;
        case 0x1447a8u: goto label_1447a8;
        case 0x1447acu: goto label_1447ac;
        case 0x1447b0u: goto label_1447b0;
        case 0x1447b4u: goto label_1447b4;
        case 0x1447b8u: goto label_1447b8;
        case 0x1447bcu: goto label_1447bc;
        case 0x1447c0u: goto label_1447c0;
        case 0x1447c4u: goto label_1447c4;
        case 0x1447c8u: goto label_1447c8;
        case 0x1447ccu: goto label_1447cc;
        case 0x1447d0u: goto label_1447d0;
        case 0x1447d4u: goto label_1447d4;
        case 0x1447d8u: goto label_1447d8;
        case 0x1447dcu: goto label_1447dc;
        case 0x1447e0u: goto label_1447e0;
        case 0x1447e4u: goto label_1447e4;
        case 0x1447e8u: goto label_1447e8;
        case 0x1447ecu: goto label_1447ec;
        case 0x1447f0u: goto label_1447f0;
        case 0x1447f4u: goto label_1447f4;
        case 0x1447f8u: goto label_1447f8;
        case 0x1447fcu: goto label_1447fc;
        case 0x144800u: goto label_144800;
        case 0x144804u: goto label_144804;
        case 0x144808u: goto label_144808;
        case 0x14480cu: goto label_14480c;
        case 0x144810u: goto label_144810;
        case 0x144814u: goto label_144814;
        case 0x144818u: goto label_144818;
        case 0x14481cu: goto label_14481c;
        case 0x144820u: goto label_144820;
        case 0x144824u: goto label_144824;
        case 0x144828u: goto label_144828;
        case 0x14482cu: goto label_14482c;
        case 0x144830u: goto label_144830;
        case 0x144834u: goto label_144834;
        case 0x144838u: goto label_144838;
        case 0x14483cu: goto label_14483c;
        case 0x144840u: goto label_144840;
        case 0x144844u: goto label_144844;
        case 0x144848u: goto label_144848;
        case 0x14484cu: goto label_14484c;
        case 0x144850u: goto label_144850;
        case 0x144854u: goto label_144854;
        case 0x144858u: goto label_144858;
        case 0x14485cu: goto label_14485c;
        case 0x144860u: goto label_144860;
        case 0x144864u: goto label_144864;
        case 0x144868u: goto label_144868;
        case 0x14486cu: goto label_14486c;
        case 0x144870u: goto label_144870;
        case 0x144874u: goto label_144874;
        case 0x144878u: goto label_144878;
        case 0x14487cu: goto label_14487c;
        case 0x144880u: goto label_144880;
        case 0x144884u: goto label_144884;
        case 0x144888u: goto label_144888;
        case 0x14488cu: goto label_14488c;
        case 0x144890u: goto label_144890;
        case 0x144894u: goto label_144894;
        case 0x144898u: goto label_144898;
        case 0x14489cu: goto label_14489c;
        case 0x1448a0u: goto label_1448a0;
        case 0x1448a4u: goto label_1448a4;
        case 0x1448a8u: goto label_1448a8;
        case 0x1448acu: goto label_1448ac;
        case 0x1448b0u: goto label_1448b0;
        case 0x1448b4u: goto label_1448b4;
        case 0x1448b8u: goto label_1448b8;
        case 0x1448bcu: goto label_1448bc;
        case 0x1448c0u: goto label_1448c0;
        case 0x1448c4u: goto label_1448c4;
        case 0x1448c8u: goto label_1448c8;
        case 0x1448ccu: goto label_1448cc;
        case 0x1448d0u: goto label_1448d0;
        case 0x1448d4u: goto label_1448d4;
        case 0x1448d8u: goto label_1448d8;
        case 0x1448dcu: goto label_1448dc;
        case 0x1448e0u: goto label_1448e0;
        case 0x1448e4u: goto label_1448e4;
        case 0x1448e8u: goto label_1448e8;
        case 0x1448ecu: goto label_1448ec;
        case 0x1448f0u: goto label_1448f0;
        case 0x1448f4u: goto label_1448f4;
        case 0x1448f8u: goto label_1448f8;
        case 0x1448fcu: goto label_1448fc;
        case 0x144900u: goto label_144900;
        case 0x144904u: goto label_144904;
        case 0x144908u: goto label_144908;
        case 0x14490cu: goto label_14490c;
        case 0x144910u: goto label_144910;
        case 0x144914u: goto label_144914;
        case 0x144918u: goto label_144918;
        case 0x14491cu: goto label_14491c;
        case 0x144920u: goto label_144920;
        case 0x144924u: goto label_144924;
        case 0x144928u: goto label_144928;
        case 0x14492cu: goto label_14492c;
        case 0x144930u: goto label_144930;
        case 0x144934u: goto label_144934;
        case 0x144938u: goto label_144938;
        case 0x14493cu: goto label_14493c;
        case 0x144940u: goto label_144940;
        case 0x144944u: goto label_144944;
        case 0x144948u: goto label_144948;
        case 0x14494cu: goto label_14494c;
        case 0x144950u: goto label_144950;
        case 0x144954u: goto label_144954;
        case 0x144958u: goto label_144958;
        case 0x14495cu: goto label_14495c;
        case 0x144960u: goto label_144960;
        case 0x144964u: goto label_144964;
        case 0x144968u: goto label_144968;
        case 0x14496cu: goto label_14496c;
        case 0x144970u: goto label_144970;
        case 0x144974u: goto label_144974;
        case 0x144978u: goto label_144978;
        case 0x14497cu: goto label_14497c;
        case 0x144980u: goto label_144980;
        case 0x144984u: goto label_144984;
        case 0x144988u: goto label_144988;
        case 0x14498cu: goto label_14498c;
        case 0x144990u: goto label_144990;
        case 0x144994u: goto label_144994;
        case 0x144998u: goto label_144998;
        case 0x14499cu: goto label_14499c;
        case 0x1449a0u: goto label_1449a0;
        case 0x1449a4u: goto label_1449a4;
        case 0x1449a8u: goto label_1449a8;
        case 0x1449acu: goto label_1449ac;
        case 0x1449b0u: goto label_1449b0;
        case 0x1449b4u: goto label_1449b4;
        case 0x1449b8u: goto label_1449b8;
        case 0x1449bcu: goto label_1449bc;
        case 0x1449c0u: goto label_1449c0;
        case 0x1449c4u: goto label_1449c4;
        case 0x1449c8u: goto label_1449c8;
        case 0x1449ccu: goto label_1449cc;
        case 0x1449d0u: goto label_1449d0;
        case 0x1449d4u: goto label_1449d4;
        case 0x1449d8u: goto label_1449d8;
        case 0x1449dcu: goto label_1449dc;
        case 0x1449e0u: goto label_1449e0;
        case 0x1449e4u: goto label_1449e4;
        case 0x1449e8u: goto label_1449e8;
        case 0x1449ecu: goto label_1449ec;
        case 0x1449f0u: goto label_1449f0;
        case 0x1449f4u: goto label_1449f4;
        case 0x1449f8u: goto label_1449f8;
        case 0x1449fcu: goto label_1449fc;
        case 0x144a00u: goto label_144a00;
        case 0x144a04u: goto label_144a04;
        case 0x144a08u: goto label_144a08;
        case 0x144a0cu: goto label_144a0c;
        case 0x144a10u: goto label_144a10;
        case 0x144a14u: goto label_144a14;
        case 0x144a18u: goto label_144a18;
        case 0x144a1cu: goto label_144a1c;
        case 0x144a20u: goto label_144a20;
        case 0x144a24u: goto label_144a24;
        case 0x144a28u: goto label_144a28;
        case 0x144a2cu: goto label_144a2c;
        case 0x144a30u: goto label_144a30;
        case 0x144a34u: goto label_144a34;
        case 0x144a38u: goto label_144a38;
        case 0x144a3cu: goto label_144a3c;
        case 0x144a40u: goto label_144a40;
        case 0x144a44u: goto label_144a44;
        case 0x144a48u: goto label_144a48;
        case 0x144a4cu: goto label_144a4c;
        case 0x144a50u: goto label_144a50;
        case 0x144a54u: goto label_144a54;
        case 0x144a58u: goto label_144a58;
        case 0x144a5cu: goto label_144a5c;
        case 0x144a60u: goto label_144a60;
        case 0x144a64u: goto label_144a64;
        case 0x144a68u: goto label_144a68;
        case 0x144a6cu: goto label_144a6c;
        case 0x144a70u: goto label_144a70;
        case 0x144a74u: goto label_144a74;
        case 0x144a78u: goto label_144a78;
        case 0x144a7cu: goto label_144a7c;
        case 0x144a80u: goto label_144a80;
        case 0x144a84u: goto label_144a84;
        case 0x144a88u: goto label_144a88;
        case 0x144a8cu: goto label_144a8c;
        case 0x144a90u: goto label_144a90;
        case 0x144a94u: goto label_144a94;
        case 0x144a98u: goto label_144a98;
        case 0x144a9cu: goto label_144a9c;
        case 0x144aa0u: goto label_144aa0;
        case 0x144aa4u: goto label_144aa4;
        case 0x144aa8u: goto label_144aa8;
        case 0x144aacu: goto label_144aac;
        case 0x144ab0u: goto label_144ab0;
        case 0x144ab4u: goto label_144ab4;
        case 0x144ab8u: goto label_144ab8;
        case 0x144abcu: goto label_144abc;
        case 0x144ac0u: goto label_144ac0;
        case 0x144ac4u: goto label_144ac4;
        case 0x144ac8u: goto label_144ac8;
        case 0x144accu: goto label_144acc;
        case 0x144ad0u: goto label_144ad0;
        case 0x144ad4u: goto label_144ad4;
        case 0x144ad8u: goto label_144ad8;
        case 0x144adcu: goto label_144adc;
        case 0x144ae0u: goto label_144ae0;
        case 0x144ae4u: goto label_144ae4;
        case 0x144ae8u: goto label_144ae8;
        case 0x144aecu: goto label_144aec;
        case 0x144af0u: goto label_144af0;
        case 0x144af4u: goto label_144af4;
        case 0x144af8u: goto label_144af8;
        case 0x144afcu: goto label_144afc;
        case 0x144b00u: goto label_144b00;
        case 0x144b04u: goto label_144b04;
        case 0x144b08u: goto label_144b08;
        case 0x144b0cu: goto label_144b0c;
        case 0x144b10u: goto label_144b10;
        case 0x144b14u: goto label_144b14;
        case 0x144b18u: goto label_144b18;
        case 0x144b1cu: goto label_144b1c;
        case 0x144b20u: goto label_144b20;
        case 0x144b24u: goto label_144b24;
        case 0x144b28u: goto label_144b28;
        case 0x144b2cu: goto label_144b2c;
        case 0x144b30u: goto label_144b30;
        case 0x144b34u: goto label_144b34;
        case 0x144b38u: goto label_144b38;
        case 0x144b3cu: goto label_144b3c;
        case 0x144b40u: goto label_144b40;
        case 0x144b44u: goto label_144b44;
        case 0x144b48u: goto label_144b48;
        case 0x144b4cu: goto label_144b4c;
        case 0x144b50u: goto label_144b50;
        case 0x144b54u: goto label_144b54;
        case 0x144b58u: goto label_144b58;
        case 0x144b5cu: goto label_144b5c;
        case 0x144b60u: goto label_144b60;
        case 0x144b64u: goto label_144b64;
        case 0x144b68u: goto label_144b68;
        case 0x144b6cu: goto label_144b6c;
        case 0x144b70u: goto label_144b70;
        case 0x144b74u: goto label_144b74;
        case 0x144b78u: goto label_144b78;
        case 0x144b7cu: goto label_144b7c;
        case 0x144b80u: goto label_144b80;
        case 0x144b84u: goto label_144b84;
        case 0x144b88u: goto label_144b88;
        case 0x144b8cu: goto label_144b8c;
        case 0x144b90u: goto label_144b90;
        case 0x144b94u: goto label_144b94;
        case 0x144b98u: goto label_144b98;
        case 0x144b9cu: goto label_144b9c;
        case 0x144ba0u: goto label_144ba0;
        case 0x144ba4u: goto label_144ba4;
        case 0x144ba8u: goto label_144ba8;
        case 0x144bacu: goto label_144bac;
        case 0x144bb0u: goto label_144bb0;
        case 0x144bb4u: goto label_144bb4;
        case 0x144bb8u: goto label_144bb8;
        case 0x144bbcu: goto label_144bbc;
        case 0x144bc0u: goto label_144bc0;
        case 0x144bc4u: goto label_144bc4;
        case 0x144bc8u: goto label_144bc8;
        case 0x144bccu: goto label_144bcc;
        case 0x144bd0u: goto label_144bd0;
        case 0x144bd4u: goto label_144bd4;
        case 0x144bd8u: goto label_144bd8;
        case 0x144bdcu: goto label_144bdc;
        case 0x144be0u: goto label_144be0;
        case 0x144be4u: goto label_144be4;
        case 0x144be8u: goto label_144be8;
        case 0x144becu: goto label_144bec;
        case 0x144bf0u: goto label_144bf0;
        case 0x144bf4u: goto label_144bf4;
        case 0x144bf8u: goto label_144bf8;
        case 0x144bfcu: goto label_144bfc;
        case 0x144c00u: goto label_144c00;
        case 0x144c04u: goto label_144c04;
        case 0x144c08u: goto label_144c08;
        case 0x144c0cu: goto label_144c0c;
        case 0x144c10u: goto label_144c10;
        case 0x144c14u: goto label_144c14;
        case 0x144c18u: goto label_144c18;
        case 0x144c1cu: goto label_144c1c;
        case 0x144c20u: goto label_144c20;
        case 0x144c24u: goto label_144c24;
        case 0x144c28u: goto label_144c28;
        case 0x144c2cu: goto label_144c2c;
        case 0x144c30u: goto label_144c30;
        case 0x144c34u: goto label_144c34;
        case 0x144c38u: goto label_144c38;
        case 0x144c3cu: goto label_144c3c;
        case 0x144c40u: goto label_144c40;
        case 0x144c44u: goto label_144c44;
        case 0x144c48u: goto label_144c48;
        case 0x144c4cu: goto label_144c4c;
        case 0x144c50u: goto label_144c50;
        case 0x144c54u: goto label_144c54;
        case 0x144c58u: goto label_144c58;
        case 0x144c5cu: goto label_144c5c;
        case 0x144c60u: goto label_144c60;
        case 0x144c64u: goto label_144c64;
        case 0x144c68u: goto label_144c68;
        case 0x144c6cu: goto label_144c6c;
        case 0x144c70u: goto label_144c70;
        case 0x144c74u: goto label_144c74;
        case 0x144c78u: goto label_144c78;
        case 0x144c7cu: goto label_144c7c;
        case 0x144c80u: goto label_144c80;
        case 0x144c84u: goto label_144c84;
        case 0x144c88u: goto label_144c88;
        case 0x144c8cu: goto label_144c8c;
        case 0x144c90u: goto label_144c90;
        case 0x144c94u: goto label_144c94;
        case 0x144c98u: goto label_144c98;
        case 0x144c9cu: goto label_144c9c;
        case 0x144ca0u: goto label_144ca0;
        case 0x144ca4u: goto label_144ca4;
        case 0x144ca8u: goto label_144ca8;
        case 0x144cacu: goto label_144cac;
        case 0x144cb0u: goto label_144cb0;
        case 0x144cb4u: goto label_144cb4;
        case 0x144cb8u: goto label_144cb8;
        case 0x144cbcu: goto label_144cbc;
        default: break;
    }

    ctx->pc = 0x144740u;

label_144740:
    // 0x144740: 0x27bdfc20  addiu       $sp, $sp, -0x3E0
    ctx->pc = 0x144740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966304));
label_144744:
    // 0x144744: 0x7fb20370  sq          $s2, 0x370($sp)
    ctx->pc = 0x144744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 18));
label_144748:
    // 0x144748: 0x7fb00390  sq          $s0, 0x390($sp)
    ctx->pc = 0x144748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 16));
label_14474c:
    // 0x14474c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14474cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_144750:
    // 0x144750: 0x7fb10380  sq          $s1, 0x380($sp)
    ctx->pc = 0x144750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 17));
label_144754:
    // 0x144754: 0x7fb30360  sq          $s3, 0x360($sp)
    ctx->pc = 0x144754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 19));
label_144758:
    // 0x144758: 0x7fb40350  sq          $s4, 0x350($sp)
    ctx->pc = 0x144758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 20));
label_14475c:
    // 0x14475c: 0x7fb50340  sq          $s5, 0x340($sp)
    ctx->pc = 0x14475cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 21));
label_144760:
    // 0x144760: 0xffbf0330  sd          $ra, 0x330($sp)
    ctx->pc = 0x144760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 31));
label_144764:
    // 0x144764: 0xe7ba03d0  swc1        $f26, 0x3D0($sp)
    ctx->pc = 0x144764u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 976), bits); }
label_144768:
    // 0x144768: 0xe7b903c8  swc1        $f25, 0x3C8($sp)
    ctx->pc = 0x144768u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 968), bits); }
label_14476c:
    // 0x14476c: 0xe7b803c0  swc1        $f24, 0x3C0($sp)
    ctx->pc = 0x14476cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 960), bits); }
label_144770:
    // 0x144770: 0xe7b703b8  swc1        $f23, 0x3B8($sp)
    ctx->pc = 0x144770u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 952), bits); }
label_144774:
    // 0x144774: 0xe7b603b0  swc1        $f22, 0x3B0($sp)
    ctx->pc = 0x144774u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 944), bits); }
label_144778:
    // 0x144778: 0xe7b503a8  swc1        $f21, 0x3A8($sp)
    ctx->pc = 0x144778u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
label_14477c:
    // 0x14477c: 0xe7b403a0  swc1        $f20, 0x3A0($sp)
    ctx->pc = 0x14477cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
label_144780:
    // 0x144780: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x144780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_144784:
    // 0x144784: 0x1040013f  beqz        $v0, . + 4 + (0x13F << 2)
label_144788:
    if (ctx->pc == 0x144788u) {
        ctx->pc = 0x144788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144784u;
        // 0x144788: 0x7bb00390  lq          $s0, 0x390($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14478Cu;
        goto label_14478c;
    }
    ctx->pc = 0x144784u;
    {
        const bool branch_taken_0x144784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144784u;
        // 0x144788: 0x7bb00390  lq          $s0, 0x390($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144784) {
            ctx->pc = 0x144C84u;
            goto label_144c84;
        }
    }
    ctx->pc = 0x14478Cu;
label_14478c:
    // 0x14478c: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x14478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_144790:
    // 0x144790: 0x1040013c  beqz        $v0, . + 4 + (0x13C << 2)
label_144794:
    if (ctx->pc == 0x144794u) {
        ctx->pc = 0x144794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144790u;
        // 0x144794: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144798u;
        goto label_144798;
    }
    ctx->pc = 0x144790u;
    {
        const bool branch_taken_0x144790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144790u;
        // 0x144794: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144790) {
            ctx->pc = 0x144C84u;
            goto label_144c84;
        }
    }
    ctx->pc = 0x144798u;
label_144798:
    // 0x144798: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x144798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_14479c:
    // 0x14479c: 0x24740010  addiu       $s4, $v1, 0x10
    ctx->pc = 0x14479cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1447a0:
    // 0x1447a0: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x1447a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_1447a4:
    // 0x1447a4: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1447a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1447a8:
    // 0x1447a8: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x1447a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1447ac:
    // 0x1447ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1447acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1447b0:
    // 0x1447b0: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x1447b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_1447b4:
    // 0x1447b4: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1447b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1447b8:
    // 0x1447b8: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x1447b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1447bc:
    // 0x1447bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1447bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1447c0:
    // 0x1447c0: 0xe7a00294  swc1        $f0, 0x294($sp)
    ctx->pc = 0x1447c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_1447c4:
    // 0x1447c4: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1447c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1447c8:
    // 0x1447c8: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x1447c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1447cc:
    // 0x1447cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1447ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1447d0:
    // 0x1447d0: 0xe7a00298  swc1        $f0, 0x298($sp)
    ctx->pc = 0x1447d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_1447d4:
    // 0x1447d4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1447d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1447d8:
    // 0x1447d8: 0xc093a88  jal         func_24EA20
label_1447dc:
    if (ctx->pc == 0x1447DCu) {
        ctx->pc = 0x1447DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447D8u;
        // 0x1447dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1447E0u;
        goto label_1447e0;
    }
    ctx->pc = 0x1447D8u;
    SET_GPR_U32(ctx, 31, 0x1447E0u);
    ctx->pc = 0x1447DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447D8u;
    // 0x1447dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1447D8u, 0x1447E0u)) {
        return;
    }
    ctx->pc = 0x1447E0u;
label_1447e0:
    // 0x1447e0: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x1447e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_1447e4:
    // 0x1447e4: 0xc7a10290  lwc1        $f1, 0x290($sp)
    ctx->pc = 0x1447e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1447e8:
    // 0x1447e8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1447e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1447ec:
    // 0x1447ec: 0xc7a20294  lwc1        $f2, 0x294($sp)
    ctx->pc = 0x1447ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1447f0:
    // 0x1447f0: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x1447f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1447f4:
    // 0x1447f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1447f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1447f8:
    // 0x1447f8: 0xc4440028  lwc1        $f4, 0x28($v0)
    ctx->pc = 0x1447f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1447fc:
    // 0x1447fc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1447fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_144800:
    // 0x144800: 0xc7a00298  lwc1        $f0, 0x298($sp)
    ctx->pc = 0x144800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_144804:
    // 0x144804: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x144804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_144808:
    // 0x144808: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x144808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_14480c:
    // 0x14480c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x14480cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_144810:
    // 0x144810: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x144810u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_144814:
    // 0x144814: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x144814u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_144818:
    // 0x144818: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x144818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_14481c:
    // 0x14481c: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x14481cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_144820:
    // 0x144820: 0x0  nop
    ctx->pc = 0x144820u;
    // NOP
label_144824:
    // 0x144824: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_144828:
    if (ctx->pc == 0x144828u) {
        ctx->pc = 0x144828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144824u;
        // 0x144828: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14482Cu;
        goto label_14482c;
    }
    ctx->pc = 0x144824u;
    {
        const bool branch_taken_0x144824 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144824) {
            ctx->pc = 0x144828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144824u;
            // 0x144828: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x144830u;
            goto label_144830;
        }
    }
    ctx->pc = 0x14482Cu;
label_14482c:
    // 0x14482c: 0x0  nop
    ctx->pc = 0x14482cu;
    // NOP
label_144830:
    // 0x144830: 0x46012801  sub.s       $f0, $f5, $f1
    ctx->pc = 0x144830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_144834:
    // 0x144834: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x144834u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_144838:
    // 0x144838: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_14483c:
    // 0x14483c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x14483cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_144840:
    // 0x144840: 0x26300fd8  addiu       $s0, $s1, 0xFD8
    ctx->pc = 0x144840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
label_144844:
    // 0x144844: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x144844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_144848:
    // 0x144848: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x144848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_14484c:
    // 0x14484c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14484cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_144850:
    // 0x144850: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_144854:
    // 0x144854: 0xa3a602a0  sb          $a2, 0x2A0($sp)
    ctx->pc = 0x144854u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 672), (uint8_t)GPR_U32(ctx, 6));
label_144858:
    // 0x144858: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x144858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14485c:
    // 0x14485c: 0xa3a602a3  sb          $a2, 0x2A3($sp)
    ctx->pc = 0x14485cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 675), (uint8_t)GPR_U32(ctx, 6));
label_144860:
    // 0x144860: 0xa3a302b0  sb          $v1, 0x2B0($sp)
    ctx->pc = 0x144860u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 688), (uint8_t)GPR_U32(ctx, 3));
label_144864:
    // 0x144864: 0xa3a602a2  sb          $a2, 0x2A2($sp)
    ctx->pc = 0x144864u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 674), (uint8_t)GPR_U32(ctx, 6));
label_144868:
    // 0x144868: 0xa3a602a1  sb          $a2, 0x2A1($sp)
    ctx->pc = 0x144868u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 673), (uint8_t)GPR_U32(ctx, 6));
label_14486c:
    // 0x14486c: 0xa3a302b3  sb          $v1, 0x2B3($sp)
    ctx->pc = 0x14486cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 691), (uint8_t)GPR_U32(ctx, 3));
label_144870:
    // 0x144870: 0xa3a302b2  sb          $v1, 0x2B2($sp)
    ctx->pc = 0x144870u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 690), (uint8_t)GPR_U32(ctx, 3));
label_144874:
    // 0x144874: 0x40f809  jalr        $v0
label_144878:
    if (ctx->pc == 0x144878u) {
        ctx->pc = 0x144878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144874u;
        // 0x144878: 0xa3a302b1  sb          $v1, 0x2B1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 689), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14487Cu;
        goto label_14487c;
    }
    ctx->pc = 0x144874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14487Cu);
        ctx->pc = 0x144878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144874u;
        // 0x144878: 0xa3a302b1  sb          $v1, 0x2B1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 689), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144874u, 0x14487Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14487Cu;
label_14487c:
    // 0x14487c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x14487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_144880:
    // 0x144880: 0x27a50314  addiu       $a1, $sp, 0x314
    ctx->pc = 0x144880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 788));
label_144884:
    // 0x144884: 0x40f809  jalr        $v0
label_144888:
    if (ctx->pc == 0x144888u) {
        ctx->pc = 0x144888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144884u;
        // 0x144888: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14488Cu;
        goto label_14488c;
    }
    ctx->pc = 0x144884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14488Cu);
        ctx->pc = 0x144888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144884u;
        // 0x144888: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144884u, 0x14488Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14488Cu;
label_14488c:
    // 0x14488c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x14488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_144890:
    // 0x144890: 0x27a50318  addiu       $a1, $sp, 0x318
    ctx->pc = 0x144890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_144894:
    // 0x144894: 0x40f809  jalr        $v0
label_144898:
    if (ctx->pc == 0x144898u) {
        ctx->pc = 0x144898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144894u;
        // 0x144898: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14489Cu;
        goto label_14489c;
    }
    ctx->pc = 0x144894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14489Cu);
        ctx->pc = 0x144898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144894u;
        // 0x144898: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144894u, 0x14489Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14489Cu;
label_14489c:
    // 0x14489c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x14489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1448a0:
    // 0x1448a0: 0x27a5031c  addiu       $a1, $sp, 0x31C
    ctx->pc = 0x1448a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 796));
label_1448a4:
    // 0x1448a4: 0x40f809  jalr        $v0
label_1448a8:
    if (ctx->pc == 0x1448A8u) {
        ctx->pc = 0x1448A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448A4u;
        // 0x1448a8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1448ACu;
        goto label_1448ac;
    }
    ctx->pc = 0x1448A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1448ACu);
        ctx->pc = 0x1448A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448A4u;
        // 0x1448a8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1448A4u, 0x1448ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1448ACu;
label_1448ac:
    // 0x1448ac: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1448acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1448b0:
    // 0x1448b0: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x1448b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_1448b4:
    // 0x1448b4: 0x40f809  jalr        $v0
label_1448b8:
    if (ctx->pc == 0x1448B8u) {
        ctx->pc = 0x1448B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448B4u;
        // 0x1448b8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1448BCu;
        goto label_1448bc;
    }
    ctx->pc = 0x1448B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1448BCu);
        ctx->pc = 0x1448B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448B4u;
        // 0x1448b8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1448B4u, 0x1448BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1448BCu;
label_1448bc:
    // 0x1448bc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1448bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1448c0:
    // 0x1448c0: 0x27a50324  addiu       $a1, $sp, 0x324
    ctx->pc = 0x1448c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
label_1448c4:
    // 0x1448c4: 0x40f809  jalr        $v0
label_1448c8:
    if (ctx->pc == 0x1448C8u) {
        ctx->pc = 0x1448C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448C4u;
        // 0x1448c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1448CCu;
        goto label_1448cc;
    }
    ctx->pc = 0x1448C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1448CCu);
        ctx->pc = 0x1448C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448C4u;
        // 0x1448c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1448C4u, 0x1448CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1448CCu;
label_1448cc:
    // 0x1448cc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1448ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1448d0:
    // 0x1448d0: 0x27a50328  addiu       $a1, $sp, 0x328
    ctx->pc = 0x1448d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_1448d4:
    // 0x1448d4: 0x40f809  jalr        $v0
label_1448d8:
    if (ctx->pc == 0x1448D8u) {
        ctx->pc = 0x1448D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448D4u;
        // 0x1448d8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1448DCu;
        goto label_1448dc;
    }
    ctx->pc = 0x1448D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1448DCu);
        ctx->pc = 0x1448D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448D4u;
        // 0x1448d8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1448D4u, 0x1448DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1448DCu;
label_1448dc:
    // 0x1448dc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1448dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1448e0:
    // 0x1448e0: 0x27a5032c  addiu       $a1, $sp, 0x32C
    ctx->pc = 0x1448e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
label_1448e4:
    // 0x1448e4: 0x40f809  jalr        $v0
label_1448e8:
    if (ctx->pc == 0x1448E8u) {
        ctx->pc = 0x1448E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448E4u;
        // 0x1448e8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1448ECu;
        goto label_1448ec;
    }
    ctx->pc = 0x1448E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1448ECu);
        ctx->pc = 0x1448E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448E4u;
        // 0x1448e8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1448E4u, 0x1448ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1448ECu;
label_1448ec:
    // 0x1448ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1448ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1448f0:
    // 0x1448f0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1448f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1448f4:
    // 0x1448f4: 0x40f809  jalr        $v0
label_1448f8:
    if (ctx->pc == 0x1448F8u) {
        ctx->pc = 0x1448F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448F4u;
        // 0x1448f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1448FCu;
        goto label_1448fc;
    }
    ctx->pc = 0x1448F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1448FCu);
        ctx->pc = 0x1448F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448F4u;
        // 0x1448f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1448F4u, 0x1448FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1448FCu;
label_1448fc:
    // 0x1448fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1448fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144900:
    // 0x144900: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x144900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_144904:
    // 0x144904: 0x40f809  jalr        $v0
label_144908:
    if (ctx->pc == 0x144908u) {
        ctx->pc = 0x144908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144904u;
        // 0x144908: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14490Cu;
        goto label_14490c;
    }
    ctx->pc = 0x144904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14490Cu);
        ctx->pc = 0x144908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144904u;
        // 0x144908: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144904u, 0x14490Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14490Cu;
label_14490c:
    // 0x14490c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144910:
    // 0x144910: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x144910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_144914:
    // 0x144914: 0x40f809  jalr        $v0
label_144918:
    if (ctx->pc == 0x144918u) {
        ctx->pc = 0x144918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144914u;
        // 0x144918: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14491Cu;
        goto label_14491c;
    }
    ctx->pc = 0x144914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14491Cu);
        ctx->pc = 0x144918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144914u;
        // 0x144918: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144914u, 0x14491Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14491Cu;
label_14491c:
    // 0x14491c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144920:
    // 0x144920: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x144920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_144924:
    // 0x144924: 0x40f809  jalr        $v0
label_144928:
    if (ctx->pc == 0x144928u) {
        ctx->pc = 0x144928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144924u;
        // 0x144928: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14492Cu;
        goto label_14492c;
    }
    ctx->pc = 0x144924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14492Cu);
        ctx->pc = 0x144928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144924u;
        // 0x144928: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144924u, 0x14492Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14492Cu;
label_14492c:
    // 0x14492c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144930:
    // 0x144930: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x144930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_144934:
    // 0x144934: 0x40f809  jalr        $v0
label_144938:
    if (ctx->pc == 0x144938u) {
        ctx->pc = 0x144938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144934u;
        // 0x144938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14493Cu;
        goto label_14493c;
    }
    ctx->pc = 0x144934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14493Cu);
        ctx->pc = 0x144938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144934u;
        // 0x144938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144934u, 0x14493Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14493Cu;
label_14493c:
    // 0x14493c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144940:
    // 0x144940: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x144940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_144944:
    // 0x144944: 0x40f809  jalr        $v0
label_144948:
    if (ctx->pc == 0x144948u) {
        ctx->pc = 0x144948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144944u;
        // 0x144948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14494Cu;
        goto label_14494c;
    }
    ctx->pc = 0x144944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14494Cu);
        ctx->pc = 0x144948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144944u;
        // 0x144948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144944u, 0x14494Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14494Cu;
label_14494c:
    // 0x14494c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144950:
    // 0x144950: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x144950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_144954:
    // 0x144954: 0x40f809  jalr        $v0
label_144958:
    if (ctx->pc == 0x144958u) {
        ctx->pc = 0x144958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144954u;
        // 0x144958: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14495Cu;
        goto label_14495c;
    }
    ctx->pc = 0x144954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14495Cu);
        ctx->pc = 0x144958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144954u;
        // 0x144958: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144954u, 0x14495Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14495Cu;
label_14495c:
    // 0x14495c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144960:
    // 0x144960: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x144960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_144964:
    // 0x144964: 0x40f809  jalr        $v0
label_144968:
    if (ctx->pc == 0x144968u) {
        ctx->pc = 0x144968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144964u;
        // 0x144968: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14496Cu;
        goto label_14496c;
    }
    ctx->pc = 0x144964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14496Cu);
        ctx->pc = 0x144968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144964u;
        // 0x144968: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144964u, 0x14496Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14496Cu;
label_14496c:
    // 0x14496c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144970:
    // 0x144970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x144970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144974:
    // 0x144974: 0x40f809  jalr        $v0
label_144978:
    if (ctx->pc == 0x144978u) {
        ctx->pc = 0x144978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144974u;
        // 0x144978: 0x8e4501bc  lw          $a1, 0x1BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14497Cu;
        goto label_14497c;
    }
    ctx->pc = 0x144974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14497Cu);
        ctx->pc = 0x144978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144974u;
        // 0x144978: 0x8e4501bc  lw          $a1, 0x1BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144974u, 0x14497Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14497Cu;
label_14497c:
    // 0x14497c: 0xe7b602c0  swc1        $f22, 0x2C0($sp)
    ctx->pc = 0x14497cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_144980:
    // 0x144980: 0xe7b602c4  swc1        $f22, 0x2C4($sp)
    ctx->pc = 0x144980u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_144984:
    // 0x144984: 0xe7b602c8  swc1        $f22, 0x2C8($sp)
    ctx->pc = 0x144984u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_144988:
    // 0x144988: 0x6ba202c7  ldl         $v0, 0x2C7($sp)
    ctx->pc = 0x144988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_14498c:
    // 0x14498c: 0x6fa202c0  ldr         $v0, 0x2C0($sp)
    ctx->pc = 0x14498cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_144990:
    // 0x144990: 0x8fa302c8  lw          $v1, 0x2C8($sp)
    ctx->pc = 0x144990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
label_144994:
    // 0x144994: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x144994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144998:
    // 0x144998: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x144998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14499c:
    // 0x14499c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x14499cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1449a0:
    // 0x1449a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1449a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1449a4:
    // 0x1449a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1449a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1449a8:
    // 0x1449a8: 0x0  nop
    ctx->pc = 0x1449a8u;
    // NOP
label_1449ac:
    // 0x1449ac: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1449acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1449b0:
    // 0x1449b0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1449b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1449b4:
    // 0x1449b4: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1449b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1449b8:
    // 0x1449b8: 0x93a202a0  lbu         $v0, 0x2A0($sp)
    ctx->pc = 0x1449b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 672)));
label_1449bc:
    // 0x1449bc: 0x93a302a1  lbu         $v1, 0x2A1($sp)
    ctx->pc = 0x1449bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
label_1449c0:
    // 0x1449c0: 0xa3a2000c  sb          $v0, 0xC($sp)
    ctx->pc = 0x1449c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 2));
label_1449c4:
    // 0x1449c4: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1449c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1449c8:
    // 0x1449c8: 0x93a202a2  lbu         $v0, 0x2A2($sp)
    ctx->pc = 0x1449c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 674)));
label_1449cc:
    // 0x1449cc: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1449ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_1449d0:
    // 0x1449d0: 0x93a302a3  lbu         $v1, 0x2A3($sp)
    ctx->pc = 0x1449d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 675)));
label_1449d4:
    // 0x1449d4: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1449d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1449d8:
    // 0x1449d8: 0xc6550174  lwc1        $f21, 0x174($s2)
    ctx->pc = 0x1449d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1449dc:
    // 0x1449dc: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x1449dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_1449e0:
    // 0x1449e0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1449e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_1449e4:
    // 0x1449e4: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1449e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_1449e8:
    // 0x1449e8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x1449e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1449ec:
    // 0x1449ec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1449ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1449f0:
    // 0x1449f0: 0xc09b164  jal         func_26C590
label_1449f4:
    if (ctx->pc == 0x1449F4u) {
        ctx->pc = 0x1449F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449F0u;
        // 0x1449f4: 0x4600b5c6  mov.s       $f23, $f22 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1449F8u;
        goto label_1449f8;
    }
    ctx->pc = 0x1449F0u;
    SET_GPR_U32(ctx, 31, 0x1449F8u);
    ctx->pc = 0x1449F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449F0u;
    // 0x1449f4: 0x4600b5c6  mov.s       $f23, $f22 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1449F0u, 0x1449F8u)) {
        return;
    }
    ctx->pc = 0x1449F8u;
label_1449f8:
    // 0x1449f8: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x1449f8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
label_1449fc:
    // 0x1449fc: 0xc6410178  lwc1        $f1, 0x178($s2)
    ctx->pc = 0x1449fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_144a00:
    // 0x144a00: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x144a00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_144a04:
    // 0x144a04: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x144a04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144a08:
    // 0x144a08: 0xc09b0e8  jal         func_26C3A0
label_144a0c:
    if (ctx->pc == 0x144A0Cu) {
        ctx->pc = 0x144A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A08u;
        // 0x144a0c: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A10u;
        goto label_144a10;
    }
    ctx->pc = 0x144A08u;
    SET_GPR_U32(ctx, 31, 0x144A10u);
    ctx->pc = 0x144A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A08u;
    // 0x144a0c: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x144A08u, 0x144A10u)) {
        return;
    }
    ctx->pc = 0x144A10u;
label_144a10:
    // 0x144a10: 0xc6410178  lwc1        $f1, 0x178($s2)
    ctx->pc = 0x144a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_144a14:
    // 0x144a14: 0x27b102d0  addiu       $s1, $sp, 0x2D0
    ctx->pc = 0x144a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_144a18:
    // 0x144a18: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x144a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_144a1c:
    // 0x144a1c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x144a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_144a20:
    // 0x144a20: 0x46010642  mul.s       $f25, $f0, $f1
    ctx->pc = 0x144a20u;
    ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_144a24:
    // 0x144a24: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x144a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_144a28:
    // 0x144a28: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x144a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
label_144a2c:
    // 0x144a2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x144a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_144a30:
    // 0x144a30: 0x0  nop
    ctx->pc = 0x144a30u;
    // NOP
label_144a34:
    // 0x144a34: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x144a34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_144a38:
    // 0x144a38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x144a38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_144a3c:
    // 0x144a3c: 0xc09b164  jal         func_26C590
label_144a40:
    if (ctx->pc == 0x144A40u) {
        ctx->pc = 0x144A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A3Cu;
        // 0x144a40: 0x461abdc0  add.s       $f23, $f23, $f26 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A44u;
        goto label_144a44;
    }
    ctx->pc = 0x144A3Cu;
    SET_GPR_U32(ctx, 31, 0x144A44u);
    ctx->pc = 0x144A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A3Cu;
    // 0x144a40: 0x461abdc0  add.s       $f23, $f23, $f26 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x144A3Cu, 0x144A44u)) {
        return;
    }
    ctx->pc = 0x144A44u;
label_144a44:
    // 0x144a44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x144a44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_144a48:
    // 0x144a48: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x144a48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_144a4c:
    // 0x144a4c: 0xc09b0e8  jal         func_26C3A0
label_144a50:
    if (ctx->pc == 0x144A50u) {
        ctx->pc = 0x144A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A4Cu;
        // 0x144a50: 0x461aa500  add.s       $f20, $f20, $f26 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A54u;
        goto label_144a54;
    }
    ctx->pc = 0x144A4Cu;
    SET_GPR_U32(ctx, 31, 0x144A54u);
    ctx->pc = 0x144A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A4Cu;
    // 0x144a50: 0x461aa500  add.s       $f20, $f20, $f26 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x144A4Cu, 0x144A54u)) {
        return;
    }
    ctx->pc = 0x144A54u;
label_144a54:
    // 0x144a54: 0x4616a842  mul.s       $f1, $f21, $f22
    ctx->pc = 0x144a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
label_144a58:
    // 0x144a58: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x144a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_144a5c:
    // 0x144a5c: 0xe7a102c0  swc1        $f1, 0x2C0($sp)
    ctx->pc = 0x144a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_144a60:
    // 0x144a60: 0xe7b902c8  swc1        $f25, 0x2C8($sp)
    ctx->pc = 0x144a60u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_144a64:
    // 0x144a64: 0xe7a002c4  swc1        $f0, 0x2C4($sp)
    ctx->pc = 0x144a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_144a68:
    // 0x144a68: 0x6ba602c7  ldl         $a2, 0x2C7($sp)
    ctx->pc = 0x144a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_144a6c:
    // 0x144a6c: 0x6fa602c0  ldr         $a2, 0x2C0($sp)
    ctx->pc = 0x144a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_144a70:
    // 0x144a70: 0x8fa702c8  lw          $a3, 0x2C8($sp)
    ctx->pc = 0x144a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
label_144a74:
    // 0x144a74: 0xb206fffb  sdl         $a2, -0x5($s0)
    ctx->pc = 0x144a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144a78:
    // 0x144a78: 0xb606fff4  sdr         $a2, -0xC($s0)
    ctx->pc = 0x144a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144a7c:
    // 0x144a7c: 0xae07fffc  sw          $a3, -0x4($s0)
    ctx->pc = 0x144a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 7));
label_144a80:
    // 0x144a80: 0xc09b164  jal         func_26C590
label_144a84:
    if (ctx->pc == 0x144A84u) {
        ctx->pc = 0x144A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A80u;
        // 0x144a84: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A88u;
        goto label_144a88;
    }
    ctx->pc = 0x144A80u;
    SET_GPR_U32(ctx, 31, 0x144A88u);
    ctx->pc = 0x144A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A80u;
    // 0x144a84: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x144A80u, 0x144A88u)) {
        return;
    }
    ctx->pc = 0x144A88u;
label_144a88:
    // 0x144a88: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x144a88u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_144a8c:
    // 0x144a8c: 0xc09b0e8  jal         func_26C3A0
label_144a90:
    if (ctx->pc == 0x144A90u) {
        ctx->pc = 0x144A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A8Cu;
        // 0x144a90: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A94u;
        goto label_144a94;
    }
    ctx->pc = 0x144A8Cu;
    SET_GPR_U32(ctx, 31, 0x144A94u);
    ctx->pc = 0x144A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A8Cu;
    // 0x144a90: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x144A8Cu, 0x144A94u)) {
        return;
    }
    ctx->pc = 0x144A94u;
label_144a94:
    // 0x144a94: 0x4618a842  mul.s       $f1, $f21, $f24
    ctx->pc = 0x144a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
label_144a98:
    // 0x144a98: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x144a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_144a9c:
    // 0x144a9c: 0x46180840  add.s       $f1, $f1, $f24
    ctx->pc = 0x144a9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
label_144aa0:
    // 0x144aa0: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x144aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_144aa4:
    // 0x144aa4: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x144aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_144aa8:
    // 0x144aa8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x144aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_144aac:
    // 0x144aac: 0x93a202a0  lbu         $v0, 0x2A0($sp)
    ctx->pc = 0x144aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 672)));
label_144ab0:
    // 0x144ab0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x144ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_144ab4:
    // 0x144ab4: 0x93a302a1  lbu         $v1, 0x2A1($sp)
    ctx->pc = 0x144ab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 673)));
label_144ab8:
    // 0x144ab8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x144ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_144abc:
    // 0x144abc: 0x93a202a2  lbu         $v0, 0x2A2($sp)
    ctx->pc = 0x144abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 674)));
label_144ac0:
    // 0x144ac0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x144ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_144ac4:
    // 0x144ac4: 0x93a302a3  lbu         $v1, 0x2A3($sp)
    ctx->pc = 0x144ac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 675)));
label_144ac8:
    // 0x144ac8: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x144ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_144acc:
    // 0x144acc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x144accu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_144ad0:
    // 0x144ad0: 0x661ffd9  bgez        $s3, . + 4 + (-0x27 << 2)
label_144ad4:
    if (ctx->pc == 0x144AD4u) {
        ctx->pc = 0x144AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AD0u;
        // 0x144ad4: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144AD8u;
        goto label_144ad8;
    }
    ctx->pc = 0x144AD0u;
    {
        const bool branch_taken_0x144ad0 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x144AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AD0u;
        // 0x144ad4: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ad0) {
            ctx->pc = 0x144A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144a38;
        }
    }
    ctx->pc = 0x144AD8u;
label_144ad8:
    // 0x144ad8: 0x8e460128  lw          $a2, 0x128($s2)
    ctx->pc = 0x144ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_144adc:
    // 0x144adc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144ae0:
    // 0x144ae0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x144ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_144ae4:
    // 0x144ae4: 0xc091fea  jal         func_247FA8
label_144ae8:
    if (ctx->pc == 0x144AE8u) {
        ctx->pc = 0x144AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AE4u;
        // 0x144ae8: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144AECu;
        goto label_144aec;
    }
    ctx->pc = 0x144AE4u;
    SET_GPR_U32(ctx, 31, 0x144AECu);
    ctx->pc = 0x144AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144AE4u;
    // 0x144ae8: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x144AE4u, 0x144AECu)) {
        return;
    }
    ctx->pc = 0x144AECu;
label_144aec:
    // 0x144aec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_144af0:
    if (ctx->pc == 0x144AF0u) {
        ctx->pc = 0x144AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AECu;
        // 0x144af0: 0x8e420128  lw          $v0, 0x128($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144AF4u;
        goto label_144af4;
    }
    ctx->pc = 0x144AECu;
    {
        const bool branch_taken_0x144aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144aec) {
            ctx->pc = 0x144AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144AECu;
            // 0x144af0: 0x8e420128  lw          $v0, 0x128($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144B08u;
            goto label_144b08;
        }
    }
    ctx->pc = 0x144AF4u;
label_144af4:
    // 0x144af4: 0xc092094  jal         func_248250
label_144af8:
    if (ctx->pc == 0x144AF8u) {
        ctx->pc = 0x144AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AF4u;
        // 0x144af8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144AFCu;
        goto label_144afc;
    }
    ctx->pc = 0x144AF4u;
    SET_GPR_U32(ctx, 31, 0x144AFCu);
    ctx->pc = 0x144AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144AF4u;
    // 0x144af8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248250u, 0x144AF4u, 0x144AFCu)) {
        return;
    }
    ctx->pc = 0x144AFCu;
label_144afc:
    // 0x144afc: 0xc092016  jal         func_248058
label_144b00:
    if (ctx->pc == 0x144B00u) {
        ctx->pc = 0x144B04u;
        goto label_144b04;
    }
    ctx->pc = 0x144AFCu;
    SET_GPR_U32(ctx, 31, 0x144B04u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x144AFCu, 0x144B04u)) {
        return;
    }
    ctx->pc = 0x144B04u;
label_144b04:
    // 0x144b04: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x144b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_144b08:
    // 0x144b08: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x144b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_144b0c:
    // 0x144b0c: 0x6a830007  ldl         $v1, 0x7($s4)
    ctx->pc = 0x144b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_144b10:
    // 0x144b10: 0x6e830000  ldr         $v1, 0x0($s4)
    ctx->pc = 0x144b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_144b14:
    // 0x144b14: 0x6a84000f  ldl         $a0, 0xF($s4)
    ctx->pc = 0x144b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_144b18:
    // 0x144b18: 0x6e840008  ldr         $a0, 0x8($s4)
    ctx->pc = 0x144b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_144b1c:
    // 0x144b1c: 0x6a860017  ldl         $a2, 0x17($s4)
    ctx->pc = 0x144b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_144b20:
    // 0x144b20: 0x6e860010  ldr         $a2, 0x10($s4)
    ctx->pc = 0x144b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_144b24:
    // 0x144b24: 0x6a87001f  ldl         $a3, 0x1F($s4)
    ctx->pc = 0x144b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_144b28:
    // 0x144b28: 0x6e870018  ldr         $a3, 0x18($s4)
    ctx->pc = 0x144b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_144b2c:
    // 0x144b2c: 0xb3a302d7  sdl         $v1, 0x2D7($sp)
    ctx->pc = 0x144b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b30:
    // 0x144b30: 0xb7a302d0  sdr         $v1, 0x2D0($sp)
    ctx->pc = 0x144b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b34:
    // 0x144b34: 0xb3a402df  sdl         $a0, 0x2DF($sp)
    ctx->pc = 0x144b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 735); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b38:
    // 0x144b38: 0xb7a402d8  sdr         $a0, 0x2D8($sp)
    ctx->pc = 0x144b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b3c:
    // 0x144b3c: 0xb3a602e7  sdl         $a2, 0x2E7($sp)
    ctx->pc = 0x144b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b40:
    // 0x144b40: 0xb7a602e0  sdr         $a2, 0x2E0($sp)
    ctx->pc = 0x144b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 736); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b44:
    // 0x144b44: 0xb3a702ef  sdl         $a3, 0x2EF($sp)
    ctx->pc = 0x144b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b48:
    // 0x144b48: 0xb7a702e8  sdr         $a3, 0x2E8($sp)
    ctx->pc = 0x144b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b4c:
    // 0x144b4c: 0x6a830027  ldl         $v1, 0x27($s4)
    ctx->pc = 0x144b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_144b50:
    // 0x144b50: 0x6e830020  ldr         $v1, 0x20($s4)
    ctx->pc = 0x144b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_144b54:
    // 0x144b54: 0x6a84002f  ldl         $a0, 0x2F($s4)
    ctx->pc = 0x144b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_144b58:
    // 0x144b58: 0x6e840028  ldr         $a0, 0x28($s4)
    ctx->pc = 0x144b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_144b5c:
    // 0x144b5c: 0x6a860037  ldl         $a2, 0x37($s4)
    ctx->pc = 0x144b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_144b60:
    // 0x144b60: 0x6e860030  ldr         $a2, 0x30($s4)
    ctx->pc = 0x144b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_144b64:
    // 0x144b64: 0x6a87003f  ldl         $a3, 0x3F($s4)
    ctx->pc = 0x144b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_144b68:
    // 0x144b68: 0x6e870038  ldr         $a3, 0x38($s4)
    ctx->pc = 0x144b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_144b6c:
    // 0x144b6c: 0xb3a302f7  sdl         $v1, 0x2F7($sp)
    ctx->pc = 0x144b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b70:
    // 0x144b70: 0xb7a302f0  sdr         $v1, 0x2F0($sp)
    ctx->pc = 0x144b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 752); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b74:
    // 0x144b74: 0xb3a402ff  sdl         $a0, 0x2FF($sp)
    ctx->pc = 0x144b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b78:
    // 0x144b78: 0xb7a402f8  sdr         $a0, 0x2F8($sp)
    ctx->pc = 0x144b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 760); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b7c:
    // 0x144b7c: 0xb3a60307  sdl         $a2, 0x307($sp)
    ctx->pc = 0x144b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 775); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b80:
    // 0x144b80: 0xb7a60300  sdr         $a2, 0x300($sp)
    ctx->pc = 0x144b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 768); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b84:
    // 0x144b84: 0xb3a7030f  sdl         $a3, 0x30F($sp)
    ctx->pc = 0x144b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b88:
    // 0x144b88: 0xb7a70308  sdr         $a3, 0x308($sp)
    ctx->pc = 0x144b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 776); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b8c:
    // 0x144b8c: 0x68480037  ldl         $t0, 0x37($v0)
    ctx->pc = 0x144b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_144b90:
    // 0x144b90: 0x6c480030  ldr         $t0, 0x30($v0)
    ctx->pc = 0x144b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_144b94:
    // 0x144b94: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x144b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_144b98:
    // 0x144b98: 0xb3a80307  sdl         $t0, 0x307($sp)
    ctx->pc = 0x144b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 775); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144b9c:
    // 0x144b9c: 0xb7a80300  sdr         $t0, 0x300($sp)
    ctx->pc = 0x144b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 768); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144ba0:
    // 0x144ba0: 0xafa30308  sw          $v1, 0x308($sp)
    ctx->pc = 0x144ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 3));
label_144ba4:
    // 0x144ba4: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x144ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_144ba8:
    // 0x144ba8: 0x93a202b0  lbu         $v0, 0x2B0($sp)
    ctx->pc = 0x144ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 688)));
label_144bac:
    // 0x144bac: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x144bacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_144bb0:
    // 0x144bb0: 0x93a302b1  lbu         $v1, 0x2B1($sp)
    ctx->pc = 0x144bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 689)));
label_144bb4:
    // 0x144bb4: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x144bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_144bb8:
    // 0x144bb8: 0x93a202b2  lbu         $v0, 0x2B2($sp)
    ctx->pc = 0x144bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 690)));
label_144bbc:
    // 0x144bbc: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x144bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_144bc0:
    // 0x144bc0: 0x93a302b3  lbu         $v1, 0x2B3($sp)
    ctx->pc = 0x144bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 691)));
label_144bc4:
    // 0x144bc4: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x144bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_144bc8:
    // 0x144bc8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x144bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_144bcc:
    // 0x144bcc: 0x4c1fff6  bgez        $a2, . + 4 + (-0xA << 2)
label_144bd0:
    if (ctx->pc == 0x144BD0u) {
        ctx->pc = 0x144BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BCCu;
        // 0x144bd0: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144BD4u;
        goto label_144bd4;
    }
    ctx->pc = 0x144BCCu;
    {
        const bool branch_taken_0x144bcc = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x144BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BCCu;
        // 0x144bd0: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144bcc) {
            ctx->pc = 0x144BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144ba8;
        }
    }
    ctx->pc = 0x144BD4u;
label_144bd4:
    // 0x144bd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x144bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144bd8:
    // 0x144bd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144bdc:
    // 0x144bdc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x144bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_144be0:
    // 0x144be0: 0xc091fea  jal         func_247FA8
label_144be4:
    if (ctx->pc == 0x144BE4u) {
        ctx->pc = 0x144BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BE0u;
        // 0x144be4: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144BE8u;
        goto label_144be8;
    }
    ctx->pc = 0x144BE0u;
    SET_GPR_U32(ctx, 31, 0x144BE8u);
    ctx->pc = 0x144BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BE0u;
    // 0x144be4: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x144BE0u, 0x144BE8u)) {
        return;
    }
    ctx->pc = 0x144BE8u;
label_144be8:
    // 0x144be8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_144bec:
    if (ctx->pc == 0x144BECu) {
        ctx->pc = 0x144BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BE8u;
        // 0x144bec: 0x26b00fd8  addiu       $s0, $s5, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144BF0u;
        goto label_144bf0;
    }
    ctx->pc = 0x144BE8u;
    {
        const bool branch_taken_0x144be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BE8u;
        // 0x144bec: 0x26b00fd8  addiu       $s0, $s5, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144be8) {
            ctx->pc = 0x144C00u;
            goto label_144c00;
        }
    }
    ctx->pc = 0x144BF0u;
label_144bf0:
    // 0x144bf0: 0xc092094  jal         func_248250
label_144bf4:
    if (ctx->pc == 0x144BF4u) {
        ctx->pc = 0x144BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BF0u;
        // 0x144bf4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144BF8u;
        goto label_144bf8;
    }
    ctx->pc = 0x144BF0u;
    SET_GPR_U32(ctx, 31, 0x144BF8u);
    ctx->pc = 0x144BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BF0u;
    // 0x144bf4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248250u, 0x144BF0u, 0x144BF8u)) {
        return;
    }
    ctx->pc = 0x144BF8u;
label_144bf8:
    // 0x144bf8: 0xc092016  jal         func_248058
label_144bfc:
    if (ctx->pc == 0x144BFCu) {
        ctx->pc = 0x144BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BF8u;
        // 0x144bfc: 0x26b00fd8  addiu       $s0, $s5, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C00u;
        goto label_144c00;
    }
    ctx->pc = 0x144BF8u;
    SET_GPR_U32(ctx, 31, 0x144C00u);
    ctx->pc = 0x144BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BF8u;
    // 0x144bfc: 0x26b00fd8  addiu       $s0, $s5, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x144BF8u, 0x144C00u)) {
        return;
    }
    ctx->pc = 0x144C00u;
label_144c00:
    // 0x144c00: 0x8fa50310  lw          $a1, 0x310($sp)
    ctx->pc = 0x144c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_144c04:
    // 0x144c04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x144c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144c08:
    // 0x144c08: 0x40f809  jalr        $v0
label_144c0c:
    if (ctx->pc == 0x144C0Cu) {
        ctx->pc = 0x144C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C08u;
        // 0x144c0c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C10u;
        goto label_144c10;
    }
    ctx->pc = 0x144C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144C10u);
        ctx->pc = 0x144C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C08u;
        // 0x144c0c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C08u, 0x144C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144C10u;
label_144c10:
    // 0x144c10: 0x8fa50314  lw          $a1, 0x314($sp)
    ctx->pc = 0x144c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_144c14:
    // 0x144c14: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x144c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144c18:
    // 0x144c18: 0x40f809  jalr        $v0
label_144c1c:
    if (ctx->pc == 0x144C1Cu) {
        ctx->pc = 0x144C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C18u;
        // 0x144c1c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C20u;
        goto label_144c20;
    }
    ctx->pc = 0x144C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144C20u);
        ctx->pc = 0x144C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C18u;
        // 0x144c1c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C18u, 0x144C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144C20u;
label_144c20:
    // 0x144c20: 0x8fa50318  lw          $a1, 0x318($sp)
    ctx->pc = 0x144c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
label_144c24:
    // 0x144c24: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x144c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144c28:
    // 0x144c28: 0x40f809  jalr        $v0
label_144c2c:
    if (ctx->pc == 0x144C2Cu) {
        ctx->pc = 0x144C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C28u;
        // 0x144c2c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C30u;
        goto label_144c30;
    }
    ctx->pc = 0x144C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144C30u);
        ctx->pc = 0x144C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C28u;
        // 0x144c2c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C28u, 0x144C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144C30u;
label_144c30:
    // 0x144c30: 0x8fa5031c  lw          $a1, 0x31C($sp)
    ctx->pc = 0x144c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
label_144c34:
    // 0x144c34: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x144c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144c38:
    // 0x144c38: 0x40f809  jalr        $v0
label_144c3c:
    if (ctx->pc == 0x144C3Cu) {
        ctx->pc = 0x144C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C38u;
        // 0x144c3c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C40u;
        goto label_144c40;
    }
    ctx->pc = 0x144C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144C40u);
        ctx->pc = 0x144C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C38u;
        // 0x144c3c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C38u, 0x144C40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144C40u;
label_144c40:
    // 0x144c40: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x144c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_144c44:
    // 0x144c44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x144c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144c48:
    // 0x144c48: 0x40f809  jalr        $v0
label_144c4c:
    if (ctx->pc == 0x144C4Cu) {
        ctx->pc = 0x144C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C48u;
        // 0x144c4c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C50u;
        goto label_144c50;
    }
    ctx->pc = 0x144C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144C50u);
        ctx->pc = 0x144C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C48u;
        // 0x144c4c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C48u, 0x144C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144C50u;
label_144c50:
    // 0x144c50: 0x8fa50324  lw          $a1, 0x324($sp)
    ctx->pc = 0x144c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_144c54:
    // 0x144c54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x144c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144c58:
    // 0x144c58: 0x40f809  jalr        $v0
label_144c5c:
    if (ctx->pc == 0x144C5Cu) {
        ctx->pc = 0x144C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C58u;
        // 0x144c5c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C60u;
        goto label_144c60;
    }
    ctx->pc = 0x144C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144C60u);
        ctx->pc = 0x144C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C58u;
        // 0x144c5c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C58u, 0x144C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144C60u;
label_144c60:
    // 0x144c60: 0x8fa50328  lw          $a1, 0x328($sp)
    ctx->pc = 0x144c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_144c64:
    // 0x144c64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x144c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144c68:
    // 0x144c68: 0x40f809  jalr        $v0
label_144c6c:
    if (ctx->pc == 0x144C6Cu) {
        ctx->pc = 0x144C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C68u;
        // 0x144c6c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C70u;
        goto label_144c70;
    }
    ctx->pc = 0x144C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144C70u);
        ctx->pc = 0x144C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C68u;
        // 0x144c6c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C68u, 0x144C70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144C70u;
label_144c70:
    // 0x144c70: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x144c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144c74:
    // 0x144c74: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x144c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_144c78:
    // 0x144c78: 0x40f809  jalr        $v0
label_144c7c:
    if (ctx->pc == 0x144C7Cu) {
        ctx->pc = 0x144C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C78u;
        // 0x144c7c: 0x8fa5032c  lw          $a1, 0x32C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C80u;
        goto label_144c80;
    }
    ctx->pc = 0x144C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144C80u);
        ctx->pc = 0x144C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C78u;
        // 0x144c7c: 0x8fa5032c  lw          $a1, 0x32C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C78u, 0x144C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144C80u;
label_144c80:
    // 0x144c80: 0x7bb00390  lq          $s0, 0x390($sp)
    ctx->pc = 0x144c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 912)));
label_144c84:
    // 0x144c84: 0x7bb10380  lq          $s1, 0x380($sp)
    ctx->pc = 0x144c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 896)));
label_144c88:
    // 0x144c88: 0x7bb20370  lq          $s2, 0x370($sp)
    ctx->pc = 0x144c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_144c8c:
    // 0x144c8c: 0x7bb30360  lq          $s3, 0x360($sp)
    ctx->pc = 0x144c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_144c90:
    // 0x144c90: 0x7bb40350  lq          $s4, 0x350($sp)
    ctx->pc = 0x144c90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_144c94:
    // 0x144c94: 0x7bb50340  lq          $s5, 0x340($sp)
    ctx->pc = 0x144c94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_144c98:
    // 0x144c98: 0xdfbf0330  ld          $ra, 0x330($sp)
    ctx->pc = 0x144c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 816)));
label_144c9c:
    // 0x144c9c: 0xc7ba03d0  lwc1        $f26, 0x3D0($sp)
    ctx->pc = 0x144c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_144ca0:
    // 0x144ca0: 0xc7b903c8  lwc1        $f25, 0x3C8($sp)
    ctx->pc = 0x144ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_144ca4:
    // 0x144ca4: 0xc7b803c0  lwc1        $f24, 0x3C0($sp)
    ctx->pc = 0x144ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_144ca8:
    // 0x144ca8: 0xc7b703b8  lwc1        $f23, 0x3B8($sp)
    ctx->pc = 0x144ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_144cac:
    // 0x144cac: 0xc7b603b0  lwc1        $f22, 0x3B0($sp)
    ctx->pc = 0x144cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_144cb0:
    // 0x144cb0: 0xc7b503a8  lwc1        $f21, 0x3A8($sp)
    ctx->pc = 0x144cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_144cb4:
    // 0x144cb4: 0xc7b403a0  lwc1        $f20, 0x3A0($sp)
    ctx->pc = 0x144cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_144cb8:
    // 0x144cb8: 0x3e00008  jr          $ra
label_144cbc:
    if (ctx->pc == 0x144CBCu) {
        ctx->pc = 0x144CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CB8u;
        // 0x144cbc: 0x27bd03e0  addiu       $sp, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144CC0u;
        goto label_fallthrough_0x144cb8;
    }
    ctx->pc = 0x144CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CB8u;
        // 0x144cbc: 0x27bd03e0  addiu       $sp, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x144cb8:
    ctx->pc = 0x144CC0u;
}
