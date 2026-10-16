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

// Function: sub_00151940
// Address: 0x151940 - 0x151b50
void sub_00151940_0x151940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151940_0x151940");
#endif

    switch (ctx->pc) {
        case 0x151940u: goto label_151940;
        case 0x151944u: goto label_151944;
        case 0x151948u: goto label_151948;
        case 0x15194cu: goto label_15194c;
        case 0x151950u: goto label_151950;
        case 0x151954u: goto label_151954;
        case 0x151958u: goto label_151958;
        case 0x15195cu: goto label_15195c;
        case 0x151960u: goto label_151960;
        case 0x151964u: goto label_151964;
        case 0x151968u: goto label_151968;
        case 0x15196cu: goto label_15196c;
        case 0x151970u: goto label_151970;
        case 0x151974u: goto label_151974;
        case 0x151978u: goto label_151978;
        case 0x15197cu: goto label_15197c;
        case 0x151980u: goto label_151980;
        case 0x151984u: goto label_151984;
        case 0x151988u: goto label_151988;
        case 0x15198cu: goto label_15198c;
        case 0x151990u: goto label_151990;
        case 0x151994u: goto label_151994;
        case 0x151998u: goto label_151998;
        case 0x15199cu: goto label_15199c;
        case 0x1519a0u: goto label_1519a0;
        case 0x1519a4u: goto label_1519a4;
        case 0x1519a8u: goto label_1519a8;
        case 0x1519acu: goto label_1519ac;
        case 0x1519b0u: goto label_1519b0;
        case 0x1519b4u: goto label_1519b4;
        case 0x1519b8u: goto label_1519b8;
        case 0x1519bcu: goto label_1519bc;
        case 0x1519c0u: goto label_1519c0;
        case 0x1519c4u: goto label_1519c4;
        case 0x1519c8u: goto label_1519c8;
        case 0x1519ccu: goto label_1519cc;
        case 0x1519d0u: goto label_1519d0;
        case 0x1519d4u: goto label_1519d4;
        case 0x1519d8u: goto label_1519d8;
        case 0x1519dcu: goto label_1519dc;
        case 0x1519e0u: goto label_1519e0;
        case 0x1519e4u: goto label_1519e4;
        case 0x1519e8u: goto label_1519e8;
        case 0x1519ecu: goto label_1519ec;
        case 0x1519f0u: goto label_1519f0;
        case 0x1519f4u: goto label_1519f4;
        case 0x1519f8u: goto label_1519f8;
        case 0x1519fcu: goto label_1519fc;
        case 0x151a00u: goto label_151a00;
        case 0x151a04u: goto label_151a04;
        case 0x151a08u: goto label_151a08;
        case 0x151a0cu: goto label_151a0c;
        case 0x151a10u: goto label_151a10;
        case 0x151a14u: goto label_151a14;
        case 0x151a18u: goto label_151a18;
        case 0x151a1cu: goto label_151a1c;
        case 0x151a20u: goto label_151a20;
        case 0x151a24u: goto label_151a24;
        case 0x151a28u: goto label_151a28;
        case 0x151a2cu: goto label_151a2c;
        case 0x151a30u: goto label_151a30;
        case 0x151a34u: goto label_151a34;
        case 0x151a38u: goto label_151a38;
        case 0x151a3cu: goto label_151a3c;
        case 0x151a40u: goto label_151a40;
        case 0x151a44u: goto label_151a44;
        case 0x151a48u: goto label_151a48;
        case 0x151a4cu: goto label_151a4c;
        case 0x151a50u: goto label_151a50;
        case 0x151a54u: goto label_151a54;
        case 0x151a58u: goto label_151a58;
        case 0x151a5cu: goto label_151a5c;
        case 0x151a60u: goto label_151a60;
        case 0x151a64u: goto label_151a64;
        case 0x151a68u: goto label_151a68;
        case 0x151a6cu: goto label_151a6c;
        case 0x151a70u: goto label_151a70;
        case 0x151a74u: goto label_151a74;
        case 0x151a78u: goto label_151a78;
        case 0x151a7cu: goto label_151a7c;
        case 0x151a80u: goto label_151a80;
        case 0x151a84u: goto label_151a84;
        case 0x151a88u: goto label_151a88;
        case 0x151a8cu: goto label_151a8c;
        case 0x151a90u: goto label_151a90;
        case 0x151a94u: goto label_151a94;
        case 0x151a98u: goto label_151a98;
        case 0x151a9cu: goto label_151a9c;
        case 0x151aa0u: goto label_151aa0;
        case 0x151aa4u: goto label_151aa4;
        case 0x151aa8u: goto label_151aa8;
        case 0x151aacu: goto label_151aac;
        case 0x151ab0u: goto label_151ab0;
        case 0x151ab4u: goto label_151ab4;
        case 0x151ab8u: goto label_151ab8;
        case 0x151abcu: goto label_151abc;
        case 0x151ac0u: goto label_151ac0;
        case 0x151ac4u: goto label_151ac4;
        case 0x151ac8u: goto label_151ac8;
        case 0x151accu: goto label_151acc;
        case 0x151ad0u: goto label_151ad0;
        case 0x151ad4u: goto label_151ad4;
        case 0x151ad8u: goto label_151ad8;
        case 0x151adcu: goto label_151adc;
        case 0x151ae0u: goto label_151ae0;
        case 0x151ae4u: goto label_151ae4;
        case 0x151ae8u: goto label_151ae8;
        case 0x151aecu: goto label_151aec;
        case 0x151af0u: goto label_151af0;
        case 0x151af4u: goto label_151af4;
        case 0x151af8u: goto label_151af8;
        case 0x151afcu: goto label_151afc;
        case 0x151b00u: goto label_151b00;
        case 0x151b04u: goto label_151b04;
        case 0x151b08u: goto label_151b08;
        case 0x151b0cu: goto label_151b0c;
        case 0x151b10u: goto label_151b10;
        case 0x151b14u: goto label_151b14;
        case 0x151b18u: goto label_151b18;
        case 0x151b1cu: goto label_151b1c;
        case 0x151b20u: goto label_151b20;
        case 0x151b24u: goto label_151b24;
        case 0x151b28u: goto label_151b28;
        case 0x151b2cu: goto label_151b2c;
        case 0x151b30u: goto label_151b30;
        case 0x151b34u: goto label_151b34;
        case 0x151b38u: goto label_151b38;
        case 0x151b3cu: goto label_151b3c;
        case 0x151b40u: goto label_151b40;
        case 0x151b44u: goto label_151b44;
        case 0x151b48u: goto label_151b48;
        case 0x151b4cu: goto label_151b4c;
        default: break;
    }

    ctx->pc = 0x151940u;

label_151940:
    // 0x151940: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x151940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_151944:
    // 0x151944: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x151944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
label_151948:
    // 0x151948: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x151948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
label_15194c:
    // 0x15194c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15194cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_151950:
    // 0x151950: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x151950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
label_151954:
    // 0x151954: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x151954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_151958:
    // 0x151958: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x151958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
label_15195c:
    // 0x15195c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15195cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151960:
    // 0x151960: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x151960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
label_151964:
    // 0x151964: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x151964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
label_151968:
    // 0x151968: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x151968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_15196c:
    // 0x15196c: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x15196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
label_151970:
    // 0x151970: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x151970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
label_151974:
    // 0x151974: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x151974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_151978:
    // 0x151978: 0xe7b801f0  swc1        $f24, 0x1F0($sp)
    ctx->pc = 0x151978u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_15197c:
    // 0x15197c: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x15197cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_151980:
    // 0x151980: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x151980u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_151984:
    // 0x151984: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x151984u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_151988:
    // 0x151988: 0xc085ba8  jal         func_216EA0
label_15198c:
    if (ctx->pc == 0x15198Cu) {
        ctx->pc = 0x15198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151988u;
        // 0x15198c: 0xe7b401d0  swc1        $f20, 0x1D0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151990u;
        goto label_151990;
    }
    ctx->pc = 0x151988u;
    SET_GPR_U32(ctx, 31, 0x151990u);
    ctx->pc = 0x15198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151988u;
    // 0x15198c: 0xe7b401d0  swc1        $f20, 0x1D0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x151988u, 0x151990u)) {
        return;
    }
    ctx->pc = 0x151990u;
label_151990:
    // 0x151990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x151990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_151994:
    // 0x151994: 0x5200005e  beql        $s0, $zero, . + 4 + (0x5E << 2)
label_151998:
    if (ctx->pc == 0x151998u) {
        ctx->pc = 0x151998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151994u;
        // 0x151998: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15199Cu;
        goto label_15199c;
    }
    ctx->pc = 0x151994u;
    {
        const bool branch_taken_0x151994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x151994) {
            ctx->pc = 0x151998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151994u;
            // 0x151998: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151B10u;
            goto label_151b10;
        }
    }
    ctx->pc = 0x15199Cu;
label_15199c:
    // 0x15199c: 0xc07cd68  jal         func_1F35A0
label_1519a0:
    if (ctx->pc == 0x1519A0u) {
        ctx->pc = 0x1519A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15199Cu;
        // 0x1519a0: 0x3c140069  lui         $s4, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519A4u;
        goto label_1519a4;
    }
    ctx->pc = 0x15199Cu;
    SET_GPR_U32(ctx, 31, 0x1519A4u);
    ctx->pc = 0x1519A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15199Cu;
    // 0x1519a0: 0x3c140069  lui         $s4, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F35A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F35A0u, 0x15199Cu, 0x1519A4u)) {
        return;
    }
    ctx->pc = 0x1519A4u;
label_1519a4:
    // 0x1519a4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1519a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1519a8:
    // 0x1519a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1519a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1519ac:
    // 0x1519ac: 0xc46c853c  lwc1        $f12, -0x7AC4($v1)
    ctx->pc = 0x1519acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294935868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1519b0:
    // 0x1519b0: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1519b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1519b4:
    // 0x1519b4: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x1519b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
label_1519b8:
    // 0x1519b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1519b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1519bc:
    // 0x1519bc: 0x24c68548  addiu       $a2, $a2, -0x7AB8
    ctx->pc = 0x1519bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935880));
label_1519c0:
    // 0x1519c0: 0x24e724e8  addiu       $a3, $a3, 0x24E8
    ctx->pc = 0x1519c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9448));
label_1519c4:
    // 0x1519c4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1519c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1519c8:
    // 0x1519c8: 0xc085cec  jal         func_2173B0
label_1519cc:
    if (ctx->pc == 0x1519CCu) {
        ctx->pc = 0x1519CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519C8u;
        // 0x1519cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519D0u;
        goto label_1519d0;
    }
    ctx->pc = 0x1519C8u;
    SET_GPR_U32(ctx, 31, 0x1519D0u);
    ctx->pc = 0x1519CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519C8u;
    // 0x1519cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1519C8u, 0x1519D0u)) {
        return;
    }
    ctx->pc = 0x1519D0u;
label_1519d0:
    // 0x1519d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1519d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1519d4:
    // 0x1519d4: 0xc6410080  lwc1        $f1, 0x80($s2)
    ctx->pc = 0x1519d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1519d8:
    // 0x1519d8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1519d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_1519dc:
    // 0x1519dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1519dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1519e0:
    // 0x1519e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1519e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1519e4:
    // 0x1519e4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1519e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1519e8:
    // 0x1519e8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1519e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_1519ec:
    // 0x1519ec: 0x24530fd8  addiu       $s3, $v0, 0xFD8
    ctx->pc = 0x1519ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_1519f0:
    // 0x1519f0: 0x0  nop
    ctx->pc = 0x1519f0u;
    // NOP
label_1519f4:
    // 0x1519f4: 0x0  nop
    ctx->pc = 0x1519f4u;
    // NOP
label_1519f8:
    // 0x1519f8: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x1519f8u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1519fc:
    // 0x1519fc: 0xc4772510  lwc1        $f23, 0x2510($v1)
    ctx->pc = 0x1519fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 9488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_151a00:
    // 0x151a00: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x151a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_151a04:
    // 0x151a04: 0xc6982500  lwc1        $f24, 0x2500($s4)
    ctx->pc = 0x151a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 9472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_151a08:
    // 0x151a08: 0x24872508  addiu       $a3, $a0, 0x2508
    ctx->pc = 0x151a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 9480));
label_151a0c:
    // 0x151a0c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x151a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_151a10:
    // 0x151a10: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x151a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_151a14:
    // 0x151a14: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x151a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_151a18:
    // 0x151a18: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x151a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_151a1c:
    // 0x151a1c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x151a1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_151a20:
    // 0x151a20: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x151a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_151a24:
    // 0x151a24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x151a24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_151a28:
    // 0x151a28: 0x24528560  addiu       $s2, $v0, -0x7AA0
    ctx->pc = 0x151a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935904));
label_151a2c:
    // 0x151a2c: 0x3c1e0069  lui         $fp, 0x69
    ctx->pc = 0x151a2cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)105 << 16));
label_151a30:
    // 0x151a30: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x151a30u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
label_151a34:
    // 0x151a34: 0x0  nop
    ctx->pc = 0x151a34u;
    // NOP
label_151a38:
    // 0x151a38: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x151a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_151a3c:
    // 0x151a3c: 0x27c624f0  addiu       $a2, $fp, 0x24F0
    ctx->pc = 0x151a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 9456));
label_151a40:
    // 0x151a40: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x151a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_151a44:
    // 0x151a44: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x151a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_151a48:
    // 0x151a48: 0xaba30023  swl         $v1, 0x23($sp)
    ctx->pc = 0x151a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_151a4c:
    // 0x151a4c: 0xbba30020  swr         $v1, 0x20($sp)
    ctx->pc = 0x151a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_151a50:
    // 0x151a50: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_151a54:
    if (ctx->pc == 0x151A54u) {
        ctx->pc = 0x151A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A50u;
        // 0x151a54: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A58u;
        goto label_151a58;
    }
    ctx->pc = 0x151A50u;
    {
        const bool branch_taken_0x151a50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x151a50) {
            ctx->pc = 0x151A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151A50u;
            // 0x151a54: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151A70u;
            goto label_151a70;
        }
    }
    ctx->pc = 0x151A58u;
label_151a58:
    // 0x151a58: 0x26e424f8  addiu       $a0, $s7, 0x24F8
    ctx->pc = 0x151a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 9464));
label_151a5c:
    // 0x151a5c: 0x88870003  lwl         $a3, 0x3($a0)
    ctx->pc = 0x151a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_151a60:
    // 0x151a60: 0x98870000  lwr         $a3, 0x0($a0)
    ctx->pc = 0x151a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_151a64:
    // 0x151a64: 0xaba70023  swl         $a3, 0x23($sp)
    ctx->pc = 0x151a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_151a68:
    // 0x151a68: 0xbba70020  swr         $a3, 0x20($sp)
    ctx->pc = 0x151a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_151a6c:
    // 0x151a6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x151a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_151a70:
    // 0x151a70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x151a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_151a74:
    // 0x151a74: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x151a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_151a78:
    // 0x151a78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x151a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_151a7c:
    // 0x151a7c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x151a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_151a80:
    // 0x151a80: 0x40f809  jalr        $v0
label_151a84:
    if (ctx->pc == 0x151A84u) {
        ctx->pc = 0x151A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A80u;
        // 0x151a84: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A88u;
        goto label_151a88;
    }
    ctx->pc = 0x151A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151A88u);
        ctx->pc = 0x151A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A80u;
        // 0x151a84: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151A80u, 0x151A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151A88u;
label_151a88:
    // 0x151a88: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x151a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_151a8c:
    // 0x151a8c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x151a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
label_151a90:
    // 0x151a90: 0x24a52500  addiu       $a1, $a1, 0x2500
    ctx->pc = 0x151a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9472));
label_151a94:
    // 0x151a94: 0x24c60fc8  addiu       $a2, $a2, 0xFC8
    ctx->pc = 0x151a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4040));
label_151a98:
    // 0x151a98: 0xc4d00018  lwc1        $f16, 0x18($a2)
    ctx->pc = 0x151a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_151a9c:
    // 0x151a9c: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x151a9cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
label_151aa0:
    // 0x151aa0: 0xc4af0004  lwc1        $f15, 0x4($a1)
    ctx->pc = 0x151aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_151aa4:
    // 0x151aa4: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x151aa4u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
label_151aa8:
    // 0x151aa8: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x151aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_151aac:
    // 0x151aac: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x151aacu;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
label_151ab0:
    // 0x151ab0: 0xc68e2500  lwc1        $f14, 0x2500($s4)
    ctx->pc = 0x151ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 9472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_151ab4:
    // 0x151ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_151ab8:
    // 0x151ab8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x151ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_151abc:
    // 0x151abc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x151abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_151ac0:
    // 0x151ac0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x151ac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_151ac4:
    // 0x151ac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151ac8:
    // 0x151ac8: 0xc06ce2a  jal         func_1B38A8
label_151acc:
    if (ctx->pc == 0x151ACCu) {
        ctx->pc = 0x151ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AC8u;
        // 0x151acc: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151AD0u;
        goto label_151ad0;
    }
    ctx->pc = 0x151AC8u;
    SET_GPR_U32(ctx, 31, 0x151AD0u);
    ctx->pc = 0x151ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151AC8u;
    // 0x151acc: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x151AC8u, 0x151AD0u)) {
        return;
    }
    ctx->pc = 0x151AD0u;
label_151ad0:
    // 0x151ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_151ad4:
    // 0x151ad4: 0xc06cff8  jal         func_1B3FE0
label_151ad8:
    if (ctx->pc == 0x151AD8u) {
        ctx->pc = 0x151AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AD4u;
        // 0x151ad8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151ADCu;
        goto label_151adc;
    }
    ctx->pc = 0x151AD4u;
    SET_GPR_U32(ctx, 31, 0x151ADCu);
    ctx->pc = 0x151AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151AD4u;
    // 0x151ad8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x151AD4u, 0x151ADCu)) {
        return;
    }
    ctx->pc = 0x151ADCu;
label_151adc:
    // 0x151adc: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x151adcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
label_151ae0:
    // 0x151ae0: 0x4617c0c0  add.s       $f3, $f24, $f23
    ctx->pc = 0x151ae0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
label_151ae4:
    // 0x151ae4: 0x24e72510  addiu       $a3, $a3, 0x2510
    ctx->pc = 0x151ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9488));
label_151ae8:
    // 0x151ae8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x151ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151aec:
    // 0x151aec: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x151aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_151af0:
    // 0x151af0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x151af0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_151af4:
    // 0x151af4: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x151af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_151af8:
    // 0x151af8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x151af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_151afc:
    // 0x151afc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x151afcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_151b00:
    // 0x151b00: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x151b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_151b04:
    // 0x151b04: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_151b08:
    if (ctx->pc == 0x151B08u) {
        ctx->pc = 0x151B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B04u;
        // 0x151b08: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B0Cu;
        goto label_151b0c;
    }
    ctx->pc = 0x151B04u;
    {
        const bool branch_taken_0x151b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B04u;
        // 0x151b08: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b04) {
            ctx->pc = 0x151A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151a38;
        }
    }
    ctx->pc = 0x151B0Cu;
label_151b0c:
    // 0x151b0c: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x151b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_151b10:
    // 0x151b10: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x151b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_151b14:
    // 0x151b14: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x151b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_151b18:
    // 0x151b18: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x151b18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_151b1c:
    // 0x151b1c: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x151b1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_151b20:
    // 0x151b20: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x151b20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_151b24:
    // 0x151b24: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x151b24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_151b28:
    // 0x151b28: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x151b28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_151b2c:
    // 0x151b2c: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x151b2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_151b30:
    // 0x151b30: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x151b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_151b34:
    // 0x151b34: 0xc7b801f0  lwc1        $f24, 0x1F0($sp)
    ctx->pc = 0x151b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_151b38:
    // 0x151b38: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x151b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_151b3c:
    // 0x151b3c: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x151b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_151b40:
    // 0x151b40: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x151b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_151b44:
    // 0x151b44: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x151b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_151b48:
    // 0x151b48: 0x3e00008  jr          $ra
label_151b4c:
    if (ctx->pc == 0x151B4Cu) {
        ctx->pc = 0x151B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B48u;
        // 0x151b4c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B50u;
        goto label_fallthrough_0x151b48;
    }
    ctx->pc = 0x151B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B48u;
        // 0x151b4c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x151b48:
    ctx->pc = 0x151B50u;
}
