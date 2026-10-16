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

// Function: sub_00173D68
// Address: 0x173d68 - 0x173fb0
void sub_00173D68_0x173d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173D68_0x173d68");
#endif

    switch (ctx->pc) {
        case 0x173d68u: goto label_173d68;
        case 0x173d6cu: goto label_173d6c;
        case 0x173d70u: goto label_173d70;
        case 0x173d74u: goto label_173d74;
        case 0x173d78u: goto label_173d78;
        case 0x173d7cu: goto label_173d7c;
        case 0x173d80u: goto label_173d80;
        case 0x173d84u: goto label_173d84;
        case 0x173d88u: goto label_173d88;
        case 0x173d8cu: goto label_173d8c;
        case 0x173d90u: goto label_173d90;
        case 0x173d94u: goto label_173d94;
        case 0x173d98u: goto label_173d98;
        case 0x173d9cu: goto label_173d9c;
        case 0x173da0u: goto label_173da0;
        case 0x173da4u: goto label_173da4;
        case 0x173da8u: goto label_173da8;
        case 0x173dacu: goto label_173dac;
        case 0x173db0u: goto label_173db0;
        case 0x173db4u: goto label_173db4;
        case 0x173db8u: goto label_173db8;
        case 0x173dbcu: goto label_173dbc;
        case 0x173dc0u: goto label_173dc0;
        case 0x173dc4u: goto label_173dc4;
        case 0x173dc8u: goto label_173dc8;
        case 0x173dccu: goto label_173dcc;
        case 0x173dd0u: goto label_173dd0;
        case 0x173dd4u: goto label_173dd4;
        case 0x173dd8u: goto label_173dd8;
        case 0x173ddcu: goto label_173ddc;
        case 0x173de0u: goto label_173de0;
        case 0x173de4u: goto label_173de4;
        case 0x173de8u: goto label_173de8;
        case 0x173decu: goto label_173dec;
        case 0x173df0u: goto label_173df0;
        case 0x173df4u: goto label_173df4;
        case 0x173df8u: goto label_173df8;
        case 0x173dfcu: goto label_173dfc;
        case 0x173e00u: goto label_173e00;
        case 0x173e04u: goto label_173e04;
        case 0x173e08u: goto label_173e08;
        case 0x173e0cu: goto label_173e0c;
        case 0x173e10u: goto label_173e10;
        case 0x173e14u: goto label_173e14;
        case 0x173e18u: goto label_173e18;
        case 0x173e1cu: goto label_173e1c;
        case 0x173e20u: goto label_173e20;
        case 0x173e24u: goto label_173e24;
        case 0x173e28u: goto label_173e28;
        case 0x173e2cu: goto label_173e2c;
        case 0x173e30u: goto label_173e30;
        case 0x173e34u: goto label_173e34;
        case 0x173e38u: goto label_173e38;
        case 0x173e3cu: goto label_173e3c;
        case 0x173e40u: goto label_173e40;
        case 0x173e44u: goto label_173e44;
        case 0x173e48u: goto label_173e48;
        case 0x173e4cu: goto label_173e4c;
        case 0x173e50u: goto label_173e50;
        case 0x173e54u: goto label_173e54;
        case 0x173e58u: goto label_173e58;
        case 0x173e5cu: goto label_173e5c;
        case 0x173e60u: goto label_173e60;
        case 0x173e64u: goto label_173e64;
        case 0x173e68u: goto label_173e68;
        case 0x173e6cu: goto label_173e6c;
        case 0x173e70u: goto label_173e70;
        case 0x173e74u: goto label_173e74;
        case 0x173e78u: goto label_173e78;
        case 0x173e7cu: goto label_173e7c;
        case 0x173e80u: goto label_173e80;
        case 0x173e84u: goto label_173e84;
        case 0x173e88u: goto label_173e88;
        case 0x173e8cu: goto label_173e8c;
        case 0x173e90u: goto label_173e90;
        case 0x173e94u: goto label_173e94;
        case 0x173e98u: goto label_173e98;
        case 0x173e9cu: goto label_173e9c;
        case 0x173ea0u: goto label_173ea0;
        case 0x173ea4u: goto label_173ea4;
        case 0x173ea8u: goto label_173ea8;
        case 0x173eacu: goto label_173eac;
        case 0x173eb0u: goto label_173eb0;
        case 0x173eb4u: goto label_173eb4;
        case 0x173eb8u: goto label_173eb8;
        case 0x173ebcu: goto label_173ebc;
        case 0x173ec0u: goto label_173ec0;
        case 0x173ec4u: goto label_173ec4;
        case 0x173ec8u: goto label_173ec8;
        case 0x173eccu: goto label_173ecc;
        case 0x173ed0u: goto label_173ed0;
        case 0x173ed4u: goto label_173ed4;
        case 0x173ed8u: goto label_173ed8;
        case 0x173edcu: goto label_173edc;
        case 0x173ee0u: goto label_173ee0;
        case 0x173ee4u: goto label_173ee4;
        case 0x173ee8u: goto label_173ee8;
        case 0x173eecu: goto label_173eec;
        case 0x173ef0u: goto label_173ef0;
        case 0x173ef4u: goto label_173ef4;
        case 0x173ef8u: goto label_173ef8;
        case 0x173efcu: goto label_173efc;
        case 0x173f00u: goto label_173f00;
        case 0x173f04u: goto label_173f04;
        case 0x173f08u: goto label_173f08;
        case 0x173f0cu: goto label_173f0c;
        case 0x173f10u: goto label_173f10;
        case 0x173f14u: goto label_173f14;
        case 0x173f18u: goto label_173f18;
        case 0x173f1cu: goto label_173f1c;
        case 0x173f20u: goto label_173f20;
        case 0x173f24u: goto label_173f24;
        case 0x173f28u: goto label_173f28;
        case 0x173f2cu: goto label_173f2c;
        case 0x173f30u: goto label_173f30;
        case 0x173f34u: goto label_173f34;
        case 0x173f38u: goto label_173f38;
        case 0x173f3cu: goto label_173f3c;
        case 0x173f40u: goto label_173f40;
        case 0x173f44u: goto label_173f44;
        case 0x173f48u: goto label_173f48;
        case 0x173f4cu: goto label_173f4c;
        case 0x173f50u: goto label_173f50;
        case 0x173f54u: goto label_173f54;
        case 0x173f58u: goto label_173f58;
        case 0x173f5cu: goto label_173f5c;
        case 0x173f60u: goto label_173f60;
        case 0x173f64u: goto label_173f64;
        case 0x173f68u: goto label_173f68;
        case 0x173f6cu: goto label_173f6c;
        case 0x173f70u: goto label_173f70;
        case 0x173f74u: goto label_173f74;
        case 0x173f78u: goto label_173f78;
        case 0x173f7cu: goto label_173f7c;
        case 0x173f80u: goto label_173f80;
        case 0x173f84u: goto label_173f84;
        case 0x173f88u: goto label_173f88;
        case 0x173f8cu: goto label_173f8c;
        case 0x173f90u: goto label_173f90;
        case 0x173f94u: goto label_173f94;
        case 0x173f98u: goto label_173f98;
        case 0x173f9cu: goto label_173f9c;
        case 0x173fa0u: goto label_173fa0;
        case 0x173fa4u: goto label_173fa4;
        case 0x173fa8u: goto label_173fa8;
        case 0x173facu: goto label_173fac;
        default: break;
    }

    ctx->pc = 0x173d68u;

label_173d68:
    // 0x173d68: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x173d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_173d6c:
    // 0x173d6c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x173d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_173d70:
    // 0x173d70: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x173d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_173d74:
    // 0x173d74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x173d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_173d78:
    // 0x173d78: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x173d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_173d7c:
    // 0x173d7c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x173d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_173d80:
    // 0x173d80: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x173d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_173d84:
    // 0x173d84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x173d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_173d88:
    // 0x173d88: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x173d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_173d8c:
    // 0x173d8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x173d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_173d90:
    // 0x173d90: 0xc05d79a  jal         func_175E68
label_173d94:
    if (ctx->pc == 0x173D94u) {
        ctx->pc = 0x173D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D90u;
        // 0x173d94: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D98u;
        goto label_173d98;
    }
    ctx->pc = 0x173D90u;
    SET_GPR_U32(ctx, 31, 0x173D98u);
    ctx->pc = 0x173D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173D90u;
    // 0x173d94: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175E68u, 0x173D90u, 0x173D98u)) {
        return;
    }
    ctx->pc = 0x173D98u;
label_173d98:
    // 0x173d98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x173d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_173d9c:
    // 0x173d9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_173da0:
    // 0x173da0: 0x8c46f7d0  lw          $a2, -0x830($v0)
    ctx->pc = 0x173da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965200)));
label_173da4:
    // 0x173da4: 0xc07f1c0  jal         func_1FC700
label_173da8:
    if (ctx->pc == 0x173DA8u) {
        ctx->pc = 0x173DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DA4u;
        // 0x173da8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DACu;
        goto label_173dac;
    }
    ctx->pc = 0x173DA4u;
    SET_GPR_U32(ctx, 31, 0x173DACu);
    ctx->pc = 0x173DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DA4u;
    // 0x173da8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x173DA4u, 0x173DACu)) {
        return;
    }
    ctx->pc = 0x173DACu;
label_173dac:
    // 0x173dac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x173dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173db0:
    // 0x173db0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_173db4:
    // 0x173db4: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_173db8:
    if (ctx->pc == 0x173DB8u) {
        ctx->pc = 0x173DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DB4u;
        // 0x173db8: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DBCu;
        goto label_173dbc;
    }
    ctx->pc = 0x173DB4u;
    {
        const bool branch_taken_0x173db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DB4u;
        // 0x173db8: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173db4) {
            ctx->pc = 0x173E8Cu;
            goto label_173e8c;
        }
    }
    ctx->pc = 0x173DBCu;
label_173dbc:
    // 0x173dbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x173dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173dc0:
    // 0x173dc0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x173dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_173dc4:
    // 0x173dc4: 0x0  nop
    ctx->pc = 0x173dc4u;
    // NOP
label_173dc8:
    // 0x173dc8: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x173dc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_173dcc:
    // 0x173dcc: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_173dd0:
    if (ctx->pc == 0x173DD0u) {
        ctx->pc = 0x173DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DCCu;
        // 0x173dd0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DD4u;
        goto label_173dd4;
    }
    ctx->pc = 0x173DCCu;
    {
        const bool branch_taken_0x173dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DCCu;
        // 0x173dd0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173dcc) {
            ctx->pc = 0x173E60u;
            goto label_173e60;
        }
    }
    ctx->pc = 0x173DD4u;
label_173dd4:
    // 0x173dd4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x173dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_173dd8:
    // 0x173dd8: 0x24425da0  addiu       $v0, $v0, 0x5DA0
    ctx->pc = 0x173dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23968));
label_173ddc:
    // 0x173ddc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_173de0:
    // 0x173de0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x173de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_173de4:
    // 0x173de4: 0x800008  jr          $a0
label_173de8:
    if (ctx->pc == 0x173DE8u) {
        ctx->pc = 0x173DECu;
        goto label_173dec;
    }
    ctx->pc = 0x173DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173DECu: goto label_173dec;
            case 0x173E04u: goto label_173e04;
            case 0x173E1Cu: goto label_173e1c;
            case 0x173E34u: goto label_173e34;
            case 0x173E4Cu: goto label_173e4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173DE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x173DECu;
label_173dec:
    // 0x173dec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x173decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173df0:
    // 0x173df0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173df4:
    // 0x173df4: 0xc081b56  jal         func_206D58
label_173df8:
    if (ctx->pc == 0x173DF8u) {
        ctx->pc = 0x173DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DF4u;
        // 0x173df8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DFCu;
        goto label_173dfc;
    }
    ctx->pc = 0x173DF4u;
    SET_GPR_U32(ctx, 31, 0x173DFCu);
    ctx->pc = 0x173DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DF4u;
    // 0x173df8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x173DF4u, 0x173DFCu)) {
        return;
    }
    ctx->pc = 0x173DFCu;
label_173dfc:
    // 0x173dfc: 0x10000018  b           . + 4 + (0x18 << 2)
label_173e00:
    if (ctx->pc == 0x173E00u) {
        ctx->pc = 0x173E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DFCu;
        // 0x173e00: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E04u;
        goto label_173e04;
    }
    ctx->pc = 0x173DFCu;
    {
        const bool branch_taken_0x173dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DFCu;
        // 0x173e00: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173dfc) {
            ctx->pc = 0x173E60u;
            goto label_173e60;
        }
    }
    ctx->pc = 0x173E04u;
label_173e04:
    // 0x173e04: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x173e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173e08:
    // 0x173e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173e0c:
    // 0x173e0c: 0xc081b56  jal         func_206D58
label_173e10:
    if (ctx->pc == 0x173E10u) {
        ctx->pc = 0x173E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E0Cu;
        // 0x173e10: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E14u;
        goto label_173e14;
    }
    ctx->pc = 0x173E0Cu;
    SET_GPR_U32(ctx, 31, 0x173E14u);
    ctx->pc = 0x173E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173E0Cu;
    // 0x173e10: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x173E0Cu, 0x173E14u)) {
        return;
    }
    ctx->pc = 0x173E14u;
label_173e14:
    // 0x173e14: 0x10000012  b           . + 4 + (0x12 << 2)
label_173e18:
    if (ctx->pc == 0x173E18u) {
        ctx->pc = 0x173E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E14u;
        // 0x173e18: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E1Cu;
        goto label_173e1c;
    }
    ctx->pc = 0x173E14u;
    {
        const bool branch_taken_0x173e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E14u;
        // 0x173e18: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e14) {
            ctx->pc = 0x173E60u;
            goto label_173e60;
        }
    }
    ctx->pc = 0x173E1Cu;
label_173e1c:
    // 0x173e1c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x173e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173e20:
    // 0x173e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173e24:
    // 0x173e24: 0xc081b56  jal         func_206D58
label_173e28:
    if (ctx->pc == 0x173E28u) {
        ctx->pc = 0x173E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E24u;
        // 0x173e28: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E2Cu;
        goto label_173e2c;
    }
    ctx->pc = 0x173E24u;
    SET_GPR_U32(ctx, 31, 0x173E2Cu);
    ctx->pc = 0x173E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173E24u;
    // 0x173e28: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x173E24u, 0x173E2Cu)) {
        return;
    }
    ctx->pc = 0x173E2Cu;
label_173e2c:
    // 0x173e2c: 0x1000000c  b           . + 4 + (0xC << 2)
label_173e30:
    if (ctx->pc == 0x173E30u) {
        ctx->pc = 0x173E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E2Cu;
        // 0x173e30: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E34u;
        goto label_173e34;
    }
    ctx->pc = 0x173E2Cu;
    {
        const bool branch_taken_0x173e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E2Cu;
        // 0x173e30: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e2c) {
            ctx->pc = 0x173E60u;
            goto label_173e60;
        }
    }
    ctx->pc = 0x173E34u;
label_173e34:
    // 0x173e34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x173e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173e38:
    // 0x173e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173e3c:
    // 0x173e3c: 0xc081b56  jal         func_206D58
label_173e40:
    if (ctx->pc == 0x173E40u) {
        ctx->pc = 0x173E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E3Cu;
        // 0x173e40: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E44u;
        goto label_173e44;
    }
    ctx->pc = 0x173E3Cu;
    SET_GPR_U32(ctx, 31, 0x173E44u);
    ctx->pc = 0x173E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173E3Cu;
    // 0x173e40: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x173E3Cu, 0x173E44u)) {
        return;
    }
    ctx->pc = 0x173E44u;
label_173e44:
    // 0x173e44: 0x10000006  b           . + 4 + (0x6 << 2)
label_173e48:
    if (ctx->pc == 0x173E48u) {
        ctx->pc = 0x173E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E44u;
        // 0x173e48: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E4Cu;
        goto label_173e4c;
    }
    ctx->pc = 0x173E44u;
    {
        const bool branch_taken_0x173e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E44u;
        // 0x173e48: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e44) {
            ctx->pc = 0x173E60u;
            goto label_173e60;
        }
    }
    ctx->pc = 0x173E4Cu;
label_173e4c:
    // 0x173e4c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x173e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173e50:
    // 0x173e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173e54:
    // 0x173e54: 0xc081b56  jal         func_206D58
label_173e58:
    if (ctx->pc == 0x173E58u) {
        ctx->pc = 0x173E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E54u;
        // 0x173e58: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E5Cu;
        goto label_173e5c;
    }
    ctx->pc = 0x173E54u;
    SET_GPR_U32(ctx, 31, 0x173E5Cu);
    ctx->pc = 0x173E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173E54u;
    // 0x173e58: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x173E54u, 0x173E5Cu)) {
        return;
    }
    ctx->pc = 0x173E5Cu;
label_173e5c:
    // 0x173e5c: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x173e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_173e60:
    // 0x173e60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x173e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173e64:
    // 0x173e64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_173e68:
    // 0x173e68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x173e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173e6c:
    // 0x173e6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_173e70:
    // 0x173e70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_173e74:
    // 0x173e74: 0xc07f0c8  jal         func_1FC320
label_173e78:
    if (ctx->pc == 0x173E78u) {
        ctx->pc = 0x173E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E74u;
        // 0x173e78: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E7Cu;
        goto label_173e7c;
    }
    ctx->pc = 0x173E74u;
    SET_GPR_U32(ctx, 31, 0x173E7Cu);
    ctx->pc = 0x173E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173E74u;
    // 0x173e78: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x173E74u, 0x173E7Cu)) {
        return;
    }
    ctx->pc = 0x173E7Cu;
label_173e7c:
    // 0x173e7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x173e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173e80:
    // 0x173e80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_173e84:
    // 0x173e84: 0x5460ffd0  bnel        $v1, $zero, . + 4 + (-0x30 << 2)
label_173e88:
    if (ctx->pc == 0x173E88u) {
        ctx->pc = 0x173E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E84u;
        // 0x173e88: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E8Cu;
        goto label_173e8c;
    }
    ctx->pc = 0x173E84u;
    {
        const bool branch_taken_0x173e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e84) {
            ctx->pc = 0x173E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173E84u;
            // 0x173e88: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173dc8;
        }
    }
    ctx->pc = 0x173E8Cu;
label_173e8c:
    // 0x173e8c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x173e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_173e90:
    // 0x173e90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173e94:
    // 0x173e94: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x173e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
label_173e98:
    // 0x173e98: 0xc07f1c0  jal         func_1FC700
label_173e9c:
    if (ctx->pc == 0x173E9Cu) {
        ctx->pc = 0x173E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E98u;
        // 0x173e9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173EA0u;
        goto label_173ea0;
    }
    ctx->pc = 0x173E98u;
    SET_GPR_U32(ctx, 31, 0x173EA0u);
    ctx->pc = 0x173E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173E98u;
    // 0x173e9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x173E98u, 0x173EA0u)) {
        return;
    }
    ctx->pc = 0x173EA0u;
label_173ea0:
    // 0x173ea0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x173ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_173ea4:
    // 0x173ea4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_173ea8:
    // 0x173ea8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_173eac:
    if (ctx->pc == 0x173EACu) {
        ctx->pc = 0x173EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EA8u;
        // 0x173eac: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173EB0u;
        goto label_173eb0;
    }
    ctx->pc = 0x173EA8u;
    {
        const bool branch_taken_0x173ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EA8u;
        // 0x173eac: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ea8) {
            ctx->pc = 0x173F84u;
            goto label_173f84;
        }
    }
    ctx->pc = 0x173EB0u;
label_173eb0:
    // 0x173eb0: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x173eb0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
label_173eb4:
    // 0x173eb4: 0x2455108c  addiu       $s5, $v0, 0x108C
    ctx->pc = 0x173eb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_173eb8:
    // 0x173eb8: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x173eb8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
label_173ebc:
    // 0x173ebc: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x173ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
label_173ec0:
    // 0x173ec0: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x173ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
label_173ec4:
    // 0x173ec4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x173ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_173ec8:
    // 0x173ec8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x173ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_173ecc:
    // 0x173ecc: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_173ed0:
    if (ctx->pc == 0x173ED0u) {
        ctx->pc = 0x173ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ECCu;
        // 0x173ed0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173ED4u;
        goto label_173ed4;
    }
    ctx->pc = 0x173ECCu;
    {
        const bool branch_taken_0x173ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ECCu;
        // 0x173ed0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ecc) {
            ctx->pc = 0x173F5Cu;
            goto label_173f5c;
        }
    }
    ctx->pc = 0x173ED4u;
label_173ed4:
    // 0x173ed4: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x173ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_173ed8:
    // 0x173ed8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x173ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_173edc:
    // 0x173edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173ee0:
    // 0x173ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173ee4:
    // 0x173ee4: 0xc08063c  jal         func_2018F0
label_173ee8:
    if (ctx->pc == 0x173EE8u) {
        ctx->pc = 0x173EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EE4u;
        // 0x173ee8: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173EECu;
        goto label_173eec;
    }
    ctx->pc = 0x173EE4u;
    SET_GPR_U32(ctx, 31, 0x173EECu);
    ctx->pc = 0x173EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173EE4u;
    // 0x173ee8: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x173EE4u, 0x173EECu)) {
        return;
    }
    ctx->pc = 0x173EECu;
label_173eec:
    // 0x173eec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_173ef0:
    if (ctx->pc == 0x173EF0u) {
        ctx->pc = 0x173EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EECu;
        // 0x173ef0: 0x26c45d68  addiu       $a0, $s6, 0x5D68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 23912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173EF4u;
        goto label_173ef4;
    }
    ctx->pc = 0x173EECu;
    {
        const bool branch_taken_0x173eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EECu;
        // 0x173ef0: 0x26c45d68  addiu       $a0, $s6, 0x5D68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 23912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173eec) {
            ctx->pc = 0x173F58u;
            goto label_173f58;
        }
    }
    ctx->pc = 0x173EF4u;
label_173ef4:
    // 0x173ef4: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x173ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_173ef8:
    // 0x173ef8: 0x40f809  jalr        $v0
label_173efc:
    if (ctx->pc == 0x173EFCu) {
        ctx->pc = 0x173EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EF8u;
        // 0x173efc: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F00u;
        goto label_173f00;
    }
    ctx->pc = 0x173EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173F00u);
        ctx->pc = 0x173EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EF8u;
        // 0x173efc: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173EF8u, 0x173F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173F00u;
label_173f00:
    // 0x173f00: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_173f04:
    if (ctx->pc == 0x173F04u) {
        ctx->pc = 0x173F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F00u;
        // 0x173f04: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F08u;
        goto label_173f08;
    }
    ctx->pc = 0x173F00u;
    {
        const bool branch_taken_0x173f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F00u;
        // 0x173f04: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f00) {
            ctx->pc = 0x173F5Cu;
            goto label_173f5c;
        }
    }
    ctx->pc = 0x173F08u;
label_173f08:
    // 0x173f08: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x173f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_173f0c:
    // 0x173f0c: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_173f10:
    if (ctx->pc == 0x173F10u) {
        ctx->pc = 0x173F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F0Cu;
        // 0x173f10: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F14u;
        goto label_173f14;
    }
    ctx->pc = 0x173F0Cu;
    {
        const bool branch_taken_0x173f0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F0Cu;
        // 0x173f10: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f0c) {
            ctx->pc = 0x173F60u;
            goto label_173f60;
        }
    }
    ctx->pc = 0x173F14u;
label_173f14:
    // 0x173f14: 0xc065c68  jal         func_1971A0
label_173f18:
    if (ctx->pc == 0x173F18u) {
        ctx->pc = 0x173F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F14u;
        // 0x173f18: 0x26845d78  addiu       $a0, $s4, 0x5D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 23928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F1Cu;
        goto label_173f1c;
    }
    ctx->pc = 0x173F14u;
    SET_GPR_U32(ctx, 31, 0x173F1Cu);
    ctx->pc = 0x173F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F14u;
    // 0x173f18: 0x26845d78  addiu       $a0, $s4, 0x5D78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 23928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x173F14u, 0x173F1Cu)) {
        return;
    }
    ctx->pc = 0x173F1Cu;
label_173f1c:
    // 0x173f1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_173f20:
    if (ctx->pc == 0x173F20u) {
        ctx->pc = 0x173F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F1Cu;
        // 0x173f20: 0x8e648668  lw          $a0, -0x7998($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F24u;
        goto label_173f24;
    }
    ctx->pc = 0x173F1Cu;
    {
        const bool branch_taken_0x173f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F1Cu;
        // 0x173f20: 0x8e648668  lw          $a0, -0x7998($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f1c) {
            ctx->pc = 0x173F58u;
            goto label_173f58;
        }
    }
    ctx->pc = 0x173F24u;
label_173f24:
    // 0x173f24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173f28:
    // 0x173f28: 0x26465d90  addiu       $a2, $s2, 0x5D90
    ctx->pc = 0x173f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 23952));
label_173f2c:
    // 0x173f2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173f30:
    // 0x173f30: 0xc058d5a  jal         func_163568
label_173f34:
    if (ctx->pc == 0x173F34u) {
        ctx->pc = 0x173F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F30u;
        // 0x173f34: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F38u;
        goto label_173f38;
    }
    ctx->pc = 0x173F30u;
    SET_GPR_U32(ctx, 31, 0x173F38u);
    ctx->pc = 0x173F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F30u;
    // 0x173f34: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163568u, 0x173F30u, 0x173F38u)) {
        return;
    }
    ctx->pc = 0x173F38u;
label_173f38:
    // 0x173f38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x173f38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173f3c:
    // 0x173f3c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_173f40:
    if (ctx->pc == 0x173F40u) {
        ctx->pc = 0x173F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F3Cu;
        // 0x173f40: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F44u;
        goto label_173f44;
    }
    ctx->pc = 0x173F3Cu;
    {
        const bool branch_taken_0x173f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f3c) {
            ctx->pc = 0x173F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F3Cu;
            // 0x173f40: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F5Cu;
            goto label_173f5c;
        }
    }
    ctx->pc = 0x173F44u;
label_173f44:
    // 0x173f44: 0x8c620660  lw          $v0, 0x660($v1)
    ctx->pc = 0x173f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1632)));
label_173f48:
    // 0x173f48: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_173f4c:
    if (ctx->pc == 0x173F4Cu) {
        ctx->pc = 0x173F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F48u;
        // 0x173f4c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F50u;
        goto label_173f50;
    }
    ctx->pc = 0x173F48u;
    {
        const bool branch_taken_0x173f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f48) {
            ctx->pc = 0x173F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F48u;
            // 0x173f4c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F5Cu;
            goto label_173f5c;
        }
    }
    ctx->pc = 0x173F50u;
label_173f50:
    // 0x173f50: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x173f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_173f54:
    // 0x173f54: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x173f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_173f58:
    // 0x173f58: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x173f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_173f5c:
    // 0x173f5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x173f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_173f60:
    // 0x173f60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x173f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173f64:
    // 0x173f64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_173f68:
    // 0x173f68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_173f6c:
    // 0x173f6c: 0xc07f0c8  jal         func_1FC320
label_173f70:
    if (ctx->pc == 0x173F70u) {
        ctx->pc = 0x173F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F6Cu;
        // 0x173f70: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F74u;
        goto label_173f74;
    }
    ctx->pc = 0x173F6Cu;
    SET_GPR_U32(ctx, 31, 0x173F74u);
    ctx->pc = 0x173F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F6Cu;
    // 0x173f70: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x173F6Cu, 0x173F74u)) {
        return;
    }
    ctx->pc = 0x173F74u;
label_173f74:
    // 0x173f74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x173f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_173f78:
    // 0x173f78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_173f7c:
    // 0x173f7c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_173f80:
    if (ctx->pc == 0x173F80u) {
        ctx->pc = 0x173F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F7Cu;
        // 0x173f80: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F84u;
        goto label_173f84;
    }
    ctx->pc = 0x173F7Cu;
    {
        const bool branch_taken_0x173f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F7Cu;
        // 0x173f80: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f7c) {
            ctx->pc = 0x173EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173ec8;
        }
    }
    ctx->pc = 0x173F84u;
label_173f84:
    // 0x173f84: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x173f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_173f88:
    // 0x173f88: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x173f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_173f8c:
    // 0x173f8c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x173f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_173f90:
    // 0x173f90: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x173f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_173f94:
    // 0x173f94: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x173f94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_173f98:
    // 0x173f98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x173f98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_173f9c:
    // 0x173f9c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x173f9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_173fa0:
    // 0x173fa0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x173fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_173fa4:
    // 0x173fa4: 0x3e00008  jr          $ra
label_173fa8:
    if (ctx->pc == 0x173FA8u) {
        ctx->pc = 0x173FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FA4u;
        // 0x173fa8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FACu;
        goto label_173fac;
    }
    ctx->pc = 0x173FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FA4u;
        // 0x173fa8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173FACu;
label_173fac:
    // 0x173fac: 0x0  nop
    ctx->pc = 0x173facu;
    // NOP
    ctx->pc = 0x173fb0u;
}
