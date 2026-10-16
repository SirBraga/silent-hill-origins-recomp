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

// Function: sub_00298A78
// Address: 0x298a78 - 0x298e18
void sub_00298A78_0x298a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298A78_0x298a78");
#endif

    switch (ctx->pc) {
        case 0x298a78u: goto label_298a78;
        case 0x298a7cu: goto label_298a7c;
        case 0x298a80u: goto label_298a80;
        case 0x298a84u: goto label_298a84;
        case 0x298a88u: goto label_298a88;
        case 0x298a8cu: goto label_298a8c;
        case 0x298a90u: goto label_298a90;
        case 0x298a94u: goto label_298a94;
        case 0x298a98u: goto label_298a98;
        case 0x298a9cu: goto label_298a9c;
        case 0x298aa0u: goto label_298aa0;
        case 0x298aa4u: goto label_298aa4;
        case 0x298aa8u: goto label_298aa8;
        case 0x298aacu: goto label_298aac;
        case 0x298ab0u: goto label_298ab0;
        case 0x298ab4u: goto label_298ab4;
        case 0x298ab8u: goto label_298ab8;
        case 0x298abcu: goto label_298abc;
        case 0x298ac0u: goto label_298ac0;
        case 0x298ac4u: goto label_298ac4;
        case 0x298ac8u: goto label_298ac8;
        case 0x298accu: goto label_298acc;
        case 0x298ad0u: goto label_298ad0;
        case 0x298ad4u: goto label_298ad4;
        case 0x298ad8u: goto label_298ad8;
        case 0x298adcu: goto label_298adc;
        case 0x298ae0u: goto label_298ae0;
        case 0x298ae4u: goto label_298ae4;
        case 0x298ae8u: goto label_298ae8;
        case 0x298aecu: goto label_298aec;
        case 0x298af0u: goto label_298af0;
        case 0x298af4u: goto label_298af4;
        case 0x298af8u: goto label_298af8;
        case 0x298afcu: goto label_298afc;
        case 0x298b00u: goto label_298b00;
        case 0x298b04u: goto label_298b04;
        case 0x298b08u: goto label_298b08;
        case 0x298b0cu: goto label_298b0c;
        case 0x298b10u: goto label_298b10;
        case 0x298b14u: goto label_298b14;
        case 0x298b18u: goto label_298b18;
        case 0x298b1cu: goto label_298b1c;
        case 0x298b20u: goto label_298b20;
        case 0x298b24u: goto label_298b24;
        case 0x298b28u: goto label_298b28;
        case 0x298b2cu: goto label_298b2c;
        case 0x298b30u: goto label_298b30;
        case 0x298b34u: goto label_298b34;
        case 0x298b38u: goto label_298b38;
        case 0x298b3cu: goto label_298b3c;
        case 0x298b40u: goto label_298b40;
        case 0x298b44u: goto label_298b44;
        case 0x298b48u: goto label_298b48;
        case 0x298b4cu: goto label_298b4c;
        case 0x298b50u: goto label_298b50;
        case 0x298b54u: goto label_298b54;
        case 0x298b58u: goto label_298b58;
        case 0x298b5cu: goto label_298b5c;
        case 0x298b60u: goto label_298b60;
        case 0x298b64u: goto label_298b64;
        case 0x298b68u: goto label_298b68;
        case 0x298b6cu: goto label_298b6c;
        case 0x298b70u: goto label_298b70;
        case 0x298b74u: goto label_298b74;
        case 0x298b78u: goto label_298b78;
        case 0x298b7cu: goto label_298b7c;
        case 0x298b80u: goto label_298b80;
        case 0x298b84u: goto label_298b84;
        case 0x298b88u: goto label_298b88;
        case 0x298b8cu: goto label_298b8c;
        case 0x298b90u: goto label_298b90;
        case 0x298b94u: goto label_298b94;
        case 0x298b98u: goto label_298b98;
        case 0x298b9cu: goto label_298b9c;
        case 0x298ba0u: goto label_298ba0;
        case 0x298ba4u: goto label_298ba4;
        case 0x298ba8u: goto label_298ba8;
        case 0x298bacu: goto label_298bac;
        case 0x298bb0u: goto label_298bb0;
        case 0x298bb4u: goto label_298bb4;
        case 0x298bb8u: goto label_298bb8;
        case 0x298bbcu: goto label_298bbc;
        case 0x298bc0u: goto label_298bc0;
        case 0x298bc4u: goto label_298bc4;
        case 0x298bc8u: goto label_298bc8;
        case 0x298bccu: goto label_298bcc;
        case 0x298bd0u: goto label_298bd0;
        case 0x298bd4u: goto label_298bd4;
        case 0x298bd8u: goto label_298bd8;
        case 0x298bdcu: goto label_298bdc;
        case 0x298be0u: goto label_298be0;
        case 0x298be4u: goto label_298be4;
        case 0x298be8u: goto label_298be8;
        case 0x298becu: goto label_298bec;
        case 0x298bf0u: goto label_298bf0;
        case 0x298bf4u: goto label_298bf4;
        case 0x298bf8u: goto label_298bf8;
        case 0x298bfcu: goto label_298bfc;
        case 0x298c00u: goto label_298c00;
        case 0x298c04u: goto label_298c04;
        case 0x298c08u: goto label_298c08;
        case 0x298c0cu: goto label_298c0c;
        case 0x298c10u: goto label_298c10;
        case 0x298c14u: goto label_298c14;
        case 0x298c18u: goto label_298c18;
        case 0x298c1cu: goto label_298c1c;
        case 0x298c20u: goto label_298c20;
        case 0x298c24u: goto label_298c24;
        case 0x298c28u: goto label_298c28;
        case 0x298c2cu: goto label_298c2c;
        case 0x298c30u: goto label_298c30;
        case 0x298c34u: goto label_298c34;
        case 0x298c38u: goto label_298c38;
        case 0x298c3cu: goto label_298c3c;
        case 0x298c40u: goto label_298c40;
        case 0x298c44u: goto label_298c44;
        case 0x298c48u: goto label_298c48;
        case 0x298c4cu: goto label_298c4c;
        case 0x298c50u: goto label_298c50;
        case 0x298c54u: goto label_298c54;
        case 0x298c58u: goto label_298c58;
        case 0x298c5cu: goto label_298c5c;
        case 0x298c60u: goto label_298c60;
        case 0x298c64u: goto label_298c64;
        case 0x298c68u: goto label_298c68;
        case 0x298c6cu: goto label_298c6c;
        case 0x298c70u: goto label_298c70;
        case 0x298c74u: goto label_298c74;
        case 0x298c78u: goto label_298c78;
        case 0x298c7cu: goto label_298c7c;
        case 0x298c80u: goto label_298c80;
        case 0x298c84u: goto label_298c84;
        case 0x298c88u: goto label_298c88;
        case 0x298c8cu: goto label_298c8c;
        case 0x298c90u: goto label_298c90;
        case 0x298c94u: goto label_298c94;
        case 0x298c98u: goto label_298c98;
        case 0x298c9cu: goto label_298c9c;
        case 0x298ca0u: goto label_298ca0;
        case 0x298ca4u: goto label_298ca4;
        case 0x298ca8u: goto label_298ca8;
        case 0x298cacu: goto label_298cac;
        case 0x298cb0u: goto label_298cb0;
        case 0x298cb4u: goto label_298cb4;
        case 0x298cb8u: goto label_298cb8;
        case 0x298cbcu: goto label_298cbc;
        case 0x298cc0u: goto label_298cc0;
        case 0x298cc4u: goto label_298cc4;
        case 0x298cc8u: goto label_298cc8;
        case 0x298cccu: goto label_298ccc;
        case 0x298cd0u: goto label_298cd0;
        case 0x298cd4u: goto label_298cd4;
        case 0x298cd8u: goto label_298cd8;
        case 0x298cdcu: goto label_298cdc;
        case 0x298ce0u: goto label_298ce0;
        case 0x298ce4u: goto label_298ce4;
        case 0x298ce8u: goto label_298ce8;
        case 0x298cecu: goto label_298cec;
        case 0x298cf0u: goto label_298cf0;
        case 0x298cf4u: goto label_298cf4;
        case 0x298cf8u: goto label_298cf8;
        case 0x298cfcu: goto label_298cfc;
        case 0x298d00u: goto label_298d00;
        case 0x298d04u: goto label_298d04;
        case 0x298d08u: goto label_298d08;
        case 0x298d0cu: goto label_298d0c;
        case 0x298d10u: goto label_298d10;
        case 0x298d14u: goto label_298d14;
        case 0x298d18u: goto label_298d18;
        case 0x298d1cu: goto label_298d1c;
        case 0x298d20u: goto label_298d20;
        case 0x298d24u: goto label_298d24;
        case 0x298d28u: goto label_298d28;
        case 0x298d2cu: goto label_298d2c;
        case 0x298d30u: goto label_298d30;
        case 0x298d34u: goto label_298d34;
        case 0x298d38u: goto label_298d38;
        case 0x298d3cu: goto label_298d3c;
        case 0x298d40u: goto label_298d40;
        case 0x298d44u: goto label_298d44;
        case 0x298d48u: goto label_298d48;
        case 0x298d4cu: goto label_298d4c;
        case 0x298d50u: goto label_298d50;
        case 0x298d54u: goto label_298d54;
        case 0x298d58u: goto label_298d58;
        case 0x298d5cu: goto label_298d5c;
        case 0x298d60u: goto label_298d60;
        case 0x298d64u: goto label_298d64;
        case 0x298d68u: goto label_298d68;
        case 0x298d6cu: goto label_298d6c;
        case 0x298d70u: goto label_298d70;
        case 0x298d74u: goto label_298d74;
        case 0x298d78u: goto label_298d78;
        case 0x298d7cu: goto label_298d7c;
        case 0x298d80u: goto label_298d80;
        case 0x298d84u: goto label_298d84;
        case 0x298d88u: goto label_298d88;
        case 0x298d8cu: goto label_298d8c;
        case 0x298d90u: goto label_298d90;
        case 0x298d94u: goto label_298d94;
        case 0x298d98u: goto label_298d98;
        case 0x298d9cu: goto label_298d9c;
        case 0x298da0u: goto label_298da0;
        case 0x298da4u: goto label_298da4;
        case 0x298da8u: goto label_298da8;
        case 0x298dacu: goto label_298dac;
        case 0x298db0u: goto label_298db0;
        case 0x298db4u: goto label_298db4;
        case 0x298db8u: goto label_298db8;
        case 0x298dbcu: goto label_298dbc;
        case 0x298dc0u: goto label_298dc0;
        case 0x298dc4u: goto label_298dc4;
        case 0x298dc8u: goto label_298dc8;
        case 0x298dccu: goto label_298dcc;
        case 0x298dd0u: goto label_298dd0;
        case 0x298dd4u: goto label_298dd4;
        case 0x298dd8u: goto label_298dd8;
        case 0x298ddcu: goto label_298ddc;
        case 0x298de0u: goto label_298de0;
        case 0x298de4u: goto label_298de4;
        case 0x298de8u: goto label_298de8;
        case 0x298decu: goto label_298dec;
        case 0x298df0u: goto label_298df0;
        case 0x298df4u: goto label_298df4;
        case 0x298df8u: goto label_298df8;
        case 0x298dfcu: goto label_298dfc;
        case 0x298e00u: goto label_298e00;
        case 0x298e04u: goto label_298e04;
        case 0x298e08u: goto label_298e08;
        case 0x298e0cu: goto label_298e0c;
        case 0x298e10u: goto label_298e10;
        case 0x298e14u: goto label_298e14;
        default: break;
    }

    ctx->pc = 0x298a78u;

label_298a78:
    // 0x298a78: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x298a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_298a7c:
    // 0x298a7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x298a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_298a80:
    // 0x298a80: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x298a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_298a84:
    // 0x298a84: 0x2442d7f8  addiu       $v0, $v0, -0x2808
    ctx->pc = 0x298a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957048));
label_298a88:
    // 0x298a88: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x298a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_298a8c:
    // 0x298a8c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x298a8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_298a90:
    // 0x298a90: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x298a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_298a94:
    // 0x298a94: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x298a94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_298a98:
    // 0x298a98: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x298a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_298a9c:
    // 0x298a9c: 0x27b10022  addiu       $s1, $sp, 0x22
    ctx->pc = 0x298a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
label_298aa0:
    // 0x298aa0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x298aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_298aa4:
    // 0x298aa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x298aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_298aa8:
    // 0x298aa8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x298aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_298aac:
    // 0x298aac: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x298aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_298ab0:
    // 0x298ab0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x298ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_298ab4:
    // 0x298ab4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x298ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_298ab8:
    // 0x298ab8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x298ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_298abc:
    // 0x298abc: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x298abcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_298ac0:
    // 0x298ac0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x298ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_298ac4:
    // 0x298ac4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x298ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_298ac8:
    // 0x298ac8: 0xde440010  ld          $a0, 0x10($s2)
    ctx->pc = 0x298ac8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_298acc:
    // 0x298acc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x298accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_298ad0:
    // 0x298ad0: 0x30830070  andi        $v1, $a0, 0x70
    ctx->pc = 0x298ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
label_298ad4:
    // 0x298ad4: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_298ad8:
    if (ctx->pc == 0x298AD8u) {
        ctx->pc = 0x298AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AD4u;
        // 0x298ad8: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298ADCu;
        goto label_298adc;
    }
    ctx->pc = 0x298AD4u;
    {
        const bool branch_taken_0x298ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x298AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AD4u;
        // 0x298ad8: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ad4) {
            ctx->pc = 0x298B24u;
            goto label_298b24;
        }
    }
    ctx->pc = 0x298ADCu;
label_298adc:
    // 0x298adc: 0x0  nop
    ctx->pc = 0x298adcu;
    // NOP
label_298ae0:
    // 0x298ae0: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x298ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_298ae4:
    // 0x298ae4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x298ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_298ae8:
    // 0x298ae8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x298ae8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_298aec:
    // 0x298aec: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x298aecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_298af0:
    // 0x298af0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x298af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_298af4:
    // 0x298af4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x298af4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_298af8:
    // 0x298af8: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_298afc:
    if (ctx->pc == 0x298AFCu) {
        ctx->pc = 0x298B00u;
        goto label_298b00;
    }
    ctx->pc = 0x298AF8u;
    {
        const bool branch_taken_0x298af8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x298af8) {
            ctx->pc = 0x298AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298ae0;
        }
    }
    ctx->pc = 0x298B00u;
label_298b00:
    // 0x298b00: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x298b00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_298b04:
    // 0x298b04: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x298b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_298b08:
    // 0x298b08: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_298b0c:
    if (ctx->pc == 0x298B0Cu) {
        ctx->pc = 0x298B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B08u;
        // 0x298b0c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B10u;
        goto label_298b10;
    }
    ctx->pc = 0x298B08u;
    {
        const bool branch_taken_0x298b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B08u;
        // 0x298b0c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b08) {
            ctx->pc = 0x298C38u;
            goto label_298c38;
        }
    }
    ctx->pc = 0x298B10u;
label_298b10:
    // 0x298b10: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
label_298b14:
    if (ctx->pc == 0x298B14u) {
        ctx->pc = 0x298B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B10u;
        // 0x298b14: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B18u;
        goto label_298b18;
    }
    ctx->pc = 0x298B10u;
    {
        const bool branch_taken_0x298b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B10u;
        // 0x298b14: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b10) {
            ctx->pc = 0x298C3Cu;
            goto label_298c3c;
        }
    }
    ctx->pc = 0x298B18u;
label_298b18:
    // 0x298b18: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x298b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_298b1c:
    // 0x298b1c: 0x10000046  b           . + 4 + (0x46 << 2)
label_298b20:
    if (ctx->pc == 0x298B20u) {
        ctx->pc = 0x298B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B1Cu;
        // 0x298b20: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B24u;
        goto label_298b24;
    }
    ctx->pc = 0x298B1Cu;
    {
        const bool branch_taken_0x298b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B1Cu;
        // 0x298b20: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b1c) {
            ctx->pc = 0x298C38u;
            goto label_298c38;
        }
    }
    ctx->pc = 0x298B24u;
label_298b24:
    // 0x298b24: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x298b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_298b28:
    // 0x298b28: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_298b2c:
    if (ctx->pc == 0x298B2Cu) {
        ctx->pc = 0x298B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B28u;
        // 0x298b2c: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B30u;
        goto label_298b30;
    }
    ctx->pc = 0x298B28u;
    {
        const bool branch_taken_0x298b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x298B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B28u;
        // 0x298b2c: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b28) {
            ctx->pc = 0x298B8Cu;
            goto label_298b8c;
        }
    }
    ctx->pc = 0x298B30u;
label_298b30:
    // 0x298b30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_298b34:
    if (ctx->pc == 0x298B34u) {
        ctx->pc = 0x298B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B30u;
        // 0x298b34: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B38u;
        goto label_298b38;
    }
    ctx->pc = 0x298B30u;
    {
        const bool branch_taken_0x298b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B30u;
        // 0x298b34: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b30) {
            ctx->pc = 0x298B40u;
            goto label_298b40;
        }
    }
    ctx->pc = 0x298B38u;
label_298b38:
    // 0x298b38: 0x10000003  b           . + 4 + (0x3 << 2)
label_298b3c:
    if (ctx->pc == 0x298B3Cu) {
        ctx->pc = 0x298B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B38u;
        // 0x298b3c: 0x2444d800  addiu       $a0, $v0, -0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B40u;
        goto label_298b40;
    }
    ctx->pc = 0x298B38u;
    {
        const bool branch_taken_0x298b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B38u;
        // 0x298b3c: 0x2444d800  addiu       $a0, $v0, -0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b38) {
            ctx->pc = 0x298B48u;
            goto label_298b48;
        }
    }
    ctx->pc = 0x298B40u;
label_298b40:
    // 0x298b40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x298b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_298b44:
    // 0x298b44: 0x2444d818  addiu       $a0, $v0, -0x27E8
    ctx->pc = 0x298b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957080));
label_298b48:
    // 0x298b48: 0x3203000f  andi        $v1, $s0, 0xF
    ctx->pc = 0x298b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_298b4c:
    // 0x298b4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x298b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_298b50:
    // 0x298b50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x298b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_298b54:
    // 0x298b54: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x298b54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_298b58:
    // 0x298b58: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x298b58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_298b5c:
    // 0x298b5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x298b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_298b60:
    // 0x298b60: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x298b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_298b64:
    // 0x298b64: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_298b68:
    if (ctx->pc == 0x298B68u) {
        ctx->pc = 0x298B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B64u;
        // 0x298b68: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B6Cu;
        goto label_298b6c;
    }
    ctx->pc = 0x298B64u;
    {
        const bool branch_taken_0x298b64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x298B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B64u;
        // 0x298b68: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b64) {
            ctx->pc = 0x298B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298b48;
        }
    }
    ctx->pc = 0x298B6Cu;
label_298b6c:
    // 0x298b6c: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x298b6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_298b70:
    // 0x298b70: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x298b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_298b74:
    // 0x298b74: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_298b78:
    if (ctx->pc == 0x298B78u) {
        ctx->pc = 0x298B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B74u;
        // 0x298b78: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B7Cu;
        goto label_298b7c;
    }
    ctx->pc = 0x298B74u;
    {
        const bool branch_taken_0x298b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B74u;
        // 0x298b78: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b74) {
            ctx->pc = 0x298C38u;
            goto label_298c38;
        }
    }
    ctx->pc = 0x298B7Cu;
label_298b7c:
    // 0x298b7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x298b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_298b80:
    // 0x298b80: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x298b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_298b84:
    // 0x298b84: 0x1000002c  b           . + 4 + (0x2C << 2)
label_298b88:
    if (ctx->pc == 0x298B88u) {
        ctx->pc = 0x298B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B84u;
        // 0x298b88: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B8Cu;
        goto label_298b8c;
    }
    ctx->pc = 0x298B84u;
    {
        const bool branch_taken_0x298b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B84u;
        // 0x298b88: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b84) {
            ctx->pc = 0x298C38u;
            goto label_298c38;
        }
    }
    ctx->pc = 0x298B8Cu;
label_298b8c:
    // 0x298b8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x298b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_298b90:
    // 0x298b90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x298b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_298b94:
    // 0x298b94: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x298b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_298b98:
    // 0x298b98: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_298b9c:
    if (ctx->pc == 0x298B9Cu) {
        ctx->pc = 0x298B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B98u;
        // 0x298b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298BA0u;
        goto label_298ba0;
    }
    ctx->pc = 0x298B98u;
    {
        const bool branch_taken_0x298b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B98u;
        // 0x298b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b98) {
            ctx->pc = 0x298BDCu;
            goto label_298bdc;
        }
    }
    ctx->pc = 0x298BA0u;
label_298ba0:
    // 0x298ba0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x298ba0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_298ba4:
    // 0x298ba4: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x298ba4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
label_298ba8:
    // 0x298ba8: 0xc0ca672  jal         func_3299C8
label_298bac:
    if (ctx->pc == 0x298BACu) {
        ctx->pc = 0x298BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BA8u;
        // 0x298bac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298BB0u;
        goto label_298bb0;
    }
    ctx->pc = 0x298BA8u;
    SET_GPR_U32(ctx, 31, 0x298BB0u);
    ctx->pc = 0x298BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298BA8u;
    // 0x298bac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x298BA8u, 0x298BB0u)) {
        return;
    }
    ctx->pc = 0x298BB0u;
label_298bb0:
    // 0x298bb0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x298bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_298bb4:
    // 0x298bb4: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x298bb4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_298bb8:
    // 0x298bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298bbc:
    // 0x298bbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x298bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_298bc0:
    // 0x298bc0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x298bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_298bc4:
    // 0x298bc4: 0xc07db0a  jal         func_1F6C28
label_298bc8:
    if (ctx->pc == 0x298BC8u) {
        ctx->pc = 0x298BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BC4u;
        // 0x298bc8: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298BCCu;
        goto label_298bcc;
    }
    ctx->pc = 0x298BC4u;
    SET_GPR_U32(ctx, 31, 0x298BCCu);
    ctx->pc = 0x298BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298BC4u;
    // 0x298bc8: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x298BC4u, 0x298BCCu)) {
        return;
    }
    ctx->pc = 0x298BCCu;
label_298bcc:
    // 0x298bcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298bd0:
    // 0x298bd0: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x298bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_298bd4:
    // 0x298bd4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_298bd8:
    if (ctx->pc == 0x298BD8u) {
        ctx->pc = 0x298BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BD4u;
        // 0x298bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298BDCu;
        goto label_298bdc;
    }
    ctx->pc = 0x298BD4u;
    {
        const bool branch_taken_0x298bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BD4u;
        // 0x298bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bd4) {
            ctx->pc = 0x298BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298ba8;
        }
    }
    ctx->pc = 0x298BDCu;
label_298bdc:
    // 0x298bdc: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x298bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_298be0:
    // 0x298be0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x298be0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_298be4:
    // 0x298be4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x298be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_298be8:
    // 0x298be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298bec:
    // 0x298bec: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x298becu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_298bf0:
    // 0x298bf0: 0x50850001  beql        $a0, $a1, . + 4 + (0x1 << 2)
label_298bf4:
    if (ctx->pc == 0x298BF4u) {
        ctx->pc = 0x298BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BF0u;
        // 0x298bf4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298BF8u;
        goto label_298bf8;
    }
    ctx->pc = 0x298BF0u;
    {
        const bool branch_taken_0x298bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x298bf0) {
            ctx->pc = 0x298BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298BF0u;
            // 0x298bf4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x298BF8u;
            goto label_298bf8;
        }
    }
    ctx->pc = 0x298BF8u;
label_298bf8:
    // 0x298bf8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x298bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_298bfc:
    // 0x298bfc: 0x1010  mfhi        $v0
    ctx->pc = 0x298bfcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_298c00:
    // 0x298c00: 0x1812  mflo        $v1
    ctx->pc = 0x298c00u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_298c04:
    // 0x298c04: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x298c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_298c08:
    // 0x298c08: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x298c08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_298c0c:
    // 0x298c0c: 0x50850001  beql        $a0, $a1, . + 4 + (0x1 << 2)
label_298c10:
    if (ctx->pc == 0x298C10u) {
        ctx->pc = 0x298C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C0Cu;
        // 0x298c10: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C14u;
        goto label_298c14;
    }
    ctx->pc = 0x298C0Cu;
    {
        const bool branch_taken_0x298c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x298c0c) {
            ctx->pc = 0x298C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298C0Cu;
            // 0x298c10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x298C14u;
            goto label_298c14;
        }
    }
    ctx->pc = 0x298C14u;
label_298c14:
    // 0x298c14: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
label_298c18:
    if (ctx->pc == 0x298C18u) {
        ctx->pc = 0x298C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C14u;
        // 0x298c18: 0x64001b  divu        $zero, $v1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C1Cu;
        goto label_298c1c;
    }
    ctx->pc = 0x298C14u;
    {
        const bool branch_taken_0x298c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298c14) {
            ctx->pc = 0x298C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298C14u;
            // 0x298c18: 0x64001b  divu        $zero, $v1, $a0 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x298BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298bf0;
        }
    }
    ctx->pc = 0x298C1Cu;
label_298c1c:
    // 0x298c1c: 0x1ae00006  blez        $s7, . + 4 + (0x6 << 2)
label_298c20:
    if (ctx->pc == 0x298C20u) {
        ctx->pc = 0x298C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C1Cu;
        // 0x298c20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C24u;
        goto label_298c24;
    }
    ctx->pc = 0x298C1Cu;
    {
        const bool branch_taken_0x298c1c = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x298C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C1Cu;
        // 0x298c20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c1c) {
            ctx->pc = 0x298C38u;
            goto label_298c38;
        }
    }
    ctx->pc = 0x298C24u;
label_298c24:
    // 0x298c24: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x298c24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_298c28:
    // 0x298c28: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x298c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_298c2c:
    // 0x298c2c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x298c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_298c30:
    // 0x298c30: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x298c30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_298c34:
    // 0x298c34: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x298c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_298c38:
    // 0x298c38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x298c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_298c3c:
    // 0x298c3c: 0x2622ffde  addiu       $v0, $s1, -0x22
    ctx->pc = 0x298c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967262));
label_298c40:
    // 0x298c40: 0x3a2b023  subu        $s6, $sp, $v0
    ctx->pc = 0x298c40u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_298c44:
    // 0x298c44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x298c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_298c48:
    // 0x298c48: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x298c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_298c4c:
    // 0x298c4c: 0x77182a  slt         $v1, $v1, $s7
    ctx->pc = 0x298c4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_298c50:
    // 0x298c50: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x298c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_298c54:
    // 0x298c54: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x298c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_298c58:
    // 0x298c58: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x298c58u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
label_298c5c:
    // 0x298c5c: 0xde460010  ld          $a2, 0x10($s2)
    ctx->pc = 0x298c5cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_298c60:
    // 0x298c60: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x298c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_298c64:
    // 0x298c64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x298c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298c68:
    // 0x298c68: 0x82550018  lb          $s5, 0x18($s2)
    ctx->pc = 0x298c68u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_298c6c:
    // 0x298c6c: 0x30d4000e  andi        $s4, $a2, 0xE
    ctx->pc = 0x298c6cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)14);
label_298c70:
    // 0x298c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_298c74:
    // 0x298c74: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x298c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_298c78:
    // 0x298c78: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x298c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_298c7c:
    // 0x298c7c: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x298c7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_298c80:
    // 0x298c80: 0x64980a  movz        $s3, $v1, $a0
    ctx->pc = 0x298c80u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
label_298c84:
    // 0x298c84: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
label_298c88:
    if (ctx->pc == 0x298C88u) {
        ctx->pc = 0x298C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C84u;
        // 0x298c88: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C8Cu;
        goto label_298c8c;
    }
    ctx->pc = 0x298C84u;
    {
        const bool branch_taken_0x298c84 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x298C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C84u;
        // 0x298c88: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c84) {
            ctx->pc = 0x298CBCu;
            goto label_298cbc;
        }
    }
    ctx->pc = 0x298C8Cu;
label_298c8c:
    // 0x298c8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x298c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_298c90:
    // 0x298c90: 0x1282000a  beq         $s4, $v0, . + 4 + (0xA << 2)
label_298c94:
    if (ctx->pc == 0x298C94u) {
        ctx->pc = 0x298C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C90u;
        // 0x298c94: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C98u;
        goto label_298c98;
    }
    ctx->pc = 0x298C90u;
    {
        const bool branch_taken_0x298c90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x298C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C90u;
        // 0x298c94: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c90) {
            ctx->pc = 0x298CBCu;
            goto label_298cbc;
        }
    }
    ctx->pc = 0x298C98u;
label_298c98:
    // 0x298c98: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
label_298c9c:
    if (ctx->pc == 0x298C9Cu) {
        ctx->pc = 0x298C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C98u;
        // 0x298c9c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CA0u;
        goto label_298ca0;
    }
    ctx->pc = 0x298C98u;
    {
        const bool branch_taken_0x298c98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x298C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C98u;
        // 0x298c9c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c98) {
            ctx->pc = 0x298CBCu;
            goto label_298cbc;
        }
    }
    ctx->pc = 0x298CA0u;
label_298ca0:
    // 0x298ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_298ca4:
    // 0x298ca4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x298ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_298ca8:
    // 0x298ca8: 0xc0a7954  jal         func_29E550
label_298cac:
    if (ctx->pc == 0x298CACu) {
        ctx->pc = 0x298CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CA8u;
        // 0x298cac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CB0u;
        goto label_298cb0;
    }
    ctx->pc = 0x298CA8u;
    SET_GPR_U32(ctx, 31, 0x298CB0u);
    ctx->pc = 0x298CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298CA8u;
    // 0x298cac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E550u, 0x298CA8u, 0x298CB0u)) {
        return;
    }
    ctx->pc = 0x298CB0u;
label_298cb0:
    // 0x298cb0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x298cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_298cb4:
    // 0x298cb4: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
label_298cb8:
    if (ctx->pc == 0x298CB8u) {
        ctx->pc = 0x298CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CB4u;
        // 0x298cb8: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CBCu;
        goto label_298cbc;
    }
    ctx->pc = 0x298CB4u;
    {
        const bool branch_taken_0x298cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298cb4) {
            ctx->pc = 0x298CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298CB4u;
            // 0x298cb8: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298DBCu;
            goto label_298dbc;
        }
    }
    ctx->pc = 0x298CBCu;
label_298cbc:
    // 0x298cbc: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
label_298cc0:
    if (ctx->pc == 0x298CC0u) {
        ctx->pc = 0x298CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CBCu;
        // 0x298cc0: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CC4u;
        goto label_298cc4;
    }
    ctx->pc = 0x298CBCu;
    {
        const bool branch_taken_0x298cbc = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x298CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CBCu;
        // 0x298cc0: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298cbc) {
            ctx->pc = 0x298CCCu;
            goto label_298ccc;
        }
    }
    ctx->pc = 0x298CC4u;
label_298cc4:
    // 0x298cc4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_298cc8:
    if (ctx->pc == 0x298CC8u) {
        ctx->pc = 0x298CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CC4u;
        // 0x298cc8: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CCCu;
        goto label_298ccc;
    }
    ctx->pc = 0x298CC4u;
    {
        const bool branch_taken_0x298cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CC4u;
        // 0x298cc8: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298cc4) {
            ctx->pc = 0x298CF0u;
            goto label_298cf0;
        }
    }
    ctx->pc = 0x298CCCu;
label_298ccc:
    // 0x298ccc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x298cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_298cd0:
    // 0x298cd0: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x298cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_298cd4:
    // 0x298cd4: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x298cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_298cd8:
    // 0x298cd8: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x298cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_298cdc:
    // 0x298cdc: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x298cdcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_298ce0:
    // 0x298ce0: 0xc0a7bd0  jal         func_29EF40
label_298ce4:
    if (ctx->pc == 0x298CE4u) {
        ctx->pc = 0x298CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CE0u;
        // 0x298ce4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CE8u;
        goto label_298ce8;
    }
    ctx->pc = 0x298CE0u;
    SET_GPR_U32(ctx, 31, 0x298CE8u);
    ctx->pc = 0x298CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298CE0u;
    // 0x298ce4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x298CE0u, 0x298CE8u)) {
        return;
    }
    ctx->pc = 0x298CE8u;
label_298ce8:
    // 0x298ce8: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
label_298cec:
    if (ctx->pc == 0x298CECu) {
        ctx->pc = 0x298CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CE8u;
        // 0x298cec: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CF0u;
        goto label_298cf0;
    }
    ctx->pc = 0x298CE8u;
    {
        const bool branch_taken_0x298ce8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x298CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CE8u;
        // 0x298cec: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ce8) {
            ctx->pc = 0x298DB8u;
            goto label_298db8;
        }
    }
    ctx->pc = 0x298CF0u;
label_298cf0:
    // 0x298cf0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_298cf4:
    if (ctx->pc == 0x298CF4u) {
        ctx->pc = 0x298CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CF0u;
        // 0x298cf4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CF8u;
        goto label_298cf8;
    }
    ctx->pc = 0x298CF0u;
    {
        const bool branch_taken_0x298cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CF0u;
        // 0x298cf4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298cf0) {
            ctx->pc = 0x298D14u;
            goto label_298d14;
        }
    }
    ctx->pc = 0x298CF8u;
label_298cf8:
    // 0x298cf8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x298cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_298cfc:
    // 0x298cfc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x298cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_298d00:
    // 0x298d00: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x298d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_298d04:
    // 0x298d04: 0x40f809  jalr        $v0
label_298d08:
    if (ctx->pc == 0x298D08u) {
        ctx->pc = 0x298D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D04u;
        // 0x298d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D0Cu;
        goto label_298d0c;
    }
    ctx->pc = 0x298D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x298D0Cu);
        ctx->pc = 0x298D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D04u;
        // 0x298d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298D04u, 0x298D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298D0Cu;
label_298d0c:
    // 0x298d0c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_298d10:
    if (ctx->pc == 0x298D10u) {
        ctx->pc = 0x298D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D0Cu;
        // 0x298d10: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D14u;
        goto label_298d14;
    }
    ctx->pc = 0x298D0Cu;
    {
        const bool branch_taken_0x298d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298d0c) {
            ctx->pc = 0x298D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298D0Cu;
            // 0x298d10: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298DBCu;
            goto label_298dbc;
        }
    }
    ctx->pc = 0x298D14u;
label_298d14:
    // 0x298d14: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x298d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_298d18:
    // 0x298d18: 0x5682000b  bnel        $s4, $v0, . + 4 + (0xB << 2)
label_298d1c:
    if (ctx->pc == 0x298D1Cu) {
        ctx->pc = 0x298D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D18u;
        // 0x298d1c: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D20u;
        goto label_298d20;
    }
    ctx->pc = 0x298D18u;
    {
        const bool branch_taken_0x298d18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x298d18) {
            ctx->pc = 0x298D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298D18u;
            // 0x298d1c: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298D48u;
            goto label_298d48;
        }
    }
    ctx->pc = 0x298D20u;
label_298d20:
    // 0x298d20: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
label_298d24:
    if (ctx->pc == 0x298D24u) {
        ctx->pc = 0x298D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D20u;
        // 0x298d24: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D28u;
        goto label_298d28;
    }
    ctx->pc = 0x298D20u;
    {
        const bool branch_taken_0x298d20 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x298D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D20u;
        // 0x298d24: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d20) {
            ctx->pc = 0x298D44u;
            goto label_298d44;
        }
    }
    ctx->pc = 0x298D28u;
label_298d28:
    // 0x298d28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_298d2c:
    // 0x298d2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x298d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_298d30:
    // 0x298d30: 0xc0a7954  jal         func_29E550
label_298d34:
    if (ctx->pc == 0x298D34u) {
        ctx->pc = 0x298D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D30u;
        // 0x298d34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D38u;
        goto label_298d38;
    }
    ctx->pc = 0x298D30u;
    SET_GPR_U32(ctx, 31, 0x298D38u);
    ctx->pc = 0x298D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D30u;
    // 0x298d34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E550u, 0x298D30u, 0x298D38u)) {
        return;
    }
    ctx->pc = 0x298D38u;
label_298d38:
    // 0x298d38: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x298d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_298d3c:
    // 0x298d3c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_298d40:
    if (ctx->pc == 0x298D40u) {
        ctx->pc = 0x298D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D3Cu;
        // 0x298d40: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D44u;
        goto label_298d44;
    }
    ctx->pc = 0x298D3Cu;
    {
        const bool branch_taken_0x298d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298d3c) {
            ctx->pc = 0x298D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298D3Cu;
            // 0x298d40: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298DBCu;
            goto label_298dbc;
        }
    }
    ctx->pc = 0x298D44u;
label_298d44:
    // 0x298d44: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x298d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_298d48:
    // 0x298d48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x298d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_298d4c:
    // 0x298d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_298d50:
    // 0x298d50: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x298d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_298d54:
    // 0x298d54: 0x40f809  jalr        $v0
label_298d58:
    if (ctx->pc == 0x298D58u) {
        ctx->pc = 0x298D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D54u;
        // 0x298d58: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D5Cu;
        goto label_298d5c;
    }
    ctx->pc = 0x298D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x298D5Cu);
        ctx->pc = 0x298D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D54u;
        // 0x298d58: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298D54u, 0x298D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298D5Cu;
label_298d5c:
    // 0x298d5c: 0x54560017  bnel        $v0, $s6, . + 4 + (0x17 << 2)
label_298d60:
    if (ctx->pc == 0x298D60u) {
        ctx->pc = 0x298D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D5Cu;
        // 0x298d60: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D64u;
        goto label_298d64;
    }
    ctx->pc = 0x298D5Cu;
    {
        const bool branch_taken_0x298d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x298d5c) {
            ctx->pc = 0x298D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298D5Cu;
            // 0x298d60: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298DBCu;
            goto label_298dbc;
        }
    }
    ctx->pc = 0x298D64u;
label_298d64:
    // 0x298d64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x298d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_298d68:
    // 0x298d68: 0x5682000b  bnel        $s4, $v0, . + 4 + (0xB << 2)
label_298d6c:
    if (ctx->pc == 0x298D6Cu) {
        ctx->pc = 0x298D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D68u;
        // 0x298d6c: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D70u;
        goto label_298d70;
    }
    ctx->pc = 0x298D68u;
    {
        const bool branch_taken_0x298d68 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x298d68) {
            ctx->pc = 0x298D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298D68u;
            // 0x298d6c: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298D98u;
            goto label_298d98;
        }
    }
    ctx->pc = 0x298D70u;
label_298d70:
    // 0x298d70: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
label_298d74:
    if (ctx->pc == 0x298D74u) {
        ctx->pc = 0x298D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D70u;
        // 0x298d74: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D78u;
        goto label_298d78;
    }
    ctx->pc = 0x298D70u;
    {
        const bool branch_taken_0x298d70 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x298D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D70u;
        // 0x298d74: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d70) {
            ctx->pc = 0x298D94u;
            goto label_298d94;
        }
    }
    ctx->pc = 0x298D78u;
label_298d78:
    // 0x298d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_298d7c:
    // 0x298d7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x298d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_298d80:
    // 0x298d80: 0xc0a7954  jal         func_29E550
label_298d84:
    if (ctx->pc == 0x298D84u) {
        ctx->pc = 0x298D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D80u;
        // 0x298d84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D88u;
        goto label_298d88;
    }
    ctx->pc = 0x298D80u;
    SET_GPR_U32(ctx, 31, 0x298D88u);
    ctx->pc = 0x298D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D80u;
    // 0x298d84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E550u, 0x298D80u, 0x298D88u)) {
        return;
    }
    ctx->pc = 0x298D88u;
label_298d88:
    // 0x298d88: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x298d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_298d8c:
    // 0x298d8c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_298d90:
    if (ctx->pc == 0x298D90u) {
        ctx->pc = 0x298D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D8Cu;
        // 0x298d90: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D94u;
        goto label_298d94;
    }
    ctx->pc = 0x298D8Cu;
    {
        const bool branch_taken_0x298d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298d8c) {
            ctx->pc = 0x298D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298D8Cu;
            // 0x298d90: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298DBCu;
            goto label_298dbc;
        }
    }
    ctx->pc = 0x298D94u;
label_298d94:
    // 0x298d94: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x298d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_298d98:
    // 0x298d98: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x298d98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_298d9c:
    // 0x298d9c: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x298d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_298da0:
    // 0x298da0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_298da4:
    if (ctx->pc == 0x298DA4u) {
        ctx->pc = 0x298DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DA0u;
        // 0x298da4: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DA8u;
        goto label_298da8;
    }
    ctx->pc = 0x298DA0u;
    {
        const bool branch_taken_0x298da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DA0u;
        // 0x298da4: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298da0) {
            ctx->pc = 0x298DE8u;
            goto label_298de8;
        }
    }
    ctx->pc = 0x298DA8u;
label_298da8:
    // 0x298da8: 0xc0a6658  jal         func_299960
label_298dac:
    if (ctx->pc == 0x298DACu) {
        ctx->pc = 0x298DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DA8u;
        // 0x298dac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DB0u;
        goto label_298db0;
    }
    ctx->pc = 0x298DA8u;
    SET_GPR_U32(ctx, 31, 0x298DB0u);
    ctx->pc = 0x298DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298DA8u;
    // 0x298dac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299960u, 0x298DA8u, 0x298DB0u)) {
        return;
    }
    ctx->pc = 0x298DB0u;
label_298db0:
    // 0x298db0: 0x1000000d  b           . + 4 + (0xD << 2)
label_298db4:
    if (ctx->pc == 0x298DB4u) {
        ctx->pc = 0x298DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DB0u;
        // 0x298db4: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DB8u;
        goto label_298db8;
    }
    ctx->pc = 0x298DB0u;
    {
        const bool branch_taken_0x298db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DB0u;
        // 0x298db4: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298db0) {
            ctx->pc = 0x298DE8u;
            goto label_298de8;
        }
    }
    ctx->pc = 0x298DB8u;
label_298db8:
    // 0x298db8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x298db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_298dbc:
    // 0x298dbc: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x298dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_298dc0:
    // 0x298dc0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x298dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_298dc4:
    // 0x298dc4: 0xa082001a  sb          $v0, 0x1A($a0)
    ctx->pc = 0x298dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 2));
label_298dc8:
    // 0x298dc8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x298dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_298dcc:
    // 0x298dcc: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x298dccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_298dd0:
    // 0x298dd0: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x298dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_298dd4:
    // 0x298dd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_298dd8:
    if (ctx->pc == 0x298DD8u) {
        ctx->pc = 0x298DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DD4u;
        // 0x298dd8: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DDCu;
        goto label_298ddc;
    }
    ctx->pc = 0x298DD4u;
    {
        const bool branch_taken_0x298dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DD4u;
        // 0x298dd8: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298dd4) {
            ctx->pc = 0x298DE8u;
            goto label_298de8;
        }
    }
    ctx->pc = 0x298DDCu;
label_298ddc:
    // 0x298ddc: 0xc0a6658  jal         func_299960
label_298de0:
    if (ctx->pc == 0x298DE0u) {
        ctx->pc = 0x298DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DDCu;
        // 0x298de0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DE4u;
        goto label_298de4;
    }
    ctx->pc = 0x298DDCu;
    SET_GPR_U32(ctx, 31, 0x298DE4u);
    ctx->pc = 0x298DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298DDCu;
    // 0x298de0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299960u, 0x298DDCu, 0x298DE4u)) {
        return;
    }
    ctx->pc = 0x298DE4u;
label_298de4:
    // 0x298de4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x298de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_298de8:
    // 0x298de8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x298de8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_298dec:
    // 0x298dec: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x298decu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_298df0:
    // 0x298df0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x298df0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_298df4:
    // 0x298df4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x298df4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_298df8:
    // 0x298df8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x298df8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_298dfc:
    // 0x298dfc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x298dfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_298e00:
    // 0x298e00: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x298e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_298e04:
    // 0x298e04: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x298e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_298e08:
    // 0x298e08: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x298e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_298e0c:
    // 0x298e0c: 0x3e00008  jr          $ra
label_298e10:
    if (ctx->pc == 0x298E10u) {
        ctx->pc = 0x298E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E0Cu;
        // 0x298e10: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298E14u;
        goto label_298e14;
    }
    ctx->pc = 0x298E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E0Cu;
        // 0x298e10: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298E14u;
label_298e14:
    // 0x298e14: 0x0  nop
    ctx->pc = 0x298e14u;
    // NOP
    ctx->pc = 0x298e18u;
}
