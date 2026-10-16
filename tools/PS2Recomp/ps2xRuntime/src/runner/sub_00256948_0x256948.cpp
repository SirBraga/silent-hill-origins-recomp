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

// Function: sub_00256948
// Address: 0x256948 - 0x256c08
void sub_00256948_0x256948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256948_0x256948");
#endif

    switch (ctx->pc) {
        case 0x256948u: goto label_256948;
        case 0x25694cu: goto label_25694c;
        case 0x256950u: goto label_256950;
        case 0x256954u: goto label_256954;
        case 0x256958u: goto label_256958;
        case 0x25695cu: goto label_25695c;
        case 0x256960u: goto label_256960;
        case 0x256964u: goto label_256964;
        case 0x256968u: goto label_256968;
        case 0x25696cu: goto label_25696c;
        case 0x256970u: goto label_256970;
        case 0x256974u: goto label_256974;
        case 0x256978u: goto label_256978;
        case 0x25697cu: goto label_25697c;
        case 0x256980u: goto label_256980;
        case 0x256984u: goto label_256984;
        case 0x256988u: goto label_256988;
        case 0x25698cu: goto label_25698c;
        case 0x256990u: goto label_256990;
        case 0x256994u: goto label_256994;
        case 0x256998u: goto label_256998;
        case 0x25699cu: goto label_25699c;
        case 0x2569a0u: goto label_2569a0;
        case 0x2569a4u: goto label_2569a4;
        case 0x2569a8u: goto label_2569a8;
        case 0x2569acu: goto label_2569ac;
        case 0x2569b0u: goto label_2569b0;
        case 0x2569b4u: goto label_2569b4;
        case 0x2569b8u: goto label_2569b8;
        case 0x2569bcu: goto label_2569bc;
        case 0x2569c0u: goto label_2569c0;
        case 0x2569c4u: goto label_2569c4;
        case 0x2569c8u: goto label_2569c8;
        case 0x2569ccu: goto label_2569cc;
        case 0x2569d0u: goto label_2569d0;
        case 0x2569d4u: goto label_2569d4;
        case 0x2569d8u: goto label_2569d8;
        case 0x2569dcu: goto label_2569dc;
        case 0x2569e0u: goto label_2569e0;
        case 0x2569e4u: goto label_2569e4;
        case 0x2569e8u: goto label_2569e8;
        case 0x2569ecu: goto label_2569ec;
        case 0x2569f0u: goto label_2569f0;
        case 0x2569f4u: goto label_2569f4;
        case 0x2569f8u: goto label_2569f8;
        case 0x2569fcu: goto label_2569fc;
        case 0x256a00u: goto label_256a00;
        case 0x256a04u: goto label_256a04;
        case 0x256a08u: goto label_256a08;
        case 0x256a0cu: goto label_256a0c;
        case 0x256a10u: goto label_256a10;
        case 0x256a14u: goto label_256a14;
        case 0x256a18u: goto label_256a18;
        case 0x256a1cu: goto label_256a1c;
        case 0x256a20u: goto label_256a20;
        case 0x256a24u: goto label_256a24;
        case 0x256a28u: goto label_256a28;
        case 0x256a2cu: goto label_256a2c;
        case 0x256a30u: goto label_256a30;
        case 0x256a34u: goto label_256a34;
        case 0x256a38u: goto label_256a38;
        case 0x256a3cu: goto label_256a3c;
        case 0x256a40u: goto label_256a40;
        case 0x256a44u: goto label_256a44;
        case 0x256a48u: goto label_256a48;
        case 0x256a4cu: goto label_256a4c;
        case 0x256a50u: goto label_256a50;
        case 0x256a54u: goto label_256a54;
        case 0x256a58u: goto label_256a58;
        case 0x256a5cu: goto label_256a5c;
        case 0x256a60u: goto label_256a60;
        case 0x256a64u: goto label_256a64;
        case 0x256a68u: goto label_256a68;
        case 0x256a6cu: goto label_256a6c;
        case 0x256a70u: goto label_256a70;
        case 0x256a74u: goto label_256a74;
        case 0x256a78u: goto label_256a78;
        case 0x256a7cu: goto label_256a7c;
        case 0x256a80u: goto label_256a80;
        case 0x256a84u: goto label_256a84;
        case 0x256a88u: goto label_256a88;
        case 0x256a8cu: goto label_256a8c;
        case 0x256a90u: goto label_256a90;
        case 0x256a94u: goto label_256a94;
        case 0x256a98u: goto label_256a98;
        case 0x256a9cu: goto label_256a9c;
        case 0x256aa0u: goto label_256aa0;
        case 0x256aa4u: goto label_256aa4;
        case 0x256aa8u: goto label_256aa8;
        case 0x256aacu: goto label_256aac;
        case 0x256ab0u: goto label_256ab0;
        case 0x256ab4u: goto label_256ab4;
        case 0x256ab8u: goto label_256ab8;
        case 0x256abcu: goto label_256abc;
        case 0x256ac0u: goto label_256ac0;
        case 0x256ac4u: goto label_256ac4;
        case 0x256ac8u: goto label_256ac8;
        case 0x256accu: goto label_256acc;
        case 0x256ad0u: goto label_256ad0;
        case 0x256ad4u: goto label_256ad4;
        case 0x256ad8u: goto label_256ad8;
        case 0x256adcu: goto label_256adc;
        case 0x256ae0u: goto label_256ae0;
        case 0x256ae4u: goto label_256ae4;
        case 0x256ae8u: goto label_256ae8;
        case 0x256aecu: goto label_256aec;
        case 0x256af0u: goto label_256af0;
        case 0x256af4u: goto label_256af4;
        case 0x256af8u: goto label_256af8;
        case 0x256afcu: goto label_256afc;
        case 0x256b00u: goto label_256b00;
        case 0x256b04u: goto label_256b04;
        case 0x256b08u: goto label_256b08;
        case 0x256b0cu: goto label_256b0c;
        case 0x256b10u: goto label_256b10;
        case 0x256b14u: goto label_256b14;
        case 0x256b18u: goto label_256b18;
        case 0x256b1cu: goto label_256b1c;
        case 0x256b20u: goto label_256b20;
        case 0x256b24u: goto label_256b24;
        case 0x256b28u: goto label_256b28;
        case 0x256b2cu: goto label_256b2c;
        case 0x256b30u: goto label_256b30;
        case 0x256b34u: goto label_256b34;
        case 0x256b38u: goto label_256b38;
        case 0x256b3cu: goto label_256b3c;
        case 0x256b40u: goto label_256b40;
        case 0x256b44u: goto label_256b44;
        case 0x256b48u: goto label_256b48;
        case 0x256b4cu: goto label_256b4c;
        case 0x256b50u: goto label_256b50;
        case 0x256b54u: goto label_256b54;
        case 0x256b58u: goto label_256b58;
        case 0x256b5cu: goto label_256b5c;
        case 0x256b60u: goto label_256b60;
        case 0x256b64u: goto label_256b64;
        case 0x256b68u: goto label_256b68;
        case 0x256b6cu: goto label_256b6c;
        case 0x256b70u: goto label_256b70;
        case 0x256b74u: goto label_256b74;
        case 0x256b78u: goto label_256b78;
        case 0x256b7cu: goto label_256b7c;
        case 0x256b80u: goto label_256b80;
        case 0x256b84u: goto label_256b84;
        case 0x256b88u: goto label_256b88;
        case 0x256b8cu: goto label_256b8c;
        case 0x256b90u: goto label_256b90;
        case 0x256b94u: goto label_256b94;
        case 0x256b98u: goto label_256b98;
        case 0x256b9cu: goto label_256b9c;
        case 0x256ba0u: goto label_256ba0;
        case 0x256ba4u: goto label_256ba4;
        case 0x256ba8u: goto label_256ba8;
        case 0x256bacu: goto label_256bac;
        case 0x256bb0u: goto label_256bb0;
        case 0x256bb4u: goto label_256bb4;
        case 0x256bb8u: goto label_256bb8;
        case 0x256bbcu: goto label_256bbc;
        case 0x256bc0u: goto label_256bc0;
        case 0x256bc4u: goto label_256bc4;
        case 0x256bc8u: goto label_256bc8;
        case 0x256bccu: goto label_256bcc;
        case 0x256bd0u: goto label_256bd0;
        case 0x256bd4u: goto label_256bd4;
        case 0x256bd8u: goto label_256bd8;
        case 0x256bdcu: goto label_256bdc;
        case 0x256be0u: goto label_256be0;
        case 0x256be4u: goto label_256be4;
        case 0x256be8u: goto label_256be8;
        case 0x256becu: goto label_256bec;
        case 0x256bf0u: goto label_256bf0;
        case 0x256bf4u: goto label_256bf4;
        case 0x256bf8u: goto label_256bf8;
        case 0x256bfcu: goto label_256bfc;
        case 0x256c00u: goto label_256c00;
        case 0x256c04u: goto label_256c04;
        default: break;
    }

    ctx->pc = 0x256948u;

label_256948:
    // 0x256948: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x256948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_25694c:
    // 0x25694c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x25694cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_256950:
    // 0x256950: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x256950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_256954:
    // 0x256954: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x256954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_256958:
    // 0x256958: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x256958u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25695c:
    // 0x25695c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x25695cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_256960:
    // 0x256960: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x256960u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_256964:
    // 0x256964: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x256964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_256968:
    // 0x256968: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x256968u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25696c:
    // 0x25696c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x25696cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_256970:
    // 0x256970: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x256970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_256974:
    // 0x256974: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x256974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_256978:
    // 0x256978: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x256978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_25697c:
    // 0x25697c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x25697cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_256980:
    // 0x256980: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x256980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_256984:
    // 0x256984: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_256988:
    if (ctx->pc == 0x256988u) {
        ctx->pc = 0x256988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256984u;
        // 0x256988: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25698Cu;
        goto label_25698c;
    }
    ctx->pc = 0x256984u;
    {
        const bool branch_taken_0x256984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256984u;
        // 0x256988: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256984) {
            ctx->pc = 0x256994u;
            goto label_256994;
        }
    }
    ctx->pc = 0x25698Cu;
label_25698c:
    // 0x25698c: 0x6c3000e  bgezl       $s6, . + 4 + (0xE << 2)
label_256990:
    if (ctx->pc == 0x256990u) {
        ctx->pc = 0x256990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25698Cu;
        // 0x256990: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256994u;
        goto label_256994;
    }
    ctx->pc = 0x25698Cu;
    {
        const bool branch_taken_0x25698c = (GPR_S64(ctx, 22) >= 0);
        if (branch_taken_0x25698c) {
            ctx->pc = 0x256990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25698Cu;
            // 0x256990: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2569C8u;
            goto label_2569c8;
        }
    }
    ctx->pc = 0x256994u;
label_256994:
    // 0x256994: 0x680008e  bltz        $s4, . + 4 + (0x8E << 2)
label_256998:
    if (ctx->pc == 0x256998u) {
        ctx->pc = 0x256998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256994u;
        // 0x256998: 0x74102a  slt         $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25699Cu;
        goto label_25699c;
    }
    ctx->pc = 0x256994u;
    {
        const bool branch_taken_0x256994 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x256998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256994u;
        // 0x256998: 0x74102a  slt         $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256994) {
            ctx->pc = 0x256BD0u;
            goto label_256bd0;
        }
    }
    ctx->pc = 0x25699Cu;
label_25699c:
    // 0x25699c: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_2569a0:
    if (ctx->pc == 0x2569A0u) {
        ctx->pc = 0x2569A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25699Cu;
        // 0x2569a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2569A4u;
        goto label_2569a4;
    }
    ctx->pc = 0x25699Cu;
    {
        const bool branch_taken_0x25699c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25699Cu;
        // 0x2569a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25699c) {
            ctx->pc = 0x256BD0u;
            goto label_256bd0;
        }
    }
    ctx->pc = 0x2569A4u;
label_2569a4:
    // 0x2569a4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2569a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2569a8:
    // 0x2569a8: 0xc092848  jal         func_24A120
label_2569ac:
    if (ctx->pc == 0x2569ACu) {
        ctx->pc = 0x2569ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569A8u;
        // 0x2569ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2569B0u;
        goto label_2569b0;
    }
    ctx->pc = 0x2569A8u;
    SET_GPR_U32(ctx, 31, 0x2569B0u);
    ctx->pc = 0x2569ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2569A8u;
    // 0x2569ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2569A8u, 0x2569B0u)) {
        return;
    }
    ctx->pc = 0x2569B0u;
label_2569b0:
    // 0x2569b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2569b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2569b4:
    // 0x2569b4: 0xc09281a  jal         func_24A068
label_2569b8:
    if (ctx->pc == 0x2569B8u) {
        ctx->pc = 0x2569B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569B4u;
        // 0x2569b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2569BCu;
        goto label_2569bc;
    }
    ctx->pc = 0x2569B4u;
    SET_GPR_U32(ctx, 31, 0x2569BCu);
    ctx->pc = 0x2569B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2569B4u;
    // 0x2569b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2569B4u, 0x2569BCu)) {
        return;
    }
    ctx->pc = 0x2569BCu;
label_2569bc:
    // 0x2569bc: 0x10000085  b           . + 4 + (0x85 << 2)
label_2569c0:
    if (ctx->pc == 0x2569C0u) {
        ctx->pc = 0x2569C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569BCu;
        // 0x2569c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2569C4u;
        goto label_2569c4;
    }
    ctx->pc = 0x2569BCu;
    {
        const bool branch_taken_0x2569bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569BCu;
        // 0x2569c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569bc) {
            ctx->pc = 0x256BD4u;
            goto label_256bd4;
        }
    }
    ctx->pc = 0x2569C4u;
label_2569c4:
    // 0x2569c4: 0x0  nop
    ctx->pc = 0x2569c4u;
    // NOP
label_2569c8:
    // 0x2569c8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2569c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_2569cc:
    // 0x2569cc: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x2569ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_2569d0:
    // 0x2569d0: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x2569d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2569d4:
    // 0x2569d4: 0x32b300ff  andi        $s3, $s5, 0xFF
    ctx->pc = 0x2569d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_2569d8:
    // 0x2569d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2569dc:
    if (ctx->pc == 0x2569DCu) {
        ctx->pc = 0x2569DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569D8u;
        // 0x2569dc: 0x8c641210  lw          $a0, 0x1210($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2569E0u;
        goto label_2569e0;
    }
    ctx->pc = 0x2569D8u;
    {
        const bool branch_taken_0x2569d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569D8u;
        // 0x2569dc: 0x8c641210  lw          $a0, 0x1210($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569d8) {
            ctx->pc = 0x2569E8u;
            goto label_2569e8;
        }
    }
    ctx->pc = 0x2569E0u;
label_2569e0:
    // 0x2569e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2569e4:
    if (ctx->pc == 0x2569E4u) {
        ctx->pc = 0x2569E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569E0u;
        // 0x2569e4: 0x29402  srl         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2569E8u;
        goto label_2569e8;
    }
    ctx->pc = 0x2569E0u;
    {
        const bool branch_taken_0x2569e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569E0u;
        // 0x2569e4: 0x29402  srl         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569e0) {
            ctx->pc = 0x2569FCu;
            goto label_2569fc;
        }
    }
    ctx->pc = 0x2569E8u;
label_2569e8:
    // 0x2569e8: 0x32a20080  andi        $v0, $s5, 0x80
    ctx->pc = 0x2569e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
label_2569ec:
    // 0x2569ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2569f0:
    if (ctx->pc == 0x2569F0u) {
        ctx->pc = 0x2569F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569ECu;
        // 0x2569f0: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2569F4u;
        goto label_2569f4;
    }
    ctx->pc = 0x2569ECu;
    {
        const bool branch_taken_0x2569ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2569ec) {
            ctx->pc = 0x2569F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2569ECu;
            // 0x2569f0: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2569FCu;
            goto label_2569fc;
        }
    }
    ctx->pc = 0x2569F4u;
label_2569f4:
    // 0x2569f4: 0x159083  sra         $s2, $s5, 2
    ctx->pc = 0x2569f4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 21), 2));
label_2569f8:
    // 0x2569f8: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x2569f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2569fc:
    // 0x2569fc: 0x2402ff7b  addiu       $v0, $zero, -0x85
    ctx->pc = 0x2569fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967163));
label_256a00:
    // 0x256a00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x256a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256a04:
    // 0x256a04: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
label_256a08:
    if (ctx->pc == 0x256A08u) {
        ctx->pc = 0x256A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A04u;
        // 0x256a08: 0x2622824  and         $a1, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256A0Cu;
        goto label_256a0c;
    }
    ctx->pc = 0x256A04u;
    {
        const bool branch_taken_0x256a04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x256A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A04u;
        // 0x256a08: 0x2622824  and         $a1, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a04) {
            ctx->pc = 0x256A1Cu;
            goto label_256a1c;
        }
    }
    ctx->pc = 0x256A0Cu;
label_256a0c:
    // 0x256a0c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x256a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_256a10:
    // 0x256a10: 0x34b30080  ori         $s3, $a1, 0x80
    ctx->pc = 0x256a10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
label_256a14:
    // 0x256a14: 0x10000002  b           . + 4 + (0x2 << 2)
label_256a18:
    if (ctx->pc == 0x256A18u) {
        ctx->pc = 0x256A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A14u;
        // 0x256a18: 0xa2980b  movn        $s3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256A1Cu;
        goto label_256a1c;
    }
    ctx->pc = 0x256A14u;
    {
        const bool branch_taken_0x256a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A14u;
        // 0x256a18: 0xa2980b  movn        $s3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a14) {
            ctx->pc = 0x256A20u;
            goto label_256a20;
        }
    }
    ctx->pc = 0x256A1Cu;
label_256a1c:
    // 0x256a1c: 0x34b30004  ori         $s3, $a1, 0x4
    ctx->pc = 0x256a1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
label_256a20:
    // 0x256a20: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x256a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_256a24:
    // 0x256a24: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x256a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_256a28:
    // 0x256a28: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_256a2c:
    if (ctx->pc == 0x256A2Cu) {
        ctx->pc = 0x256A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A28u;
        // 0x256a2c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256A30u;
        goto label_256a30;
    }
    ctx->pc = 0x256A28u;
    {
        const bool branch_taken_0x256a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A28u;
        // 0x256a2c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a28) {
            ctx->pc = 0x256A5Cu;
            goto label_256a5c;
        }
    }
    ctx->pc = 0x256A30u;
label_256a30:
    // 0x256a30: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x256a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_256a34:
    // 0x256a34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_256a38:
    if (ctx->pc == 0x256A38u) {
        ctx->pc = 0x256A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A34u;
        // 0x256a38: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256A3Cu;
        goto label_256a3c;
    }
    ctx->pc = 0x256A34u;
    {
        const bool branch_taken_0x256a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A34u;
        // 0x256a38: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a34) {
            ctx->pc = 0x256A40u;
            goto label_256a40;
        }
    }
    ctx->pc = 0x256A3Cu;
label_256a3c:
    // 0x256a3c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x256a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_256a40:
    // 0x256a40: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_256a44:
    if (ctx->pc == 0x256A44u) {
        ctx->pc = 0x256A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A40u;
        // 0x256a44: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256A48u;
        goto label_256a48;
    }
    ctx->pc = 0x256A40u;
    {
        const bool branch_taken_0x256a40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A40u;
        // 0x256a44: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a40) {
            ctx->pc = 0x256A50u;
            goto label_256a50;
        }
    }
    ctx->pc = 0x256A48u;
label_256a48:
    // 0x256a48: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x256a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_256a4c:
    // 0x256a4c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x256a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_256a50:
    // 0x256a50: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x256a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_256a54:
    // 0x256a54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x256a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_256a58:
    // 0x256a58: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x256a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_256a5c:
    // 0x256a5c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x256a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_256a60:
    // 0x256a60: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x256a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_256a64:
    // 0x256a64: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x256a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_256a68:
    // 0x256a68: 0x40f809  jalr        $v0
label_256a6c:
    if (ctx->pc == 0x256A6Cu) {
        ctx->pc = 0x256A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A68u;
        // 0x256a6c: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x256A70u;
        goto label_256a70;
    }
    ctx->pc = 0x256A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256A70u);
        ctx->pc = 0x256A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A68u;
        // 0x256a6c: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256A68u, 0x256A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256A70u;
label_256a70:
    // 0x256a70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x256a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256a74:
    // 0x256a74: 0x12200057  beqz        $s1, . + 4 + (0x57 << 2)
label_256a78:
    if (ctx->pc == 0x256A78u) {
        ctx->pc = 0x256A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A74u;
        // 0x256a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256A7Cu;
        goto label_256a7c;
    }
    ctx->pc = 0x256A74u;
    {
        const bool branch_taken_0x256a74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A74u;
        // 0x256a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a74) {
            ctx->pc = 0x256BD4u;
            goto label_256bd4;
        }
    }
    ctx->pc = 0x256A7Cu;
label_256a7c:
    // 0x256a7c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x256a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_256a80:
    // 0x256a80: 0xc096056  jal         func_258158
label_256a84:
    if (ctx->pc == 0x256A84u) {
        ctx->pc = 0x256A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A80u;
        // 0x256a84: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256A88u;
        goto label_256a88;
    }
    ctx->pc = 0x256A80u;
    SET_GPR_U32(ctx, 31, 0x256A88u);
    ctx->pc = 0x256A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A80u;
    // 0x256a84: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258158u, 0x256A80u, 0x256A88u)) {
        return;
    }
    ctx->pc = 0x256A88u;
label_256a88:
    // 0x256a88: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_256a8c:
    if (ctx->pc == 0x256A8Cu) {
        ctx->pc = 0x256A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A88u;
        // 0x256a8c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256A90u;
        goto label_256a90;
    }
    ctx->pc = 0x256A88u;
    {
        const bool branch_taken_0x256a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A88u;
        // 0x256a8c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a88) {
            ctx->pc = 0x256BD0u;
            goto label_256bd0;
        }
    }
    ctx->pc = 0x256A90u;
label_256a90:
    // 0x256a90: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x256a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_256a94:
    // 0x256a94: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x256a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_256a98:
    // 0x256a98: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x256a98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_256a9c:
    // 0x256a9c: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x256a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_256aa0:
    // 0x256aa0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x256aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_256aa4:
    // 0x256aa4: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x256aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_256aa8:
    // 0x256aa8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x256aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_256aac:
    // 0x256aac: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x256aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_256ab0:
    // 0x256ab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256ab4:
    // 0x256ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x256ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256ab8:
    // 0x256ab8: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x256ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_256abc:
    // 0x256abc: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x256abcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_256ac0:
    // 0x256ac0: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x256ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_256ac4:
    // 0x256ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_256ac8:
    // 0x256ac8: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x256ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
label_256acc:
    // 0x256acc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x256accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_256ad0:
    // 0x256ad0: 0xc0c493d  jal         func_3124F4
label_256ad4:
    if (ctx->pc == 0x256AD4u) {
        ctx->pc = 0x256AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AD0u;
        // 0x256ad4: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256AD8u;
        goto label_256ad8;
    }
    ctx->pc = 0x256AD0u;
    SET_GPR_U32(ctx, 31, 0x256AD8u);
    ctx->pc = 0x256AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256AD0u;
    // 0x256ad4: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x256AD0u, 0x256AD8u)) {
        return;
    }
    ctx->pc = 0x256AD8u;
label_256ad8:
    // 0x256ad8: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x256ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
label_256adc:
    // 0x256adc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x256adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_256ae0:
    // 0x256ae0: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x256ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_256ae4:
    // 0x256ae4: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x256ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
label_256ae8:
    // 0x256ae8: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x256ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_256aec:
    // 0x256aec: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x256aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_256af0:
    // 0x256af0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x256af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_256af4:
    // 0x256af4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x256af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_256af8:
    // 0x256af8: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x256af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
label_256afc:
    // 0x256afc: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_256b00:
    if (ctx->pc == 0x256B00u) {
        ctx->pc = 0x256B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AFCu;
        // 0x256b00: 0xae340014  sw          $s4, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256B04u;
        goto label_256b04;
    }
    ctx->pc = 0x256AFCu;
    {
        const bool branch_taken_0x256afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x256B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AFCu;
        // 0x256b00: 0xae340014  sw          $s4, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256afc) {
            ctx->pc = 0x256B94u;
            goto label_256b94;
        }
    }
    ctx->pc = 0x256B04u;
label_256b04:
    // 0x256b04: 0x8fc21210  lw          $v0, 0x1210($fp)
    ctx->pc = 0x256b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4624)));
label_256b08:
    // 0x256b08: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x256b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_256b0c:
    // 0x256b0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_256b10:
    if (ctx->pc == 0x256B10u) {
        ctx->pc = 0x256B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B0Cu;
        // 0x256b10: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256B14u;
        goto label_256b14;
    }
    ctx->pc = 0x256B0Cu;
    {
        const bool branch_taken_0x256b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B0Cu;
        // 0x256b10: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b0c) {
            ctx->pc = 0x256B28u;
            goto label_256b28;
        }
    }
    ctx->pc = 0x256B14u;
label_256b14:
    // 0x256b14: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_256b18:
    if (ctx->pc == 0x256B18u) {
        ctx->pc = 0x256B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B14u;
        // 0x256b18: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256B1Cu;
        goto label_256b1c;
    }
    ctx->pc = 0x256B14u;
    {
        const bool branch_taken_0x256b14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B14u;
        // 0x256b18: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b14) {
            ctx->pc = 0x256B28u;
            goto label_256b28;
        }
    }
    ctx->pc = 0x256B1Cu;
label_256b1c:
    // 0x256b1c: 0xae250030  sw          $a1, 0x30($s1)
    ctx->pc = 0x256b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 5));
label_256b20:
    // 0x256b20: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x256b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_256b24:
    // 0x256b24: 0x0  nop
    ctx->pc = 0x256b24u;
    // NOP
label_256b28:
    // 0x256b28: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_256b2c:
    if (ctx->pc == 0x256B2Cu) {
        ctx->pc = 0x256B30u;
        goto label_256b30;
    }
    ctx->pc = 0x256B28u;
    {
        const bool branch_taken_0x256b28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b28) {
            ctx->pc = 0x256B60u;
            goto label_256b60;
        }
    }
    ctx->pc = 0x256B30u;
label_256b30:
    // 0x256b30: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_256b34:
    if (ctx->pc == 0x256B34u) {
        ctx->pc = 0x256B38u;
        goto label_256b38;
    }
    ctx->pc = 0x256B30u;
    {
        const bool branch_taken_0x256b30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b30) {
            ctx->pc = 0x256B60u;
            goto label_256b60;
        }
    }
    ctx->pc = 0x256B38u;
label_256b38:
    // 0x256b38: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_256b3c:
    if (ctx->pc == 0x256B3Cu) {
        ctx->pc = 0x256B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B38u;
        // 0x256b3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256B40u;
        goto label_256b40;
    }
    ctx->pc = 0x256B38u;
    {
        const bool branch_taken_0x256b38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B38u;
        // 0x256b3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b38) {
            ctx->pc = 0x256B60u;
            goto label_256b60;
        }
    }
    ctx->pc = 0x256B40u;
label_256b40:
    // 0x256b40: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x256b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_256b44:
    // 0x256b44: 0x0  nop
    ctx->pc = 0x256b44u;
    // NOP
label_256b48:
    // 0x256b48: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x256b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_256b4c:
    // 0x256b4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x256b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_256b50:
    // 0x256b50: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x256b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_256b54:
    // 0x256b54: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x256b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_256b58:
    // 0x256b58: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_256b5c:
    if (ctx->pc == 0x256B5Cu) {
        ctx->pc = 0x256B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B58u;
        // 0x256b5c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256B60u;
        goto label_256b60;
    }
    ctx->pc = 0x256B58u;
    {
        const bool branch_taken_0x256b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B58u;
        // 0x256b5c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b58) {
            ctx->pc = 0x256B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256b48;
        }
    }
    ctx->pc = 0x256B60u;
label_256b60:
    // 0x256b60: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
label_256b64:
    if (ctx->pc == 0x256B64u) {
        ctx->pc = 0x256B68u;
        goto label_256b68;
    }
    ctx->pc = 0x256B60u;
    {
        const bool branch_taken_0x256b60 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b60) {
            ctx->pc = 0x256B94u;
            goto label_256b94;
        }
    }
    ctx->pc = 0x256B68u;
label_256b68:
    // 0x256b68: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x256b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
label_256b6c:
    // 0x256b6c: 0x1ac00009  blez        $s6, . + 4 + (0x9 << 2)
label_256b70:
    if (ctx->pc == 0x256B70u) {
        ctx->pc = 0x256B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B6Cu;
        // 0x256b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256B74u;
        goto label_256b74;
    }
    ctx->pc = 0x256B6Cu;
    {
        const bool branch_taken_0x256b6c = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x256B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B6Cu;
        // 0x256b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b6c) {
            ctx->pc = 0x256B94u;
            goto label_256b94;
        }
    }
    ctx->pc = 0x256B74u;
label_256b74:
    // 0x256b74: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x256b74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_256b78:
    // 0x256b78: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x256b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_256b7c:
    // 0x256b7c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x256b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_256b80:
    // 0x256b80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x256b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_256b84:
    // 0x256b84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x256b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_256b88:
    // 0x256b88: 0xb6202a  slt         $a0, $a1, $s6
    ctx->pc = 0x256b88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_256b8c:
    // 0x256b8c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_256b90:
    if (ctx->pc == 0x256B90u) {
        ctx->pc = 0x256B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B8Cu;
        // 0x256b90: 0xa4660006  sh          $a2, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256B94u;
        goto label_256b94;
    }
    ctx->pc = 0x256B8Cu;
    {
        const bool branch_taken_0x256b8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x256B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B8Cu;
        // 0x256b90: 0xa4660006  sh          $a2, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b8c) {
            ctx->pc = 0x256B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256b78;
        }
    }
    ctx->pc = 0x256B94u;
label_256b94:
    // 0x256b94: 0xc095926  jal         func_256498
label_256b98:
    if (ctx->pc == 0x256B98u) {
        ctx->pc = 0x256B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B94u;
        // 0x256b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256B9Cu;
        goto label_256b9c;
    }
    ctx->pc = 0x256B94u;
    SET_GPR_U32(ctx, 31, 0x256B9Cu);
    ctx->pc = 0x256B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B94u;
    // 0x256b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256498u, 0x256B94u, 0x256B9Cu)) {
        return;
    }
    ctx->pc = 0x256B9Cu;
label_256b9c:
    // 0x256b9c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_256ba0:
    if (ctx->pc == 0x256BA0u) {
        ctx->pc = 0x256BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B9Cu;
        // 0x256ba0: 0x27c41210  addiu       $a0, $fp, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256BA4u;
        goto label_256ba4;
    }
    ctx->pc = 0x256B9Cu;
    {
        const bool branch_taken_0x256b9c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x256BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B9Cu;
        // 0x256ba0: 0x27c41210  addiu       $a0, $fp, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b9c) {
            ctx->pc = 0x256BB4u;
            goto label_256bb4;
        }
    }
    ctx->pc = 0x256BA4u;
label_256ba4:
    // 0x256ba4: 0xc093958  jal         func_24E560
label_256ba8:
    if (ctx->pc == 0x256BA8u) {
        ctx->pc = 0x256BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BA4u;
        // 0x256ba8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256BACu;
        goto label_256bac;
    }
    ctx->pc = 0x256BA4u;
    SET_GPR_U32(ctx, 31, 0x256BACu);
    ctx->pc = 0x256BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256BA4u;
    // 0x256ba8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x256BA4u, 0x256BACu)) {
        return;
    }
    ctx->pc = 0x256BACu;
label_256bac:
    // 0x256bac: 0x10000009  b           . + 4 + (0x9 << 2)
label_256bb0:
    if (ctx->pc == 0x256BB0u) {
        ctx->pc = 0x256BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BACu;
        // 0x256bb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256BB4u;
        goto label_256bb4;
    }
    ctx->pc = 0x256BACu;
    {
        const bool branch_taken_0x256bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BACu;
        // 0x256bb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bac) {
            ctx->pc = 0x256BD4u;
            goto label_256bd4;
        }
    }
    ctx->pc = 0x256BB4u;
label_256bb4:
    // 0x256bb4: 0xc096032  jal         func_2580C8
label_256bb8:
    if (ctx->pc == 0x256BB8u) {
        ctx->pc = 0x256BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BB4u;
        // 0x256bb8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256BBCu;
        goto label_256bbc;
    }
    ctx->pc = 0x256BB4u;
    SET_GPR_U32(ctx, 31, 0x256BBCu);
    ctx->pc = 0x256BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256BB4u;
    // 0x256bb8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2580C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2580C8u, 0x256BB4u, 0x256BBCu)) {
        return;
    }
    ctx->pc = 0x256BBCu;
label_256bbc:
    // 0x256bbc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x256bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_256bc0:
    // 0x256bc0: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x256bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_256bc4:
    // 0x256bc4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x256bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_256bc8:
    // 0x256bc8: 0x40f809  jalr        $v0
label_256bcc:
    if (ctx->pc == 0x256BCCu) {
        ctx->pc = 0x256BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BC8u;
        // 0x256bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256BD0u;
        goto label_256bd0;
    }
    ctx->pc = 0x256BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256BD0u);
        ctx->pc = 0x256BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BC8u;
        // 0x256bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256BC8u, 0x256BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256BD0u;
label_256bd0:
    // 0x256bd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256bd4:
    // 0x256bd4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x256bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_256bd8:
    // 0x256bd8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x256bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_256bdc:
    // 0x256bdc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x256bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_256be0:
    // 0x256be0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x256be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_256be4:
    // 0x256be4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x256be4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_256be8:
    // 0x256be8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x256be8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_256bec:
    // 0x256bec: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x256becu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_256bf0:
    // 0x256bf0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x256bf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_256bf4:
    // 0x256bf4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x256bf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_256bf8:
    // 0x256bf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_256bfc:
    // 0x256bfc: 0x3e00008  jr          $ra
label_256c00:
    if (ctx->pc == 0x256C00u) {
        ctx->pc = 0x256C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BFCu;
        // 0x256c00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256C04u;
        goto label_256c04;
    }
    ctx->pc = 0x256BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BFCu;
        // 0x256c00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256C04u;
label_256c04:
    // 0x256c04: 0x0  nop
    ctx->pc = 0x256c04u;
    // NOP
    ctx->pc = 0x256c08u;
}
