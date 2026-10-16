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

// Function: sub_00229CF8
// Address: 0x229cf8 - 0x229f70
void sub_00229CF8_0x229cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229CF8_0x229cf8");
#endif

    switch (ctx->pc) {
        case 0x229cf8u: goto label_229cf8;
        case 0x229cfcu: goto label_229cfc;
        case 0x229d00u: goto label_229d00;
        case 0x229d04u: goto label_229d04;
        case 0x229d08u: goto label_229d08;
        case 0x229d0cu: goto label_229d0c;
        case 0x229d10u: goto label_229d10;
        case 0x229d14u: goto label_229d14;
        case 0x229d18u: goto label_229d18;
        case 0x229d1cu: goto label_229d1c;
        case 0x229d20u: goto label_229d20;
        case 0x229d24u: goto label_229d24;
        case 0x229d28u: goto label_229d28;
        case 0x229d2cu: goto label_229d2c;
        case 0x229d30u: goto label_229d30;
        case 0x229d34u: goto label_229d34;
        case 0x229d38u: goto label_229d38;
        case 0x229d3cu: goto label_229d3c;
        case 0x229d40u: goto label_229d40;
        case 0x229d44u: goto label_229d44;
        case 0x229d48u: goto label_229d48;
        case 0x229d4cu: goto label_229d4c;
        case 0x229d50u: goto label_229d50;
        case 0x229d54u: goto label_229d54;
        case 0x229d58u: goto label_229d58;
        case 0x229d5cu: goto label_229d5c;
        case 0x229d60u: goto label_229d60;
        case 0x229d64u: goto label_229d64;
        case 0x229d68u: goto label_229d68;
        case 0x229d6cu: goto label_229d6c;
        case 0x229d70u: goto label_229d70;
        case 0x229d74u: goto label_229d74;
        case 0x229d78u: goto label_229d78;
        case 0x229d7cu: goto label_229d7c;
        case 0x229d80u: goto label_229d80;
        case 0x229d84u: goto label_229d84;
        case 0x229d88u: goto label_229d88;
        case 0x229d8cu: goto label_229d8c;
        case 0x229d90u: goto label_229d90;
        case 0x229d94u: goto label_229d94;
        case 0x229d98u: goto label_229d98;
        case 0x229d9cu: goto label_229d9c;
        case 0x229da0u: goto label_229da0;
        case 0x229da4u: goto label_229da4;
        case 0x229da8u: goto label_229da8;
        case 0x229dacu: goto label_229dac;
        case 0x229db0u: goto label_229db0;
        case 0x229db4u: goto label_229db4;
        case 0x229db8u: goto label_229db8;
        case 0x229dbcu: goto label_229dbc;
        case 0x229dc0u: goto label_229dc0;
        case 0x229dc4u: goto label_229dc4;
        case 0x229dc8u: goto label_229dc8;
        case 0x229dccu: goto label_229dcc;
        case 0x229dd0u: goto label_229dd0;
        case 0x229dd4u: goto label_229dd4;
        case 0x229dd8u: goto label_229dd8;
        case 0x229ddcu: goto label_229ddc;
        case 0x229de0u: goto label_229de0;
        case 0x229de4u: goto label_229de4;
        case 0x229de8u: goto label_229de8;
        case 0x229decu: goto label_229dec;
        case 0x229df0u: goto label_229df0;
        case 0x229df4u: goto label_229df4;
        case 0x229df8u: goto label_229df8;
        case 0x229dfcu: goto label_229dfc;
        case 0x229e00u: goto label_229e00;
        case 0x229e04u: goto label_229e04;
        case 0x229e08u: goto label_229e08;
        case 0x229e0cu: goto label_229e0c;
        case 0x229e10u: goto label_229e10;
        case 0x229e14u: goto label_229e14;
        case 0x229e18u: goto label_229e18;
        case 0x229e1cu: goto label_229e1c;
        case 0x229e20u: goto label_229e20;
        case 0x229e24u: goto label_229e24;
        case 0x229e28u: goto label_229e28;
        case 0x229e2cu: goto label_229e2c;
        case 0x229e30u: goto label_229e30;
        case 0x229e34u: goto label_229e34;
        case 0x229e38u: goto label_229e38;
        case 0x229e3cu: goto label_229e3c;
        case 0x229e40u: goto label_229e40;
        case 0x229e44u: goto label_229e44;
        case 0x229e48u: goto label_229e48;
        case 0x229e4cu: goto label_229e4c;
        case 0x229e50u: goto label_229e50;
        case 0x229e54u: goto label_229e54;
        case 0x229e58u: goto label_229e58;
        case 0x229e5cu: goto label_229e5c;
        case 0x229e60u: goto label_229e60;
        case 0x229e64u: goto label_229e64;
        case 0x229e68u: goto label_229e68;
        case 0x229e6cu: goto label_229e6c;
        case 0x229e70u: goto label_229e70;
        case 0x229e74u: goto label_229e74;
        case 0x229e78u: goto label_229e78;
        case 0x229e7cu: goto label_229e7c;
        case 0x229e80u: goto label_229e80;
        case 0x229e84u: goto label_229e84;
        case 0x229e88u: goto label_229e88;
        case 0x229e8cu: goto label_229e8c;
        case 0x229e90u: goto label_229e90;
        case 0x229e94u: goto label_229e94;
        case 0x229e98u: goto label_229e98;
        case 0x229e9cu: goto label_229e9c;
        case 0x229ea0u: goto label_229ea0;
        case 0x229ea4u: goto label_229ea4;
        case 0x229ea8u: goto label_229ea8;
        case 0x229eacu: goto label_229eac;
        case 0x229eb0u: goto label_229eb0;
        case 0x229eb4u: goto label_229eb4;
        case 0x229eb8u: goto label_229eb8;
        case 0x229ebcu: goto label_229ebc;
        case 0x229ec0u: goto label_229ec0;
        case 0x229ec4u: goto label_229ec4;
        case 0x229ec8u: goto label_229ec8;
        case 0x229eccu: goto label_229ecc;
        case 0x229ed0u: goto label_229ed0;
        case 0x229ed4u: goto label_229ed4;
        case 0x229ed8u: goto label_229ed8;
        case 0x229edcu: goto label_229edc;
        case 0x229ee0u: goto label_229ee0;
        case 0x229ee4u: goto label_229ee4;
        case 0x229ee8u: goto label_229ee8;
        case 0x229eecu: goto label_229eec;
        case 0x229ef0u: goto label_229ef0;
        case 0x229ef4u: goto label_229ef4;
        case 0x229ef8u: goto label_229ef8;
        case 0x229efcu: goto label_229efc;
        case 0x229f00u: goto label_229f00;
        case 0x229f04u: goto label_229f04;
        case 0x229f08u: goto label_229f08;
        case 0x229f0cu: goto label_229f0c;
        case 0x229f10u: goto label_229f10;
        case 0x229f14u: goto label_229f14;
        case 0x229f18u: goto label_229f18;
        case 0x229f1cu: goto label_229f1c;
        case 0x229f20u: goto label_229f20;
        case 0x229f24u: goto label_229f24;
        case 0x229f28u: goto label_229f28;
        case 0x229f2cu: goto label_229f2c;
        case 0x229f30u: goto label_229f30;
        case 0x229f34u: goto label_229f34;
        case 0x229f38u: goto label_229f38;
        case 0x229f3cu: goto label_229f3c;
        case 0x229f40u: goto label_229f40;
        case 0x229f44u: goto label_229f44;
        case 0x229f48u: goto label_229f48;
        case 0x229f4cu: goto label_229f4c;
        case 0x229f50u: goto label_229f50;
        case 0x229f54u: goto label_229f54;
        case 0x229f58u: goto label_229f58;
        case 0x229f5cu: goto label_229f5c;
        case 0x229f60u: goto label_229f60;
        case 0x229f64u: goto label_229f64;
        case 0x229f68u: goto label_229f68;
        case 0x229f6cu: goto label_229f6c;
        default: break;
    }

    ctx->pc = 0x229cf8u;

label_229cf8:
    // 0x229cf8: 0x27bdf970  addiu       $sp, $sp, -0x690
    ctx->pc = 0x229cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965616));
label_229cfc:
    // 0x229cfc: 0x7fb20660  sq          $s2, 0x660($sp)
    ctx->pc = 0x229cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 18));
label_229d00:
    // 0x229d00: 0x7fb30650  sq          $s3, 0x650($sp)
    ctx->pc = 0x229d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 19));
label_229d04:
    // 0x229d04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x229d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_229d08:
    // 0x229d08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x229d08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229d0c:
    // 0x229d0c: 0x7fb00680  sq          $s0, 0x680($sp)
    ctx->pc = 0x229d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 16));
label_229d10:
    // 0x229d10: 0x7fb10670  sq          $s1, 0x670($sp)
    ctx->pc = 0x229d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 17));
label_229d14:
    // 0x229d14: 0x7fb40640  sq          $s4, 0x640($sp)
    ctx->pc = 0x229d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1600), GPR_VEC(ctx, 20));
label_229d18:
    // 0x229d18: 0xffbf0630  sd          $ra, 0x630($sp)
    ctx->pc = 0x229d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 31));
label_229d1c:
    // 0x229d1c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x229d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_229d20:
    // 0x229d20: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x229d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_229d24:
    // 0x229d24: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x229d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_229d28:
    // 0x229d28: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x229d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_229d2c:
    // 0x229d2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x229d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229d30:
    // 0x229d30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_229d34:
    // 0x229d34: 0x40f809  jalr        $v0
label_229d38:
    if (ctx->pc == 0x229D38u) {
        ctx->pc = 0x229D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D34u;
        // 0x229d38: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D3Cu;
        goto label_229d3c;
    }
    ctx->pc = 0x229D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229D3Cu);
        ctx->pc = 0x229D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D34u;
        // 0x229d38: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229D34u, 0x229D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229D3Cu;
label_229d3c:
    // 0x229d3c: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x229d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_229d40:
    // 0x229d40: 0x40f809  jalr        $v0
label_229d44:
    if (ctx->pc == 0x229D44u) {
        ctx->pc = 0x229D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D40u;
        // 0x229d44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D48u;
        goto label_229d48;
    }
    ctx->pc = 0x229D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229D48u);
        ctx->pc = 0x229D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D40u;
        // 0x229d44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229D40u, 0x229D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229D48u;
label_229d48:
    // 0x229d48: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x229d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_229d4c:
    // 0x229d4c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_229d50:
    if (ctx->pc == 0x229D50u) {
        ctx->pc = 0x229D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D4Cu;
        // 0x229d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D54u;
        goto label_229d54;
    }
    ctx->pc = 0x229D4Cu;
    {
        const bool branch_taken_0x229d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D4Cu;
        // 0x229d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d4c) {
            ctx->pc = 0x229D88u;
            goto label_229d88;
        }
    }
    ctx->pc = 0x229D54u;
label_229d54:
    // 0x229d54: 0x826800ff  lb          $t0, 0xFF($s3)
    ctx->pc = 0x229d54u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 255)));
label_229d58:
    // 0x229d58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x229d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_229d5c:
    // 0x229d5c: 0xafa20600  sw          $v0, 0x600($sp)
    ctx->pc = 0x229d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1536), GPR_U32(ctx, 2));
label_229d60:
    // 0x229d60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_229d64:
    // 0x229d64: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x229d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_229d68:
    // 0x229d68: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x229d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_229d6c:
    // 0x229d6c: 0xc092848  jal         func_24A120
label_229d70:
    if (ctx->pc == 0x229D70u) {
        ctx->pc = 0x229D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D6Cu;
        // 0x229d70: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D74u;
        goto label_229d74;
    }
    ctx->pc = 0x229D6Cu;
    SET_GPR_U32(ctx, 31, 0x229D74u);
    ctx->pc = 0x229D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D6Cu;
    // 0x229d70: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x229D6Cu, 0x229D74u)) {
        return;
    }
    ctx->pc = 0x229D74u;
label_229d74:
    // 0x229d74: 0xafa20604  sw          $v0, 0x604($sp)
    ctx->pc = 0x229d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1540), GPR_U32(ctx, 2));
label_229d78:
    // 0x229d78: 0xc09281a  jal         func_24A068
label_229d7c:
    if (ctx->pc == 0x229D7Cu) {
        ctx->pc = 0x229D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D78u;
        // 0x229d7c: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D80u;
        goto label_229d80;
    }
    ctx->pc = 0x229D78u;
    SET_GPR_U32(ctx, 31, 0x229D80u);
    ctx->pc = 0x229D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D78u;
    // 0x229d7c: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x229D78u, 0x229D80u)) {
        return;
    }
    ctx->pc = 0x229D80u;
label_229d80:
    // 0x229d80: 0xa3a004ff  sb          $zero, 0x4FF($sp)
    ctx->pc = 0x229d80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1279), (uint8_t)GPR_U32(ctx, 0));
label_229d84:
    // 0x229d84: 0x0  nop
    ctx->pc = 0x229d84u;
    // NOP
label_229d88:
    // 0x229d88: 0xa3a00500  sb          $zero, 0x500($sp)
    ctx->pc = 0x229d88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1280), (uint8_t)GPR_U32(ctx, 0));
label_229d8c:
    // 0x229d8c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_229d90:
    if (ctx->pc == 0x229D90u) {
        ctx->pc = 0x229D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D8Cu;
        // 0x229d90: 0x27b00500  addiu       $s0, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D94u;
        goto label_229d94;
    }
    ctx->pc = 0x229D8Cu;
    {
        const bool branch_taken_0x229d8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D8Cu;
        // 0x229d90: 0x27b00500  addiu       $s0, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d8c) {
            ctx->pc = 0x229DF8u;
            goto label_229df8;
        }
    }
    ctx->pc = 0x229D94u;
label_229d94:
    // 0x229d94: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x229d94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_229d98:
    // 0x229d98: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_229d9c:
    if (ctx->pc == 0x229D9Cu) {
        ctx->pc = 0x229D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D98u;
        // 0x229d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DA0u;
        goto label_229da0;
    }
    ctx->pc = 0x229D98u;
    {
        const bool branch_taken_0x229d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D98u;
        // 0x229d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d98) {
            ctx->pc = 0x229DF8u;
            goto label_229df8;
        }
    }
    ctx->pc = 0x229DA0u;
label_229da0:
    // 0x229da0: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x229da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_229da4:
    // 0x229da4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_229da8:
    // 0x229da8: 0x40f809  jalr        $v0
label_229dac:
    if (ctx->pc == 0x229DACu) {
        ctx->pc = 0x229DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DA8u;
        // 0x229dac: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DB0u;
        goto label_229db0;
    }
    ctx->pc = 0x229DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229DB0u);
        ctx->pc = 0x229DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DA8u;
        // 0x229dac: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229DA8u, 0x229DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229DB0u;
label_229db0:
    // 0x229db0: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x229db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_229db4:
    // 0x229db4: 0x40f809  jalr        $v0
label_229db8:
    if (ctx->pc == 0x229DB8u) {
        ctx->pc = 0x229DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DB4u;
        // 0x229db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DBCu;
        goto label_229dbc;
    }
    ctx->pc = 0x229DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229DBCu);
        ctx->pc = 0x229DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DB4u;
        // 0x229db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229DB4u, 0x229DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229DBCu;
label_229dbc:
    // 0x229dbc: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x229dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_229dc0:
    // 0x229dc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_229dc4:
    if (ctx->pc == 0x229DC4u) {
        ctx->pc = 0x229DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DC0u;
        // 0x229dc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DC8u;
        goto label_229dc8;
    }
    ctx->pc = 0x229DC0u;
    {
        const bool branch_taken_0x229dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DC0u;
        // 0x229dc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229dc0) {
            ctx->pc = 0x229DF8u;
            goto label_229df8;
        }
    }
    ctx->pc = 0x229DC8u;
label_229dc8:
    // 0x229dc8: 0x824800ff  lb          $t0, 0xFF($s2)
    ctx->pc = 0x229dc8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 255)));
label_229dcc:
    // 0x229dcc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x229dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_229dd0:
    // 0x229dd0: 0xafa20600  sw          $v0, 0x600($sp)
    ctx->pc = 0x229dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1536), GPR_U32(ctx, 2));
label_229dd4:
    // 0x229dd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_229dd8:
    // 0x229dd8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x229dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_229ddc:
    // 0x229ddc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x229ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_229de0:
    // 0x229de0: 0xc092848  jal         func_24A120
label_229de4:
    if (ctx->pc == 0x229DE4u) {
        ctx->pc = 0x229DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DE0u;
        // 0x229de4: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DE8u;
        goto label_229de8;
    }
    ctx->pc = 0x229DE0u;
    SET_GPR_U32(ctx, 31, 0x229DE8u);
    ctx->pc = 0x229DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DE0u;
    // 0x229de4: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x229DE0u, 0x229DE8u)) {
        return;
    }
    ctx->pc = 0x229DE8u;
label_229de8:
    // 0x229de8: 0xafa20604  sw          $v0, 0x604($sp)
    ctx->pc = 0x229de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1540), GPR_U32(ctx, 2));
label_229dec:
    // 0x229dec: 0xc09281a  jal         func_24A068
label_229df0:
    if (ctx->pc == 0x229DF0u) {
        ctx->pc = 0x229DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DECu;
        // 0x229df0: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DF4u;
        goto label_229df4;
    }
    ctx->pc = 0x229DECu;
    SET_GPR_U32(ctx, 31, 0x229DF4u);
    ctx->pc = 0x229DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DECu;
    // 0x229df0: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x229DECu, 0x229DF4u)) {
        return;
    }
    ctx->pc = 0x229DF4u;
label_229df4:
    // 0x229df4: 0xa3a005ff  sb          $zero, 0x5FF($sp)
    ctx->pc = 0x229df4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1535), (uint8_t)GPR_U32(ctx, 0));
label_229df8:
    // 0x229df8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x229df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_229dfc:
    // 0x229dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229e00:
    // 0x229e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x229e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229e04:
    // 0x229e04: 0xc08ac24  jal         func_22B090
label_229e08:
    if (ctx->pc == 0x229E08u) {
        ctx->pc = 0x229E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E04u;
        // 0x229e08: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E0Cu;
        goto label_229e0c;
    }
    ctx->pc = 0x229E04u;
    SET_GPR_U32(ctx, 31, 0x229E0Cu);
    ctx->pc = 0x229E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E04u;
    // 0x229e08: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B090u, 0x229E04u, 0x229E0Cu)) {
        return;
    }
    ctx->pc = 0x229E0Cu;
label_229e0c:
    // 0x229e0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x229e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_229e10:
    // 0x229e10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229e14:
    // 0x229e14: 0xafa00610  sw          $zero, 0x610($sp)
    ctx->pc = 0x229e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1552), GPR_U32(ctx, 0));
label_229e18:
    // 0x229e18: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x229e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_229e1c:
    // 0x229e1c: 0xafa00614  sw          $zero, 0x614($sp)
    ctx->pc = 0x229e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1556), GPR_U32(ctx, 0));
label_229e20:
    // 0x229e20: 0x27a70610  addiu       $a3, $sp, 0x610
    ctx->pc = 0x229e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
label_229e24:
    // 0x229e24: 0x27a80614  addiu       $t0, $sp, 0x614
    ctx->pc = 0x229e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1556));
label_229e28:
    // 0x229e28: 0x27a90618  addiu       $t1, $sp, 0x618
    ctx->pc = 0x229e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1560));
label_229e2c:
    // 0x229e2c: 0xc08a676  jal         func_2299D8
label_229e30:
    if (ctx->pc == 0x229E30u) {
        ctx->pc = 0x229E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E2Cu;
        // 0x229e30: 0x27aa061c  addiu       $t2, $sp, 0x61C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1564));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E34u;
        goto label_229e34;
    }
    ctx->pc = 0x229E2Cu;
    SET_GPR_U32(ctx, 31, 0x229E34u);
    ctx->pc = 0x229E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E2Cu;
    // 0x229e30: 0x27aa061c  addiu       $t2, $sp, 0x61C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1564));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2299D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2299D8u, 0x229E2Cu, 0x229E34u)) {
        return;
    }
    ctx->pc = 0x229E34u;
label_229e34:
    // 0x229e34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_229e38:
    if (ctx->pc == 0x229E38u) {
        ctx->pc = 0x229E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E34u;
        // 0x229e38: 0xafa20620  sw          $v0, 0x620($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E3Cu;
        goto label_229e3c;
    }
    ctx->pc = 0x229E34u;
    {
        const bool branch_taken_0x229e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E34u;
        // 0x229e38: 0xafa20620  sw          $v0, 0x620($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e34) {
            ctx->pc = 0x229E44u;
            goto label_229e44;
        }
    }
    ctx->pc = 0x229E3Cu;
label_229e3c:
    // 0x229e3c: 0x10000043  b           . + 4 + (0x43 << 2)
label_229e40:
    if (ctx->pc == 0x229E40u) {
        ctx->pc = 0x229E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E3Cu;
        // 0x229e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E44u;
        goto label_229e44;
    }
    ctx->pc = 0x229E3Cu;
    {
        const bool branch_taken_0x229e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E3Cu;
        // 0x229e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e3c) {
            ctx->pc = 0x229F4Cu;
            goto label_229f4c;
        }
    }
    ctx->pc = 0x229E44u;
label_229e44:
    // 0x229e44: 0x8fa40610  lw          $a0, 0x610($sp)
    ctx->pc = 0x229e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1552)));
label_229e48:
    // 0x229e48: 0x8fa50614  lw          $a1, 0x614($sp)
    ctx->pc = 0x229e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1556)));
label_229e4c:
    // 0x229e4c: 0x8fa60618  lw          $a2, 0x618($sp)
    ctx->pc = 0x229e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
label_229e50:
    // 0x229e50: 0xc08a1b0  jal         func_2286C0
label_229e54:
    if (ctx->pc == 0x229E54u) {
        ctx->pc = 0x229E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E50u;
        // 0x229e54: 0x8fa7061c  lw          $a3, 0x61C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E58u;
        goto label_229e58;
    }
    ctx->pc = 0x229E50u;
    SET_GPR_U32(ctx, 31, 0x229E58u);
    ctx->pc = 0x229E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E50u;
    // 0x229e54: 0x8fa7061c  lw          $a3, 0x61C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x229E50u, 0x229E58u)) {
        return;
    }
    ctx->pc = 0x229E58u;
label_229e58:
    // 0x229e58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x229e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229e5c:
    // 0x229e5c: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_229e60:
    if (ctx->pc == 0x229E60u) {
        ctx->pc = 0x229E64u;
        goto label_229e64;
    }
    ctx->pc = 0x229E5Cu;
    {
        const bool branch_taken_0x229e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x229e5c) {
            ctx->pc = 0x229EDCu;
            goto label_229edc;
        }
    }
    ctx->pc = 0x229E64u;
label_229e64:
    // 0x229e64: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x229e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_229e68:
    // 0x229e68: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x229e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_229e6c:
    // 0x229e6c: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x229e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_229e70:
    // 0x229e70: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_229e74:
    if (ctx->pc == 0x229E74u) {
        ctx->pc = 0x229E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E70u;
        // 0x229e74: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E78u;
        goto label_229e78;
    }
    ctx->pc = 0x229E70u;
    {
        const bool branch_taken_0x229e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E70u;
        // 0x229e74: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e70) {
            ctx->pc = 0x229EB8u;
            goto label_229eb8;
        }
    }
    ctx->pc = 0x229E78u;
label_229e78:
    // 0x229e78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_229e7c:
    if (ctx->pc == 0x229E7Cu) {
        ctx->pc = 0x229E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E78u;
        // 0x229e7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E80u;
        goto label_229e80;
    }
    ctx->pc = 0x229E78u;
    {
        const bool branch_taken_0x229e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E78u;
        // 0x229e7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e78) {
            ctx->pc = 0x229E9Cu;
            goto label_229e9c;
        }
    }
    ctx->pc = 0x229E80u;
label_229e80:
    // 0x229e80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x229e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_229e84:
    // 0x229e84: 0x27a60620  addiu       $a2, $sp, 0x620
    ctx->pc = 0x229e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_229e88:
    // 0x229e88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x229e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229e8c:
    // 0x229e8c: 0xc08a5f4  jal         func_2297D0
label_229e90:
    if (ctx->pc == 0x229E90u) {
        ctx->pc = 0x229E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E8Cu;
        // 0x229e90: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E94u;
        goto label_229e94;
    }
    ctx->pc = 0x229E8Cu;
    SET_GPR_U32(ctx, 31, 0x229E94u);
    ctx->pc = 0x229E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E8Cu;
    // 0x229e90: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2297D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2297D0u, 0x229E8Cu, 0x229E94u)) {
        return;
    }
    ctx->pc = 0x229E94u;
label_229e94:
    // 0x229e94: 0x10000007  b           . + 4 + (0x7 << 2)
label_229e98:
    if (ctx->pc == 0x229E98u) {
        ctx->pc = 0x229E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E94u;
        // 0x229e98: 0x8fa20620  lw          $v0, 0x620($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E9Cu;
        goto label_229e9c;
    }
    ctx->pc = 0x229E94u;
    {
        const bool branch_taken_0x229e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E94u;
        // 0x229e98: 0x8fa20620  lw          $v0, 0x620($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e94) {
            ctx->pc = 0x229EB4u;
            goto label_229eb4;
        }
    }
    ctx->pc = 0x229E9Cu;
label_229e9c:
    // 0x229e9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x229e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_229ea0:
    // 0x229ea0: 0x27a60620  addiu       $a2, $sp, 0x620
    ctx->pc = 0x229ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_229ea4:
    // 0x229ea4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x229ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229ea8:
    // 0x229ea8: 0xc08a5f4  jal         func_2297D0
label_229eac:
    if (ctx->pc == 0x229EACu) {
        ctx->pc = 0x229EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EA8u;
        // 0x229eac: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EB0u;
        goto label_229eb0;
    }
    ctx->pc = 0x229EA8u;
    SET_GPR_U32(ctx, 31, 0x229EB0u);
    ctx->pc = 0x229EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EA8u;
    // 0x229eac: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2297D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2297D0u, 0x229EA8u, 0x229EB0u)) {
        return;
    }
    ctx->pc = 0x229EB0u;
label_229eb0:
    // 0x229eb0: 0x8fa20620  lw          $v0, 0x620($sp)
    ctx->pc = 0x229eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_229eb4:
    // 0x229eb4: 0xac5d0018  sw          $sp, 0x18($v0)
    ctx->pc = 0x229eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 29));
label_229eb8:
    // 0x229eb8: 0xc089fa6  jal         func_227E98
label_229ebc:
    if (ctx->pc == 0x229EBCu) {
        ctx->pc = 0x229EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EB8u;
        // 0x229ebc: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EC0u;
        goto label_229ec0;
    }
    ctx->pc = 0x229EB8u;
    SET_GPR_U32(ctx, 31, 0x229EC0u);
    ctx->pc = 0x229EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EB8u;
    // 0x229ebc: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227E98u, 0x229EB8u, 0x229EC0u)) {
        return;
    }
    ctx->pc = 0x229EC0u;
label_229ec0:
    // 0x229ec0: 0x8fa50620  lw          $a1, 0x620($sp)
    ctx->pc = 0x229ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_229ec4:
    // 0x229ec4: 0xc08a066  jal         func_228198
label_229ec8:
    if (ctx->pc == 0x229EC8u) {
        ctx->pc = 0x229EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EC4u;
        // 0x229ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229ECCu;
        goto label_229ecc;
    }
    ctx->pc = 0x229EC4u;
    SET_GPR_U32(ctx, 31, 0x229ECCu);
    ctx->pc = 0x229EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EC4u;
    // 0x229ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228198u, 0x229EC4u, 0x229ECCu)) {
        return;
    }
    ctx->pc = 0x229ECCu;
label_229ecc:
    // 0x229ecc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_229ed0:
    if (ctx->pc == 0x229ED0u) {
        ctx->pc = 0x229ED4u;
        goto label_229ed4;
    }
    ctx->pc = 0x229ECCu;
    {
        const bool branch_taken_0x229ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229ecc) {
            ctx->pc = 0x229EECu;
            goto label_229eec;
        }
    }
    ctx->pc = 0x229ED4u;
label_229ed4:
    // 0x229ed4: 0xc08a0e2  jal         func_228388
label_229ed8:
    if (ctx->pc == 0x229ED8u) {
        ctx->pc = 0x229ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229ED4u;
        // 0x229ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EDCu;
        goto label_229edc;
    }
    ctx->pc = 0x229ED4u;
    SET_GPR_U32(ctx, 31, 0x229EDCu);
    ctx->pc = 0x229ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229ED4u;
    // 0x229ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x229ED4u, 0x229EDCu)) {
        return;
    }
    ctx->pc = 0x229EDCu;
label_229edc:
    // 0x229edc: 0xc089b96  jal         func_226E58
label_229ee0:
    if (ctx->pc == 0x229EE0u) {
        ctx->pc = 0x229EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EDCu;
        // 0x229ee0: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EE4u;
        goto label_229ee4;
    }
    ctx->pc = 0x229EDCu;
    SET_GPR_U32(ctx, 31, 0x229EE4u);
    ctx->pc = 0x229EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EDCu;
    // 0x229ee0: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x229EDCu, 0x229EE4u)) {
        return;
    }
    ctx->pc = 0x229EE4u;
label_229ee4:
    // 0x229ee4: 0x10000019  b           . + 4 + (0x19 << 2)
label_229ee8:
    if (ctx->pc == 0x229EE8u) {
        ctx->pc = 0x229EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EE4u;
        // 0x229ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EECu;
        goto label_229eec;
    }
    ctx->pc = 0x229EE4u;
    {
        const bool branch_taken_0x229ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EE4u;
        // 0x229ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ee4) {
            ctx->pc = 0x229F4Cu;
            goto label_229f4c;
        }
    }
    ctx->pc = 0x229EECu;
label_229eec:
    // 0x229eec: 0xc089b96  jal         func_226E58
label_229ef0:
    if (ctx->pc == 0x229EF0u) {
        ctx->pc = 0x229EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EECu;
        // 0x229ef0: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EF4u;
        goto label_229ef4;
    }
    ctx->pc = 0x229EECu;
    SET_GPR_U32(ctx, 31, 0x229EF4u);
    ctx->pc = 0x229EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EECu;
    // 0x229ef0: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x229EECu, 0x229EF4u)) {
        return;
    }
    ctx->pc = 0x229EF4u;
label_229ef4:
    // 0x229ef4: 0xc08ab50  jal         func_22AD40
label_229ef8:
    if (ctx->pc == 0x229EF8u) {
        ctx->pc = 0x229EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EF4u;
        // 0x229ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229EFCu;
        goto label_229efc;
    }
    ctx->pc = 0x229EF4u;
    SET_GPR_U32(ctx, 31, 0x229EFCu);
    ctx->pc = 0x229EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EF4u;
    // 0x229ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x229EF4u, 0x229EFCu)) {
        return;
    }
    ctx->pc = 0x229EFCu;
label_229efc:
    // 0x229efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229f00:
    // 0x229f00: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_229f04:
    if (ctx->pc == 0x229F04u) {
        ctx->pc = 0x229F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F00u;
        // 0x229f04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F08u;
        goto label_229f08;
    }
    ctx->pc = 0x229F00u;
    {
        const bool branch_taken_0x229f00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x229F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F00u;
        // 0x229f04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f00) {
            ctx->pc = 0x229F18u;
            goto label_229f18;
        }
    }
    ctx->pc = 0x229F08u;
label_229f08:
    // 0x229f08: 0xc08a0e2  jal         func_228388
label_229f0c:
    if (ctx->pc == 0x229F0Cu) {
        ctx->pc = 0x229F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F08u;
        // 0x229f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F10u;
        goto label_229f10;
    }
    ctx->pc = 0x229F08u;
    SET_GPR_U32(ctx, 31, 0x229F10u);
    ctx->pc = 0x229F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F08u;
    // 0x229f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x229F08u, 0x229F10u)) {
        return;
    }
    ctx->pc = 0x229F10u;
label_229f10:
    // 0x229f10: 0x1000000e  b           . + 4 + (0xE << 2)
label_229f14:
    if (ctx->pc == 0x229F14u) {
        ctx->pc = 0x229F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F10u;
        // 0x229f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F18u;
        goto label_229f18;
    }
    ctx->pc = 0x229F10u;
    {
        const bool branch_taken_0x229f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F10u;
        // 0x229f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f10) {
            ctx->pc = 0x229F4Cu;
            goto label_229f4c;
        }
    }
    ctx->pc = 0x229F18u;
label_229f18:
    // 0x229f18: 0xc08ab82  jal         func_22AE08
label_229f1c:
    if (ctx->pc == 0x229F1Cu) {
        ctx->pc = 0x229F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F18u;
        // 0x229f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F20u;
        goto label_229f20;
    }
    ctx->pc = 0x229F18u;
    SET_GPR_U32(ctx, 31, 0x229F20u);
    ctx->pc = 0x229F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F18u;
    // 0x229f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AE08u, 0x229F18u, 0x229F20u)) {
        return;
    }
    ctx->pc = 0x229F20u;
label_229f20:
    // 0x229f20: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_229f24:
    if (ctx->pc == 0x229F24u) {
        ctx->pc = 0x229F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F20u;
        // 0x229f24: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F28u;
        goto label_229f28;
    }
    ctx->pc = 0x229F20u;
    {
        const bool branch_taken_0x229f20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F20u;
        // 0x229f24: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f20) {
            ctx->pc = 0x229F3Cu;
            goto label_229f3c;
        }
    }
    ctx->pc = 0x229F28u;
label_229f28:
    // 0x229f28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_229f2c:
    // 0x229f2c: 0xc08abaa  jal         func_22AEA8
label_229f30:
    if (ctx->pc == 0x229F30u) {
        ctx->pc = 0x229F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F2Cu;
        // 0x229f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F34u;
        goto label_229f34;
    }
    ctx->pc = 0x229F2Cu;
    SET_GPR_U32(ctx, 31, 0x229F34u);
    ctx->pc = 0x229F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F2Cu;
    // 0x229f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AEA8u, 0x229F2Cu, 0x229F34u)) {
        return;
    }
    ctx->pc = 0x229F34u;
label_229f34:
    // 0x229f34: 0x10000005  b           . + 4 + (0x5 << 2)
label_229f38:
    if (ctx->pc == 0x229F38u) {
        ctx->pc = 0x229F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F34u;
        // 0x229f38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F3Cu;
        goto label_229f3c;
    }
    ctx->pc = 0x229F34u;
    {
        const bool branch_taken_0x229f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F34u;
        // 0x229f38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f34) {
            ctx->pc = 0x229F4Cu;
            goto label_229f4c;
        }
    }
    ctx->pc = 0x229F3Cu;
label_229f3c:
    // 0x229f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229f40:
    // 0x229f40: 0xc08abaa  jal         func_22AEA8
label_229f44:
    if (ctx->pc == 0x229F44u) {
        ctx->pc = 0x229F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F40u;
        // 0x229f44: 0x24a53448  addiu       $a1, $a1, 0x3448 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F48u;
        goto label_229f48;
    }
    ctx->pc = 0x229F40u;
    SET_GPR_U32(ctx, 31, 0x229F48u);
    ctx->pc = 0x229F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F40u;
    // 0x229f44: 0x24a53448  addiu       $a1, $a1, 0x3448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AEA8u, 0x229F40u, 0x229F48u)) {
        return;
    }
    ctx->pc = 0x229F48u;
label_229f48:
    // 0x229f48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x229f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229f4c:
    // 0x229f4c: 0x7bb00680  lq          $s0, 0x680($sp)
    ctx->pc = 0x229f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
label_229f50:
    // 0x229f50: 0x7bb10670  lq          $s1, 0x670($sp)
    ctx->pc = 0x229f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1648)));
label_229f54:
    // 0x229f54: 0x7bb20660  lq          $s2, 0x660($sp)
    ctx->pc = 0x229f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1632)));
label_229f58:
    // 0x229f58: 0x7bb30650  lq          $s3, 0x650($sp)
    ctx->pc = 0x229f58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1616)));
label_229f5c:
    // 0x229f5c: 0x7bb40640  lq          $s4, 0x640($sp)
    ctx->pc = 0x229f5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1600)));
label_229f60:
    // 0x229f60: 0xdfbf0630  ld          $ra, 0x630($sp)
    ctx->pc = 0x229f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_229f64:
    // 0x229f64: 0x3e00008  jr          $ra
label_229f68:
    if (ctx->pc == 0x229F68u) {
        ctx->pc = 0x229F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F64u;
        // 0x229f68: 0x27bd0690  addiu       $sp, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229F6Cu;
        goto label_229f6c;
    }
    ctx->pc = 0x229F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F64u;
        // 0x229f68: 0x27bd0690  addiu       $sp, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229F6Cu;
label_229f6c:
    // 0x229f6c: 0x0  nop
    ctx->pc = 0x229f6cu;
    // NOP
    ctx->pc = 0x229f70u;
}
