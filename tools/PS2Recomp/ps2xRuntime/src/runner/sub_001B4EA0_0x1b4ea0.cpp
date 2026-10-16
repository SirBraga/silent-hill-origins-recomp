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

// Function: sub_001B4EA0
// Address: 0x1b4ea0 - 0x1b5070
void sub_001B4EA0_0x1b4ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4EA0_0x1b4ea0");
#endif

    switch (ctx->pc) {
        case 0x1b4ea0u: goto label_1b4ea0;
        case 0x1b4ea4u: goto label_1b4ea4;
        case 0x1b4ea8u: goto label_1b4ea8;
        case 0x1b4eacu: goto label_1b4eac;
        case 0x1b4eb0u: goto label_1b4eb0;
        case 0x1b4eb4u: goto label_1b4eb4;
        case 0x1b4eb8u: goto label_1b4eb8;
        case 0x1b4ebcu: goto label_1b4ebc;
        case 0x1b4ec0u: goto label_1b4ec0;
        case 0x1b4ec4u: goto label_1b4ec4;
        case 0x1b4ec8u: goto label_1b4ec8;
        case 0x1b4eccu: goto label_1b4ecc;
        case 0x1b4ed0u: goto label_1b4ed0;
        case 0x1b4ed4u: goto label_1b4ed4;
        case 0x1b4ed8u: goto label_1b4ed8;
        case 0x1b4edcu: goto label_1b4edc;
        case 0x1b4ee0u: goto label_1b4ee0;
        case 0x1b4ee4u: goto label_1b4ee4;
        case 0x1b4ee8u: goto label_1b4ee8;
        case 0x1b4eecu: goto label_1b4eec;
        case 0x1b4ef0u: goto label_1b4ef0;
        case 0x1b4ef4u: goto label_1b4ef4;
        case 0x1b4ef8u: goto label_1b4ef8;
        case 0x1b4efcu: goto label_1b4efc;
        case 0x1b4f00u: goto label_1b4f00;
        case 0x1b4f04u: goto label_1b4f04;
        case 0x1b4f08u: goto label_1b4f08;
        case 0x1b4f0cu: goto label_1b4f0c;
        case 0x1b4f10u: goto label_1b4f10;
        case 0x1b4f14u: goto label_1b4f14;
        case 0x1b4f18u: goto label_1b4f18;
        case 0x1b4f1cu: goto label_1b4f1c;
        case 0x1b4f20u: goto label_1b4f20;
        case 0x1b4f24u: goto label_1b4f24;
        case 0x1b4f28u: goto label_1b4f28;
        case 0x1b4f2cu: goto label_1b4f2c;
        case 0x1b4f30u: goto label_1b4f30;
        case 0x1b4f34u: goto label_1b4f34;
        case 0x1b4f38u: goto label_1b4f38;
        case 0x1b4f3cu: goto label_1b4f3c;
        case 0x1b4f40u: goto label_1b4f40;
        case 0x1b4f44u: goto label_1b4f44;
        case 0x1b4f48u: goto label_1b4f48;
        case 0x1b4f4cu: goto label_1b4f4c;
        case 0x1b4f50u: goto label_1b4f50;
        case 0x1b4f54u: goto label_1b4f54;
        case 0x1b4f58u: goto label_1b4f58;
        case 0x1b4f5cu: goto label_1b4f5c;
        case 0x1b4f60u: goto label_1b4f60;
        case 0x1b4f64u: goto label_1b4f64;
        case 0x1b4f68u: goto label_1b4f68;
        case 0x1b4f6cu: goto label_1b4f6c;
        case 0x1b4f70u: goto label_1b4f70;
        case 0x1b4f74u: goto label_1b4f74;
        case 0x1b4f78u: goto label_1b4f78;
        case 0x1b4f7cu: goto label_1b4f7c;
        case 0x1b4f80u: goto label_1b4f80;
        case 0x1b4f84u: goto label_1b4f84;
        case 0x1b4f88u: goto label_1b4f88;
        case 0x1b4f8cu: goto label_1b4f8c;
        case 0x1b4f90u: goto label_1b4f90;
        case 0x1b4f94u: goto label_1b4f94;
        case 0x1b4f98u: goto label_1b4f98;
        case 0x1b4f9cu: goto label_1b4f9c;
        case 0x1b4fa0u: goto label_1b4fa0;
        case 0x1b4fa4u: goto label_1b4fa4;
        case 0x1b4fa8u: goto label_1b4fa8;
        case 0x1b4facu: goto label_1b4fac;
        case 0x1b4fb0u: goto label_1b4fb0;
        case 0x1b4fb4u: goto label_1b4fb4;
        case 0x1b4fb8u: goto label_1b4fb8;
        case 0x1b4fbcu: goto label_1b4fbc;
        case 0x1b4fc0u: goto label_1b4fc0;
        case 0x1b4fc4u: goto label_1b4fc4;
        case 0x1b4fc8u: goto label_1b4fc8;
        case 0x1b4fccu: goto label_1b4fcc;
        case 0x1b4fd0u: goto label_1b4fd0;
        case 0x1b4fd4u: goto label_1b4fd4;
        case 0x1b4fd8u: goto label_1b4fd8;
        case 0x1b4fdcu: goto label_1b4fdc;
        case 0x1b4fe0u: goto label_1b4fe0;
        case 0x1b4fe4u: goto label_1b4fe4;
        case 0x1b4fe8u: goto label_1b4fe8;
        case 0x1b4fecu: goto label_1b4fec;
        case 0x1b4ff0u: goto label_1b4ff0;
        case 0x1b4ff4u: goto label_1b4ff4;
        case 0x1b4ff8u: goto label_1b4ff8;
        case 0x1b4ffcu: goto label_1b4ffc;
        case 0x1b5000u: goto label_1b5000;
        case 0x1b5004u: goto label_1b5004;
        case 0x1b5008u: goto label_1b5008;
        case 0x1b500cu: goto label_1b500c;
        case 0x1b5010u: goto label_1b5010;
        case 0x1b5014u: goto label_1b5014;
        case 0x1b5018u: goto label_1b5018;
        case 0x1b501cu: goto label_1b501c;
        case 0x1b5020u: goto label_1b5020;
        case 0x1b5024u: goto label_1b5024;
        case 0x1b5028u: goto label_1b5028;
        case 0x1b502cu: goto label_1b502c;
        case 0x1b5030u: goto label_1b5030;
        case 0x1b5034u: goto label_1b5034;
        case 0x1b5038u: goto label_1b5038;
        case 0x1b503cu: goto label_1b503c;
        case 0x1b5040u: goto label_1b5040;
        case 0x1b5044u: goto label_1b5044;
        case 0x1b5048u: goto label_1b5048;
        case 0x1b504cu: goto label_1b504c;
        case 0x1b5050u: goto label_1b5050;
        case 0x1b5054u: goto label_1b5054;
        case 0x1b5058u: goto label_1b5058;
        case 0x1b505cu: goto label_1b505c;
        case 0x1b5060u: goto label_1b5060;
        case 0x1b5064u: goto label_1b5064;
        case 0x1b5068u: goto label_1b5068;
        case 0x1b506cu: goto label_1b506c;
        default: break;
    }

    ctx->pc = 0x1b4ea0u;

label_1b4ea0:
    // 0x1b4ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b4ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b4ea4:
    // 0x1b4ea4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b4ea8:
    // 0x1b4ea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b4ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b4eac:
    // 0x1b4eac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b4eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1b4eb0:
    // 0x1b4eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4eb4:
    // 0x1b4eb4: 0x14a2002d  bne         $a1, $v0, . + 4 + (0x2D << 2)
label_1b4eb8:
    if (ctx->pc == 0x1B4EB8u) {
        ctx->pc = 0x1B4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EB4u;
        // 0x1b4eb8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4EBCu;
        goto label_1b4ebc;
    }
    ctx->pc = 0x1B4EB4u;
    {
        const bool branch_taken_0x1b4eb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EB4u;
        // 0x1b4eb8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4eb4) {
            ctx->pc = 0x1B4F6Cu;
            goto label_1b4f6c;
        }
    }
    ctx->pc = 0x1B4EBCu;
label_1b4ebc:
    // 0x1b4ebc: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x1b4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1b4ec0:
    // 0x1b4ec0: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1b4ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b4ec4:
    // 0x1b4ec4: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_1b4ec8:
    if (ctx->pc == 0x1B4EC8u) {
        ctx->pc = 0x1B4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EC4u;
        // 0x1b4ec8: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4ECCu;
        goto label_1b4ecc;
    }
    ctx->pc = 0x1B4EC4u;
    {
        const bool branch_taken_0x1b4ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EC4u;
        // 0x1b4ec8: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ec4) {
            ctx->pc = 0x1B5054u;
            goto label_1b5054;
        }
    }
    ctx->pc = 0x1B4ECCu;
label_1b4ecc:
    // 0x1b4ecc: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x1b4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_1b4ed0:
    // 0x1b4ed0: 0xc05f97c  jal         func_17E5F0
label_1b4ed4:
    if (ctx->pc == 0x1B4ED4u) {
        ctx->pc = 0x1B4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4ED0u;
        // 0x1b4ed4: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4ED8u;
        goto label_1b4ed8;
    }
    ctx->pc = 0x1B4ED0u;
    SET_GPR_U32(ctx, 31, 0x1B4ED8u);
    ctx->pc = 0x1B4ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4ED0u;
    // 0x1b4ed4: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E5F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E5F0u, 0x1B4ED0u, 0x1B4ED8u)) {
        return;
    }
    ctx->pc = 0x1B4ED8u;
label_1b4ed8:
    // 0x1b4ed8: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x1b4ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b4edc:
    // 0x1b4edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4ee0:
    // 0x1b4ee0: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x1b4ee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_1b4ee4:
    // 0x1b4ee4: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x1b4ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_1b4ee8:
    // 0x1b4ee8: 0x40f809  jalr        $v0
label_1b4eec:
    if (ctx->pc == 0x1B4EECu) {
        ctx->pc = 0x1B4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EE8u;
        // 0x1b4eec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4EF0u;
        goto label_1b4ef0;
    }
    ctx->pc = 0x1B4EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4EF0u);
        ctx->pc = 0x1B4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EE8u;
        // 0x1b4eec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4EE8u, 0x1B4EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4EF0u;
label_1b4ef0:
    // 0x1b4ef0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_1b4ef4:
    if (ctx->pc == 0x1B4EF4u) {
        ctx->pc = 0x1B4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EF0u;
        // 0x1b4ef4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4EF8u;
        goto label_1b4ef8;
    }
    ctx->pc = 0x1B4EF0u;
    {
        const bool branch_taken_0x1b4ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EF0u;
        // 0x1b4ef4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ef0) {
            ctx->pc = 0x1B4F30u;
            goto label_1b4f30;
        }
    }
    ctx->pc = 0x1B4EF8u;
label_1b4ef8:
    // 0x1b4ef8: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b4efc:
    // 0x1b4efc: 0x84440118  lh          $a0, 0x118($v0)
    ctx->pc = 0x1b4efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_1b4f00:
    // 0x1b4f00: 0x8c43011c  lw          $v1, 0x11C($v0)
    ctx->pc = 0x1b4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
label_1b4f04:
    // 0x1b4f04: 0x60f809  jalr        $v1
label_1b4f08:
    if (ctx->pc == 0x1B4F08u) {
        ctx->pc = 0x1B4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F04u;
        // 0x1b4f08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4F0Cu;
        goto label_1b4f0c;
    }
    ctx->pc = 0x1B4F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B4F0Cu);
        ctx->pc = 0x1B4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F04u;
        // 0x1b4f08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4F04u, 0x1B4F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4F0Cu;
label_1b4f0c:
    // 0x1b4f0c: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b4f10:
    // 0x1b4f10: 0x84440110  lh          $a0, 0x110($v0)
    ctx->pc = 0x1b4f10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
label_1b4f14:
    // 0x1b4f14: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x1b4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_1b4f18:
    // 0x1b4f18: 0x60f809  jalr        $v1
label_1b4f1c:
    if (ctx->pc == 0x1B4F1Cu) {
        ctx->pc = 0x1B4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F18u;
        // 0x1b4f1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4F20u;
        goto label_1b4f20;
    }
    ctx->pc = 0x1B4F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B4F20u);
        ctx->pc = 0x1B4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F18u;
        // 0x1b4f1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4F18u, 0x1B4F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4F20u;
label_1b4f20:
    // 0x1b4f20: 0xc06d4c4  jal         func_1B5310
label_1b4f24:
    if (ctx->pc == 0x1B4F24u) {
        ctx->pc = 0x1B4F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F20u;
        // 0x1b4f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4F28u;
        goto label_1b4f28;
    }
    ctx->pc = 0x1B4F20u;
    SET_GPR_U32(ctx, 31, 0x1B4F28u);
    ctx->pc = 0x1B4F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F20u;
    // 0x1b4f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5310u, 0x1B4F20u, 0x1B4F28u)) {
        return;
    }
    ctx->pc = 0x1B4F28u;
label_1b4f28:
    // 0x1b4f28: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b4f2c:
    if (ctx->pc == 0x1B4F2Cu) {
        ctx->pc = 0x1B4F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F28u;
        // 0x1b4f2c: 0xae200268  sw          $zero, 0x268($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4F30u;
        goto label_1b4f30;
    }
    ctx->pc = 0x1B4F28u;
    {
        const bool branch_taken_0x1b4f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F28u;
        // 0x1b4f2c: 0xae200268  sw          $zero, 0x268($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f28) {
            ctx->pc = 0x1B4F44u;
            goto label_1b4f44;
        }
    }
    ctx->pc = 0x1B4F30u;
label_1b4f30:
    // 0x1b4f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b4f34:
    // 0x1b4f34: 0xc06d4f4  jal         func_1B53D0
label_1b4f38:
    if (ctx->pc == 0x1B4F38u) {
        ctx->pc = 0x1B4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F34u;
        // 0x1b4f38: 0xae220268  sw          $v0, 0x268($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4F3Cu;
        goto label_1b4f3c;
    }
    ctx->pc = 0x1B4F34u;
    SET_GPR_U32(ctx, 31, 0x1B4F3Cu);
    ctx->pc = 0x1B4F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F34u;
    // 0x1b4f38: 0xae220268  sw          $v0, 0x268($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B53D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B53D0u, 0x1B4F34u, 0x1B4F3Cu)) {
        return;
    }
    ctx->pc = 0x1B4F3Cu;
label_1b4f3c:
    // 0x1b4f3c: 0xc06e1f8  jal         func_1B87E0
label_1b4f40:
    if (ctx->pc == 0x1B4F40u) {
        ctx->pc = 0x1B4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F3Cu;
        // 0x1b4f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4F44u;
        goto label_1b4f44;
    }
    ctx->pc = 0x1B4F3Cu;
    SET_GPR_U32(ctx, 31, 0x1B4F44u);
    ctx->pc = 0x1B4F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F3Cu;
    // 0x1b4f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B87E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B87E0u, 0x1B4F3Cu, 0x1B4F44u)) {
        return;
    }
    ctx->pc = 0x1B4F44u;
label_1b4f44:
    // 0x1b4f44: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b4f48:
    // 0x1b4f48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b4f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b4f4c:
    // 0x1b4f4c: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x1b4f4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_1b4f50:
    // 0x1b4f50: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x1b4f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_1b4f54:
    // 0x1b4f54: 0x60f809  jalr        $v1
label_1b4f58:
    if (ctx->pc == 0x1B4F58u) {
        ctx->pc = 0x1B4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F54u;
        // 0x1b4f58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4F5Cu;
        goto label_1b4f5c;
    }
    ctx->pc = 0x1B4F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B4F5Cu);
        ctx->pc = 0x1B4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F54u;
        // 0x1b4f58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4F54u, 0x1B4F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4F5Cu;
label_1b4f5c:
    // 0x1b4f5c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1b4f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_1b4f60:
    // 0x1b4f60: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1b4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1b4f64:
    // 0x1b4f64: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1b4f68:
    if (ctx->pc == 0x1B4F68u) {
        ctx->pc = 0x1B4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F64u;
        // 0x1b4f68: 0x8c8443a0  lw          $a0, 0x43A0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4F6Cu;
        goto label_1b4f6c;
    }
    ctx->pc = 0x1B4F64u;
    {
        const bool branch_taken_0x1b4f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F64u;
        // 0x1b4f68: 0x8c8443a0  lw          $a0, 0x43A0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f64) {
            ctx->pc = 0x1B5024u;
            goto label_1b5024;
        }
    }
    ctx->pc = 0x1B4F6Cu;
label_1b4f6c:
    // 0x1b4f6c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b4f70:
    // 0x1b4f70: 0x14a20038  bne         $a1, $v0, . + 4 + (0x38 << 2)
label_1b4f74:
    if (ctx->pc == 0x1B4F74u) {
        ctx->pc = 0x1B4F78u;
        goto label_1b4f78;
    }
    ctx->pc = 0x1B4F70u;
    {
        const bool branch_taken_0x1b4f70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b4f70) {
            ctx->pc = 0x1B5054u;
            goto label_1b5054;
        }
    }
    ctx->pc = 0x1B4F78u;
label_1b4f78:
    // 0x1b4f78: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x1b4f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1b4f7c:
    // 0x1b4f7c: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x1b4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1b4f80:
    // 0x1b4f80: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1b4f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b4f84:
    // 0x1b4f84: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1b4f88:
    if (ctx->pc == 0x1B4F88u) {
        ctx->pc = 0x1B4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F84u;
        // 0x1b4f88: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4F8Cu;
        goto label_1b4f8c;
    }
    ctx->pc = 0x1B4F84u;
    {
        const bool branch_taken_0x1b4f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F84u;
        // 0x1b4f88: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f84) {
            ctx->pc = 0x1B5054u;
            goto label_1b5054;
        }
    }
    ctx->pc = 0x1B4F8Cu;
label_1b4f8c:
    // 0x1b4f8c: 0xc05f97c  jal         func_17E5F0
label_1b4f90:
    if (ctx->pc == 0x1B4F90u) {
        ctx->pc = 0x1B4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F8Cu;
        // 0x1b4f90: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4F94u;
        goto label_1b4f94;
    }
    ctx->pc = 0x1B4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1B4F94u);
    ctx->pc = 0x1B4F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F8Cu;
    // 0x1b4f90: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E5F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E5F0u, 0x1B4F8Cu, 0x1B4F94u)) {
        return;
    }
    ctx->pc = 0x1B4F94u;
label_1b4f94:
    // 0x1b4f94: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x1b4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b4f98:
    // 0x1b4f98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4f9c:
    // 0x1b4f9c: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x1b4f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_1b4fa0:
    // 0x1b4fa0: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x1b4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_1b4fa4:
    // 0x1b4fa4: 0x40f809  jalr        $v0
label_1b4fa8:
    if (ctx->pc == 0x1B4FA8u) {
        ctx->pc = 0x1B4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FA4u;
        // 0x1b4fa8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4FACu;
        goto label_1b4fac;
    }
    ctx->pc = 0x1B4FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4FACu);
        ctx->pc = 0x1B4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FA4u;
        // 0x1b4fa8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4FA4u, 0x1B4FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4FACu;
label_1b4fac:
    // 0x1b4fac: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_1b4fb0:
    if (ctx->pc == 0x1B4FB0u) {
        ctx->pc = 0x1B4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FACu;
        // 0x1b4fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4FB4u;
        goto label_1b4fb4;
    }
    ctx->pc = 0x1B4FACu;
    {
        const bool branch_taken_0x1b4fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FACu;
        // 0x1b4fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fac) {
            ctx->pc = 0x1B4FECu;
            goto label_1b4fec;
        }
    }
    ctx->pc = 0x1B4FB4u;
label_1b4fb4:
    // 0x1b4fb4: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b4fb8:
    // 0x1b4fb8: 0x84440118  lh          $a0, 0x118($v0)
    ctx->pc = 0x1b4fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_1b4fbc:
    // 0x1b4fbc: 0x8c43011c  lw          $v1, 0x11C($v0)
    ctx->pc = 0x1b4fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
label_1b4fc0:
    // 0x1b4fc0: 0x60f809  jalr        $v1
label_1b4fc4:
    if (ctx->pc == 0x1B4FC4u) {
        ctx->pc = 0x1B4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FC0u;
        // 0x1b4fc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4FC8u;
        goto label_1b4fc8;
    }
    ctx->pc = 0x1B4FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B4FC8u);
        ctx->pc = 0x1B4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FC0u;
        // 0x1b4fc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4FC0u, 0x1B4FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4FC8u;
label_1b4fc8:
    // 0x1b4fc8: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b4fcc:
    // 0x1b4fcc: 0x84440110  lh          $a0, 0x110($v0)
    ctx->pc = 0x1b4fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
label_1b4fd0:
    // 0x1b4fd0: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x1b4fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_1b4fd4:
    // 0x1b4fd4: 0x60f809  jalr        $v1
label_1b4fd8:
    if (ctx->pc == 0x1B4FD8u) {
        ctx->pc = 0x1B4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FD4u;
        // 0x1b4fd8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4FDCu;
        goto label_1b4fdc;
    }
    ctx->pc = 0x1B4FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B4FDCu);
        ctx->pc = 0x1B4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FD4u;
        // 0x1b4fd8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4FD4u, 0x1B4FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4FDCu;
label_1b4fdc:
    // 0x1b4fdc: 0xc06d4c4  jal         func_1B5310
label_1b4fe0:
    if (ctx->pc == 0x1B4FE0u) {
        ctx->pc = 0x1B4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FDCu;
        // 0x1b4fe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4FE4u;
        goto label_1b4fe4;
    }
    ctx->pc = 0x1B4FDCu;
    SET_GPR_U32(ctx, 31, 0x1B4FE4u);
    ctx->pc = 0x1B4FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FDCu;
    // 0x1b4fe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5310u, 0x1B4FDCu, 0x1B4FE4u)) {
        return;
    }
    ctx->pc = 0x1B4FE4u;
label_1b4fe4:
    // 0x1b4fe4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b4fe8:
    if (ctx->pc == 0x1B4FE8u) {
        ctx->pc = 0x1B4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FE4u;
        // 0x1b4fe8: 0xae200268  sw          $zero, 0x268($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4FECu;
        goto label_1b4fec;
    }
    ctx->pc = 0x1B4FE4u;
    {
        const bool branch_taken_0x1b4fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FE4u;
        // 0x1b4fe8: 0xae200268  sw          $zero, 0x268($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fe4) {
            ctx->pc = 0x1B5000u;
            goto label_1b5000;
        }
    }
    ctx->pc = 0x1B4FECu;
label_1b4fec:
    // 0x1b4fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b4ff0:
    // 0x1b4ff0: 0xc06d4f4  jal         func_1B53D0
label_1b4ff4:
    if (ctx->pc == 0x1B4FF4u) {
        ctx->pc = 0x1B4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FF0u;
        // 0x1b4ff4: 0xae220268  sw          $v0, 0x268($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4FF8u;
        goto label_1b4ff8;
    }
    ctx->pc = 0x1B4FF0u;
    SET_GPR_U32(ctx, 31, 0x1B4FF8u);
    ctx->pc = 0x1B4FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FF0u;
    // 0x1b4ff4: 0xae220268  sw          $v0, 0x268($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B53D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B53D0u, 0x1B4FF0u, 0x1B4FF8u)) {
        return;
    }
    ctx->pc = 0x1B4FF8u;
label_1b4ff8:
    // 0x1b4ff8: 0xc06e1f8  jal         func_1B87E0
label_1b4ffc:
    if (ctx->pc == 0x1B4FFCu) {
        ctx->pc = 0x1B4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FF8u;
        // 0x1b4ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5000u;
        goto label_1b5000;
    }
    ctx->pc = 0x1B4FF8u;
    SET_GPR_U32(ctx, 31, 0x1B5000u);
    ctx->pc = 0x1B4FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FF8u;
    // 0x1b4ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B87E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B87E0u, 0x1B4FF8u, 0x1B5000u)) {
        return;
    }
    ctx->pc = 0x1B5000u;
label_1b5000:
    // 0x1b5000: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b5000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b5004:
    // 0x1b5004: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b5008:
    // 0x1b5008: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x1b5008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_1b500c:
    // 0x1b500c: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x1b500cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_1b5010:
    // 0x1b5010: 0x60f809  jalr        $v1
label_1b5014:
    if (ctx->pc == 0x1B5014u) {
        ctx->pc = 0x1B5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5010u;
        // 0x1b5014: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5018u;
        goto label_1b5018;
    }
    ctx->pc = 0x1B5010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5018u);
        ctx->pc = 0x1B5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5010u;
        // 0x1b5014: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5010u, 0x1B5018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5018u;
label_1b5018:
    // 0x1b5018: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1b5018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_1b501c:
    // 0x1b501c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1b501cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1b5020:
    // 0x1b5020: 0x8c8443a8  lw          $a0, 0x43A8($a0)
    ctx->pc = 0x1b5020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17320)));
label_1b5024:
    // 0x1b5024: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1b5024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1b5028:
    // 0x1b5028: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_1b502c:
    if (ctx->pc == 0x1B502Cu) {
        ctx->pc = 0x1B502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5028u;
        // 0x1b502c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5030u;
        goto label_1b5030;
    }
    ctx->pc = 0x1B5028u;
    {
        const bool branch_taken_0x1b5028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5028u;
        // 0x1b502c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5028) {
            ctx->pc = 0x1B5060u;
            goto label_1b5060;
        }
    }
    ctx->pc = 0x1B5030u;
label_1b5030:
    // 0x1b5030: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5034:
    // 0x1b5034: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b5038:
    if (ctx->pc == 0x1B5038u) {
        ctx->pc = 0x1B5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5034u;
        // 0x1b5038: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B503Cu;
        goto label_1b503c;
    }
    ctx->pc = 0x1B5034u;
    {
        const bool branch_taken_0x1b5034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5034u;
        // 0x1b5038: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5034) {
            ctx->pc = 0x1B5064u;
            goto label_1b5064;
        }
    }
    ctx->pc = 0x1B503Cu;
label_1b503c:
    // 0x1b503c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b503cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1b5040:
    // 0x1b5040: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b5040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5044:
    // 0x1b5044: 0xc07fd18  jal         func_1FF460
label_1b5048:
    if (ctx->pc == 0x1B5048u) {
        ctx->pc = 0x1B5048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5044u;
        // 0x1b5048: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B504Cu;
        goto label_1b504c;
    }
    ctx->pc = 0x1B5044u;
    SET_GPR_U32(ctx, 31, 0x1B504Cu);
    ctx->pc = 0x1B5048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5044u;
    // 0x1b5048: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B5044u, 0x1B504Cu)) {
        return;
    }
    ctx->pc = 0x1B504Cu;
label_1b504c:
    // 0x1b504c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b5050:
    if (ctx->pc == 0x1B5050u) {
        ctx->pc = 0x1B5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B504Cu;
        // 0x1b5050: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5054u;
        goto label_1b5054;
    }
    ctx->pc = 0x1B504Cu;
    {
        const bool branch_taken_0x1b504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B504Cu;
        // 0x1b5050: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b504c) {
            ctx->pc = 0x1B5060u;
            goto label_1b5060;
        }
    }
    ctx->pc = 0x1B5054u;
label_1b5054:
    // 0x1b5054: 0xc06e340  jal         func_1B8D00
label_1b5058:
    if (ctx->pc == 0x1B5058u) {
        ctx->pc = 0x1B5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5054u;
        // 0x1b5058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B505Cu;
        goto label_1b505c;
    }
    ctx->pc = 0x1B5054u;
    SET_GPR_U32(ctx, 31, 0x1B505Cu);
    ctx->pc = 0x1B5058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5054u;
    // 0x1b5058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B8D00u, 0x1B5054u, 0x1B505Cu)) {
        return;
    }
    ctx->pc = 0x1B505Cu;
label_1b505c:
    // 0x1b505c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b505cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5060:
    // 0x1b5060: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b5060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5064:
    // 0x1b5064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5068:
    // 0x1b5068: 0x3e00008  jr          $ra
label_1b506c:
    if (ctx->pc == 0x1B506Cu) {
        ctx->pc = 0x1B506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5068u;
        // 0x1b506c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5070u;
        goto label_fallthrough_0x1b5068;
    }
    ctx->pc = 0x1B5068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5068u;
        // 0x1b506c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5068:
    ctx->pc = 0x1B5070u;
}
