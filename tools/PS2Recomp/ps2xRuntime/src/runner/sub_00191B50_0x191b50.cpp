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

// Function: sub_00191B50
// Address: 0x191b50 - 0x191e60
void sub_00191B50_0x191b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191B50_0x191b50");
#endif

    switch (ctx->pc) {
        case 0x191b50u: goto label_191b50;
        case 0x191b54u: goto label_191b54;
        case 0x191b58u: goto label_191b58;
        case 0x191b5cu: goto label_191b5c;
        case 0x191b60u: goto label_191b60;
        case 0x191b64u: goto label_191b64;
        case 0x191b68u: goto label_191b68;
        case 0x191b6cu: goto label_191b6c;
        case 0x191b70u: goto label_191b70;
        case 0x191b74u: goto label_191b74;
        case 0x191b78u: goto label_191b78;
        case 0x191b7cu: goto label_191b7c;
        case 0x191b80u: goto label_191b80;
        case 0x191b84u: goto label_191b84;
        case 0x191b88u: goto label_191b88;
        case 0x191b8cu: goto label_191b8c;
        case 0x191b90u: goto label_191b90;
        case 0x191b94u: goto label_191b94;
        case 0x191b98u: goto label_191b98;
        case 0x191b9cu: goto label_191b9c;
        case 0x191ba0u: goto label_191ba0;
        case 0x191ba4u: goto label_191ba4;
        case 0x191ba8u: goto label_191ba8;
        case 0x191bacu: goto label_191bac;
        case 0x191bb0u: goto label_191bb0;
        case 0x191bb4u: goto label_191bb4;
        case 0x191bb8u: goto label_191bb8;
        case 0x191bbcu: goto label_191bbc;
        case 0x191bc0u: goto label_191bc0;
        case 0x191bc4u: goto label_191bc4;
        case 0x191bc8u: goto label_191bc8;
        case 0x191bccu: goto label_191bcc;
        case 0x191bd0u: goto label_191bd0;
        case 0x191bd4u: goto label_191bd4;
        case 0x191bd8u: goto label_191bd8;
        case 0x191bdcu: goto label_191bdc;
        case 0x191be0u: goto label_191be0;
        case 0x191be4u: goto label_191be4;
        case 0x191be8u: goto label_191be8;
        case 0x191becu: goto label_191bec;
        case 0x191bf0u: goto label_191bf0;
        case 0x191bf4u: goto label_191bf4;
        case 0x191bf8u: goto label_191bf8;
        case 0x191bfcu: goto label_191bfc;
        case 0x191c00u: goto label_191c00;
        case 0x191c04u: goto label_191c04;
        case 0x191c08u: goto label_191c08;
        case 0x191c0cu: goto label_191c0c;
        case 0x191c10u: goto label_191c10;
        case 0x191c14u: goto label_191c14;
        case 0x191c18u: goto label_191c18;
        case 0x191c1cu: goto label_191c1c;
        case 0x191c20u: goto label_191c20;
        case 0x191c24u: goto label_191c24;
        case 0x191c28u: goto label_191c28;
        case 0x191c2cu: goto label_191c2c;
        case 0x191c30u: goto label_191c30;
        case 0x191c34u: goto label_191c34;
        case 0x191c38u: goto label_191c38;
        case 0x191c3cu: goto label_191c3c;
        case 0x191c40u: goto label_191c40;
        case 0x191c44u: goto label_191c44;
        case 0x191c48u: goto label_191c48;
        case 0x191c4cu: goto label_191c4c;
        case 0x191c50u: goto label_191c50;
        case 0x191c54u: goto label_191c54;
        case 0x191c58u: goto label_191c58;
        case 0x191c5cu: goto label_191c5c;
        case 0x191c60u: goto label_191c60;
        case 0x191c64u: goto label_191c64;
        case 0x191c68u: goto label_191c68;
        case 0x191c6cu: goto label_191c6c;
        case 0x191c70u: goto label_191c70;
        case 0x191c74u: goto label_191c74;
        case 0x191c78u: goto label_191c78;
        case 0x191c7cu: goto label_191c7c;
        case 0x191c80u: goto label_191c80;
        case 0x191c84u: goto label_191c84;
        case 0x191c88u: goto label_191c88;
        case 0x191c8cu: goto label_191c8c;
        case 0x191c90u: goto label_191c90;
        case 0x191c94u: goto label_191c94;
        case 0x191c98u: goto label_191c98;
        case 0x191c9cu: goto label_191c9c;
        case 0x191ca0u: goto label_191ca0;
        case 0x191ca4u: goto label_191ca4;
        case 0x191ca8u: goto label_191ca8;
        case 0x191cacu: goto label_191cac;
        case 0x191cb0u: goto label_191cb0;
        case 0x191cb4u: goto label_191cb4;
        case 0x191cb8u: goto label_191cb8;
        case 0x191cbcu: goto label_191cbc;
        case 0x191cc0u: goto label_191cc0;
        case 0x191cc4u: goto label_191cc4;
        case 0x191cc8u: goto label_191cc8;
        case 0x191cccu: goto label_191ccc;
        case 0x191cd0u: goto label_191cd0;
        case 0x191cd4u: goto label_191cd4;
        case 0x191cd8u: goto label_191cd8;
        case 0x191cdcu: goto label_191cdc;
        case 0x191ce0u: goto label_191ce0;
        case 0x191ce4u: goto label_191ce4;
        case 0x191ce8u: goto label_191ce8;
        case 0x191cecu: goto label_191cec;
        case 0x191cf0u: goto label_191cf0;
        case 0x191cf4u: goto label_191cf4;
        case 0x191cf8u: goto label_191cf8;
        case 0x191cfcu: goto label_191cfc;
        case 0x191d00u: goto label_191d00;
        case 0x191d04u: goto label_191d04;
        case 0x191d08u: goto label_191d08;
        case 0x191d0cu: goto label_191d0c;
        case 0x191d10u: goto label_191d10;
        case 0x191d14u: goto label_191d14;
        case 0x191d18u: goto label_191d18;
        case 0x191d1cu: goto label_191d1c;
        case 0x191d20u: goto label_191d20;
        case 0x191d24u: goto label_191d24;
        case 0x191d28u: goto label_191d28;
        case 0x191d2cu: goto label_191d2c;
        case 0x191d30u: goto label_191d30;
        case 0x191d34u: goto label_191d34;
        case 0x191d38u: goto label_191d38;
        case 0x191d3cu: goto label_191d3c;
        case 0x191d40u: goto label_191d40;
        case 0x191d44u: goto label_191d44;
        case 0x191d48u: goto label_191d48;
        case 0x191d4cu: goto label_191d4c;
        case 0x191d50u: goto label_191d50;
        case 0x191d54u: goto label_191d54;
        case 0x191d58u: goto label_191d58;
        case 0x191d5cu: goto label_191d5c;
        case 0x191d60u: goto label_191d60;
        case 0x191d64u: goto label_191d64;
        case 0x191d68u: goto label_191d68;
        case 0x191d6cu: goto label_191d6c;
        case 0x191d70u: goto label_191d70;
        case 0x191d74u: goto label_191d74;
        case 0x191d78u: goto label_191d78;
        case 0x191d7cu: goto label_191d7c;
        case 0x191d80u: goto label_191d80;
        case 0x191d84u: goto label_191d84;
        case 0x191d88u: goto label_191d88;
        case 0x191d8cu: goto label_191d8c;
        case 0x191d90u: goto label_191d90;
        case 0x191d94u: goto label_191d94;
        case 0x191d98u: goto label_191d98;
        case 0x191d9cu: goto label_191d9c;
        case 0x191da0u: goto label_191da0;
        case 0x191da4u: goto label_191da4;
        case 0x191da8u: goto label_191da8;
        case 0x191dacu: goto label_191dac;
        case 0x191db0u: goto label_191db0;
        case 0x191db4u: goto label_191db4;
        case 0x191db8u: goto label_191db8;
        case 0x191dbcu: goto label_191dbc;
        case 0x191dc0u: goto label_191dc0;
        case 0x191dc4u: goto label_191dc4;
        case 0x191dc8u: goto label_191dc8;
        case 0x191dccu: goto label_191dcc;
        case 0x191dd0u: goto label_191dd0;
        case 0x191dd4u: goto label_191dd4;
        case 0x191dd8u: goto label_191dd8;
        case 0x191ddcu: goto label_191ddc;
        case 0x191de0u: goto label_191de0;
        case 0x191de4u: goto label_191de4;
        case 0x191de8u: goto label_191de8;
        case 0x191decu: goto label_191dec;
        case 0x191df0u: goto label_191df0;
        case 0x191df4u: goto label_191df4;
        case 0x191df8u: goto label_191df8;
        case 0x191dfcu: goto label_191dfc;
        case 0x191e00u: goto label_191e00;
        case 0x191e04u: goto label_191e04;
        case 0x191e08u: goto label_191e08;
        case 0x191e0cu: goto label_191e0c;
        case 0x191e10u: goto label_191e10;
        case 0x191e14u: goto label_191e14;
        case 0x191e18u: goto label_191e18;
        case 0x191e1cu: goto label_191e1c;
        case 0x191e20u: goto label_191e20;
        case 0x191e24u: goto label_191e24;
        case 0x191e28u: goto label_191e28;
        case 0x191e2cu: goto label_191e2c;
        case 0x191e30u: goto label_191e30;
        case 0x191e34u: goto label_191e34;
        case 0x191e38u: goto label_191e38;
        case 0x191e3cu: goto label_191e3c;
        case 0x191e40u: goto label_191e40;
        case 0x191e44u: goto label_191e44;
        case 0x191e48u: goto label_191e48;
        case 0x191e4cu: goto label_191e4c;
        case 0x191e50u: goto label_191e50;
        case 0x191e54u: goto label_191e54;
        case 0x191e58u: goto label_191e58;
        case 0x191e5cu: goto label_191e5c;
        default: break;
    }

    ctx->pc = 0x191b50u;

label_191b50:
    // 0x191b50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x191b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_191b54:
    // 0x191b54: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x191b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_191b58:
    // 0x191b58: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x191b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_191b5c:
    // 0x191b5c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x191b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_191b60:
    // 0x191b60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x191b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191b64:
    // 0x191b64: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x191b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_191b68:
    // 0x191b68: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x191b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_191b6c:
    // 0x191b6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x191b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_191b70:
    // 0x191b70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x191b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_191b74:
    // 0x191b74: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x191b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_191b78:
    // 0x191b78: 0xc06437c  jal         func_190DF0
label_191b7c:
    if (ctx->pc == 0x191B7Cu) {
        ctx->pc = 0x191B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B78u;
        // 0x191b7c: 0x8e2500c0  lw          $a1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B80u;
        goto label_191b80;
    }
    ctx->pc = 0x191B78u;
    SET_GPR_U32(ctx, 31, 0x191B80u);
    ctx->pc = 0x191B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191B78u;
    // 0x191b7c: 0x8e2500c0  lw          $a1, 0xC0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190DF0u, 0x191B78u, 0x191B80u)) {
        return;
    }
    ctx->pc = 0x191B80u;
label_191b80:
    // 0x191b80: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
label_191b84:
    if (ctx->pc == 0x191B84u) {
        ctx->pc = 0x191B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B80u;
        // 0x191b84: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B88u;
        goto label_191b88;
    }
    ctx->pc = 0x191B80u;
    {
        const bool branch_taken_0x191b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B80u;
        // 0x191b84: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b80) {
            ctx->pc = 0x191E44u;
            goto label_191e44;
        }
    }
    ctx->pc = 0x191B88u;
label_191b88:
    // 0x191b88: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x191b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_191b8c:
    // 0x191b8c: 0x106000ad  beqz        $v1, . + 4 + (0xAD << 2)
label_191b90:
    if (ctx->pc == 0x191B90u) {
        ctx->pc = 0x191B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B8Cu;
        // 0x191b90: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B94u;
        goto label_191b94;
    }
    ctx->pc = 0x191B8Cu;
    {
        const bool branch_taken_0x191b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B8Cu;
        // 0x191b90: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b8c) {
            ctx->pc = 0x191E44u;
            goto label_191e44;
        }
    }
    ctx->pc = 0x191B94u;
label_191b94:
    // 0x191b94: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x191b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_191b98:
    // 0x191b98: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x191b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_191b9c:
    // 0x191b9c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x191b9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191ba0:
    // 0x191ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191ba4:
    // 0x191ba4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_191ba8:
    // 0x191ba8: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_191bac:
    if (ctx->pc == 0x191BACu) {
        ctx->pc = 0x191BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BA8u;
        // 0x191bac: 0x8c73000c  lw          $s3, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191BB0u;
        goto label_191bb0;
    }
    ctx->pc = 0x191BA8u;
    {
        const bool branch_taken_0x191ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x191BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BA8u;
        // 0x191bac: 0x8c73000c  lw          $s3, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ba8) {
            ctx->pc = 0x191BBCu;
            goto label_191bbc;
        }
    }
    ctx->pc = 0x191BB0u;
label_191bb0:
    // 0x191bb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x191bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_191bb4:
    // 0x191bb4: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
label_191bb8:
    if (ctx->pc == 0x191BB8u) {
        ctx->pc = 0x191BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BB4u;
        // 0x191bb8: 0x8e2400c8  lw          $a0, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191BBCu;
        goto label_191bbc;
    }
    ctx->pc = 0x191BB4u;
    {
        const bool branch_taken_0x191bb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x191bb4) {
            ctx->pc = 0x191BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191BB4u;
            // 0x191bb8: 0x8e2400c8  lw          $a0, 0xC8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191BC4u;
            goto label_191bc4;
        }
    }
    ctx->pc = 0x191BBCu;
label_191bbc:
    // 0x191bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191bc0:
    // 0x191bc0: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x191bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_191bc4:
    // 0x191bc4: 0xc06325e  jal         func_18C978
label_191bc8:
    if (ctx->pc == 0x191BC8u) {
        ctx->pc = 0x191BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BC4u;
        // 0x191bc8: 0xae2500ec  sw          $a1, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191BCCu;
        goto label_191bcc;
    }
    ctx->pc = 0x191BC4u;
    SET_GPR_U32(ctx, 31, 0x191BCCu);
    ctx->pc = 0x191BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BC4u;
    // 0x191bc8: 0xae2500ec  sw          $a1, 0xEC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18C978u, 0x191BC4u, 0x191BCCu)) {
        return;
    }
    ctx->pc = 0x191BCCu;
label_191bcc:
    // 0x191bcc: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x191bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_191bd0:
    // 0x191bd0: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x191bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_191bd4:
    // 0x191bd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_191bd8:
    if (ctx->pc == 0x191BD8u) {
        ctx->pc = 0x191BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BD4u;
        // 0x191bd8: 0xae2200dc  sw          $v0, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191BDCu;
        goto label_191bdc;
    }
    ctx->pc = 0x191BD4u;
    {
        const bool branch_taken_0x191bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BD4u;
        // 0x191bd8: 0xae2200dc  sw          $v0, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bd4) {
            ctx->pc = 0x191C00u;
            goto label_191c00;
        }
    }
    ctx->pc = 0x191BDCu;
label_191bdc:
    // 0x191bdc: 0xc06326a  jal         func_18C9A8
label_191be0:
    if (ctx->pc == 0x191BE0u) {
        ctx->pc = 0x191BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BDCu;
        // 0x191be0: 0x8e2400c8  lw          $a0, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191BE4u;
        goto label_191be4;
    }
    ctx->pc = 0x191BDCu;
    SET_GPR_U32(ctx, 31, 0x191BE4u);
    ctx->pc = 0x191BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BDCu;
    // 0x191be0: 0x8e2400c8  lw          $a0, 0xC8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18C9A8u, 0x191BDCu, 0x191BE4u)) {
        return;
    }
    ctx->pc = 0x191BE4u;
label_191be4:
    // 0x191be4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_191be8:
    if (ctx->pc == 0x191BE8u) {
        ctx->pc = 0x191BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BE4u;
        // 0x191be8: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191BECu;
        goto label_191bec;
    }
    ctx->pc = 0x191BE4u;
    {
        const bool branch_taken_0x191be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BE4u;
        // 0x191be8: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191be4) {
            ctx->pc = 0x191C00u;
            goto label_191c00;
        }
    }
    ctx->pc = 0x191BECu;
label_191bec:
    // 0x191bec: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x191becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
label_191bf0:
    // 0x191bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191bf4:
    // 0x191bf4: 0x24a52138  addiu       $a1, $a1, 0x2138
    ctx->pc = 0x191bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8504));
label_191bf8:
    // 0x191bf8: 0xc09545a  jal         func_255168
label_191bfc:
    if (ctx->pc == 0x191BFCu) {
        ctx->pc = 0x191BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BF8u;
        // 0x191bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C00u;
        goto label_191c00;
    }
    ctx->pc = 0x191BF8u;
    SET_GPR_U32(ctx, 31, 0x191C00u);
    ctx->pc = 0x191BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BF8u;
    // 0x191bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x191BF8u, 0x191C00u)) {
        return;
    }
    ctx->pc = 0x191C00u;
label_191c00:
    // 0x191c00: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x191c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_191c04:
    // 0x191c04: 0x8c520050  lw          $s2, 0x50($v0)
    ctx->pc = 0x191c04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_191c08:
    // 0x191c08: 0x52400012  beql        $s2, $zero, . + 4 + (0x12 << 2)
label_191c0c:
    if (ctx->pc == 0x191C0Cu) {
        ctx->pc = 0x191C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C08u;
        // 0x191c0c: 0x8c520054  lw          $s2, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C10u;
        goto label_191c10;
    }
    ctx->pc = 0x191C08u;
    {
        const bool branch_taken_0x191c08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c08) {
            ctx->pc = 0x191C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191C08u;
            // 0x191c0c: 0x8c520054  lw          $s2, 0x54($v0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191C54u;
            goto label_191c54;
        }
    }
    ctx->pc = 0x191C10u;
label_191c10:
    // 0x191c10: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x191c10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_191c14:
    // 0x191c14: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_191c18:
    if (ctx->pc == 0x191C18u) {
        ctx->pc = 0x191C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C14u;
        // 0x191c18: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C1Cu;
        goto label_191c1c;
    }
    ctx->pc = 0x191C14u;
    {
        const bool branch_taken_0x191c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C14u;
        // 0x191c18: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c14) {
            ctx->pc = 0x191C4Cu;
            goto label_191c4c;
        }
    }
    ctx->pc = 0x191C1Cu;
label_191c1c:
    // 0x191c1c: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x191c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_191c20:
    // 0x191c20: 0x40f809  jalr        $v0
label_191c24:
    if (ctx->pc == 0x191C24u) {
        ctx->pc = 0x191C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C20u;
        // 0x191c24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C28u;
        goto label_191c28;
    }
    ctx->pc = 0x191C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191C28u);
        ctx->pc = 0x191C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C20u;
        // 0x191c24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191C20u, 0x191C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191C28u;
label_191c28:
    // 0x191c28: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x191c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_191c2c:
    // 0x191c2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x191c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_191c30:
    // 0x191c30: 0xc080924  jal         func_202490
label_191c34:
    if (ctx->pc == 0x191C34u) {
        ctx->pc = 0x191C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C30u;
        // 0x191c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C38u;
        goto label_191c38;
    }
    ctx->pc = 0x191C30u;
    SET_GPR_U32(ctx, 31, 0x191C38u);
    ctx->pc = 0x191C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C30u;
    // 0x191c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x191C30u, 0x191C38u)) {
        return;
    }
    ctx->pc = 0x191C38u;
label_191c38:
    // 0x191c38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x191c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_191c3c:
    // 0x191c3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191c40:
    // 0x191c40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x191c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191c44:
    // 0x191c44: 0xc081b9a  jal         func_206E68
label_191c48:
    if (ctx->pc == 0x191C48u) {
        ctx->pc = 0x191C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C44u;
        // 0x191c48: 0xae2200cc  sw          $v0, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C4Cu;
        goto label_191c4c;
    }
    ctx->pc = 0x191C44u;
    SET_GPR_U32(ctx, 31, 0x191C4Cu);
    ctx->pc = 0x191C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C44u;
    // 0x191c48: 0xae2200cc  sw          $v0, 0xCC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x191C44u, 0x191C4Cu)) {
        return;
    }
    ctx->pc = 0x191C4Cu;
label_191c4c:
    // 0x191c4c: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x191c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_191c50:
    // 0x191c50: 0x8c520054  lw          $s2, 0x54($v0)
    ctx->pc = 0x191c50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_191c54:
    // 0x191c54: 0x52400011  beql        $s2, $zero, . + 4 + (0x11 << 2)
label_191c58:
    if (ctx->pc == 0x191C58u) {
        ctx->pc = 0x191C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C54u;
        // 0x191c58: 0x8e2500c8  lw          $a1, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C5Cu;
        goto label_191c5c;
    }
    ctx->pc = 0x191C54u;
    {
        const bool branch_taken_0x191c54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c54) {
            ctx->pc = 0x191C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191C54u;
            // 0x191c58: 0x8e2500c8  lw          $a1, 0xC8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191C9Cu;
            goto label_191c9c;
        }
    }
    ctx->pc = 0x191C5Cu;
label_191c5c:
    // 0x191c5c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x191c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_191c60:
    // 0x191c60: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_191c64:
    if (ctx->pc == 0x191C64u) {
        ctx->pc = 0x191C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C60u;
        // 0x191c64: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C68u;
        goto label_191c68;
    }
    ctx->pc = 0x191C60u;
    {
        const bool branch_taken_0x191c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C60u;
        // 0x191c64: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c60) {
            ctx->pc = 0x191C98u;
            goto label_191c98;
        }
    }
    ctx->pc = 0x191C68u;
label_191c68:
    // 0x191c68: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x191c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_191c6c:
    // 0x191c6c: 0x40f809  jalr        $v0
label_191c70:
    if (ctx->pc == 0x191C70u) {
        ctx->pc = 0x191C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C6Cu;
        // 0x191c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C74u;
        goto label_191c74;
    }
    ctx->pc = 0x191C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191C74u);
        ctx->pc = 0x191C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C6Cu;
        // 0x191c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191C6Cu, 0x191C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191C74u;
label_191c74:
    // 0x191c74: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x191c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_191c78:
    // 0x191c78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x191c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_191c7c:
    // 0x191c7c: 0xc080924  jal         func_202490
label_191c80:
    if (ctx->pc == 0x191C80u) {
        ctx->pc = 0x191C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C7Cu;
        // 0x191c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C84u;
        goto label_191c84;
    }
    ctx->pc = 0x191C7Cu;
    SET_GPR_U32(ctx, 31, 0x191C84u);
    ctx->pc = 0x191C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C7Cu;
    // 0x191c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x191C7Cu, 0x191C84u)) {
        return;
    }
    ctx->pc = 0x191C84u;
label_191c84:
    // 0x191c84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x191c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_191c88:
    // 0x191c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191c8c:
    // 0x191c8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x191c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191c90:
    // 0x191c90: 0xc081b9a  jal         func_206E68
label_191c94:
    if (ctx->pc == 0x191C94u) {
        ctx->pc = 0x191C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C90u;
        // 0x191c94: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C98u;
        goto label_191c98;
    }
    ctx->pc = 0x191C90u;
    SET_GPR_U32(ctx, 31, 0x191C98u);
    ctx->pc = 0x191C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C90u;
    // 0x191c94: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x191C90u, 0x191C98u)) {
        return;
    }
    ctx->pc = 0x191C98u;
label_191c98:
    // 0x191c98: 0x8e2500c8  lw          $a1, 0xC8($s1)
    ctx->pc = 0x191c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_191c9c:
    // 0x191c9c: 0x26320040  addiu       $s2, $s1, 0x40
    ctx->pc = 0x191c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_191ca0:
    // 0x191ca0: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x191ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_191ca4:
    // 0x191ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_191ca8:
    // 0x191ca8: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x191ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_191cac:
    // 0x191cac: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x191cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_191cb0:
    // 0x191cb0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x191cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_191cb4:
    // 0x191cb4: 0xae220108  sw          $v0, 0x108($s1)
    ctx->pc = 0x191cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
label_191cb8:
    // 0x191cb8: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x191cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_191cbc:
    // 0x191cbc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x191cbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_191cc0:
    // 0x191cc0: 0xae23010c  sw          $v1, 0x10C($s1)
    ctx->pc = 0x191cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
label_191cc4:
    // 0x191cc4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x191cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_191cc8:
    // 0x191cc8: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x191cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_191ccc:
    // 0x191ccc: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x191cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_191cd0:
    // 0x191cd0: 0x6845001f  ldl         $a1, 0x1F($v0)
    ctx->pc = 0x191cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_191cd4:
    // 0x191cd4: 0x6c450018  ldr         $a1, 0x18($v0)
    ctx->pc = 0x191cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_191cd8:
    // 0x191cd8: 0x68470027  ldl         $a3, 0x27($v0)
    ctx->pc = 0x191cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_191cdc:
    // 0x191cdc: 0x6c470020  ldr         $a3, 0x20($v0)
    ctx->pc = 0x191cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_191ce0:
    // 0x191ce0: 0x6848002f  ldl         $t0, 0x2F($v0)
    ctx->pc = 0x191ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_191ce4:
    // 0x191ce4: 0x6c480028  ldr         $t0, 0x28($v0)
    ctx->pc = 0x191ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_191ce8:
    // 0x191ce8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x191ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191cec:
    // 0x191cec: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x191cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191cf0:
    // 0x191cf0: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x191cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191cf4:
    // 0x191cf4: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x191cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191cf8:
    // 0x191cf8: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x191cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191cfc:
    // 0x191cfc: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x191cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d00:
    // 0x191d00: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x191d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d04:
    // 0x191d04: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x191d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d08:
    // 0x191d08: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x191d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_191d0c:
    // 0x191d0c: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x191d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_191d10:
    // 0x191d10: 0x6845003f  ldl         $a1, 0x3F($v0)
    ctx->pc = 0x191d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_191d14:
    // 0x191d14: 0x6c450038  ldr         $a1, 0x38($v0)
    ctx->pc = 0x191d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_191d18:
    // 0x191d18: 0x68470047  ldl         $a3, 0x47($v0)
    ctx->pc = 0x191d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_191d1c:
    // 0x191d1c: 0x6c470040  ldr         $a3, 0x40($v0)
    ctx->pc = 0x191d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_191d20:
    // 0x191d20: 0x6848004f  ldl         $t0, 0x4F($v0)
    ctx->pc = 0x191d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_191d24:
    // 0x191d24: 0x6c480048  ldr         $t0, 0x48($v0)
    ctx->pc = 0x191d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_191d28:
    // 0x191d28: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x191d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d2c:
    // 0x191d2c: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x191d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d30:
    // 0x191d30: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x191d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d34:
    // 0x191d34: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x191d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d38:
    // 0x191d38: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x191d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d3c:
    // 0x191d3c: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x191d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d40:
    // 0x191d40: 0xb3a8003f  sdl         $t0, 0x3F($sp)
    ctx->pc = 0x191d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d44:
    // 0x191d44: 0xb7a80038  sdr         $t0, 0x38($sp)
    ctx->pc = 0x191d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d48:
    // 0x191d48: 0xc04f0aa  jal         func_13C2A8
label_191d4c:
    if (ctx->pc == 0x191D4Cu) {
        ctx->pc = 0x191D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D48u;
        // 0x191d4c: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D50u;
        goto label_191d50;
    }
    ctx->pc = 0x191D48u;
    SET_GPR_U32(ctx, 31, 0x191D50u);
    ctx->pc = 0x191D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D48u;
    // 0x191d4c: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2A8u, 0x191D48u, 0x191D50u)) {
        return;
    }
    ctx->pc = 0x191D50u;
label_191d50:
    // 0x191d50: 0xc089a04  jal         func_226810
label_191d54:
    if (ctx->pc == 0x191D54u) {
        ctx->pc = 0x191D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D50u;
        // 0x191d54: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D58u;
        goto label_191d58;
    }
    ctx->pc = 0x191D50u;
    SET_GPR_U32(ctx, 31, 0x191D58u);
    ctx->pc = 0x191D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D50u;
    // 0x191d54: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x191D50u, 0x191D58u)) {
        return;
    }
    ctx->pc = 0x191D58u;
label_191d58:
    // 0x191d58: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x191d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_191d5c:
    // 0x191d5c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x191d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_191d60:
    // 0x191d60: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x191d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_191d64:
    // 0x191d64: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x191d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_191d68:
    // 0x191d68: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x191d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_191d6c:
    // 0x191d6c: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x191d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_191d70:
    // 0x191d70: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x191d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_191d74:
    // 0x191d74: 0x6ba6001f  ldl         $a2, 0x1F($sp)
    ctx->pc = 0x191d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_191d78:
    // 0x191d78: 0x6fa60018  ldr         $a2, 0x18($sp)
    ctx->pc = 0x191d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_191d7c:
    // 0x191d7c: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x191d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d80:
    // 0x191d80: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x191d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d84:
    // 0x191d84: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x191d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d88:
    // 0x191d88: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x191d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d8c:
    // 0x191d8c: 0xb0650027  sdl         $a1, 0x27($v1)
    ctx->pc = 0x191d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d90:
    // 0x191d90: 0xb4650020  sdr         $a1, 0x20($v1)
    ctx->pc = 0x191d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d94:
    // 0x191d94: 0xb066002f  sdl         $a2, 0x2F($v1)
    ctx->pc = 0x191d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d98:
    // 0x191d98: 0xb4660028  sdr         $a2, 0x28($v1)
    ctx->pc = 0x191d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191d9c:
    // 0x191d9c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x191d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_191da0:
    // 0x191da0: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x191da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_191da4:
    // 0x191da4: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x191da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_191da8:
    // 0x191da8: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x191da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_191dac:
    // 0x191dac: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x191dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_191db0:
    // 0x191db0: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x191db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_191db4:
    // 0x191db4: 0x6ba6003f  ldl         $a2, 0x3F($sp)
    ctx->pc = 0x191db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_191db8:
    // 0x191db8: 0x6fa60038  ldr         $a2, 0x38($sp)
    ctx->pc = 0x191db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_191dbc:
    // 0x191dbc: 0xb0620037  sdl         $v0, 0x37($v1)
    ctx->pc = 0x191dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191dc0:
    // 0x191dc0: 0xb4620030  sdr         $v0, 0x30($v1)
    ctx->pc = 0x191dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191dc4:
    // 0x191dc4: 0xb064003f  sdl         $a0, 0x3F($v1)
    ctx->pc = 0x191dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191dc8:
    // 0x191dc8: 0xb4640038  sdr         $a0, 0x38($v1)
    ctx->pc = 0x191dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191dcc:
    // 0x191dcc: 0xb0650047  sdl         $a1, 0x47($v1)
    ctx->pc = 0x191dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191dd0:
    // 0x191dd0: 0xb4650040  sdr         $a1, 0x40($v1)
    ctx->pc = 0x191dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191dd4:
    // 0x191dd4: 0xb066004f  sdl         $a2, 0x4F($v1)
    ctx->pc = 0x191dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_191dd8:
    // 0x191dd8: 0xb4660048  sdr         $a2, 0x48($v1)
    ctx->pc = 0x191dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_191ddc:
    // 0x191ddc: 0xc08992e  jal         func_2264B8
label_191de0:
    if (ctx->pc == 0x191DE0u) {
        ctx->pc = 0x191DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DDCu;
        // 0x191de0: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191DE4u;
        goto label_191de4;
    }
    ctx->pc = 0x191DDCu;
    SET_GPR_U32(ctx, 31, 0x191DE4u);
    ctx->pc = 0x191DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DDCu;
    // 0x191de0: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x191DDCu, 0x191DE4u)) {
        return;
    }
    ctx->pc = 0x191DE4u;
label_191de4:
    // 0x191de4: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x191de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_191de8:
    // 0x191de8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x191de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_191dec:
    // 0x191dec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_191df0:
    // 0x191df0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x191df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_191df4:
    // 0x191df4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x191df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_191df8:
    // 0x191df8: 0xc0622c4  jal         func_188B10
label_191dfc:
    if (ctx->pc == 0x191DFCu) {
        ctx->pc = 0x191DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DF8u;
        // 0x191dfc: 0x8c448ac0  lw          $a0, -0x7540($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E00u;
        goto label_191e00;
    }
    ctx->pc = 0x191DF8u;
    SET_GPR_U32(ctx, 31, 0x191E00u);
    ctx->pc = 0x191DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DF8u;
    // 0x191dfc: 0x8c448ac0  lw          $a0, -0x7540($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188B10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188B10u, 0x191DF8u, 0x191E00u)) {
        return;
    }
    ctx->pc = 0x191E00u;
label_191e00:
    // 0x191e00: 0x8e84870c  lw          $a0, -0x78F4($s4)
    ctx->pc = 0x191e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936332)));
label_191e04:
    // 0x191e04: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x191e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_191e08:
    // 0x191e08: 0xc05ee90  jal         func_17BA40
label_191e0c:
    if (ctx->pc == 0x191E0Cu) {
        ctx->pc = 0x191E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E08u;
        // 0x191e0c: 0x8e2500d4  lw          $a1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E10u;
        goto label_191e10;
    }
    ctx->pc = 0x191E08u;
    SET_GPR_U32(ctx, 31, 0x191E10u);
    ctx->pc = 0x191E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E08u;
    // 0x191e0c: 0x8e2500d4  lw          $a1, 0xD4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA40u, 0x191E08u, 0x191E10u)) {
        return;
    }
    ctx->pc = 0x191E10u;
label_191e10:
    // 0x191e10: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x191e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_191e14:
    // 0x191e14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_191e18:
    if (ctx->pc == 0x191E18u) {
        ctx->pc = 0x191E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E14u;
        // 0x191e18: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E1Cu;
        goto label_191e1c;
    }
    ctx->pc = 0x191E14u;
    {
        const bool branch_taken_0x191e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E14u;
        // 0x191e18: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e14) {
            ctx->pc = 0x191E44u;
            goto label_191e44;
        }
    }
    ctx->pc = 0x191E1Cu;
label_191e1c:
    // 0x191e1c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x191e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_191e20:
    // 0x191e20: 0xc089a04  jal         func_226810
label_191e24:
    if (ctx->pc == 0x191E24u) {
        ctx->pc = 0x191E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E20u;
        // 0x191e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E28u;
        goto label_191e28;
    }
    ctx->pc = 0x191E20u;
    SET_GPR_U32(ctx, 31, 0x191E28u);
    ctx->pc = 0x191E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E20u;
    // 0x191e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x191E20u, 0x191E28u)) {
        return;
    }
    ctx->pc = 0x191E28u;
label_191e28:
    // 0x191e28: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x191e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_191e2c:
    // 0x191e2c: 0xc089974  jal         func_2265D0
label_191e30:
    if (ctx->pc == 0x191E30u) {
        ctx->pc = 0x191E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E2Cu;
        // 0x191e30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E34u;
        goto label_191e34;
    }
    ctx->pc = 0x191E2Cu;
    SET_GPR_U32(ctx, 31, 0x191E34u);
    ctx->pc = 0x191E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E2Cu;
    // 0x191e30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2265D0u, 0x191E2Cu, 0x191E34u)) {
        return;
    }
    ctx->pc = 0x191E34u;
label_191e34:
    // 0x191e34: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x191e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_191e38:
    // 0x191e38: 0xc09795e  jal         func_25E578
label_191e3c:
    if (ctx->pc == 0x191E3Cu) {
        ctx->pc = 0x191E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E38u;
        // 0x191e3c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E40u;
        goto label_191e40;
    }
    ctx->pc = 0x191E38u;
    SET_GPR_U32(ctx, 31, 0x191E40u);
    ctx->pc = 0x191E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E38u;
    // 0x191e3c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E578u, 0x191E38u, 0x191E40u)) {
        return;
    }
    ctx->pc = 0x191E40u;
label_191e40:
    // 0x191e40: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x191e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_191e44:
    // 0x191e44: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x191e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_191e48:
    // 0x191e48: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x191e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_191e4c:
    // 0x191e4c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x191e4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_191e50:
    // 0x191e50: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x191e50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_191e54:
    // 0x191e54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x191e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_191e58:
    // 0x191e58: 0x3e00008  jr          $ra
label_191e5c:
    if (ctx->pc == 0x191E5Cu) {
        ctx->pc = 0x191E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E58u;
        // 0x191e5c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E60u;
        goto label_fallthrough_0x191e58;
    }
    ctx->pc = 0x191E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E58u;
        // 0x191e5c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x191e58:
    ctx->pc = 0x191E60u;
}
