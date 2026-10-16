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

// Function: sub_00185788
// Address: 0x185788 - 0x185b18
void sub_00185788_0x185788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185788_0x185788");
#endif

    switch (ctx->pc) {
        case 0x185788u: goto label_185788;
        case 0x18578cu: goto label_18578c;
        case 0x185790u: goto label_185790;
        case 0x185794u: goto label_185794;
        case 0x185798u: goto label_185798;
        case 0x18579cu: goto label_18579c;
        case 0x1857a0u: goto label_1857a0;
        case 0x1857a4u: goto label_1857a4;
        case 0x1857a8u: goto label_1857a8;
        case 0x1857acu: goto label_1857ac;
        case 0x1857b0u: goto label_1857b0;
        case 0x1857b4u: goto label_1857b4;
        case 0x1857b8u: goto label_1857b8;
        case 0x1857bcu: goto label_1857bc;
        case 0x1857c0u: goto label_1857c0;
        case 0x1857c4u: goto label_1857c4;
        case 0x1857c8u: goto label_1857c8;
        case 0x1857ccu: goto label_1857cc;
        case 0x1857d0u: goto label_1857d0;
        case 0x1857d4u: goto label_1857d4;
        case 0x1857d8u: goto label_1857d8;
        case 0x1857dcu: goto label_1857dc;
        case 0x1857e0u: goto label_1857e0;
        case 0x1857e4u: goto label_1857e4;
        case 0x1857e8u: goto label_1857e8;
        case 0x1857ecu: goto label_1857ec;
        case 0x1857f0u: goto label_1857f0;
        case 0x1857f4u: goto label_1857f4;
        case 0x1857f8u: goto label_1857f8;
        case 0x1857fcu: goto label_1857fc;
        case 0x185800u: goto label_185800;
        case 0x185804u: goto label_185804;
        case 0x185808u: goto label_185808;
        case 0x18580cu: goto label_18580c;
        case 0x185810u: goto label_185810;
        case 0x185814u: goto label_185814;
        case 0x185818u: goto label_185818;
        case 0x18581cu: goto label_18581c;
        case 0x185820u: goto label_185820;
        case 0x185824u: goto label_185824;
        case 0x185828u: goto label_185828;
        case 0x18582cu: goto label_18582c;
        case 0x185830u: goto label_185830;
        case 0x185834u: goto label_185834;
        case 0x185838u: goto label_185838;
        case 0x18583cu: goto label_18583c;
        case 0x185840u: goto label_185840;
        case 0x185844u: goto label_185844;
        case 0x185848u: goto label_185848;
        case 0x18584cu: goto label_18584c;
        case 0x185850u: goto label_185850;
        case 0x185854u: goto label_185854;
        case 0x185858u: goto label_185858;
        case 0x18585cu: goto label_18585c;
        case 0x185860u: goto label_185860;
        case 0x185864u: goto label_185864;
        case 0x185868u: goto label_185868;
        case 0x18586cu: goto label_18586c;
        case 0x185870u: goto label_185870;
        case 0x185874u: goto label_185874;
        case 0x185878u: goto label_185878;
        case 0x18587cu: goto label_18587c;
        case 0x185880u: goto label_185880;
        case 0x185884u: goto label_185884;
        case 0x185888u: goto label_185888;
        case 0x18588cu: goto label_18588c;
        case 0x185890u: goto label_185890;
        case 0x185894u: goto label_185894;
        case 0x185898u: goto label_185898;
        case 0x18589cu: goto label_18589c;
        case 0x1858a0u: goto label_1858a0;
        case 0x1858a4u: goto label_1858a4;
        case 0x1858a8u: goto label_1858a8;
        case 0x1858acu: goto label_1858ac;
        case 0x1858b0u: goto label_1858b0;
        case 0x1858b4u: goto label_1858b4;
        case 0x1858b8u: goto label_1858b8;
        case 0x1858bcu: goto label_1858bc;
        case 0x1858c0u: goto label_1858c0;
        case 0x1858c4u: goto label_1858c4;
        case 0x1858c8u: goto label_1858c8;
        case 0x1858ccu: goto label_1858cc;
        case 0x1858d0u: goto label_1858d0;
        case 0x1858d4u: goto label_1858d4;
        case 0x1858d8u: goto label_1858d8;
        case 0x1858dcu: goto label_1858dc;
        case 0x1858e0u: goto label_1858e0;
        case 0x1858e4u: goto label_1858e4;
        case 0x1858e8u: goto label_1858e8;
        case 0x1858ecu: goto label_1858ec;
        case 0x1858f0u: goto label_1858f0;
        case 0x1858f4u: goto label_1858f4;
        case 0x1858f8u: goto label_1858f8;
        case 0x1858fcu: goto label_1858fc;
        case 0x185900u: goto label_185900;
        case 0x185904u: goto label_185904;
        case 0x185908u: goto label_185908;
        case 0x18590cu: goto label_18590c;
        case 0x185910u: goto label_185910;
        case 0x185914u: goto label_185914;
        case 0x185918u: goto label_185918;
        case 0x18591cu: goto label_18591c;
        case 0x185920u: goto label_185920;
        case 0x185924u: goto label_185924;
        case 0x185928u: goto label_185928;
        case 0x18592cu: goto label_18592c;
        case 0x185930u: goto label_185930;
        case 0x185934u: goto label_185934;
        case 0x185938u: goto label_185938;
        case 0x18593cu: goto label_18593c;
        case 0x185940u: goto label_185940;
        case 0x185944u: goto label_185944;
        case 0x185948u: goto label_185948;
        case 0x18594cu: goto label_18594c;
        case 0x185950u: goto label_185950;
        case 0x185954u: goto label_185954;
        case 0x185958u: goto label_185958;
        case 0x18595cu: goto label_18595c;
        case 0x185960u: goto label_185960;
        case 0x185964u: goto label_185964;
        case 0x185968u: goto label_185968;
        case 0x18596cu: goto label_18596c;
        case 0x185970u: goto label_185970;
        case 0x185974u: goto label_185974;
        case 0x185978u: goto label_185978;
        case 0x18597cu: goto label_18597c;
        case 0x185980u: goto label_185980;
        case 0x185984u: goto label_185984;
        case 0x185988u: goto label_185988;
        case 0x18598cu: goto label_18598c;
        case 0x185990u: goto label_185990;
        case 0x185994u: goto label_185994;
        case 0x185998u: goto label_185998;
        case 0x18599cu: goto label_18599c;
        case 0x1859a0u: goto label_1859a0;
        case 0x1859a4u: goto label_1859a4;
        case 0x1859a8u: goto label_1859a8;
        case 0x1859acu: goto label_1859ac;
        case 0x1859b0u: goto label_1859b0;
        case 0x1859b4u: goto label_1859b4;
        case 0x1859b8u: goto label_1859b8;
        case 0x1859bcu: goto label_1859bc;
        case 0x1859c0u: goto label_1859c0;
        case 0x1859c4u: goto label_1859c4;
        case 0x1859c8u: goto label_1859c8;
        case 0x1859ccu: goto label_1859cc;
        case 0x1859d0u: goto label_1859d0;
        case 0x1859d4u: goto label_1859d4;
        case 0x1859d8u: goto label_1859d8;
        case 0x1859dcu: goto label_1859dc;
        case 0x1859e0u: goto label_1859e0;
        case 0x1859e4u: goto label_1859e4;
        case 0x1859e8u: goto label_1859e8;
        case 0x1859ecu: goto label_1859ec;
        case 0x1859f0u: goto label_1859f0;
        case 0x1859f4u: goto label_1859f4;
        case 0x1859f8u: goto label_1859f8;
        case 0x1859fcu: goto label_1859fc;
        case 0x185a00u: goto label_185a00;
        case 0x185a04u: goto label_185a04;
        case 0x185a08u: goto label_185a08;
        case 0x185a0cu: goto label_185a0c;
        case 0x185a10u: goto label_185a10;
        case 0x185a14u: goto label_185a14;
        case 0x185a18u: goto label_185a18;
        case 0x185a1cu: goto label_185a1c;
        case 0x185a20u: goto label_185a20;
        case 0x185a24u: goto label_185a24;
        case 0x185a28u: goto label_185a28;
        case 0x185a2cu: goto label_185a2c;
        case 0x185a30u: goto label_185a30;
        case 0x185a34u: goto label_185a34;
        case 0x185a38u: goto label_185a38;
        case 0x185a3cu: goto label_185a3c;
        case 0x185a40u: goto label_185a40;
        case 0x185a44u: goto label_185a44;
        case 0x185a48u: goto label_185a48;
        case 0x185a4cu: goto label_185a4c;
        case 0x185a50u: goto label_185a50;
        case 0x185a54u: goto label_185a54;
        case 0x185a58u: goto label_185a58;
        case 0x185a5cu: goto label_185a5c;
        case 0x185a60u: goto label_185a60;
        case 0x185a64u: goto label_185a64;
        case 0x185a68u: goto label_185a68;
        case 0x185a6cu: goto label_185a6c;
        case 0x185a70u: goto label_185a70;
        case 0x185a74u: goto label_185a74;
        case 0x185a78u: goto label_185a78;
        case 0x185a7cu: goto label_185a7c;
        case 0x185a80u: goto label_185a80;
        case 0x185a84u: goto label_185a84;
        case 0x185a88u: goto label_185a88;
        case 0x185a8cu: goto label_185a8c;
        case 0x185a90u: goto label_185a90;
        case 0x185a94u: goto label_185a94;
        case 0x185a98u: goto label_185a98;
        case 0x185a9cu: goto label_185a9c;
        case 0x185aa0u: goto label_185aa0;
        case 0x185aa4u: goto label_185aa4;
        case 0x185aa8u: goto label_185aa8;
        case 0x185aacu: goto label_185aac;
        case 0x185ab0u: goto label_185ab0;
        case 0x185ab4u: goto label_185ab4;
        case 0x185ab8u: goto label_185ab8;
        case 0x185abcu: goto label_185abc;
        case 0x185ac0u: goto label_185ac0;
        case 0x185ac4u: goto label_185ac4;
        case 0x185ac8u: goto label_185ac8;
        case 0x185accu: goto label_185acc;
        case 0x185ad0u: goto label_185ad0;
        case 0x185ad4u: goto label_185ad4;
        case 0x185ad8u: goto label_185ad8;
        case 0x185adcu: goto label_185adc;
        case 0x185ae0u: goto label_185ae0;
        case 0x185ae4u: goto label_185ae4;
        case 0x185ae8u: goto label_185ae8;
        case 0x185aecu: goto label_185aec;
        case 0x185af0u: goto label_185af0;
        case 0x185af4u: goto label_185af4;
        case 0x185af8u: goto label_185af8;
        case 0x185afcu: goto label_185afc;
        case 0x185b00u: goto label_185b00;
        case 0x185b04u: goto label_185b04;
        case 0x185b08u: goto label_185b08;
        case 0x185b0cu: goto label_185b0c;
        case 0x185b10u: goto label_185b10;
        case 0x185b14u: goto label_185b14;
        default: break;
    }

    ctx->pc = 0x185788u;

label_185788:
    // 0x185788: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x185788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_18578c:
    // 0x18578c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x18578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_185790:
    // 0x185790: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x185790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_185794:
    // 0x185794: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_185798:
    // 0x185798: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x185798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_18579c:
    // 0x18579c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18579cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1857a0:
    // 0x1857a0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1857a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1857a4:
    // 0x1857a4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1857a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1857a8:
    // 0x1857a8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1857a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1857ac:
    // 0x1857ac: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1857acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1857b0:
    // 0x1857b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1857b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1857b4:
    // 0x1857b4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1857b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1857b8:
    // 0x1857b8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1857b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1857bc:
    // 0x1857bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1857bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1857c0:
    // 0x1857c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1857c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1857c4:
    // 0x1857c4: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x1857c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_1857c8:
    // 0x1857c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1857c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1857cc:
    // 0x1857cc: 0x8c43fff0  lw          $v1, -0x10($v0)
    ctx->pc = 0x1857ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
label_1857d0:
    // 0x1857d0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1857d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1857d4:
    // 0x1857d4: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x1857d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_1857d8:
    // 0x1857d8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1857d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1857dc:
    // 0x1857dc: 0x911823  subu        $v1, $a0, $s1
    ctx->pc = 0x1857dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1857e0:
    // 0x1857e0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1857e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1857e4:
    // 0x1857e4: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1857e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1857e8:
    // 0x1857e8: 0xc2f00a  movz        $fp, $a2, $v0
    ctx->pc = 0x1857e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6));
label_1857ec:
    // 0x1857ec: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1857ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1857f0:
    // 0x1857f0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1857f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1857f4:
    // 0x1857f4: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x1857f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_1857f8:
    // 0x1857f8: 0x5e1823  subu        $v1, $v0, $fp
    ctx->pc = 0x1857f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1857fc:
    // 0x1857fc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1857fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_185800:
    // 0x185800: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x185800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_185804:
    // 0x185804: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x185804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_185808:
    // 0x185808: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x185808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18580c:
    // 0x18580c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_185810:
    if (ctx->pc == 0x185810u) {
        ctx->pc = 0x185810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18580Cu;
        // 0x185810: 0x24650001  addiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185814u;
        goto label_185814;
    }
    ctx->pc = 0x18580Cu;
    {
        const bool branch_taken_0x18580c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18580Cu;
        // 0x185810: 0x24650001  addiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18580c) {
            ctx->pc = 0x185844u;
            goto label_185844;
        }
    }
    ctx->pc = 0x185814u;
label_185814:
    // 0x185814: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x185814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_185818:
    // 0x185818: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x185818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_18581c:
    // 0x18581c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_185820:
    if (ctx->pc == 0x185820u) {
        ctx->pc = 0x185820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18581Cu;
        // 0x185820: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185824u;
        goto label_185824;
    }
    ctx->pc = 0x18581Cu;
    {
        const bool branch_taken_0x18581c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18581c) {
            ctx->pc = 0x185820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18581Cu;
            // 0x185820: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185848u;
            goto label_185848;
        }
    }
    ctx->pc = 0x185824u;
label_185824:
    // 0x185824: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x185824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_185828:
    // 0x185828: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x185828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18582c:
    // 0x18582c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x18582cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_185830:
    // 0x185830: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x185830u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
label_185834:
    // 0x185834: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x185834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_185838:
    // 0x185838: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x185838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_18583c:
    // 0x18583c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_185840:
    if (ctx->pc == 0x185840u) {
        ctx->pc = 0x185844u;
        goto label_185844;
    }
    ctx->pc = 0x18583Cu;
    {
        const bool branch_taken_0x18583c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18583c) {
            ctx->pc = 0x185848u;
            goto label_185848;
        }
    }
    ctx->pc = 0x185844u;
label_185844:
    // 0x185844: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x185844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185848:
    // 0x185848: 0x10e0008b  beqz        $a3, . + 4 + (0x8B << 2)
label_18584c:
    if (ctx->pc == 0x18584Cu) {
        ctx->pc = 0x18584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185848u;
        // 0x18584c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185850u;
        goto label_185850;
    }
    ctx->pc = 0x185848u;
    {
        const bool branch_taken_0x185848 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x18584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185848u;
        // 0x18584c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185848) {
            ctx->pc = 0x185A78u;
            goto label_185a78;
        }
    }
    ctx->pc = 0x185850u;
label_185850:
    // 0x185850: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x185850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_185854:
    // 0x185854: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x185854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_185858:
    // 0x185858: 0x23e2021  addu        $a0, $s1, $fp
    ctx->pc = 0x185858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_18585c:
    // 0x18585c: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x18585cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_185860:
    // 0x185860: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x185860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_185864:
    // 0x185864: 0x2342021  addu        $a0, $s1, $s4
    ctx->pc = 0x185864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_185868:
    // 0x185868: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18586c:
    if (ctx->pc == 0x18586Cu) {
        ctx->pc = 0x18586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185868u;
        // 0x18586c: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185870u;
        goto label_185870;
    }
    ctx->pc = 0x185868u;
    {
        const bool branch_taken_0x185868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185868u;
        // 0x18586c: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185868) {
            ctx->pc = 0x185890u;
            goto label_185890;
        }
    }
    ctx->pc = 0x185870u;
label_185870:
    // 0x185870: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x185870u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_185874:
    // 0x185874: 0x0  nop
    ctx->pc = 0x185874u;
    // NOP
label_185878:
    // 0x185878: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x185878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_18587c:
    // 0x18587c: 0x0  nop
    ctx->pc = 0x18587cu;
    // NOP
label_185880:
    // 0x185880: 0x0  nop
    ctx->pc = 0x185880u;
    // NOP
label_185884:
    // 0x185884: 0x0  nop
    ctx->pc = 0x185884u;
    // NOP
label_185888:
    // 0x185888: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_18588c:
    if (ctx->pc == 0x18588Cu) {
        ctx->pc = 0x18588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185888u;
        // 0x18588c: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185890u;
        goto label_185890;
    }
    ctx->pc = 0x185888u;
    {
        const bool branch_taken_0x185888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185888) {
            ctx->pc = 0x18588Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185888u;
            // 0x18588c: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185878;
        }
    }
    ctx->pc = 0x185890u;
label_185890:
    // 0x185890: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x185890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_185894:
    // 0x185894: 0x2e020081  sltiu       $v0, $s0, 0x81
    ctx->pc = 0x185894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_185898:
    // 0x185898: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_18589c:
    if (ctx->pc == 0x18589Cu) {
        ctx->pc = 0x18589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185898u;
        // 0x18589c: 0x26440017  addiu       $a0, $s2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858A0u;
        goto label_1858a0;
    }
    ctx->pc = 0x185898u;
    {
        const bool branch_taken_0x185898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185898u;
        // 0x18589c: 0x26440017  addiu       $a0, $s2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185898) {
            ctx->pc = 0x185900u;
            goto label_185900;
        }
    }
    ctx->pc = 0x1858A0u;
label_1858a0:
    // 0x1858a0: 0xc0c5472  jal         func_3151C8
label_1858a4:
    if (ctx->pc == 0x1858A4u) {
        ctx->pc = 0x1858A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858A0u;
        // 0x1858a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858A8u;
        goto label_1858a8;
    }
    ctx->pc = 0x1858A0u;
    SET_GPR_U32(ctx, 31, 0x1858A8u);
    ctx->pc = 0x1858A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858A0u;
    // 0x1858a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1858A0u, 0x1858A8u)) {
        return;
    }
    ctx->pc = 0x1858A8u;
label_1858a8:
    // 0x1858a8: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_1858ac:
    if (ctx->pc == 0x1858ACu) {
        ctx->pc = 0x1858ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858A8u;
        // 0x1858ac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858B0u;
        goto label_1858b0;
    }
    ctx->pc = 0x1858A8u;
    {
        const bool branch_taken_0x1858a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1858ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858A8u;
        // 0x1858ac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858a8) {
            ctx->pc = 0x1859ACu;
            goto label_1859ac;
        }
    }
    ctx->pc = 0x1858B0u;
label_1858b0:
    // 0x1858b0: 0x3c170034  lui         $s7, 0x34
    ctx->pc = 0x1858b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
label_1858b4:
    // 0x1858b4: 0x3c150068  lui         $s5, 0x68
    ctx->pc = 0x1858b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)104 << 16));
label_1858b8:
    // 0x1858b8: 0x3c16006a  lui         $s6, 0x6A
    ctx->pc = 0x1858b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)106 << 16));
label_1858bc:
    // 0x1858bc: 0x8ee2828c  lw          $v0, -0x7D74($s7)
    ctx->pc = 0x1858bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294935180)));
label_1858c0:
    // 0x1858c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1858c4:
    if (ctx->pc == 0x1858C4u) {
        ctx->pc = 0x1858C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858C0u;
        // 0x1858c4: 0x26a41878  addiu       $a0, $s5, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858C8u;
        goto label_1858c8;
    }
    ctx->pc = 0x1858C0u;
    {
        const bool branch_taken_0x1858c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1858C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858C0u;
        // 0x1858c4: 0x26a41878  addiu       $a0, $s5, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858c0) {
            ctx->pc = 0x1858E0u;
            goto label_1858e0;
        }
    }
    ctx->pc = 0x1858C8u;
label_1858c8:
    // 0x1858c8: 0xc0a6492  jal         func_299248
label_1858cc:
    if (ctx->pc == 0x1858CCu) {
        ctx->pc = 0x1858CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858C8u;
        // 0x1858cc: 0x26c585a0  addiu       $a1, $s6, -0x7A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858D0u;
        goto label_1858d0;
    }
    ctx->pc = 0x1858C8u;
    SET_GPR_U32(ctx, 31, 0x1858D0u);
    ctx->pc = 0x1858CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858C8u;
    // 0x1858cc: 0x26c585a0  addiu       $a1, $s6, -0x7A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299248u, 0x1858C8u, 0x1858D0u)) {
        return;
    }
    ctx->pc = 0x1858D0u;
label_1858d0:
    // 0x1858d0: 0xc0a6614  jal         func_299850
label_1858d4:
    if (ctx->pc == 0x1858D4u) {
        ctx->pc = 0x1858D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858D0u;
        // 0x1858d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858D8u;
        goto label_1858d8;
    }
    ctx->pc = 0x1858D0u;
    SET_GPR_U32(ctx, 31, 0x1858D8u);
    ctx->pc = 0x1858D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858D0u;
    // 0x1858d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299850u, 0x1858D0u, 0x1858D8u)) {
        return;
    }
    ctx->pc = 0x1858D8u;
label_1858d8:
    // 0x1858d8: 0xc07da60  jal         func_1F6980
label_1858dc:
    if (ctx->pc == 0x1858DCu) {
        ctx->pc = 0x1858DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858D8u;
        // 0x1858dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858E0u;
        goto label_1858e0;
    }
    ctx->pc = 0x1858D8u;
    SET_GPR_U32(ctx, 31, 0x1858E0u);
    ctx->pc = 0x1858DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858D8u;
    // 0x1858dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6980u, 0x1858D8u, 0x1858E0u)) {
        return;
    }
    ctx->pc = 0x1858E0u;
label_1858e0:
    // 0x1858e0: 0x40f809  jalr        $v0
label_1858e4:
    if (ctx->pc == 0x1858E4u) {
        ctx->pc = 0x1858E8u;
        goto label_1858e8;
    }
    ctx->pc = 0x1858E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1858E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1858E0u, 0x1858E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1858E8u;
label_1858e8:
    // 0x1858e8: 0xc0c5472  jal         func_3151C8
label_1858ec:
    if (ctx->pc == 0x1858ECu) {
        ctx->pc = 0x1858ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858E8u;
        // 0x1858ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858F0u;
        goto label_1858f0;
    }
    ctx->pc = 0x1858E8u;
    SET_GPR_U32(ctx, 31, 0x1858F0u);
    ctx->pc = 0x1858ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858E8u;
    // 0x1858ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1858E8u, 0x1858F0u)) {
        return;
    }
    ctx->pc = 0x1858F0u;
label_1858f0:
    // 0x1858f0: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
label_1858f4:
    if (ctx->pc == 0x1858F4u) {
        ctx->pc = 0x1858F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858F0u;
        // 0x1858f4: 0x8ee2828c  lw          $v0, -0x7D74($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294935180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858F8u;
        goto label_1858f8;
    }
    ctx->pc = 0x1858F0u;
    {
        const bool branch_taken_0x1858f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1858f0) {
            ctx->pc = 0x1858F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1858F0u;
            // 0x1858f4: 0x8ee2828c  lw          $v0, -0x7D74($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294935180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1858C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1858c0;
        }
    }
    ctx->pc = 0x1858F8u;
label_1858f8:
    // 0x1858f8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1858fc:
    if (ctx->pc == 0x1858FCu) {
        ctx->pc = 0x1858FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858F8u;
        // 0x1858fc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185900u;
        goto label_185900;
    }
    ctx->pc = 0x1858F8u;
    {
        const bool branch_taken_0x1858f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1858FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858F8u;
        // 0x1858fc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858f8) {
            ctx->pc = 0x1859ACu;
            goto label_1859ac;
        }
    }
    ctx->pc = 0x185900u;
label_185900:
    // 0x185900: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x185900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_185904:
    // 0x185904: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x185904u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_185908:
    // 0x185908: 0x24758290  addiu       $s5, $v1, -0x7D70
    ctx->pc = 0x185908u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_18590c:
    // 0x18590c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_185910:
    // 0x185910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x185910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_185914:
    // 0x185914: 0x552821  addu        $a1, $v0, $s5
    ctx->pc = 0x185914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_185918:
    // 0x185918: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x185918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18591c:
    // 0x18591c: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
label_185920:
    if (ctx->pc == 0x185920u) {
        ctx->pc = 0x185920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18591Cu;
        // 0x185920: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185924u;
        goto label_185924;
    }
    ctx->pc = 0x18591Cu;
    {
        const bool branch_taken_0x18591c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18591c) {
            ctx->pc = 0x185920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18591Cu;
            // 0x185920: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1859A8u;
            goto label_1859a8;
        }
    }
    ctx->pc = 0x185924u;
label_185924:
    // 0x185924: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x185924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_185928:
    // 0x185928: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x185928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_18592c:
    // 0x18592c: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x18592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
label_185930:
    // 0x185930: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x185930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_185934:
    // 0x185934: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x185934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_185938:
    // 0x185938: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x185938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18593c:
    // 0x18593c: 0xc04257c  jal         func_1095F0
label_185940:
    if (ctx->pc == 0x185940u) {
        ctx->pc = 0x185940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18593Cu;
        // 0x185940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185944u;
        goto label_185944;
    }
    ctx->pc = 0x18593Cu;
    SET_GPR_U32(ctx, 31, 0x185944u);
    ctx->pc = 0x185940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18593Cu;
    // 0x185940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1095F0u, 0x18593Cu, 0x185944u)) {
        return;
    }
    ctx->pc = 0x185944u;
label_185944:
    // 0x185944: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x185944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185948:
    // 0x185948: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x185948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18594c:
    // 0x18594c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185950:
    // 0x185950: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_185954:
    if (ctx->pc == 0x185954u) {
        ctx->pc = 0x185954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185950u;
        // 0x185954: 0x1010c2  srl         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185958u;
        goto label_185958;
    }
    ctx->pc = 0x185950u;
    {
        const bool branch_taken_0x185950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x185954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185950u;
        // 0x185954: 0x1010c2  srl         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185950) {
            ctx->pc = 0x1859A0u;
            goto label_1859a0;
        }
    }
    ctx->pc = 0x185958u;
label_185958:
    // 0x185958: 0xf02821  addu        $a1, $a3, $s0
    ctx->pc = 0x185958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_18595c:
    // 0x18595c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_185960:
    // 0x185960: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x185960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_185964:
    // 0x185964: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x185964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_185968:
    // 0x185968: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x185968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18596c:
    // 0x18596c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x18596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_185970:
    // 0x185970: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x185970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185974:
    // 0x185974: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x185974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_185978:
    // 0x185978: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
label_18597c:
    if (ctx->pc == 0x18597Cu) {
        ctx->pc = 0x18597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185978u;
        // 0x18597c: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185980u;
        goto label_185980;
    }
    ctx->pc = 0x185978u;
    {
        const bool branch_taken_0x185978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x18597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185978u;
        // 0x18597c: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185978) {
            ctx->pc = 0x18599Cu;
            goto label_18599c;
        }
    }
    ctx->pc = 0x185980u;
label_185980:
    // 0x185980: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x185980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_185984:
    // 0x185984: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x185984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_185988:
    // 0x185988: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x185988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18598c:
    // 0x18598c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_185990:
    // 0x185990: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x185990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_185994:
    // 0x185994: 0x1446fffa  bne         $v0, $a2, . + 4 + (-0x6 << 2)
label_185998:
    if (ctx->pc == 0x185998u) {
        ctx->pc = 0x185998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185994u;
        // 0x185998: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18599Cu;
        goto label_18599c;
    }
    ctx->pc = 0x185994u;
    {
        const bool branch_taken_0x185994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x185998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185994u;
        // 0x185998: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185994) {
            ctx->pc = 0x185980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185980;
        }
    }
    ctx->pc = 0x18599Cu;
label_18599c:
    // 0x18599c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18599cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1859a0:
    // 0x1859a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1859a4:
    if (ctx->pc == 0x1859A4u) {
        ctx->pc = 0x1859A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859A0u;
        // 0x1859a4: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1859A8u;
        goto label_1859a8;
    }
    ctx->pc = 0x1859A0u;
    {
        const bool branch_taken_0x1859a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1859A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859A0u;
        // 0x1859a4: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859a0) {
            ctx->pc = 0x1859ACu;
            goto label_1859ac;
        }
    }
    ctx->pc = 0x1859A8u;
label_1859a8:
    // 0x1859a8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1859a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1859ac:
    // 0x1859ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1859acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1859b0:
    // 0x1859b0: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x1859b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_1859b4:
    // 0x1859b4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1859b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1859b8:
    // 0x1859b8: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x1859b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1859bc:
    // 0x1859bc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1859bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1859c0:
    // 0x1859c0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1859c4:
    if (ctx->pc == 0x1859C4u) {
        ctx->pc = 0x1859C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859C0u;
        // 0x1859c4: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1859C8u;
        goto label_1859c8;
    }
    ctx->pc = 0x1859C0u;
    {
        const bool branch_taken_0x1859c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1859C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859C0u;
        // 0x1859c4: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859c0) {
            ctx->pc = 0x1859D4u;
            goto label_1859d4;
        }
    }
    ctx->pc = 0x1859C8u;
label_1859c8:
    // 0x1859c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1859c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1859cc:
    // 0x1859cc: 0xc075fdc  jal         func_1D7F70
label_1859d0:
    if (ctx->pc == 0x1859D0u) {
        ctx->pc = 0x1859D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859CCu;
        // 0x1859d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1859D4u;
        goto label_1859d4;
    }
    ctx->pc = 0x1859CCu;
    SET_GPR_U32(ctx, 31, 0x1859D4u);
    ctx->pc = 0x1859D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859CCu;
    // 0x1859d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1859CCu, 0x1859D4u)) {
        return;
    }
    ctx->pc = 0x1859D4u;
label_1859d4:
    // 0x1859d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1859d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1859d8:
    // 0x1859d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1859d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1859dc:
    // 0x1859dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1859dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1859e0:
    // 0x1859e0: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x1859e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1859e4:
    // 0x1859e4: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1859e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1859e8:
    // 0x1859e8: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1859ec:
    if (ctx->pc == 0x1859ECu) {
        ctx->pc = 0x1859ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859E8u;
        // 0x1859ec: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1859F0u;
        goto label_1859f0;
    }
    ctx->pc = 0x1859E8u;
    {
        const bool branch_taken_0x1859e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1859ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859E8u;
        // 0x1859ec: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859e8) {
            ctx->pc = 0x1859FCu;
            goto label_1859fc;
        }
    }
    ctx->pc = 0x1859F0u;
label_1859f0:
    // 0x1859f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1859f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1859f4:
    // 0x1859f4: 0xc075fdc  jal         func_1D7F70
label_1859f8:
    if (ctx->pc == 0x1859F8u) {
        ctx->pc = 0x1859F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859F4u;
        // 0x1859f8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1859FCu;
        goto label_1859fc;
    }
    ctx->pc = 0x1859F4u;
    SET_GPR_U32(ctx, 31, 0x1859FCu);
    ctx->pc = 0x1859F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859F4u;
    // 0x1859f8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1859F4u, 0x1859FCu)) {
        return;
    }
    ctx->pc = 0x1859FCu;
label_1859fc:
    // 0x1859fc: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_185a00:
    if (ctx->pc == 0x185A00u) {
        ctx->pc = 0x185A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859FCu;
        // 0x185a00: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185A04u;
        goto label_185a04;
    }
    ctx->pc = 0x1859FCu;
    {
        const bool branch_taken_0x1859fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859FCu;
        // 0x185a00: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859fc) {
            ctx->pc = 0x185A10u;
            goto label_185a10;
        }
    }
    ctx->pc = 0x185A04u;
label_185a04:
    // 0x185a04: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x185a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_185a08:
    // 0x185a08: 0xc075fdc  jal         func_1D7F70
label_185a0c:
    if (ctx->pc == 0x185A0Cu) {
        ctx->pc = 0x185A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A08u;
        // 0x185a0c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185A10u;
        goto label_185a10;
    }
    ctx->pc = 0x185A08u;
    SET_GPR_U32(ctx, 31, 0x185A10u);
    ctx->pc = 0x185A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A08u;
    // 0x185a0c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x185A08u, 0x185A10u)) {
        return;
    }
    ctx->pc = 0x185A10u;
label_185a10:
    // 0x185a10: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x185a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_185a14:
    // 0x185a14: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x185a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_185a18:
    // 0x185a18: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x185a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_185a1c:
    // 0x185a1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x185a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_185a20:
    // 0x185a20: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_185a24:
    if (ctx->pc == 0x185A24u) {
        ctx->pc = 0x185A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A20u;
        // 0x185a24: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185A28u;
        goto label_185a28;
    }
    ctx->pc = 0x185A20u;
    {
        const bool branch_taken_0x185a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A20u;
        // 0x185a24: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a20) {
            ctx->pc = 0x185A70u;
            goto label_185a70;
        }
    }
    ctx->pc = 0x185A28u;
label_185a28:
    // 0x185a28: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x185a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_185a2c:
    // 0x185a2c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x185a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_185a30:
    // 0x185a30: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x185a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_185a34:
    // 0x185a34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_185a38:
    if (ctx->pc == 0x185A38u) {
        ctx->pc = 0x185A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A34u;
        // 0x185a38: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185A3Cu;
        goto label_185a3c;
    }
    ctx->pc = 0x185A34u;
    {
        const bool branch_taken_0x185a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A34u;
        // 0x185a38: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a34) {
            ctx->pc = 0x185A4Cu;
            goto label_185a4c;
        }
    }
    ctx->pc = 0x185A3Cu;
label_185a3c:
    // 0x185a3c: 0xc0c5486  jal         func_315218
label_185a40:
    if (ctx->pc == 0x185A40u) {
        ctx->pc = 0x185A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A3Cu;
        // 0x185a40: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185A44u;
        goto label_185a44;
    }
    ctx->pc = 0x185A3Cu;
    SET_GPR_U32(ctx, 31, 0x185A44u);
    ctx->pc = 0x185A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A3Cu;
    // 0x185a40: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x185A3Cu, 0x185A44u)) {
        return;
    }
    ctx->pc = 0x185A44u;
label_185a44:
    // 0x185a44: 0x1000001c  b           . + 4 + (0x1C << 2)
label_185a48:
    if (ctx->pc == 0x185A48u) {
        ctx->pc = 0x185A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A44u;
        // 0x185a48: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185A4Cu;
        goto label_185a4c;
    }
    ctx->pc = 0x185A44u;
    {
        const bool branch_taken_0x185a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A44u;
        // 0x185a48: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a44) {
            ctx->pc = 0x185AB8u;
            goto label_185ab8;
        }
    }
    ctx->pc = 0x185A4Cu;
label_185a4c:
    // 0x185a4c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x185a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_185a50:
    // 0x185a50: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x185a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_185a54:
    // 0x185a54: 0x24848290  addiu       $a0, $a0, -0x7D70
    ctx->pc = 0x185a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935184));
label_185a58:
    // 0x185a58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x185a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_185a5c:
    // 0x185a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x185a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_185a60:
    // 0x185a60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x185a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_185a64:
    // 0x185a64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x185a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_185a68:
    // 0x185a68: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x185a68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
label_185a6c:
    // 0x185a6c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x185a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_185a70:
    // 0x185a70: 0x10000011  b           . + 4 + (0x11 << 2)
label_185a74:
    if (ctx->pc == 0x185A74u) {
        ctx->pc = 0x185A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A70u;
        // 0x185a74: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185A78u;
        goto label_185a78;
    }
    ctx->pc = 0x185A70u;
    {
        const bool branch_taken_0x185a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A70u;
        // 0x185a74: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a70) {
            ctx->pc = 0x185AB8u;
            goto label_185ab8;
        }
    }
    ctx->pc = 0x185A78u;
label_185a78:
    // 0x185a78: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x185a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_185a7c:
    // 0x185a7c: 0x23e1021  addu        $v0, $s1, $fp
    ctx->pc = 0x185a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_185a80:
    // 0x185a80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x185a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_185a84:
    // 0x185a84: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x185a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_185a88:
    // 0x185a88: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x185a88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_185a8c:
    // 0x185a8c: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x185a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_185a90:
    // 0x185a90: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_185a94:
    if (ctx->pc == 0x185A94u) {
        ctx->pc = 0x185A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A90u;
        // 0x185a94: 0x2341021  addu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185A98u;
        goto label_185a98;
    }
    ctx->pc = 0x185A90u;
    {
        const bool branch_taken_0x185a90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A90u;
        // 0x185a94: 0x2341021  addu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a90) {
            ctx->pc = 0x185AA0u;
            goto label_185aa0;
        }
    }
    ctx->pc = 0x185A98u;
label_185a98:
    // 0x185a98: 0xc0c48fe  jal         func_3123F8
label_185a9c:
    if (ctx->pc == 0x185A9Cu) {
        ctx->pc = 0x185A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A98u;
        // 0x185a9c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185AA0u;
        goto label_185aa0;
    }
    ctx->pc = 0x185A98u;
    SET_GPR_U32(ctx, 31, 0x185AA0u);
    ctx->pc = 0x185A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A98u;
    // 0x185a9c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3123F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3123F8u, 0x185A98u, 0x185AA0u)) {
        return;
    }
    ctx->pc = 0x185AA0u;
label_185aa0:
    // 0x185aa0: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_185aa4:
    if (ctx->pc == 0x185AA4u) {
        ctx->pc = 0x185AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AA0u;
        // 0x185aa4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185AA8u;
        goto label_185aa8;
    }
    ctx->pc = 0x185AA0u;
    {
        const bool branch_taken_0x185aa0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AA0u;
        // 0x185aa4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185aa0) {
            ctx->pc = 0x185AB8u;
            goto label_185ab8;
        }
    }
    ctx->pc = 0x185AA8u;
label_185aa8:
    // 0x185aa8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x185aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_185aac:
    // 0x185aac: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x185aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_185ab0:
    // 0x185ab0: 0xc075fdc  jal         func_1D7F70
label_185ab4:
    if (ctx->pc == 0x185AB4u) {
        ctx->pc = 0x185AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AB0u;
        // 0x185ab4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185AB8u;
        goto label_185ab8;
    }
    ctx->pc = 0x185AB0u;
    SET_GPR_U32(ctx, 31, 0x185AB8u);
    ctx->pc = 0x185AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185AB0u;
    // 0x185ab4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x185AB0u, 0x185AB8u)) {
        return;
    }
    ctx->pc = 0x185AB8u;
label_185ab8:
    // 0x185ab8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x185ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_185abc:
    // 0x185abc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x185abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_185ac0:
    // 0x185ac0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x185ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_185ac4:
    // 0x185ac4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x185ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_185ac8:
    // 0x185ac8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x185ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_185acc:
    // 0x185acc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x185accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_185ad0:
    // 0x185ad0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x185ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_185ad4:
    // 0x185ad4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x185ad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_185ad8:
    // 0x185ad8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x185ad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_185adc:
    // 0x185adc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x185adcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_185ae0:
    // 0x185ae0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x185ae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_185ae4:
    // 0x185ae4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x185ae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_185ae8:
    // 0x185ae8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x185ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_185aec:
    // 0x185aec: 0xac64fff0  sw          $a0, -0x10($v1)
    ctx->pc = 0x185aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 4));
label_185af0:
    // 0x185af0: 0x3e00008  jr          $ra
label_185af4:
    if (ctx->pc == 0x185AF4u) {
        ctx->pc = 0x185AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AF0u;
        // 0x185af4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185AF8u;
        goto label_185af8;
    }
    ctx->pc = 0x185AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AF0u;
        // 0x185af4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185AF8u;
label_185af8:
    // 0x185af8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x185af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_185afc:
    // 0x185afc: 0x0  nop
    ctx->pc = 0x185afcu;
    // NOP
label_185b00:
    // 0x185b00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x185b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_185b04:
    // 0x185b04: 0x0  nop
    ctx->pc = 0x185b04u;
    // NOP
label_185b08:
    // 0x185b08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x185b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_185b0c:
    // 0x185b0c: 0x0  nop
    ctx->pc = 0x185b0cu;
    // NOP
label_185b10:
    // 0x185b10: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x185b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_185b14:
    // 0x185b14: 0x0  nop
    ctx->pc = 0x185b14u;
    // NOP
    ctx->pc = 0x185b18u;
}
