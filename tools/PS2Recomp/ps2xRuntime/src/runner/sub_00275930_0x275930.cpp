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

// Function: sub_00275930
// Address: 0x275930 - 0x275cc0
void sub_00275930_0x275930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275930_0x275930");
#endif

    switch (ctx->pc) {
        case 0x275930u: goto label_275930;
        case 0x275934u: goto label_275934;
        case 0x275938u: goto label_275938;
        case 0x27593cu: goto label_27593c;
        case 0x275940u: goto label_275940;
        case 0x275944u: goto label_275944;
        case 0x275948u: goto label_275948;
        case 0x27594cu: goto label_27594c;
        case 0x275950u: goto label_275950;
        case 0x275954u: goto label_275954;
        case 0x275958u: goto label_275958;
        case 0x27595cu: goto label_27595c;
        case 0x275960u: goto label_275960;
        case 0x275964u: goto label_275964;
        case 0x275968u: goto label_275968;
        case 0x27596cu: goto label_27596c;
        case 0x275970u: goto label_275970;
        case 0x275974u: goto label_275974;
        case 0x275978u: goto label_275978;
        case 0x27597cu: goto label_27597c;
        case 0x275980u: goto label_275980;
        case 0x275984u: goto label_275984;
        case 0x275988u: goto label_275988;
        case 0x27598cu: goto label_27598c;
        case 0x275990u: goto label_275990;
        case 0x275994u: goto label_275994;
        case 0x275998u: goto label_275998;
        case 0x27599cu: goto label_27599c;
        case 0x2759a0u: goto label_2759a0;
        case 0x2759a4u: goto label_2759a4;
        case 0x2759a8u: goto label_2759a8;
        case 0x2759acu: goto label_2759ac;
        case 0x2759b0u: goto label_2759b0;
        case 0x2759b4u: goto label_2759b4;
        case 0x2759b8u: goto label_2759b8;
        case 0x2759bcu: goto label_2759bc;
        case 0x2759c0u: goto label_2759c0;
        case 0x2759c4u: goto label_2759c4;
        case 0x2759c8u: goto label_2759c8;
        case 0x2759ccu: goto label_2759cc;
        case 0x2759d0u: goto label_2759d0;
        case 0x2759d4u: goto label_2759d4;
        case 0x2759d8u: goto label_2759d8;
        case 0x2759dcu: goto label_2759dc;
        case 0x2759e0u: goto label_2759e0;
        case 0x2759e4u: goto label_2759e4;
        case 0x2759e8u: goto label_2759e8;
        case 0x2759ecu: goto label_2759ec;
        case 0x2759f0u: goto label_2759f0;
        case 0x2759f4u: goto label_2759f4;
        case 0x2759f8u: goto label_2759f8;
        case 0x2759fcu: goto label_2759fc;
        case 0x275a00u: goto label_275a00;
        case 0x275a04u: goto label_275a04;
        case 0x275a08u: goto label_275a08;
        case 0x275a0cu: goto label_275a0c;
        case 0x275a10u: goto label_275a10;
        case 0x275a14u: goto label_275a14;
        case 0x275a18u: goto label_275a18;
        case 0x275a1cu: goto label_275a1c;
        case 0x275a20u: goto label_275a20;
        case 0x275a24u: goto label_275a24;
        case 0x275a28u: goto label_275a28;
        case 0x275a2cu: goto label_275a2c;
        case 0x275a30u: goto label_275a30;
        case 0x275a34u: goto label_275a34;
        case 0x275a38u: goto label_275a38;
        case 0x275a3cu: goto label_275a3c;
        case 0x275a40u: goto label_275a40;
        case 0x275a44u: goto label_275a44;
        case 0x275a48u: goto label_275a48;
        case 0x275a4cu: goto label_275a4c;
        case 0x275a50u: goto label_275a50;
        case 0x275a54u: goto label_275a54;
        case 0x275a58u: goto label_275a58;
        case 0x275a5cu: goto label_275a5c;
        case 0x275a60u: goto label_275a60;
        case 0x275a64u: goto label_275a64;
        case 0x275a68u: goto label_275a68;
        case 0x275a6cu: goto label_275a6c;
        case 0x275a70u: goto label_275a70;
        case 0x275a74u: goto label_275a74;
        case 0x275a78u: goto label_275a78;
        case 0x275a7cu: goto label_275a7c;
        case 0x275a80u: goto label_275a80;
        case 0x275a84u: goto label_275a84;
        case 0x275a88u: goto label_275a88;
        case 0x275a8cu: goto label_275a8c;
        case 0x275a90u: goto label_275a90;
        case 0x275a94u: goto label_275a94;
        case 0x275a98u: goto label_275a98;
        case 0x275a9cu: goto label_275a9c;
        case 0x275aa0u: goto label_275aa0;
        case 0x275aa4u: goto label_275aa4;
        case 0x275aa8u: goto label_275aa8;
        case 0x275aacu: goto label_275aac;
        case 0x275ab0u: goto label_275ab0;
        case 0x275ab4u: goto label_275ab4;
        case 0x275ab8u: goto label_275ab8;
        case 0x275abcu: goto label_275abc;
        case 0x275ac0u: goto label_275ac0;
        case 0x275ac4u: goto label_275ac4;
        case 0x275ac8u: goto label_275ac8;
        case 0x275accu: goto label_275acc;
        case 0x275ad0u: goto label_275ad0;
        case 0x275ad4u: goto label_275ad4;
        case 0x275ad8u: goto label_275ad8;
        case 0x275adcu: goto label_275adc;
        case 0x275ae0u: goto label_275ae0;
        case 0x275ae4u: goto label_275ae4;
        case 0x275ae8u: goto label_275ae8;
        case 0x275aecu: goto label_275aec;
        case 0x275af0u: goto label_275af0;
        case 0x275af4u: goto label_275af4;
        case 0x275af8u: goto label_275af8;
        case 0x275afcu: goto label_275afc;
        case 0x275b00u: goto label_275b00;
        case 0x275b04u: goto label_275b04;
        case 0x275b08u: goto label_275b08;
        case 0x275b0cu: goto label_275b0c;
        case 0x275b10u: goto label_275b10;
        case 0x275b14u: goto label_275b14;
        case 0x275b18u: goto label_275b18;
        case 0x275b1cu: goto label_275b1c;
        case 0x275b20u: goto label_275b20;
        case 0x275b24u: goto label_275b24;
        case 0x275b28u: goto label_275b28;
        case 0x275b2cu: goto label_275b2c;
        case 0x275b30u: goto label_275b30;
        case 0x275b34u: goto label_275b34;
        case 0x275b38u: goto label_275b38;
        case 0x275b3cu: goto label_275b3c;
        case 0x275b40u: goto label_275b40;
        case 0x275b44u: goto label_275b44;
        case 0x275b48u: goto label_275b48;
        case 0x275b4cu: goto label_275b4c;
        case 0x275b50u: goto label_275b50;
        case 0x275b54u: goto label_275b54;
        case 0x275b58u: goto label_275b58;
        case 0x275b5cu: goto label_275b5c;
        case 0x275b60u: goto label_275b60;
        case 0x275b64u: goto label_275b64;
        case 0x275b68u: goto label_275b68;
        case 0x275b6cu: goto label_275b6c;
        case 0x275b70u: goto label_275b70;
        case 0x275b74u: goto label_275b74;
        case 0x275b78u: goto label_275b78;
        case 0x275b7cu: goto label_275b7c;
        case 0x275b80u: goto label_275b80;
        case 0x275b84u: goto label_275b84;
        case 0x275b88u: goto label_275b88;
        case 0x275b8cu: goto label_275b8c;
        case 0x275b90u: goto label_275b90;
        case 0x275b94u: goto label_275b94;
        case 0x275b98u: goto label_275b98;
        case 0x275b9cu: goto label_275b9c;
        case 0x275ba0u: goto label_275ba0;
        case 0x275ba4u: goto label_275ba4;
        case 0x275ba8u: goto label_275ba8;
        case 0x275bacu: goto label_275bac;
        case 0x275bb0u: goto label_275bb0;
        case 0x275bb4u: goto label_275bb4;
        case 0x275bb8u: goto label_275bb8;
        case 0x275bbcu: goto label_275bbc;
        case 0x275bc0u: goto label_275bc0;
        case 0x275bc4u: goto label_275bc4;
        case 0x275bc8u: goto label_275bc8;
        case 0x275bccu: goto label_275bcc;
        case 0x275bd0u: goto label_275bd0;
        case 0x275bd4u: goto label_275bd4;
        case 0x275bd8u: goto label_275bd8;
        case 0x275bdcu: goto label_275bdc;
        case 0x275be0u: goto label_275be0;
        case 0x275be4u: goto label_275be4;
        case 0x275be8u: goto label_275be8;
        case 0x275becu: goto label_275bec;
        case 0x275bf0u: goto label_275bf0;
        case 0x275bf4u: goto label_275bf4;
        case 0x275bf8u: goto label_275bf8;
        case 0x275bfcu: goto label_275bfc;
        case 0x275c00u: goto label_275c00;
        case 0x275c04u: goto label_275c04;
        case 0x275c08u: goto label_275c08;
        case 0x275c0cu: goto label_275c0c;
        case 0x275c10u: goto label_275c10;
        case 0x275c14u: goto label_275c14;
        case 0x275c18u: goto label_275c18;
        case 0x275c1cu: goto label_275c1c;
        case 0x275c20u: goto label_275c20;
        case 0x275c24u: goto label_275c24;
        case 0x275c28u: goto label_275c28;
        case 0x275c2cu: goto label_275c2c;
        case 0x275c30u: goto label_275c30;
        case 0x275c34u: goto label_275c34;
        case 0x275c38u: goto label_275c38;
        case 0x275c3cu: goto label_275c3c;
        case 0x275c40u: goto label_275c40;
        case 0x275c44u: goto label_275c44;
        case 0x275c48u: goto label_275c48;
        case 0x275c4cu: goto label_275c4c;
        case 0x275c50u: goto label_275c50;
        case 0x275c54u: goto label_275c54;
        case 0x275c58u: goto label_275c58;
        case 0x275c5cu: goto label_275c5c;
        case 0x275c60u: goto label_275c60;
        case 0x275c64u: goto label_275c64;
        case 0x275c68u: goto label_275c68;
        case 0x275c6cu: goto label_275c6c;
        case 0x275c70u: goto label_275c70;
        case 0x275c74u: goto label_275c74;
        case 0x275c78u: goto label_275c78;
        case 0x275c7cu: goto label_275c7c;
        case 0x275c80u: goto label_275c80;
        case 0x275c84u: goto label_275c84;
        case 0x275c88u: goto label_275c88;
        case 0x275c8cu: goto label_275c8c;
        case 0x275c90u: goto label_275c90;
        case 0x275c94u: goto label_275c94;
        case 0x275c98u: goto label_275c98;
        case 0x275c9cu: goto label_275c9c;
        case 0x275ca0u: goto label_275ca0;
        case 0x275ca4u: goto label_275ca4;
        case 0x275ca8u: goto label_275ca8;
        case 0x275cacu: goto label_275cac;
        case 0x275cb0u: goto label_275cb0;
        case 0x275cb4u: goto label_275cb4;
        case 0x275cb8u: goto label_275cb8;
        case 0x275cbcu: goto label_275cbc;
        default: break;
    }

    ctx->pc = 0x275930u;

label_275930:
    // 0x275930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_275934:
    // 0x275934: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x275934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_275938:
    // 0x275938: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x275938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_27593c:
    // 0x27593c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x27593cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275940:
    // 0x275940: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x275940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_275944:
    // 0x275944: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x275944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_275948:
    // 0x275948: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27594c:
    // 0x27594c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_275950:
    // 0x275950: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x275950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_275954:
    // 0x275954: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x275954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_275958:
    // 0x275958: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x275958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_27595c:
    // 0x27595c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27595cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_275960:
    // 0x275960: 0x450000c7  bc1f        . + 4 + (0xC7 << 2)
label_275964:
    if (ctx->pc == 0x275964u) {
        ctx->pc = 0x275964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275960u;
        // 0x275964: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275968u;
        goto label_275968;
    }
    ctx->pc = 0x275960u;
    {
        const bool branch_taken_0x275960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275960u;
        // 0x275964: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275960) {
            ctx->pc = 0x275C80u;
            goto label_275c80;
        }
    }
    ctx->pc = 0x275968u;
label_275968:
    // 0x275968: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x275968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27596c:
    // 0x27596c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x27596cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275970:
    // 0x275970: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x275970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_275974:
    // 0x275974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275978:
    // 0x275978: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x275978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27597c:
    // 0x27597c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x27597cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_275980:
    // 0x275980: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x275980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275984:
    // 0x275984: 0x8e33002c  lw          $s3, 0x2C($s1)
    ctx->pc = 0x275984u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_275988:
    // 0x275988: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_27598c:
    if (ctx->pc == 0x27598Cu) {
        ctx->pc = 0x27598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275988u;
        // 0x27598c: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275990u;
        goto label_275990;
    }
    ctx->pc = 0x275988u;
    {
        const bool branch_taken_0x275988 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275988u;
        // 0x27598c: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275988) {
            ctx->pc = 0x2759A4u;
            goto label_2759a4;
        }
    }
    ctx->pc = 0x275990u;
label_275990:
    // 0x275990: 0x460c1800  add.s       $f0, $f3, $f12
    ctx->pc = 0x275990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
label_275994:
    // 0x275994: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x275994u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275998:
    // 0x275998: 0x0  nop
    ctx->pc = 0x275998u;
    // NOP
label_27599c:
    // 0x27599c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_2759a0:
    if (ctx->pc == 0x2759A0u) {
        ctx->pc = 0x2759A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27599Cu;
        // 0x2759a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2759A4u;
        goto label_2759a4;
    }
    ctx->pc = 0x27599Cu;
    {
        const bool branch_taken_0x27599c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27599c) {
            ctx->pc = 0x2759A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27599Cu;
            // 0x2759a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2759A8u;
            goto label_2759a8;
        }
    }
    ctx->pc = 0x2759A4u;
label_2759a4:
    // 0x2759a4: 0x460c1800  add.s       $f0, $f3, $f12
    ctx->pc = 0x2759a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
label_2759a8:
    // 0x2759a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2759a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2759ac:
    // 0x2759ac: 0x2635004c  addiu       $s5, $s1, 0x4C
    ctx->pc = 0x2759acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_2759b0:
    // 0x2759b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2759b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2759b4:
    // 0x2759b4: 0x0  nop
    ctx->pc = 0x2759b4u;
    // NOP
label_2759b8:
    // 0x2759b8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2759bc:
    if (ctx->pc == 0x2759BCu) {
        ctx->pc = 0x2759BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759B8u;
        // 0x2759bc: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2759C0u;
        goto label_2759c0;
    }
    ctx->pc = 0x2759B8u;
    {
        const bool branch_taken_0x2759b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2759BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759B8u;
        // 0x2759bc: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759b8) {
            ctx->pc = 0x275A14u;
            goto label_275a14;
        }
    }
    ctx->pc = 0x2759C0u;
label_2759c0:
    // 0x2759c0: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2759c4:
    if (ctx->pc == 0x2759C4u) {
        ctx->pc = 0x2759C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759C0u;
        // 0x2759c4: 0xc6340004  lwc1        $f20, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2759C8u;
        goto label_2759c8;
    }
    ctx->pc = 0x2759C0u;
    {
        const bool branch_taken_0x2759c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2759c0) {
            ctx->pc = 0x2759C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2759C0u;
            // 0x2759c4: 0xc6340004  lwc1        $f20, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x275A04u;
            goto label_275a04;
        }
    }
    ctx->pc = 0x2759C8u;
label_2759c8:
    // 0x2759c8: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2759c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2759cc:
    // 0x2759cc: 0x0  nop
    ctx->pc = 0x2759ccu;
    // NOP
label_2759d0:
    // 0x2759d0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2759d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2759d4:
    // 0x2759d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2759d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2759d8:
    // 0x2759d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2759d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2759dc:
    // 0x2759dc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2759dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2759e0:
    // 0x2759e0: 0x0  nop
    ctx->pc = 0x2759e0u;
    // NOP
label_2759e4:
    // 0x2759e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2759e8:
    if (ctx->pc == 0x2759E8u) {
        ctx->pc = 0x2759E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759E4u;
        // 0x2759e8: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2759ECu;
        goto label_2759ec;
    }
    ctx->pc = 0x2759E4u;
    {
        const bool branch_taken_0x2759e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2759E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759E4u;
        // 0x2759e8: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759e4) {
            ctx->pc = 0x2759F0u;
            goto label_2759f0;
        }
    }
    ctx->pc = 0x2759ECu;
label_2759ec:
    // 0x2759ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2759ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2759f0:
    // 0x2759f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2759f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2759f4:
    // 0x2759f4: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2759f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2759f8:
    // 0x2759f8: 0x4501fff5  bc1t        . + 4 + (-0xB << 2)
label_2759fc:
    if (ctx->pc == 0x2759FCu) {
        ctx->pc = 0x2759FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759F8u;
        // 0x2759fc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275A00u;
        goto label_275a00;
    }
    ctx->pc = 0x2759F8u;
    {
        const bool branch_taken_0x2759f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2759FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759F8u;
        // 0x2759fc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759f8) {
            ctx->pc = 0x2759D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2759d0;
        }
    }
    ctx->pc = 0x275A00u;
label_275a00:
    // 0x275a00: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x275a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_275a04:
    // 0x275a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_275a08:
    // 0x275a08: 0xc09d55c  jal         func_275570
label_275a0c:
    if (ctx->pc == 0x275A0Cu) {
        ctx->pc = 0x275A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A08u;
        // 0x275a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275A10u;
        goto label_275a10;
    }
    ctx->pc = 0x275A08u;
    SET_GPR_U32(ctx, 31, 0x275A10u);
    ctx->pc = 0x275A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275A08u;
    // 0x275a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x275A08u, 0x275A10u)) {
        return;
    }
    ctx->pc = 0x275A10u;
label_275a10:
    // 0x275a10: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x275a10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_275a14:
    // 0x275a14: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x275a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_275a18:
    // 0x275a18: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_275a1c:
    if (ctx->pc == 0x275A1Cu) {
        ctx->pc = 0x275A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A18u;
        // 0x275a1c: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275A20u;
        goto label_275a20;
    }
    ctx->pc = 0x275A18u;
    {
        const bool branch_taken_0x275a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275a18) {
            ctx->pc = 0x275A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275A18u;
            // 0x275a1c: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275A38u;
            goto label_275a38;
        }
    }
    ctx->pc = 0x275A20u;
label_275a20:
    // 0x275a20: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x275a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_275a24:
    // 0x275a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_275a28:
    // 0x275a28: 0xc09d55c  jal         func_275570
label_275a2c:
    if (ctx->pc == 0x275A2Cu) {
        ctx->pc = 0x275A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A28u;
        // 0x275a2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275A30u;
        goto label_275a30;
    }
    ctx->pc = 0x275A28u;
    SET_GPR_U32(ctx, 31, 0x275A30u);
    ctx->pc = 0x275A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275A28u;
    // 0x275a2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x275A28u, 0x275A30u)) {
        return;
    }
    ctx->pc = 0x275A30u;
label_275a30:
    // 0x275a30: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x275a30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_275a34:
    // 0x275a34: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x275a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_275a38:
    // 0x275a38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x275a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_275a3c:
    // 0x275a3c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x275a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_275a40:
    // 0x275a40: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x275a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_275a44:
    // 0x275a44: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x275a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_275a48:
    // 0x275a48: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x275a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_275a4c:
    // 0x275a4c: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x275a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_275a50:
    // 0x275a50: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_275a54:
    if (ctx->pc == 0x275A54u) {
        ctx->pc = 0x275A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A50u;
        // 0x275a54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275A58u;
        goto label_275a58;
    }
    ctx->pc = 0x275A50u;
    {
        const bool branch_taken_0x275a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A50u;
        // 0x275a54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a50) {
            ctx->pc = 0x275AD4u;
            goto label_275ad4;
        }
    }
    ctx->pc = 0x275A58u;
label_275a58:
    // 0x275a58: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x275a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_275a5c:
    // 0x275a5c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x275a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275a60:
    // 0x275a60: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x275a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275a64:
    // 0x275a64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275a68:
    // 0x275a68: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_275a6c:
    if (ctx->pc == 0x275A6Cu) {
        ctx->pc = 0x275A70u;
        goto label_275a70;
    }
    ctx->pc = 0x275A68u;
    {
        const bool branch_taken_0x275a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275a68) {
            ctx->pc = 0x275AD4u;
            goto label_275ad4;
        }
    }
    ctx->pc = 0x275A70u;
label_275a70:
    // 0x275a70: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x275a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_275a74:
    // 0x275a74: 0x2471818  mult        $v1, $s2, $a3
    ctx->pc = 0x275a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_275a78:
    // 0x275a78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x275a78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_275a7c:
    // 0x275a7c: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x275a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_275a80:
    // 0x275a80: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x275a80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
label_275a84:
    // 0x275a84: 0x2463004c  addiu       $v1, $v1, 0x4C
    ctx->pc = 0x275a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
label_275a88:
    // 0x275a88: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x275a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_275a8c:
    // 0x275a8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x275a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_275a90:
    // 0x275a90: 0x1446fff9  bne         $v0, $a2, . + 4 + (-0x7 << 2)
label_275a94:
    if (ctx->pc == 0x275A94u) {
        ctx->pc = 0x275A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A90u;
        // 0x275a94: 0x2471818  mult        $v1, $s2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275A98u;
        goto label_275a98;
    }
    ctx->pc = 0x275A90u;
    {
        const bool branch_taken_0x275a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x275A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A90u;
        // 0x275a94: 0x2471818  mult        $v1, $s2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a90) {
            ctx->pc = 0x275A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275a78;
        }
    }
    ctx->pc = 0x275A98u;
label_275a98:
    // 0x275a98: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x275a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_275a9c:
    // 0x275a9c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x275a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_275aa0:
    // 0x275aa0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x275aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_275aa4:
    // 0x275aa4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x275aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_275aa8:
    // 0x275aa8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x275aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_275aac:
    // 0x275aac: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x275aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_275ab0:
    // 0x275ab0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_275ab4:
    if (ctx->pc == 0x275AB4u) {
        ctx->pc = 0x275AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AB0u;
        // 0x275ab4: 0xae260008  sw          $a2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275AB8u;
        goto label_275ab8;
    }
    ctx->pc = 0x275AB0u;
    {
        const bool branch_taken_0x275ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AB0u;
        // 0x275ab4: 0xae260008  sw          $a2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ab0) {
            ctx->pc = 0x275AD4u;
            goto label_275ad4;
        }
    }
    ctx->pc = 0x275AB8u;
label_275ab8:
    // 0x275ab8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x275ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_275abc:
    // 0x275abc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x275abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275ac0:
    // 0x275ac0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x275ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ac4:
    // 0x275ac4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275ac8:
    // 0x275ac8: 0x0  nop
    ctx->pc = 0x275ac8u;
    // NOP
label_275acc:
    // 0x275acc: 0x4500ffea  bc1f        . + 4 + (-0x16 << 2)
label_275ad0:
    if (ctx->pc == 0x275AD0u) {
        ctx->pc = 0x275AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275ACCu;
        // 0x275ad0: 0x2471818  mult        $v1, $s2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275AD4u;
        goto label_275ad4;
    }
    ctx->pc = 0x275ACCu;
    {
        const bool branch_taken_0x275acc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275ACCu;
        // 0x275ad0: 0x2471818  mult        $v1, $s2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275acc) {
            ctx->pc = 0x275A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275a78;
        }
    }
    ctx->pc = 0x275AD4u;
label_275ad4:
    // 0x275ad4: 0x1a600056  blez        $s3, . + 4 + (0x56 << 2)
label_275ad8:
    if (ctx->pc == 0x275AD8u) {
        ctx->pc = 0x275AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AD4u;
        // 0x275ad8: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275ADCu;
        goto label_275adc;
    }
    ctx->pc = 0x275AD4u;
    {
        const bool branch_taken_0x275ad4 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x275AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AD4u;
        // 0x275ad8: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ad4) {
            ctx->pc = 0x275C30u;
            goto label_275c30;
        }
    }
    ctx->pc = 0x275ADCu;
label_275adc:
    // 0x275adc: 0x131023  negu        $v0, $s3
    ctx->pc = 0x275adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_275ae0:
    // 0x275ae0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x275ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_275ae4:
    // 0x275ae4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_275ae8:
    if (ctx->pc == 0x275AE8u) {
        ctx->pc = 0x275AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AE4u;
        // 0x275ae8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275AECu;
        goto label_275aec;
    }
    ctx->pc = 0x275AE4u;
    {
        const bool branch_taken_0x275ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AE4u;
        // 0x275ae8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ae4) {
            ctx->pc = 0x275B88u;
            goto label_275b88;
        }
    }
    ctx->pc = 0x275AECu;
label_275aec:
    // 0x275aec: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x275aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_275af0:
    // 0x275af0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_275af4:
    if (ctx->pc == 0x275AF4u) {
        ctx->pc = 0x275AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AF0u;
        // 0x275af4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275AF8u;
        goto label_275af8;
    }
    ctx->pc = 0x275AF0u;
    {
        const bool branch_taken_0x275af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AF0u;
        // 0x275af4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275af0) {
            ctx->pc = 0x275B58u;
            goto label_275b58;
        }
    }
    ctx->pc = 0x275AF8u;
label_275af8:
    // 0x275af8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_275afc:
    if (ctx->pc == 0x275AFCu) {
        ctx->pc = 0x275AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AF8u;
        // 0x275afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275B00u;
        goto label_275b00;
    }
    ctx->pc = 0x275AF8u;
    {
        const bool branch_taken_0x275af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AF8u;
        // 0x275afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275af8) {
            ctx->pc = 0x275B28u;
            goto label_275b28;
        }
    }
    ctx->pc = 0x275B00u;
label_275b00:
    // 0x275b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275b04:
    // 0x275b04: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x275b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_275b08:
    // 0x275b08: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x275b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_275b0c:
    // 0x275b0c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x275b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_275b10:
    // 0x275b10: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x275b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_275b14:
    // 0x275b14: 0x60f809  jalr        $v1
label_275b18:
    if (ctx->pc == 0x275B18u) {
        ctx->pc = 0x275B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B14u;
        // 0x275b18: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275B1Cu;
        goto label_275b1c;
    }
    ctx->pc = 0x275B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x275B1Cu);
        ctx->pc = 0x275B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B14u;
        // 0x275b18: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275B14u, 0x275B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275B1Cu;
label_275b1c:
    // 0x275b1c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x275b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_275b20:
    // 0x275b20: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x275b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_275b24:
    // 0x275b24: 0x2672ffff  addiu       $s2, $s3, -0x1
    ctx->pc = 0x275b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_275b28:
    // 0x275b28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275b2c:
    // 0x275b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275b30:
    // 0x275b30: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x275b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_275b34:
    // 0x275b34: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x275b34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_275b38:
    // 0x275b38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x275b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_275b3c:
    // 0x275b3c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x275b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_275b40:
    // 0x275b40: 0x60f809  jalr        $v1
label_275b44:
    if (ctx->pc == 0x275B44u) {
        ctx->pc = 0x275B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B40u;
        // 0x275b44: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275B48u;
        goto label_275b48;
    }
    ctx->pc = 0x275B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x275B48u);
        ctx->pc = 0x275B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B40u;
        // 0x275b44: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275B40u, 0x275B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275B48u;
label_275b48:
    // 0x275b48: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x275b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_275b4c:
    // 0x275b4c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x275b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_275b50:
    // 0x275b50: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x275b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_275b54:
    // 0x275b54: 0x0  nop
    ctx->pc = 0x275b54u;
    // NOP
label_275b58:
    // 0x275b58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275b5c:
    // 0x275b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275b60:
    // 0x275b60: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x275b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_275b64:
    // 0x275b64: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x275b64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_275b68:
    // 0x275b68: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x275b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_275b6c:
    // 0x275b6c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x275b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_275b70:
    // 0x275b70: 0x60f809  jalr        $v1
label_275b74:
    if (ctx->pc == 0x275B74u) {
        ctx->pc = 0x275B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B70u;
        // 0x275b74: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275B78u;
        goto label_275b78;
    }
    ctx->pc = 0x275B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x275B78u);
        ctx->pc = 0x275B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B70u;
        // 0x275b74: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275B70u, 0x275B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275B78u;
label_275b78:
    // 0x275b78: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x275b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_275b7c:
    // 0x275b7c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x275b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_275b80:
    // 0x275b80: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_275b84:
    if (ctx->pc == 0x275B84u) {
        ctx->pc = 0x275B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B80u;
        // 0x275b84: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275B88u;
        goto label_275b88;
    }
    ctx->pc = 0x275B80u;
    {
        const bool branch_taken_0x275b80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x275B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B80u;
        // 0x275b84: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b80) {
            ctx->pc = 0x275C30u;
            goto label_275c30;
        }
    }
    ctx->pc = 0x275B88u;
label_275b88:
    // 0x275b88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275b8c:
    // 0x275b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275b90:
    // 0x275b90: 0x8e280044  lw          $t0, 0x44($s1)
    ctx->pc = 0x275b90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_275b94:
    // 0x275b94: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x275b94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_275b98:
    // 0x275b98: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x275b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_275b9c:
    // 0x275b9c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x275b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_275ba0:
    // 0x275ba0: 0x100f809  jalr        $t0
label_275ba4:
    if (ctx->pc == 0x275BA4u) {
        ctx->pc = 0x275BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BA0u;
        // 0x275ba4: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275BA8u;
        goto label_275ba8;
    }
    ctx->pc = 0x275BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x275BA8u);
        ctx->pc = 0x275BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BA0u;
        // 0x275ba4: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275BA0u, 0x275BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275BA8u;
label_275ba8:
    // 0x275ba8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x275ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_275bac:
    // 0x275bac: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x275bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_275bb0:
    // 0x275bb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275bb4:
    // 0x275bb4: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x275bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_275bb8:
    // 0x275bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275bbc:
    // 0x275bbc: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x275bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_275bc0:
    // 0x275bc0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x275bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_275bc4:
    // 0x275bc4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x275bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_275bc8:
    // 0x275bc8: 0x40f809  jalr        $v0
label_275bcc:
    if (ctx->pc == 0x275BCCu) {
        ctx->pc = 0x275BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BC8u;
        // 0x275bcc: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275BD0u;
        goto label_275bd0;
    }
    ctx->pc = 0x275BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275BD0u);
        ctx->pc = 0x275BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BC8u;
        // 0x275bcc: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275BC8u, 0x275BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275BD0u;
label_275bd0:
    // 0x275bd0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x275bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_275bd4:
    // 0x275bd4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x275bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_275bd8:
    // 0x275bd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275bdc:
    // 0x275bdc: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x275bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_275be0:
    // 0x275be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275be4:
    // 0x275be4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x275be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_275be8:
    // 0x275be8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x275be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_275bec:
    // 0x275bec: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x275becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_275bf0:
    // 0x275bf0: 0x40f809  jalr        $v0
label_275bf4:
    if (ctx->pc == 0x275BF4u) {
        ctx->pc = 0x275BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BF0u;
        // 0x275bf4: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275BF8u;
        goto label_275bf8;
    }
    ctx->pc = 0x275BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275BF8u);
        ctx->pc = 0x275BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BF0u;
        // 0x275bf4: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275BF0u, 0x275BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275BF8u;
label_275bf8:
    // 0x275bf8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x275bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_275bfc:
    // 0x275bfc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x275bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_275c00:
    // 0x275c00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275c04:
    // 0x275c04: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x275c04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_275c08:
    // 0x275c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275c0c:
    // 0x275c0c: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x275c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_275c10:
    // 0x275c10: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x275c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_275c14:
    // 0x275c14: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x275c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_275c18:
    // 0x275c18: 0x60f809  jalr        $v1
label_275c1c:
    if (ctx->pc == 0x275C1Cu) {
        ctx->pc = 0x275C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C18u;
        // 0x275c1c: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275C20u;
        goto label_275c20;
    }
    ctx->pc = 0x275C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x275C20u);
        ctx->pc = 0x275C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C18u;
        // 0x275c1c: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275C18u, 0x275C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275C20u;
label_275c20:
    // 0x275c20: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x275c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_275c24:
    // 0x275c24: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x275c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_275c28:
    // 0x275c28: 0x1640ffd7  bnez        $s2, . + 4 + (-0x29 << 2)
label_275c2c:
    if (ctx->pc == 0x275C2Cu) {
        ctx->pc = 0x275C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C28u;
        // 0x275c2c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275C30u;
        goto label_275c30;
    }
    ctx->pc = 0x275C28u;
    {
        const bool branch_taken_0x275c28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x275C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C28u;
        // 0x275c2c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c28) {
            ctx->pc = 0x275B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275b88;
        }
    }
    ctx->pc = 0x275C30u;
label_275c30:
    // 0x275c30: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_275c34:
    if (ctx->pc == 0x275C34u) {
        ctx->pc = 0x275C38u;
        goto label_275c38;
    }
    ctx->pc = 0x275C30u;
    {
        const bool branch_taken_0x275c30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c30) {
            ctx->pc = 0x275C58u;
            goto label_275c58;
        }
    }
    ctx->pc = 0x275C38u;
label_275c38:
    // 0x275c38: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x275c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_275c3c:
    // 0x275c3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_275c40:
    if (ctx->pc == 0x275C40u) {
        ctx->pc = 0x275C44u;
        goto label_275c44;
    }
    ctx->pc = 0x275C3Cu;
    {
        const bool branch_taken_0x275c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c3c) {
            ctx->pc = 0x275C58u;
            goto label_275c58;
        }
    }
    ctx->pc = 0x275C44u;
label_275c44:
    // 0x275c44: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x275c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_275c48:
    // 0x275c48: 0x40f809  jalr        $v0
label_275c4c:
    if (ctx->pc == 0x275C4Cu) {
        ctx->pc = 0x275C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C48u;
        // 0x275c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275C50u;
        goto label_275c50;
    }
    ctx->pc = 0x275C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275C50u);
        ctx->pc = 0x275C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C48u;
        // 0x275c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275C48u, 0x275C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275C50u;
label_275c50:
    // 0x275c50: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_275c54:
    if (ctx->pc == 0x275C54u) {
        ctx->pc = 0x275C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C50u;
        // 0x275c54: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275C58u;
        goto label_275c58;
    }
    ctx->pc = 0x275C50u;
    {
        const bool branch_taken_0x275c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c50) {
            ctx->pc = 0x275C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275C50u;
            // 0x275c54: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275C58u;
            goto label_275c58;
        }
    }
    ctx->pc = 0x275C58u;
label_275c58:
    // 0x275c58: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_275c5c:
    if (ctx->pc == 0x275C5Cu) {
        ctx->pc = 0x275C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C58u;
        // 0x275c5c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275C60u;
        goto label_275c60;
    }
    ctx->pc = 0x275C58u;
    {
        const bool branch_taken_0x275c58 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C58u;
        // 0x275c5c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c58) {
            ctx->pc = 0x275C84u;
            goto label_275c84;
        }
    }
    ctx->pc = 0x275C60u;
label_275c60:
    // 0x275c60: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x275c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_275c64:
    // 0x275c64: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_275c68:
    if (ctx->pc == 0x275C68u) {
        ctx->pc = 0x275C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C64u;
        // 0x275c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275C6Cu;
        goto label_275c6c;
    }
    ctx->pc = 0x275C64u;
    {
        const bool branch_taken_0x275c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c64) {
            ctx->pc = 0x275C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275C64u;
            // 0x275c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275C88u;
            goto label_275c88;
        }
    }
    ctx->pc = 0x275C6Cu;
label_275c6c:
    // 0x275c6c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x275c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_275c70:
    // 0x275c70: 0x40f809  jalr        $v0
label_275c74:
    if (ctx->pc == 0x275C74u) {
        ctx->pc = 0x275C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C70u;
        // 0x275c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275C78u;
        goto label_275c78;
    }
    ctx->pc = 0x275C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275C78u);
        ctx->pc = 0x275C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C70u;
        // 0x275c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275C70u, 0x275C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275C78u;
label_275c78:
    // 0x275c78: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_275c7c:
    if (ctx->pc == 0x275C7Cu) {
        ctx->pc = 0x275C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C78u;
        // 0x275c7c: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275C80u;
        goto label_275c80;
    }
    ctx->pc = 0x275C78u;
    {
        const bool branch_taken_0x275c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c78) {
            ctx->pc = 0x275C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275C78u;
            // 0x275c7c: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275C80u;
            goto label_275c80;
        }
    }
    ctx->pc = 0x275C80u;
label_275c80:
    // 0x275c80: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x275c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_275c84:
    // 0x275c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275c88:
    // 0x275c88: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x275c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_275c8c:
    // 0x275c8c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x275c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_275c90:
    // 0x275c90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x275c90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_275c94:
    // 0x275c94: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x275c94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_275c98:
    // 0x275c98: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x275c98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_275c9c:
    // 0x275c9c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x275c9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_275ca0:
    // 0x275ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_275ca4:
    // 0x275ca4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x275ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_275ca8:
    // 0x275ca8: 0x3e00008  jr          $ra
label_275cac:
    if (ctx->pc == 0x275CACu) {
        ctx->pc = 0x275CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CA8u;
        // 0x275cac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275CB0u;
        goto label_275cb0;
    }
    ctx->pc = 0x275CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CA8u;
        // 0x275cac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275CB0u;
label_275cb0:
    // 0x275cb0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x275cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_275cb4:
    // 0x275cb4: 0x0  nop
    ctx->pc = 0x275cb4u;
    // NOP
label_275cb8:
    // 0x275cb8: 0xaf85c010  sw          $a1, -0x3FF0($gp)
    ctx->pc = 0x275cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950928), GPR_U32(ctx, 5));
label_275cbc:
    // 0x275cbc: 0x0  nop
    ctx->pc = 0x275cbcu;
    // NOP
    ctx->pc = 0x275cc0u;
}
