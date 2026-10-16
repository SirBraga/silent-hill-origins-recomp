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

// Function: sub_00133BB0
// Address: 0x133bb0 - 0x133f08
void sub_00133BB0_0x133bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133BB0_0x133bb0");
#endif

    switch (ctx->pc) {
        case 0x133bb0u: goto label_133bb0;
        case 0x133bb4u: goto label_133bb4;
        case 0x133bb8u: goto label_133bb8;
        case 0x133bbcu: goto label_133bbc;
        case 0x133bc0u: goto label_133bc0;
        case 0x133bc4u: goto label_133bc4;
        case 0x133bc8u: goto label_133bc8;
        case 0x133bccu: goto label_133bcc;
        case 0x133bd0u: goto label_133bd0;
        case 0x133bd4u: goto label_133bd4;
        case 0x133bd8u: goto label_133bd8;
        case 0x133bdcu: goto label_133bdc;
        case 0x133be0u: goto label_133be0;
        case 0x133be4u: goto label_133be4;
        case 0x133be8u: goto label_133be8;
        case 0x133becu: goto label_133bec;
        case 0x133bf0u: goto label_133bf0;
        case 0x133bf4u: goto label_133bf4;
        case 0x133bf8u: goto label_133bf8;
        case 0x133bfcu: goto label_133bfc;
        case 0x133c00u: goto label_133c00;
        case 0x133c04u: goto label_133c04;
        case 0x133c08u: goto label_133c08;
        case 0x133c0cu: goto label_133c0c;
        case 0x133c10u: goto label_133c10;
        case 0x133c14u: goto label_133c14;
        case 0x133c18u: goto label_133c18;
        case 0x133c1cu: goto label_133c1c;
        case 0x133c20u: goto label_133c20;
        case 0x133c24u: goto label_133c24;
        case 0x133c28u: goto label_133c28;
        case 0x133c2cu: goto label_133c2c;
        case 0x133c30u: goto label_133c30;
        case 0x133c34u: goto label_133c34;
        case 0x133c38u: goto label_133c38;
        case 0x133c3cu: goto label_133c3c;
        case 0x133c40u: goto label_133c40;
        case 0x133c44u: goto label_133c44;
        case 0x133c48u: goto label_133c48;
        case 0x133c4cu: goto label_133c4c;
        case 0x133c50u: goto label_133c50;
        case 0x133c54u: goto label_133c54;
        case 0x133c58u: goto label_133c58;
        case 0x133c5cu: goto label_133c5c;
        case 0x133c60u: goto label_133c60;
        case 0x133c64u: goto label_133c64;
        case 0x133c68u: goto label_133c68;
        case 0x133c6cu: goto label_133c6c;
        case 0x133c70u: goto label_133c70;
        case 0x133c74u: goto label_133c74;
        case 0x133c78u: goto label_133c78;
        case 0x133c7cu: goto label_133c7c;
        case 0x133c80u: goto label_133c80;
        case 0x133c84u: goto label_133c84;
        case 0x133c88u: goto label_133c88;
        case 0x133c8cu: goto label_133c8c;
        case 0x133c90u: goto label_133c90;
        case 0x133c94u: goto label_133c94;
        case 0x133c98u: goto label_133c98;
        case 0x133c9cu: goto label_133c9c;
        case 0x133ca0u: goto label_133ca0;
        case 0x133ca4u: goto label_133ca4;
        case 0x133ca8u: goto label_133ca8;
        case 0x133cacu: goto label_133cac;
        case 0x133cb0u: goto label_133cb0;
        case 0x133cb4u: goto label_133cb4;
        case 0x133cb8u: goto label_133cb8;
        case 0x133cbcu: goto label_133cbc;
        case 0x133cc0u: goto label_133cc0;
        case 0x133cc4u: goto label_133cc4;
        case 0x133cc8u: goto label_133cc8;
        case 0x133cccu: goto label_133ccc;
        case 0x133cd0u: goto label_133cd0;
        case 0x133cd4u: goto label_133cd4;
        case 0x133cd8u: goto label_133cd8;
        case 0x133cdcu: goto label_133cdc;
        case 0x133ce0u: goto label_133ce0;
        case 0x133ce4u: goto label_133ce4;
        case 0x133ce8u: goto label_133ce8;
        case 0x133cecu: goto label_133cec;
        case 0x133cf0u: goto label_133cf0;
        case 0x133cf4u: goto label_133cf4;
        case 0x133cf8u: goto label_133cf8;
        case 0x133cfcu: goto label_133cfc;
        case 0x133d00u: goto label_133d00;
        case 0x133d04u: goto label_133d04;
        case 0x133d08u: goto label_133d08;
        case 0x133d0cu: goto label_133d0c;
        case 0x133d10u: goto label_133d10;
        case 0x133d14u: goto label_133d14;
        case 0x133d18u: goto label_133d18;
        case 0x133d1cu: goto label_133d1c;
        case 0x133d20u: goto label_133d20;
        case 0x133d24u: goto label_133d24;
        case 0x133d28u: goto label_133d28;
        case 0x133d2cu: goto label_133d2c;
        case 0x133d30u: goto label_133d30;
        case 0x133d34u: goto label_133d34;
        case 0x133d38u: goto label_133d38;
        case 0x133d3cu: goto label_133d3c;
        case 0x133d40u: goto label_133d40;
        case 0x133d44u: goto label_133d44;
        case 0x133d48u: goto label_133d48;
        case 0x133d4cu: goto label_133d4c;
        case 0x133d50u: goto label_133d50;
        case 0x133d54u: goto label_133d54;
        case 0x133d58u: goto label_133d58;
        case 0x133d5cu: goto label_133d5c;
        case 0x133d60u: goto label_133d60;
        case 0x133d64u: goto label_133d64;
        case 0x133d68u: goto label_133d68;
        case 0x133d6cu: goto label_133d6c;
        case 0x133d70u: goto label_133d70;
        case 0x133d74u: goto label_133d74;
        case 0x133d78u: goto label_133d78;
        case 0x133d7cu: goto label_133d7c;
        case 0x133d80u: goto label_133d80;
        case 0x133d84u: goto label_133d84;
        case 0x133d88u: goto label_133d88;
        case 0x133d8cu: goto label_133d8c;
        case 0x133d90u: goto label_133d90;
        case 0x133d94u: goto label_133d94;
        case 0x133d98u: goto label_133d98;
        case 0x133d9cu: goto label_133d9c;
        case 0x133da0u: goto label_133da0;
        case 0x133da4u: goto label_133da4;
        case 0x133da8u: goto label_133da8;
        case 0x133dacu: goto label_133dac;
        case 0x133db0u: goto label_133db0;
        case 0x133db4u: goto label_133db4;
        case 0x133db8u: goto label_133db8;
        case 0x133dbcu: goto label_133dbc;
        case 0x133dc0u: goto label_133dc0;
        case 0x133dc4u: goto label_133dc4;
        case 0x133dc8u: goto label_133dc8;
        case 0x133dccu: goto label_133dcc;
        case 0x133dd0u: goto label_133dd0;
        case 0x133dd4u: goto label_133dd4;
        case 0x133dd8u: goto label_133dd8;
        case 0x133ddcu: goto label_133ddc;
        case 0x133de0u: goto label_133de0;
        case 0x133de4u: goto label_133de4;
        case 0x133de8u: goto label_133de8;
        case 0x133decu: goto label_133dec;
        case 0x133df0u: goto label_133df0;
        case 0x133df4u: goto label_133df4;
        case 0x133df8u: goto label_133df8;
        case 0x133dfcu: goto label_133dfc;
        case 0x133e00u: goto label_133e00;
        case 0x133e04u: goto label_133e04;
        case 0x133e08u: goto label_133e08;
        case 0x133e0cu: goto label_133e0c;
        case 0x133e10u: goto label_133e10;
        case 0x133e14u: goto label_133e14;
        case 0x133e18u: goto label_133e18;
        case 0x133e1cu: goto label_133e1c;
        case 0x133e20u: goto label_133e20;
        case 0x133e24u: goto label_133e24;
        case 0x133e28u: goto label_133e28;
        case 0x133e2cu: goto label_133e2c;
        case 0x133e30u: goto label_133e30;
        case 0x133e34u: goto label_133e34;
        case 0x133e38u: goto label_133e38;
        case 0x133e3cu: goto label_133e3c;
        case 0x133e40u: goto label_133e40;
        case 0x133e44u: goto label_133e44;
        case 0x133e48u: goto label_133e48;
        case 0x133e4cu: goto label_133e4c;
        case 0x133e50u: goto label_133e50;
        case 0x133e54u: goto label_133e54;
        case 0x133e58u: goto label_133e58;
        case 0x133e5cu: goto label_133e5c;
        case 0x133e60u: goto label_133e60;
        case 0x133e64u: goto label_133e64;
        case 0x133e68u: goto label_133e68;
        case 0x133e6cu: goto label_133e6c;
        case 0x133e70u: goto label_133e70;
        case 0x133e74u: goto label_133e74;
        case 0x133e78u: goto label_133e78;
        case 0x133e7cu: goto label_133e7c;
        case 0x133e80u: goto label_133e80;
        case 0x133e84u: goto label_133e84;
        case 0x133e88u: goto label_133e88;
        case 0x133e8cu: goto label_133e8c;
        case 0x133e90u: goto label_133e90;
        case 0x133e94u: goto label_133e94;
        case 0x133e98u: goto label_133e98;
        case 0x133e9cu: goto label_133e9c;
        case 0x133ea0u: goto label_133ea0;
        case 0x133ea4u: goto label_133ea4;
        case 0x133ea8u: goto label_133ea8;
        case 0x133eacu: goto label_133eac;
        case 0x133eb0u: goto label_133eb0;
        case 0x133eb4u: goto label_133eb4;
        case 0x133eb8u: goto label_133eb8;
        case 0x133ebcu: goto label_133ebc;
        case 0x133ec0u: goto label_133ec0;
        case 0x133ec4u: goto label_133ec4;
        case 0x133ec8u: goto label_133ec8;
        case 0x133eccu: goto label_133ecc;
        case 0x133ed0u: goto label_133ed0;
        case 0x133ed4u: goto label_133ed4;
        case 0x133ed8u: goto label_133ed8;
        case 0x133edcu: goto label_133edc;
        case 0x133ee0u: goto label_133ee0;
        case 0x133ee4u: goto label_133ee4;
        case 0x133ee8u: goto label_133ee8;
        case 0x133eecu: goto label_133eec;
        case 0x133ef0u: goto label_133ef0;
        case 0x133ef4u: goto label_133ef4;
        case 0x133ef8u: goto label_133ef8;
        case 0x133efcu: goto label_133efc;
        case 0x133f00u: goto label_133f00;
        case 0x133f04u: goto label_133f04;
        default: break;
    }

    ctx->pc = 0x133bb0u;

label_133bb0:
    // 0x133bb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x133bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_133bb4:
    // 0x133bb4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x133bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_133bb8:
    // 0x133bb8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x133bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_133bbc:
    // 0x133bbc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x133bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_133bc0:
    // 0x133bc0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x133bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_133bc4:
    // 0x133bc4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x133bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_133bc8:
    // 0x133bc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x133bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_133bcc:
    // 0x133bcc: 0xc0495a4  jal         func_125690
label_133bd0:
    if (ctx->pc == 0x133BD0u) {
        ctx->pc = 0x133BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BCCu;
        // 0x133bd0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BD4u;
        goto label_133bd4;
    }
    ctx->pc = 0x133BCCu;
    SET_GPR_U32(ctx, 31, 0x133BD4u);
    ctx->pc = 0x133BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BCCu;
    // 0x133bd0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125690u, 0x133BCCu, 0x133BD4u)) {
        return;
    }
    ctx->pc = 0x133BD4u;
label_133bd4:
    // 0x133bd4: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x133bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_133bd8:
    // 0x133bd8: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x133bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_133bdc:
    // 0x133bdc: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x133bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_133be0:
    // 0x133be0: 0x40f809  jalr        $v0
label_133be4:
    if (ctx->pc == 0x133BE4u) {
        ctx->pc = 0x133BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BE0u;
        // 0x133be4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133BE8u;
        goto label_133be8;
    }
    ctx->pc = 0x133BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133BE8u);
        ctx->pc = 0x133BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BE0u;
        // 0x133be4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133BE0u, 0x133BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133BE8u;
label_133be8:
    // 0x133be8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x133be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_133bec:
    // 0x133bec: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x133becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_133bf0:
    // 0x133bf0: 0x8c6544c8  lw          $a1, 0x44C8($v1)
    ctx->pc = 0x133bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17608)));
label_133bf4:
    // 0x133bf4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x133bf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133bf8:
    // 0x133bf8: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x133bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_133bfc:
    // 0x133bfc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x133bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_133c00:
    // 0x133c00: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_133c04:
    if (ctx->pc == 0x133C04u) {
        ctx->pc = 0x133C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C00u;
        // 0x133c04: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C08u;
        goto label_133c08;
    }
    ctx->pc = 0x133C00u;
    {
        const bool branch_taken_0x133c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x133C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C00u;
        // 0x133c04: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c00) {
            ctx->pc = 0x133C1Cu;
            goto label_133c1c;
        }
    }
    ctx->pc = 0x133C08u;
label_133c08:
    // 0x133c08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x133c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_133c0c:
    // 0x133c0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_133c10:
    if (ctx->pc == 0x133C10u) {
        ctx->pc = 0x133C14u;
        goto label_133c14;
    }
    ctx->pc = 0x133C0Cu;
    {
        const bool branch_taken_0x133c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c0c) {
            ctx->pc = 0x133C1Cu;
            goto label_133c1c;
        }
    }
    ctx->pc = 0x133C14u;
label_133c14:
    // 0x133c14: 0xc07fd18  jal         func_1FF460
label_133c18:
    if (ctx->pc == 0x133C18u) {
        ctx->pc = 0x133C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C14u;
        // 0x133c18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C1Cu;
        goto label_133c1c;
    }
    ctx->pc = 0x133C14u;
    SET_GPR_U32(ctx, 31, 0x133C1Cu);
    ctx->pc = 0x133C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C14u;
    // 0x133c18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x133C14u, 0x133C1Cu)) {
        return;
    }
    ctx->pc = 0x133C1Cu;
label_133c1c:
    // 0x133c1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_133c20:
    // 0x133c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133c24:
    // 0x133c24: 0xc04cc8e  jal         func_133238
label_133c28:
    if (ctx->pc == 0x133C28u) {
        ctx->pc = 0x133C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C24u;
        // 0x133c28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C2Cu;
        goto label_133c2c;
    }
    ctx->pc = 0x133C24u;
    SET_GPR_U32(ctx, 31, 0x133C2Cu);
    ctx->pc = 0x133C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C24u;
    // 0x133c28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x133238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x133238u, 0x133C24u, 0x133C2Cu)) {
        return;
    }
    ctx->pc = 0x133C2Cu;
label_133c2c:
    // 0x133c2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x133c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_133c30:
    // 0x133c30: 0x8e831a70  lw          $v1, 0x1A70($s4)
    ctx->pc = 0x133c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
label_133c34:
    // 0x133c34: 0x8c4446a0  lw          $a0, 0x46A0($v0)
    ctx->pc = 0x133c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18080)));
label_133c38:
    // 0x133c38: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_133c3c:
    if (ctx->pc == 0x133C3Cu) {
        ctx->pc = 0x133C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C38u;
        // 0x133c3c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C40u;
        goto label_133c40;
    }
    ctx->pc = 0x133C38u;
    {
        const bool branch_taken_0x133c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x133C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C38u;
        // 0x133c3c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c38) {
            ctx->pc = 0x133C64u;
            goto label_133c64;
        }
    }
    ctx->pc = 0x133C40u;
label_133c40:
    // 0x133c40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x133c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_133c44:
    // 0x133c44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_133c48:
    if (ctx->pc == 0x133C48u) {
        ctx->pc = 0x133C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C44u;
        // 0x133c48: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C4Cu;
        goto label_133c4c;
    }
    ctx->pc = 0x133C44u;
    {
        const bool branch_taken_0x133c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C44u;
        // 0x133c48: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c44) {
            ctx->pc = 0x133C5Cu;
            goto label_133c5c;
        }
    }
    ctx->pc = 0x133C4Cu;
label_133c4c:
    // 0x133c4c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x133c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_133c50:
    // 0x133c50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133c54:
    // 0x133c54: 0xc07fd18  jal         func_1FF460
label_133c58:
    if (ctx->pc == 0x133C58u) {
        ctx->pc = 0x133C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C54u;
        // 0x133c58: 0xac520004  sw          $s2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C5Cu;
        goto label_133c5c;
    }
    ctx->pc = 0x133C54u;
    SET_GPR_U32(ctx, 31, 0x133C5Cu);
    ctx->pc = 0x133C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C54u;
    // 0x133c58: 0xac520004  sw          $s2, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x133C54u, 0x133C5Cu)) {
        return;
    }
    ctx->pc = 0x133C5Cu;
label_133c5c:
    // 0x133c5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x133c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_133c60:
    // 0x133c60: 0x8e831a70  lw          $v1, 0x1A70($s4)
    ctx->pc = 0x133c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
label_133c64:
    // 0x133c64: 0x8c444768  lw          $a0, 0x4768($v0)
    ctx->pc = 0x133c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
label_133c68:
    // 0x133c68: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_133c6c:
    if (ctx->pc == 0x133C6Cu) {
        ctx->pc = 0x133C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C68u;
        // 0x133c6c: 0x8e4500c4  lw          $a1, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C70u;
        goto label_133c70;
    }
    ctx->pc = 0x133C68u;
    {
        const bool branch_taken_0x133c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x133C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C68u;
        // 0x133c6c: 0x8e4500c4  lw          $a1, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c68) {
            ctx->pc = 0x133C8Cu;
            goto label_133c8c;
        }
    }
    ctx->pc = 0x133C70u;
label_133c70:
    // 0x133c70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x133c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_133c74:
    // 0x133c74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_133c78:
    if (ctx->pc == 0x133C78u) {
        ctx->pc = 0x133C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C74u;
        // 0x133c78: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C7Cu;
        goto label_133c7c;
    }
    ctx->pc = 0x133C74u;
    {
        const bool branch_taken_0x133c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C74u;
        // 0x133c78: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c74) {
            ctx->pc = 0x133C90u;
            goto label_133c90;
        }
    }
    ctx->pc = 0x133C7Cu;
label_133c7c:
    // 0x133c7c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x133c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_133c80:
    // 0x133c80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x133c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_133c84:
    // 0x133c84: 0xc07fd18  jal         func_1FF460
label_133c88:
    if (ctx->pc == 0x133C88u) {
        ctx->pc = 0x133C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C84u;
        // 0x133c88: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133C8Cu;
        goto label_133c8c;
    }
    ctx->pc = 0x133C84u;
    SET_GPR_U32(ctx, 31, 0x133C8Cu);
    ctx->pc = 0x133C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C84u;
    // 0x133c88: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x133C84u, 0x133C8Cu)) {
        return;
    }
    ctx->pc = 0x133C8Cu;
label_133c8c:
    // 0x133c8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x133c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_133c90:
    // 0x133c90: 0x8e831a70  lw          $v1, 0x1A70($s4)
    ctx->pc = 0x133c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
label_133c94:
    // 0x133c94: 0x8c444778  lw          $a0, 0x4778($v0)
    ctx->pc = 0x133c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
label_133c98:
    // 0x133c98: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_133c9c:
    if (ctx->pc == 0x133C9Cu) {
        ctx->pc = 0x133C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C98u;
        // 0x133c9c: 0x8e4500c4  lw          $a1, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CA0u;
        goto label_133ca0;
    }
    ctx->pc = 0x133C98u;
    {
        const bool branch_taken_0x133c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x133C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C98u;
        // 0x133c9c: 0x8e4500c4  lw          $a1, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c98) {
            ctx->pc = 0x133CBCu;
            goto label_133cbc;
        }
    }
    ctx->pc = 0x133CA0u;
label_133ca0:
    // 0x133ca0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x133ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_133ca4:
    // 0x133ca4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_133ca8:
    if (ctx->pc == 0x133CA8u) {
        ctx->pc = 0x133CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CA4u;
        // 0x133ca8: 0x3c130034  lui         $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CACu;
        goto label_133cac;
    }
    ctx->pc = 0x133CA4u;
    {
        const bool branch_taken_0x133ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CA4u;
        // 0x133ca8: 0x3c130034  lui         $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ca4) {
            ctx->pc = 0x133CC0u;
            goto label_133cc0;
        }
    }
    ctx->pc = 0x133CACu;
label_133cac:
    // 0x133cac: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x133cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_133cb0:
    // 0x133cb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x133cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_133cb4:
    // 0x133cb4: 0xc07fd18  jal         func_1FF460
label_133cb8:
    if (ctx->pc == 0x133CB8u) {
        ctx->pc = 0x133CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CB4u;
        // 0x133cb8: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CBCu;
        goto label_133cbc;
    }
    ctx->pc = 0x133CB4u;
    SET_GPR_U32(ctx, 31, 0x133CBCu);
    ctx->pc = 0x133CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133CB4u;
    // 0x133cb8: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x133CB4u, 0x133CBCu)) {
        return;
    }
    ctx->pc = 0x133CBCu;
label_133cbc:
    // 0x133cbc: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x133cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
label_133cc0:
    // 0x133cc0: 0x8e648378  lw          $a0, -0x7C88($s3)
    ctx->pc = 0x133cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935416)));
label_133cc4:
    // 0x133cc4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_133cc8:
    if (ctx->pc == 0x133CC8u) {
        ctx->pc = 0x133CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CC4u;
        // 0x133cc8: 0x8e5100c4  lw          $s1, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CCCu;
        goto label_133ccc;
    }
    ctx->pc = 0x133CC4u;
    {
        const bool branch_taken_0x133cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x133CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CC4u;
        // 0x133cc8: 0x8e5100c4  lw          $s1, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133cc4) {
            ctx->pc = 0x133CD4u;
            goto label_133cd4;
        }
    }
    ctx->pc = 0x133CCCu;
label_133ccc:
    // 0x133ccc: 0xc0808d4  jal         func_202350
label_133cd0:
    if (ctx->pc == 0x133CD0u) {
        ctx->pc = 0x133CD4u;
        goto label_133cd4;
    }
    ctx->pc = 0x133CCCu;
    SET_GPR_U32(ctx, 31, 0x133CD4u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x133CCCu, 0x133CD4u)) {
        return;
    }
    ctx->pc = 0x133CD4u;
label_133cd4:
    // 0x133cd4: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x133cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_133cd8:
    // 0x133cd8: 0x8e04837c  lw          $a0, -0x7C84($s0)
    ctx->pc = 0x133cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935420)));
label_133cdc:
    // 0x133cdc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_133ce0:
    if (ctx->pc == 0x133CE0u) {
        ctx->pc = 0x133CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CDCu;
        // 0x133ce0: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CE4u;
        goto label_133ce4;
    }
    ctx->pc = 0x133CDCu;
    {
        const bool branch_taken_0x133cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x133CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CDCu;
        // 0x133ce0: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133cdc) {
            ctx->pc = 0x133CF0u;
            goto label_133cf0;
        }
    }
    ctx->pc = 0x133CE4u;
label_133ce4:
    // 0x133ce4: 0xc0808d4  jal         func_202350
label_133ce8:
    if (ctx->pc == 0x133CE8u) {
        ctx->pc = 0x133CECu;
        goto label_133cec;
    }
    ctx->pc = 0x133CE4u;
    SET_GPR_U32(ctx, 31, 0x133CECu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x133CE4u, 0x133CECu)) {
        return;
    }
    ctx->pc = 0x133CECu;
label_133cec:
    // 0x133cec: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x133cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_133cf0:
    // 0x133cf0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x133cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_133cf4:
    // 0x133cf4: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x133cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
label_133cf8:
    // 0x133cf8: 0xac608370  sw          $zero, -0x7C90($v1)
    ctx->pc = 0x133cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935408), GPR_U32(ctx, 0));
label_133cfc:
    // 0x133cfc: 0xae608378  sw          $zero, -0x7C88($s3)
    ctx->pc = 0x133cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294935416), GPR_U32(ctx, 0));
label_133d00:
    // 0x133d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133d04:
    // 0x133d04: 0xae00837c  sw          $zero, -0x7C84($s0)
    ctx->pc = 0x133d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294935420), GPR_U32(ctx, 0));
label_133d08:
    // 0x133d08: 0x24a5c100  addiu       $a1, $a1, -0x3F00
    ctx->pc = 0x133d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951168));
label_133d0c:
    // 0x133d0c: 0xac408374  sw          $zero, -0x7C8C($v0)
    ctx->pc = 0x133d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935412), GPR_U32(ctx, 0));
label_133d10:
    // 0x133d10: 0xc09545a  jal         func_255168
label_133d14:
    if (ctx->pc == 0x133D14u) {
        ctx->pc = 0x133D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D10u;
        // 0x133d14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D18u;
        goto label_133d18;
    }
    ctx->pc = 0x133D10u;
    SET_GPR_U32(ctx, 31, 0x133D18u);
    ctx->pc = 0x133D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D10u;
    // 0x133d14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x133D10u, 0x133D18u)) {
        return;
    }
    ctx->pc = 0x133D18u;
label_133d18:
    // 0x133d18: 0x8e431524  lw          $v1, 0x1524($s2)
    ctx->pc = 0x133d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5412)));
label_133d1c:
    // 0x133d1c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_133d20:
    if (ctx->pc == 0x133D20u) {
        ctx->pc = 0x133D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D1Cu;
        // 0x133d20: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D24u;
        goto label_133d24;
    }
    ctx->pc = 0x133D1Cu;
    {
        const bool branch_taken_0x133d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D1Cu;
        // 0x133d20: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d1c) {
            ctx->pc = 0x133D58u;
            goto label_133d58;
        }
    }
    ctx->pc = 0x133D24u;
label_133d24:
    // 0x133d24: 0x8e831a70  lw          $v1, 0x1A70($s4)
    ctx->pc = 0x133d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
label_133d28:
    // 0x133d28: 0x8c444720  lw          $a0, 0x4720($v0)
    ctx->pc = 0x133d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18208)));
label_133d2c:
    // 0x133d2c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_133d30:
    if (ctx->pc == 0x133D30u) {
        ctx->pc = 0x133D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D2Cu;
        // 0x133d30: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D34u;
        goto label_133d34;
    }
    ctx->pc = 0x133D2Cu;
    {
        const bool branch_taken_0x133d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x133D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D2Cu;
        // 0x133d30: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d2c) {
            ctx->pc = 0x133D90u;
            goto label_133d90;
        }
    }
    ctx->pc = 0x133D34u;
label_133d34:
    // 0x133d34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x133d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_133d38:
    // 0x133d38: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_133d3c:
    if (ctx->pc == 0x133D3Cu) {
        ctx->pc = 0x133D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D38u;
        // 0x133d3c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D40u;
        goto label_133d40;
    }
    ctx->pc = 0x133D38u;
    {
        const bool branch_taken_0x133d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D38u;
        // 0x133d3c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d38) {
            ctx->pc = 0x133D88u;
            goto label_133d88;
        }
    }
    ctx->pc = 0x133D40u;
label_133d40:
    // 0x133d40: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x133d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_133d44:
    // 0x133d44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133d48:
    // 0x133d48: 0xc07fd18  jal         func_1FF460
label_133d4c:
    if (ctx->pc == 0x133D4Cu) {
        ctx->pc = 0x133D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D48u;
        // 0x133d4c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D50u;
        goto label_133d50;
    }
    ctx->pc = 0x133D48u;
    SET_GPR_U32(ctx, 31, 0x133D50u);
    ctx->pc = 0x133D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D48u;
    // 0x133d4c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x133D48u, 0x133D50u)) {
        return;
    }
    ctx->pc = 0x133D50u;
label_133d50:
    // 0x133d50: 0x1000000e  b           . + 4 + (0xE << 2)
label_133d54:
    if (ctx->pc == 0x133D54u) {
        ctx->pc = 0x133D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D50u;
        // 0x133d54: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D58u;
        goto label_133d58;
    }
    ctx->pc = 0x133D50u;
    {
        const bool branch_taken_0x133d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D50u;
        // 0x133d54: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d50) {
            ctx->pc = 0x133D8Cu;
            goto label_133d8c;
        }
    }
    ctx->pc = 0x133D58u;
label_133d58:
    // 0x133d58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x133d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_133d5c:
    // 0x133d5c: 0x8e831a70  lw          $v1, 0x1A70($s4)
    ctx->pc = 0x133d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
label_133d60:
    // 0x133d60: 0x8c444728  lw          $a0, 0x4728($v0)
    ctx->pc = 0x133d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
label_133d64:
    // 0x133d64: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_133d68:
    if (ctx->pc == 0x133D68u) {
        ctx->pc = 0x133D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D64u;
        // 0x133d68: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D6Cu;
        goto label_133d6c;
    }
    ctx->pc = 0x133D64u;
    {
        const bool branch_taken_0x133d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x133D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D64u;
        // 0x133d68: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d64) {
            ctx->pc = 0x133D90u;
            goto label_133d90;
        }
    }
    ctx->pc = 0x133D6Cu;
label_133d6c:
    // 0x133d6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x133d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_133d70:
    // 0x133d70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_133d74:
    if (ctx->pc == 0x133D74u) {
        ctx->pc = 0x133D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D70u;
        // 0x133d74: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D78u;
        goto label_133d78;
    }
    ctx->pc = 0x133D70u;
    {
        const bool branch_taken_0x133d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D70u;
        // 0x133d74: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d70) {
            ctx->pc = 0x133D88u;
            goto label_133d88;
        }
    }
    ctx->pc = 0x133D78u;
label_133d78:
    // 0x133d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x133d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_133d7c:
    // 0x133d7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133d80:
    // 0x133d80: 0xc07fd18  jal         func_1FF460
label_133d84:
    if (ctx->pc == 0x133D84u) {
        ctx->pc = 0x133D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D80u;
        // 0x133d84: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D88u;
        goto label_133d88;
    }
    ctx->pc = 0x133D80u;
    SET_GPR_U32(ctx, 31, 0x133D88u);
    ctx->pc = 0x133D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D80u;
    // 0x133d84: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x133D80u, 0x133D88u)) {
        return;
    }
    ctx->pc = 0x133D88u;
label_133d88:
    // 0x133d88: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x133d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_133d8c:
    // 0x133d8c: 0x8e831a70  lw          $v1, 0x1A70($s4)
    ctx->pc = 0x133d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
label_133d90:
    // 0x133d90: 0x8c45bd90  lw          $a1, -0x4270($v0)
    ctx->pc = 0x133d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950288)));
label_133d94:
    // 0x133d94: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_133d98:
    if (ctx->pc == 0x133D98u) {
        ctx->pc = 0x133D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D94u;
        // 0x133d98: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D9Cu;
        goto label_133d9c;
    }
    ctx->pc = 0x133D94u;
    {
        const bool branch_taken_0x133d94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x133D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D94u;
        // 0x133d98: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d94) {
            ctx->pc = 0x133DBCu;
            goto label_133dbc;
        }
    }
    ctx->pc = 0x133D9Cu;
label_133d9c:
    // 0x133d9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x133d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_133da0:
    // 0x133da0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_133da4:
    if (ctx->pc == 0x133DA4u) {
        ctx->pc = 0x133DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DA0u;
        // 0x133da4: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DA8u;
        goto label_133da8;
    }
    ctx->pc = 0x133DA0u;
    {
        const bool branch_taken_0x133da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DA0u;
        // 0x133da4: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133da0) {
            ctx->pc = 0x133DBCu;
            goto label_133dbc;
        }
    }
    ctx->pc = 0x133DA8u;
label_133da8:
    // 0x133da8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x133da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_133dac:
    // 0x133dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133db0:
    // 0x133db0: 0xc07fd18  jal         func_1FF460
label_133db4:
    if (ctx->pc == 0x133DB4u) {
        ctx->pc = 0x133DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DB0u;
        // 0x133db4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DB8u;
        goto label_133db8;
    }
    ctx->pc = 0x133DB0u;
    SET_GPR_U32(ctx, 31, 0x133DB8u);
    ctx->pc = 0x133DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DB0u;
    // 0x133db4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x133DB0u, 0x133DB8u)) {
        return;
    }
    ctx->pc = 0x133DB8u;
label_133db8:
    // 0x133db8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x133db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_133dbc:
    // 0x133dbc: 0x8c6284d8  lw          $v0, -0x7B28($v1)
    ctx->pc = 0x133dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935768)));
label_133dc0:
    // 0x133dc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x133dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_133dc4:
    // 0x133dc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_133dc8:
    if (ctx->pc == 0x133DC8u) {
        ctx->pc = 0x133DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DC4u;
        // 0x133dc8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DCCu;
        goto label_133dcc;
    }
    ctx->pc = 0x133DC4u;
    {
        const bool branch_taken_0x133dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DC4u;
        // 0x133dc8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133dc4) {
            ctx->pc = 0x133E0Cu;
            goto label_133e0c;
        }
    }
    ctx->pc = 0x133DCCu;
label_133dcc:
    // 0x133dcc: 0x265116c0  addiu       $s1, $s2, 0x16C0
    ctx->pc = 0x133dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
label_133dd0:
    // 0x133dd0: 0x8c438b2c  lw          $v1, -0x74D4($v0)
    ctx->pc = 0x133dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_133dd4:
    // 0x133dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133dd8:
    // 0x133dd8: 0xc0534c2  jal         func_14D308
label_133ddc:
    if (ctx->pc == 0x133DDCu) {
        ctx->pc = 0x133DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DD8u;
        // 0x133ddc: 0x8c70006c  lw          $s0, 0x6C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DE0u;
        goto label_133de0;
    }
    ctx->pc = 0x133DD8u;
    SET_GPR_U32(ctx, 31, 0x133DE0u);
    ctx->pc = 0x133DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DD8u;
    // 0x133ddc: 0x8c70006c  lw          $s0, 0x6C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D308u, 0x133DD8u, 0x133DE0u)) {
        return;
    }
    ctx->pc = 0x133DE0u;
label_133de0:
    // 0x133de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133de4:
    // 0x133de4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x133de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133de8:
    // 0x133de8: 0xc0534b0  jal         func_14D2C0
label_133dec:
    if (ctx->pc == 0x133DECu) {
        ctx->pc = 0x133DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DE8u;
        // 0x133dec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133DF0u;
        goto label_133df0;
    }
    ctx->pc = 0x133DE8u;
    SET_GPR_U32(ctx, 31, 0x133DF0u);
    ctx->pc = 0x133DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DE8u;
    // 0x133dec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D2C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D2C0u, 0x133DE8u, 0x133DF0u)) {
        return;
    }
    ctx->pc = 0x133DF0u;
label_133df0:
    // 0x133df0: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x133df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_133df4:
    // 0x133df4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x133df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_133df8:
    // 0x133df8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x133df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_133dfc:
    // 0x133dfc: 0x60f809  jalr        $v1
label_133e00:
    if (ctx->pc == 0x133E00u) {
        ctx->pc = 0x133E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DFCu;
        // 0x133e00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E04u;
        goto label_133e04;
    }
    ctx->pc = 0x133DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x133E04u);
        ctx->pc = 0x133E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DFCu;
        // 0x133e00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133DFCu, 0x133E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133E04u;
label_133e04:
    // 0x133e04: 0x10000011  b           . + 4 + (0x11 << 2)
label_133e08:
    if (ctx->pc == 0x133E08u) {
        ctx->pc = 0x133E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E04u;
        // 0x133e08: 0x8e421aa0  lw          $v0, 0x1AA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E0Cu;
        goto label_133e0c;
    }
    ctx->pc = 0x133E04u;
    {
        const bool branch_taken_0x133e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E04u;
        // 0x133e08: 0x8e421aa0  lw          $v0, 0x1AA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e04) {
            ctx->pc = 0x133E4Cu;
            goto label_133e4c;
        }
    }
    ctx->pc = 0x133E0Cu;
label_133e0c:
    // 0x133e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133e10:
    // 0x133e10: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x133e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_133e14:
    // 0x133e14: 0xc063d48  jal         func_18F520
label_133e18:
    if (ctx->pc == 0x133E18u) {
        ctx->pc = 0x133E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E14u;
        // 0x133e18: 0x265016c0  addiu       $s0, $s2, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E1Cu;
        goto label_133e1c;
    }
    ctx->pc = 0x133E14u;
    SET_GPR_U32(ctx, 31, 0x133E1Cu);
    ctx->pc = 0x133E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E14u;
    // 0x133e18: 0x265016c0  addiu       $s0, $s2, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F520u, 0x133E14u, 0x133E1Cu)) {
        return;
    }
    ctx->pc = 0x133E1Cu;
label_133e1c:
    // 0x133e1c: 0xc0534c2  jal         func_14D308
label_133e20:
    if (ctx->pc == 0x133E20u) {
        ctx->pc = 0x133E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E1Cu;
        // 0x133e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E24u;
        goto label_133e24;
    }
    ctx->pc = 0x133E1Cu;
    SET_GPR_U32(ctx, 31, 0x133E24u);
    ctx->pc = 0x133E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E1Cu;
    // 0x133e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D308u, 0x133E1Cu, 0x133E24u)) {
        return;
    }
    ctx->pc = 0x133E24u;
label_133e24:
    // 0x133e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133e28:
    // 0x133e28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x133e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133e2c:
    // 0x133e2c: 0xc0534b0  jal         func_14D2C0
label_133e30:
    if (ctx->pc == 0x133E30u) {
        ctx->pc = 0x133E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E2Cu;
        // 0x133e30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E34u;
        goto label_133e34;
    }
    ctx->pc = 0x133E2Cu;
    SET_GPR_U32(ctx, 31, 0x133E34u);
    ctx->pc = 0x133E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E2Cu;
    // 0x133e30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D2C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D2C0u, 0x133E2Cu, 0x133E34u)) {
        return;
    }
    ctx->pc = 0x133E34u;
label_133e34:
    // 0x133e34: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x133e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_133e38:
    // 0x133e38: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x133e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_133e3c:
    // 0x133e3c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x133e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_133e40:
    // 0x133e40: 0x60f809  jalr        $v1
label_133e44:
    if (ctx->pc == 0x133E44u) {
        ctx->pc = 0x133E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E40u;
        // 0x133e44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E48u;
        goto label_133e48;
    }
    ctx->pc = 0x133E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x133E48u);
        ctx->pc = 0x133E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E40u;
        // 0x133e44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133E40u, 0x133E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133E48u;
label_133e48:
    // 0x133e48: 0x8e421aa0  lw          $v0, 0x1AA0($s2)
    ctx->pc = 0x133e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6816)));
label_133e4c:
    // 0x133e4c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_133e50:
    if (ctx->pc == 0x133E50u) {
        ctx->pc = 0x133E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E4Cu;
        // 0x133e50: 0x8e421aa4  lw          $v0, 0x1AA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E54u;
        goto label_133e54;
    }
    ctx->pc = 0x133E4Cu;
    {
        const bool branch_taken_0x133e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133e4c) {
            ctx->pc = 0x133E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133E4Cu;
            // 0x133e50: 0x8e421aa4  lw          $v0, 0x1AA4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133E78u;
            goto label_133e78;
        }
    }
    ctx->pc = 0x133E54u;
label_133e54:
    // 0x133e54: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x133e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_133e58:
    // 0x133e58: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_133e5c:
    if (ctx->pc == 0x133E5Cu) {
        ctx->pc = 0x133E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E58u;
        // 0x133e5c: 0x8e421aa4  lw          $v0, 0x1AA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E60u;
        goto label_133e60;
    }
    ctx->pc = 0x133E58u;
    {
        const bool branch_taken_0x133e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e58) {
            ctx->pc = 0x133E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133E58u;
            // 0x133e5c: 0x8e421aa4  lw          $v0, 0x1AA4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133E78u;
            goto label_133e78;
        }
    }
    ctx->pc = 0x133E60u;
label_133e60:
    // 0x133e60: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x133e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_133e64:
    // 0x133e64: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x133e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_133e68:
    // 0x133e68: 0xc09d8e0  jal         func_276380
label_133e6c:
    if (ctx->pc == 0x133E6Cu) {
        ctx->pc = 0x133E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E68u;
        // 0x133e6c: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E70u;
        goto label_133e70;
    }
    ctx->pc = 0x133E68u;
    SET_GPR_U32(ctx, 31, 0x133E70u);
    ctx->pc = 0x133E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E68u;
    // 0x133e6c: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x133E68u, 0x133E70u)) {
        return;
    }
    ctx->pc = 0x133E70u;
label_133e70:
    // 0x133e70: 0xae421aa0  sw          $v0, 0x1AA0($s2)
    ctx->pc = 0x133e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6816), GPR_U32(ctx, 2));
label_133e74:
    // 0x133e74: 0x8e421aa4  lw          $v0, 0x1AA4($s2)
    ctx->pc = 0x133e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6820)));
label_133e78:
    // 0x133e78: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_133e7c:
    if (ctx->pc == 0x133E7Cu) {
        ctx->pc = 0x133E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E78u;
        // 0x133e7c: 0x8e440eac  lw          $a0, 0xEAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E80u;
        goto label_133e80;
    }
    ctx->pc = 0x133E78u;
    {
        const bool branch_taken_0x133e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133e78) {
            ctx->pc = 0x133E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133E78u;
            // 0x133e7c: 0x8e440eac  lw          $a0, 0xEAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133EA4u;
            goto label_133ea4;
        }
    }
    ctx->pc = 0x133E80u;
label_133e80:
    // 0x133e80: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x133e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_133e84:
    // 0x133e84: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_133e88:
    if (ctx->pc == 0x133E88u) {
        ctx->pc = 0x133E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E84u;
        // 0x133e88: 0x8e440eac  lw          $a0, 0xEAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E8Cu;
        goto label_133e8c;
    }
    ctx->pc = 0x133E84u;
    {
        const bool branch_taken_0x133e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e84) {
            ctx->pc = 0x133E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133E84u;
            // 0x133e88: 0x8e440eac  lw          $a0, 0xEAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133EA4u;
            goto label_133ea4;
        }
    }
    ctx->pc = 0x133E8Cu;
label_133e8c:
    // 0x133e8c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x133e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_133e90:
    // 0x133e90: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x133e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_133e94:
    // 0x133e94: 0xc09d8e0  jal         func_276380
label_133e98:
    if (ctx->pc == 0x133E98u) {
        ctx->pc = 0x133E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E94u;
        // 0x133e98: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133E9Cu;
        goto label_133e9c;
    }
    ctx->pc = 0x133E94u;
    SET_GPR_U32(ctx, 31, 0x133E9Cu);
    ctx->pc = 0x133E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E94u;
    // 0x133e98: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x133E94u, 0x133E9Cu)) {
        return;
    }
    ctx->pc = 0x133E9Cu;
label_133e9c:
    // 0x133e9c: 0xae421aa4  sw          $v0, 0x1AA4($s2)
    ctx->pc = 0x133e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6820), GPR_U32(ctx, 2));
label_133ea0:
    // 0x133ea0: 0x8e440eac  lw          $a0, 0xEAC($s2)
    ctx->pc = 0x133ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3756)));
label_133ea4:
    // 0x133ea4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_133ea8:
    if (ctx->pc == 0x133EA8u) {
        ctx->pc = 0x133EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EA4u;
        // 0x133ea8: 0x26500320  addiu       $s0, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EACu;
        goto label_133eac;
    }
    ctx->pc = 0x133EA4u;
    {
        const bool branch_taken_0x133ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x133EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EA4u;
        // 0x133ea8: 0x26500320  addiu       $s0, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ea4) {
            ctx->pc = 0x133EB4u;
            goto label_133eb4;
        }
    }
    ctx->pc = 0x133EACu;
label_133eac:
    // 0x133eac: 0xc059c66  jal         func_167198
label_133eb0:
    if (ctx->pc == 0x133EB0u) {
        ctx->pc = 0x133EB4u;
        goto label_133eb4;
    }
    ctx->pc = 0x133EACu;
    SET_GPR_U32(ctx, 31, 0x133EB4u);
    ctx->pc = 0x167198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x167198u, 0x133EACu, 0x133EB4u)) {
        return;
    }
    ctx->pc = 0x133EB4u;
label_133eb4:
    // 0x133eb4: 0x264515d8  addiu       $a1, $s2, 0x15D8
    ctx->pc = 0x133eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5592));
label_133eb8:
    // 0x133eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133ebc:
    // 0x133ebc: 0xc067fca  jal         func_19FF28
label_133ec0:
    if (ctx->pc == 0x133EC0u) {
        ctx->pc = 0x133EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EBCu;
        // 0x133ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EC4u;
        goto label_133ec4;
    }
    ctx->pc = 0x133EBCu;
    SET_GPR_U32(ctx, 31, 0x133EC4u);
    ctx->pc = 0x133EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EBCu;
    // 0x133ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x133EBCu, 0x133EC4u)) {
        return;
    }
    ctx->pc = 0x133EC4u;
label_133ec4:
    // 0x133ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133ec8:
    // 0x133ec8: 0x264515d0  addiu       $a1, $s2, 0x15D0
    ctx->pc = 0x133ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
label_133ecc:
    // 0x133ecc: 0xc067fca  jal         func_19FF28
label_133ed0:
    if (ctx->pc == 0x133ED0u) {
        ctx->pc = 0x133ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133ECCu;
        // 0x133ed0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133ED4u;
        goto label_133ed4;
    }
    ctx->pc = 0x133ECCu;
    SET_GPR_U32(ctx, 31, 0x133ED4u);
    ctx->pc = 0x133ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133ECCu;
    // 0x133ed0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x133ECCu, 0x133ED4u)) {
        return;
    }
    ctx->pc = 0x133ED4u;
label_133ed4:
    // 0x133ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133ed8:
    // 0x133ed8: 0x264515e8  addiu       $a1, $s2, 0x15E8
    ctx->pc = 0x133ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5608));
label_133edc:
    // 0x133edc: 0xc067fca  jal         func_19FF28
label_133ee0:
    if (ctx->pc == 0x133EE0u) {
        ctx->pc = 0x133EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EDCu;
        // 0x133ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133EE4u;
        goto label_133ee4;
    }
    ctx->pc = 0x133EDCu;
    SET_GPR_U32(ctx, 31, 0x133EE4u);
    ctx->pc = 0x133EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EDCu;
    // 0x133ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x133EDCu, 0x133EE4u)) {
        return;
    }
    ctx->pc = 0x133EE4u;
label_133ee4:
    // 0x133ee4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x133ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_133ee8:
    // 0x133ee8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x133ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_133eec:
    // 0x133eec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x133eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_133ef0:
    // 0x133ef0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x133ef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_133ef4:
    // 0x133ef4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x133ef4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_133ef8:
    // 0x133ef8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x133ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_133efc:
    // 0x133efc: 0x3e00008  jr          $ra
label_133f00:
    if (ctx->pc == 0x133F00u) {
        ctx->pc = 0x133F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EFCu;
        // 0x133f00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133F04u;
        goto label_133f04;
    }
    ctx->pc = 0x133EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EFCu;
        // 0x133f00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133F04u;
label_133f04:
    // 0x133f04: 0x0  nop
    ctx->pc = 0x133f04u;
    // NOP
    ctx->pc = 0x133f08u;
}
