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

// Function: sub_00120B98
// Address: 0x120b98 - 0x120e10
void sub_00120B98_0x120b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120B98_0x120b98");
#endif

    switch (ctx->pc) {
        case 0x120b98u: goto label_120b98;
        case 0x120b9cu: goto label_120b9c;
        case 0x120ba0u: goto label_120ba0;
        case 0x120ba4u: goto label_120ba4;
        case 0x120ba8u: goto label_120ba8;
        case 0x120bacu: goto label_120bac;
        case 0x120bb0u: goto label_120bb0;
        case 0x120bb4u: goto label_120bb4;
        case 0x120bb8u: goto label_120bb8;
        case 0x120bbcu: goto label_120bbc;
        case 0x120bc0u: goto label_120bc0;
        case 0x120bc4u: goto label_120bc4;
        case 0x120bc8u: goto label_120bc8;
        case 0x120bccu: goto label_120bcc;
        case 0x120bd0u: goto label_120bd0;
        case 0x120bd4u: goto label_120bd4;
        case 0x120bd8u: goto label_120bd8;
        case 0x120bdcu: goto label_120bdc;
        case 0x120be0u: goto label_120be0;
        case 0x120be4u: goto label_120be4;
        case 0x120be8u: goto label_120be8;
        case 0x120becu: goto label_120bec;
        case 0x120bf0u: goto label_120bf0;
        case 0x120bf4u: goto label_120bf4;
        case 0x120bf8u: goto label_120bf8;
        case 0x120bfcu: goto label_120bfc;
        case 0x120c00u: goto label_120c00;
        case 0x120c04u: goto label_120c04;
        case 0x120c08u: goto label_120c08;
        case 0x120c0cu: goto label_120c0c;
        case 0x120c10u: goto label_120c10;
        case 0x120c14u: goto label_120c14;
        case 0x120c18u: goto label_120c18;
        case 0x120c1cu: goto label_120c1c;
        case 0x120c20u: goto label_120c20;
        case 0x120c24u: goto label_120c24;
        case 0x120c28u: goto label_120c28;
        case 0x120c2cu: goto label_120c2c;
        case 0x120c30u: goto label_120c30;
        case 0x120c34u: goto label_120c34;
        case 0x120c38u: goto label_120c38;
        case 0x120c3cu: goto label_120c3c;
        case 0x120c40u: goto label_120c40;
        case 0x120c44u: goto label_120c44;
        case 0x120c48u: goto label_120c48;
        case 0x120c4cu: goto label_120c4c;
        case 0x120c50u: goto label_120c50;
        case 0x120c54u: goto label_120c54;
        case 0x120c58u: goto label_120c58;
        case 0x120c5cu: goto label_120c5c;
        case 0x120c60u: goto label_120c60;
        case 0x120c64u: goto label_120c64;
        case 0x120c68u: goto label_120c68;
        case 0x120c6cu: goto label_120c6c;
        case 0x120c70u: goto label_120c70;
        case 0x120c74u: goto label_120c74;
        case 0x120c78u: goto label_120c78;
        case 0x120c7cu: goto label_120c7c;
        case 0x120c80u: goto label_120c80;
        case 0x120c84u: goto label_120c84;
        case 0x120c88u: goto label_120c88;
        case 0x120c8cu: goto label_120c8c;
        case 0x120c90u: goto label_120c90;
        case 0x120c94u: goto label_120c94;
        case 0x120c98u: goto label_120c98;
        case 0x120c9cu: goto label_120c9c;
        case 0x120ca0u: goto label_120ca0;
        case 0x120ca4u: goto label_120ca4;
        case 0x120ca8u: goto label_120ca8;
        case 0x120cacu: goto label_120cac;
        case 0x120cb0u: goto label_120cb0;
        case 0x120cb4u: goto label_120cb4;
        case 0x120cb8u: goto label_120cb8;
        case 0x120cbcu: goto label_120cbc;
        case 0x120cc0u: goto label_120cc0;
        case 0x120cc4u: goto label_120cc4;
        case 0x120cc8u: goto label_120cc8;
        case 0x120cccu: goto label_120ccc;
        case 0x120cd0u: goto label_120cd0;
        case 0x120cd4u: goto label_120cd4;
        case 0x120cd8u: goto label_120cd8;
        case 0x120cdcu: goto label_120cdc;
        case 0x120ce0u: goto label_120ce0;
        case 0x120ce4u: goto label_120ce4;
        case 0x120ce8u: goto label_120ce8;
        case 0x120cecu: goto label_120cec;
        case 0x120cf0u: goto label_120cf0;
        case 0x120cf4u: goto label_120cf4;
        case 0x120cf8u: goto label_120cf8;
        case 0x120cfcu: goto label_120cfc;
        case 0x120d00u: goto label_120d00;
        case 0x120d04u: goto label_120d04;
        case 0x120d08u: goto label_120d08;
        case 0x120d0cu: goto label_120d0c;
        case 0x120d10u: goto label_120d10;
        case 0x120d14u: goto label_120d14;
        case 0x120d18u: goto label_120d18;
        case 0x120d1cu: goto label_120d1c;
        case 0x120d20u: goto label_120d20;
        case 0x120d24u: goto label_120d24;
        case 0x120d28u: goto label_120d28;
        case 0x120d2cu: goto label_120d2c;
        case 0x120d30u: goto label_120d30;
        case 0x120d34u: goto label_120d34;
        case 0x120d38u: goto label_120d38;
        case 0x120d3cu: goto label_120d3c;
        case 0x120d40u: goto label_120d40;
        case 0x120d44u: goto label_120d44;
        case 0x120d48u: goto label_120d48;
        case 0x120d4cu: goto label_120d4c;
        case 0x120d50u: goto label_120d50;
        case 0x120d54u: goto label_120d54;
        case 0x120d58u: goto label_120d58;
        case 0x120d5cu: goto label_120d5c;
        case 0x120d60u: goto label_120d60;
        case 0x120d64u: goto label_120d64;
        case 0x120d68u: goto label_120d68;
        case 0x120d6cu: goto label_120d6c;
        case 0x120d70u: goto label_120d70;
        case 0x120d74u: goto label_120d74;
        case 0x120d78u: goto label_120d78;
        case 0x120d7cu: goto label_120d7c;
        case 0x120d80u: goto label_120d80;
        case 0x120d84u: goto label_120d84;
        case 0x120d88u: goto label_120d88;
        case 0x120d8cu: goto label_120d8c;
        case 0x120d90u: goto label_120d90;
        case 0x120d94u: goto label_120d94;
        case 0x120d98u: goto label_120d98;
        case 0x120d9cu: goto label_120d9c;
        case 0x120da0u: goto label_120da0;
        case 0x120da4u: goto label_120da4;
        case 0x120da8u: goto label_120da8;
        case 0x120dacu: goto label_120dac;
        case 0x120db0u: goto label_120db0;
        case 0x120db4u: goto label_120db4;
        case 0x120db8u: goto label_120db8;
        case 0x120dbcu: goto label_120dbc;
        case 0x120dc0u: goto label_120dc0;
        case 0x120dc4u: goto label_120dc4;
        case 0x120dc8u: goto label_120dc8;
        case 0x120dccu: goto label_120dcc;
        case 0x120dd0u: goto label_120dd0;
        case 0x120dd4u: goto label_120dd4;
        case 0x120dd8u: goto label_120dd8;
        case 0x120ddcu: goto label_120ddc;
        case 0x120de0u: goto label_120de0;
        case 0x120de4u: goto label_120de4;
        case 0x120de8u: goto label_120de8;
        case 0x120decu: goto label_120dec;
        case 0x120df0u: goto label_120df0;
        case 0x120df4u: goto label_120df4;
        case 0x120df8u: goto label_120df8;
        case 0x120dfcu: goto label_120dfc;
        case 0x120e00u: goto label_120e00;
        case 0x120e04u: goto label_120e04;
        case 0x120e08u: goto label_120e08;
        case 0x120e0cu: goto label_120e0c;
        default: break;
    }

    ctx->pc = 0x120b98u;

label_120b98:
    // 0x120b98: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x120b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_120b9c:
    // 0x120b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120ba0:
    // 0x120ba0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x120ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_120ba4:
    // 0x120ba4: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x120ba4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_120ba8:
    // 0x120ba8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x120ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120bac:
    // 0x120bac: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x120bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_120bb0:
    // 0x120bb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x120bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_120bb4:
    // 0x120bb4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x120bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_120bb8:
    // 0x120bb8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x120bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_120bbc:
    // 0x120bbc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x120bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_120bc0:
    // 0x120bc0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x120bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_120bc4:
    // 0x120bc4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x120bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_120bc8:
    // 0x120bc8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x120bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_120bcc:
    // 0x120bcc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x120bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_120bd0:
    // 0x120bd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x120bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_120bd4:
    // 0x120bd4: 0xc08063c  jal         func_2018F0
label_120bd8:
    if (ctx->pc == 0x120BD8u) {
        ctx->pc = 0x120BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BD4u;
        // 0x120bd8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BDCu;
        goto label_120bdc;
    }
    ctx->pc = 0x120BD4u;
    SET_GPR_U32(ctx, 31, 0x120BDCu);
    ctx->pc = 0x120BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120BD4u;
    // 0x120bd8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x120BD4u, 0x120BDCu)) {
        return;
    }
    ctx->pc = 0x120BDCu;
label_120bdc:
    // 0x120bdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x120bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120be0:
    // 0x120be0: 0x1200007e  beqz        $s0, . + 4 + (0x7E << 2)
label_120be4:
    if (ctx->pc == 0x120BE4u) {
        ctx->pc = 0x120BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BE0u;
        // 0x120be4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BE8u;
        goto label_120be8;
    }
    ctx->pc = 0x120BE0u;
    {
        const bool branch_taken_0x120be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BE0u;
        // 0x120be4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120be0) {
            ctx->pc = 0x120DDCu;
            goto label_120ddc;
        }
    }
    ctx->pc = 0x120BE8u;
label_120be8:
    // 0x120be8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x120be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_120bec:
    // 0x120bec: 0xc0c4a1f  jal         func_31287C
label_120bf0:
    if (ctx->pc == 0x120BF0u) {
        ctx->pc = 0x120BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BECu;
        // 0x120bf0: 0x2484be20  addiu       $a0, $a0, -0x41E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BF4u;
        goto label_120bf4;
    }
    ctx->pc = 0x120BECu;
    SET_GPR_U32(ctx, 31, 0x120BF4u);
    ctx->pc = 0x120BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120BECu;
    // 0x120bf0: 0x2484be20  addiu       $a0, $a0, -0x41E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x120BECu, 0x120BF4u)) {
        return;
    }
    ctx->pc = 0x120BF4u;
label_120bf4:
    // 0x120bf4: 0x5440007a  bnel        $v0, $zero, . + 4 + (0x7A << 2)
label_120bf8:
    if (ctx->pc == 0x120BF8u) {
        ctx->pc = 0x120BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BF4u;
        // 0x120bf8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120BFCu;
        goto label_120bfc;
    }
    ctx->pc = 0x120BF4u;
    {
        const bool branch_taken_0x120bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120bf4) {
            ctx->pc = 0x120BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120BF4u;
            // 0x120bf8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120DE0u;
            goto label_120de0;
        }
    }
    ctx->pc = 0x120BFCu;
label_120bfc:
    // 0x120bfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x120bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_120c00:
    // 0x120c00: 0x8e130018  lw          $s3, 0x18($s0)
    ctx->pc = 0x120c00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_120c04:
    // 0x120c04: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x120c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_120c08:
    // 0x120c08: 0xc0808f0  jal         func_2023C0
label_120c0c:
    if (ctx->pc == 0x120C0Cu) {
        ctx->pc = 0x120C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C08u;
        // 0x120c0c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C10u;
        goto label_120c10;
    }
    ctx->pc = 0x120C08u;
    SET_GPR_U32(ctx, 31, 0x120C10u);
    ctx->pc = 0x120C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120C08u;
    // 0x120c0c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x120C08u, 0x120C10u)) {
        return;
    }
    ctx->pc = 0x120C10u;
label_120c10:
    // 0x120c10: 0xc04155a  jal         func_105568
label_120c14:
    if (ctx->pc == 0x120C14u) {
        ctx->pc = 0x120C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C10u;
        // 0x120c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C18u;
        goto label_120c18;
    }
    ctx->pc = 0x120C10u;
    SET_GPR_U32(ctx, 31, 0x120C18u);
    ctx->pc = 0x120C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120C10u;
    // 0x120c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105568u, 0x120C10u, 0x120C18u)) {
        return;
    }
    ctx->pc = 0x120C18u;
label_120c18:
    // 0x120c18: 0xae420c70  sw          $v0, 0xC70($s2)
    ctx->pc = 0x120c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3184), GPR_U32(ctx, 2));
label_120c1c:
    // 0x120c1c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x120c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_120c20:
    // 0x120c20: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x120c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_120c24:
    // 0x120c24: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
label_120c28:
    if (ctx->pc == 0x120C28u) {
        ctx->pc = 0x120C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C24u;
        // 0x120c28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C2Cu;
        goto label_120c2c;
    }
    ctx->pc = 0x120C24u;
    {
        const bool branch_taken_0x120c24 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x120C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C24u;
        // 0x120c28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c24) {
            ctx->pc = 0x120C54u;
            goto label_120c54;
        }
    }
    ctx->pc = 0x120C2Cu;
label_120c2c:
    // 0x120c2c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x120c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_120c30:
    // 0x120c30: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x120c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_120c34:
    // 0x120c34: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x120c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_120c38:
    // 0x120c38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_120c3c:
    // 0x120c3c: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_120c40:
    if (ctx->pc == 0x120C40u) {
        ctx->pc = 0x120C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C3Cu;
        // 0x120c40: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C44u;
        goto label_120c44;
    }
    ctx->pc = 0x120C3Cu;
    {
        const bool branch_taken_0x120c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x120C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C3Cu;
        // 0x120c40: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c3c) {
            ctx->pc = 0x120C4Cu;
            goto label_120c4c;
        }
    }
    ctx->pc = 0x120C44u;
label_120c44:
    // 0x120c44: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x120c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_120c48:
    // 0x120c48: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x120c48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_120c4c:
    // 0x120c4c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_120c50:
    if (ctx->pc == 0x120C50u) {
        ctx->pc = 0x120C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C4Cu;
        // 0x120c50: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C54u;
        goto label_120c54;
    }
    ctx->pc = 0x120C4Cu;
    {
        const bool branch_taken_0x120c4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x120C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C4Cu;
        // 0x120c50: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c4c) {
            ctx->pc = 0x120C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120c38;
        }
    }
    ctx->pc = 0x120C54u;
label_120c54:
    // 0x120c54: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x120c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_120c58:
    // 0x120c58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x120c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_120c5c:
    // 0x120c5c: 0x8e4200ec  lw          $v0, 0xEC($s2)
    ctx->pc = 0x120c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_120c60:
    // 0x120c60: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x120c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_120c64:
    // 0x120c64: 0x8e440c70  lw          $a0, 0xC70($s2)
    ctx->pc = 0x120c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3184)));
label_120c68:
    // 0x120c68: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x120c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_120c6c:
    // 0x120c6c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x120c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_120c70:
    // 0x120c70: 0xc041562  jal         func_105588
label_120c74:
    if (ctx->pc == 0x120C74u) {
        ctx->pc = 0x120C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C70u;
        // 0x120c74: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C78u;
        goto label_120c78;
    }
    ctx->pc = 0x120C70u;
    SET_GPR_U32(ctx, 31, 0x120C78u);
    ctx->pc = 0x120C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120C70u;
    // 0x120c74: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105588u, 0x120C70u, 0x120C78u)) {
        return;
    }
    ctx->pc = 0x120C78u;
label_120c78:
    // 0x120c78: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x120c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_120c7c:
    // 0x120c7c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x120c7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_120c80:
    // 0x120c80: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x120c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_120c84:
    // 0x120c84: 0x40f809  jalr        $v0
label_120c88:
    if (ctx->pc == 0x120C88u) {
        ctx->pc = 0x120C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C84u;
        // 0x120c88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C8Cu;
        goto label_120c8c;
    }
    ctx->pc = 0x120C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x120C8Cu);
        ctx->pc = 0x120C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C84u;
        // 0x120c88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120C84u, 0x120C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120C8Cu;
label_120c8c:
    // 0x120c8c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x120c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_120c90:
    // 0x120c90: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x120c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_120c94:
    // 0x120c94: 0x846401f0  lh          $a0, 0x1F0($v1)
    ctx->pc = 0x120c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 496)));
label_120c98:
    // 0x120c98: 0x8c6201f4  lw          $v0, 0x1F4($v1)
    ctx->pc = 0x120c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
label_120c9c:
    // 0x120c9c: 0x40f809  jalr        $v0
label_120ca0:
    if (ctx->pc == 0x120CA0u) {
        ctx->pc = 0x120CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C9Cu;
        // 0x120ca0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CA4u;
        goto label_120ca4;
    }
    ctx->pc = 0x120C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x120CA4u);
        ctx->pc = 0x120CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C9Cu;
        // 0x120ca0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120C9Cu, 0x120CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120CA4u;
label_120ca4:
    // 0x120ca4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x120ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_120ca8:
    // 0x120ca8: 0x12c0004a  beqz        $s6, . + 4 + (0x4A << 2)
label_120cac:
    if (ctx->pc == 0x120CACu) {
        ctx->pc = 0x120CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CA8u;
        // 0x120cac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CB0u;
        goto label_120cb0;
    }
    ctx->pc = 0x120CA8u;
    {
        const bool branch_taken_0x120ca8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CA8u;
        // 0x120cac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ca8) {
            ctx->pc = 0x120DD4u;
            goto label_120dd4;
        }
    }
    ctx->pc = 0x120CB0u;
label_120cb0:
    // 0x120cb0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x120cb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120cb4:
    // 0x120cb4: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x120cb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_120cb8:
    // 0x120cb8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x120cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_120cbc:
    // 0x120cbc: 0x0  nop
    ctx->pc = 0x120cbcu;
    // NOP
label_120cc0:
    // 0x120cc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x120cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_120cc4:
    // 0x120cc4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x120cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_120cc8:
    // 0x120cc8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x120cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_120ccc:
    // 0x120ccc: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x120cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_120cd0:
    // 0x120cd0: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x120cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_120cd4:
    // 0x120cd4: 0x2e7182a  slt         $v1, $s7, $a3
    ctx->pc = 0x120cd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_120cd8:
    // 0x120cd8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_120cdc:
    if (ctx->pc == 0x120CDCu) {
        ctx->pc = 0x120CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CD8u;
        // 0x120cdc: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CE0u;
        goto label_120ce0;
    }
    ctx->pc = 0x120CD8u;
    {
        const bool branch_taken_0x120cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CD8u;
        // 0x120cdc: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cd8) {
            ctx->pc = 0x120D00u;
            goto label_120d00;
        }
    }
    ctx->pc = 0x120CE0u;
label_120ce0:
    // 0x120ce0: 0x3c41821  addu        $v1, $fp, $a0
    ctx->pc = 0x120ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_120ce4:
    // 0x120ce4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x120ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_120ce8:
    // 0x120ce8: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x120ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_120cec:
    // 0x120cec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_120cf0:
    if (ctx->pc == 0x120CF0u) {
        ctx->pc = 0x120CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CECu;
        // 0x120cf0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CF4u;
        goto label_120cf4;
    }
    ctx->pc = 0x120CECu;
    {
        const bool branch_taken_0x120cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CECu;
        // 0x120cf0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cec) {
            ctx->pc = 0x120D00u;
            goto label_120d00;
        }
    }
    ctx->pc = 0x120CF4u;
label_120cf4:
    // 0x120cf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120cf8:
    // 0x120cf8: 0x5046fffb  beql        $v0, $a2, . + 4 + (-0x5 << 2)
label_120cfc:
    if (ctx->pc == 0x120CFCu) {
        ctx->pc = 0x120CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CF8u;
        // 0x120cfc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D00u;
        goto label_120d00;
    }
    ctx->pc = 0x120CF8u;
    {
        const bool branch_taken_0x120cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x120cf8) {
            ctx->pc = 0x120CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120CF8u;
            // 0x120cfc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120ce8;
        }
    }
    ctx->pc = 0x120D00u;
label_120d00:
    // 0x120d00: 0xb78023  subu        $s0, $a1, $s7
    ctx->pc = 0x120d00u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_120d04:
    // 0x120d04: 0x8e440c70  lw          $a0, 0xC70($s2)
    ctx->pc = 0x120d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3184)));
label_120d08:
    // 0x120d08: 0xc04157c  jal         func_1055F0
label_120d0c:
    if (ctx->pc == 0x120D0Cu) {
        ctx->pc = 0x120D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D08u;
        // 0x120d0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D10u;
        goto label_120d10;
    }
    ctx->pc = 0x120D08u;
    SET_GPR_U32(ctx, 31, 0x120D10u);
    ctx->pc = 0x120D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D08u;
    // 0x120d0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1055F0u, 0x120D08u, 0x120D10u)) {
        return;
    }
    ctx->pc = 0x120D10u;
label_120d10:
    // 0x120d10: 0x1a00002a  blez        $s0, . + 4 + (0x2A << 2)
label_120d14:
    if (ctx->pc == 0x120D14u) {
        ctx->pc = 0x120D18u;
        goto label_120d18;
    }
    ctx->pc = 0x120D10u;
    {
        const bool branch_taken_0x120d10 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x120d10) {
            ctx->pc = 0x120DBCu;
            goto label_120dbc;
        }
    }
    ctx->pc = 0x120D18u;
label_120d18:
    // 0x120d18: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x120d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120d1c:
    // 0x120d1c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x120d1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_120d20:
    // 0x120d20: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x120d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_120d24:
    // 0x120d24: 0x0  nop
    ctx->pc = 0x120d24u;
    // NOP
label_120d28:
    // 0x120d28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_120d2c:
    // 0x120d2c: 0x27de0020  addiu       $fp, $fp, 0x20
    ctx->pc = 0x120d2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_120d30:
    // 0x120d30: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x120d30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_120d34:
    // 0x120d34: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x120d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_120d38:
    // 0x120d38: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x120d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_120d3c:
    // 0x120d3c: 0xc040688  jal         func_101A20
label_120d40:
    if (ctx->pc == 0x120D40u) {
        ctx->pc = 0x120D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D3Cu;
        // 0x120d40: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D44u;
        goto label_120d44;
    }
    ctx->pc = 0x120D3Cu;
    SET_GPR_U32(ctx, 31, 0x120D44u);
    ctx->pc = 0x120D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D3Cu;
    // 0x120d40: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x120D3Cu, 0x120D44u)) {
        return;
    }
    ctx->pc = 0x120D44u;
label_120d44:
    // 0x120d44: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x120d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_120d48:
    // 0x120d48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x120d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120d4c:
    // 0x120d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_120d50:
    // 0x120d50: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x120d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_120d54:
    // 0x120d54: 0xc040688  jal         func_101A20
label_120d58:
    if (ctx->pc == 0x120D58u) {
        ctx->pc = 0x120D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D54u;
        // 0x120d58: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D5Cu;
        goto label_120d5c;
    }
    ctx->pc = 0x120D54u;
    SET_GPR_U32(ctx, 31, 0x120D5Cu);
    ctx->pc = 0x120D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D54u;
    // 0x120d58: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x120D54u, 0x120D5Cu)) {
        return;
    }
    ctx->pc = 0x120D5Cu;
label_120d5c:
    // 0x120d5c: 0x2a2182a  slt         $v1, $s5, $v0
    ctx->pc = 0x120d5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_120d60:
    // 0x120d60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120d64:
    // 0x120d64: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x120d64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_120d68:
    // 0x120d68: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x120d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_120d6c:
    // 0x120d6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x120d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_120d70:
    // 0x120d70: 0x2b0202a  slt         $a0, $s5, $s0
    ctx->pc = 0x120d70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_120d74:
    // 0x120d74: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x120d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
label_120d78:
    // 0x120d78: 0x4800a  movz        $s0, $zero, $a0
    ctx->pc = 0x120d78u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_120d7c:
    // 0x120d7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x120d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_120d80:
    // 0x120d80: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x120d80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_120d84:
    // 0x120d84: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x120d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_120d88:
    // 0x120d88: 0xc4ec000c  lwc1        $f12, 0xC($a3)
    ctx->pc = 0x120d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_120d8c:
    // 0x120d8c: 0xc4ed0010  lwc1        $f13, 0x10($a3)
    ctx->pc = 0x120d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_120d90:
    // 0x120d90: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x120d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_120d94:
    // 0x120d94: 0x8e440c70  lw          $a0, 0xC70($s2)
    ctx->pc = 0x120d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3184)));
label_120d98:
    // 0x120d98: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x120d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_120d9c:
    // 0x120d9c: 0x8fa9000c  lw          $t1, 0xC($sp)
    ctx->pc = 0x120d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_120da0:
    // 0x120da0: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x120da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_120da4:
    // 0x120da4: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x120da4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120da8:
    // 0x120da8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x120da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120dac:
    // 0x120dac: 0xc041594  jal         func_105650
label_120db0:
    if (ctx->pc == 0x120DB0u) {
        ctx->pc = 0x120DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DACu;
        // 0x120db0: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DB4u;
        goto label_120db4;
    }
    ctx->pc = 0x120DACu;
    SET_GPR_U32(ctx, 31, 0x120DB4u);
    ctx->pc = 0x120DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120DACu;
    // 0x120db0: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105650u, 0x120DACu, 0x120DB4u)) {
        return;
    }
    ctx->pc = 0x120DB4u;
label_120db4:
    // 0x120db4: 0x5620ffdc  bnel        $s1, $zero, . + 4 + (-0x24 << 2)
label_120db8:
    if (ctx->pc == 0x120DB8u) {
        ctx->pc = 0x120DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DB4u;
        // 0x120db8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DBCu;
        goto label_120dbc;
    }
    ctx->pc = 0x120DB4u;
    {
        const bool branch_taken_0x120db4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x120db4) {
            ctx->pc = 0x120DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120DB4u;
            // 0x120db8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120d28;
        }
    }
    ctx->pc = 0x120DBCu;
label_120dbc:
    // 0x120dbc: 0xc041608  jal         func_105820
label_120dc0:
    if (ctx->pc == 0x120DC0u) {
        ctx->pc = 0x120DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DBCu;
        // 0x120dc0: 0x8e440c70  lw          $a0, 0xC70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DC4u;
        goto label_120dc4;
    }
    ctx->pc = 0x120DBCu;
    SET_GPR_U32(ctx, 31, 0x120DC4u);
    ctx->pc = 0x120DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120DBCu;
    // 0x120dc0: 0x8e440c70  lw          $a0, 0xC70($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105820u, 0x120DBCu, 0x120DC4u)) {
        return;
    }
    ctx->pc = 0x120DC4u;
label_120dc4:
    // 0x120dc4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x120dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_120dc8:
    // 0x120dc8: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x120dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_120dcc:
    // 0x120dcc: 0x5440ffbc  bnel        $v0, $zero, . + 4 + (-0x44 << 2)
label_120dd0:
    if (ctx->pc == 0x120DD0u) {
        ctx->pc = 0x120DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DCCu;
        // 0x120dd0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DD4u;
        goto label_120dd4;
    }
    ctx->pc = 0x120DCCu;
    {
        const bool branch_taken_0x120dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120dcc) {
            ctx->pc = 0x120DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120DCCu;
            // 0x120dd0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120cc0;
        }
    }
    ctx->pc = 0x120DD4u;
label_120dd4:
    // 0x120dd4: 0xc04160e  jal         func_105838
label_120dd8:
    if (ctx->pc == 0x120DD8u) {
        ctx->pc = 0x120DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DD4u;
        // 0x120dd8: 0x8e440c70  lw          $a0, 0xC70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DDCu;
        goto label_120ddc;
    }
    ctx->pc = 0x120DD4u;
    SET_GPR_U32(ctx, 31, 0x120DDCu);
    ctx->pc = 0x120DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120DD4u;
    // 0x120dd8: 0x8e440c70  lw          $a0, 0xC70($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105838u, 0x120DD4u, 0x120DDCu)) {
        return;
    }
    ctx->pc = 0x120DDCu;
label_120ddc:
    // 0x120ddc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x120ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_120de0:
    // 0x120de0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x120de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_120de4:
    // 0x120de4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x120de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_120de8:
    // 0x120de8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x120de8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_120dec:
    // 0x120dec: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x120decu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_120df0:
    // 0x120df0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x120df0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_120df4:
    // 0x120df4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x120df4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_120df8:
    // 0x120df8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x120df8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_120dfc:
    // 0x120dfc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x120dfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_120e00:
    // 0x120e00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x120e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_120e04:
    // 0x120e04: 0x3e00008  jr          $ra
label_120e08:
    if (ctx->pc == 0x120E08u) {
        ctx->pc = 0x120E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E04u;
        // 0x120e08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120E0Cu;
        goto label_120e0c;
    }
    ctx->pc = 0x120E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E04u;
        // 0x120e08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120E0Cu;
label_120e0c:
    // 0x120e0c: 0x0  nop
    ctx->pc = 0x120e0cu;
    // NOP
    ctx->pc = 0x120e10u;
}
