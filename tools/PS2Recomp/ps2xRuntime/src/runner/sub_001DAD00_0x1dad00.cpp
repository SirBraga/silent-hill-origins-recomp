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

// Function: sub_001DAD00
// Address: 0x1dad00 - 0x1db0b0
void sub_001DAD00_0x1dad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAD00_0x1dad00");
#endif

    switch (ctx->pc) {
        case 0x1dad00u: goto label_1dad00;
        case 0x1dad04u: goto label_1dad04;
        case 0x1dad08u: goto label_1dad08;
        case 0x1dad0cu: goto label_1dad0c;
        case 0x1dad10u: goto label_1dad10;
        case 0x1dad14u: goto label_1dad14;
        case 0x1dad18u: goto label_1dad18;
        case 0x1dad1cu: goto label_1dad1c;
        case 0x1dad20u: goto label_1dad20;
        case 0x1dad24u: goto label_1dad24;
        case 0x1dad28u: goto label_1dad28;
        case 0x1dad2cu: goto label_1dad2c;
        case 0x1dad30u: goto label_1dad30;
        case 0x1dad34u: goto label_1dad34;
        case 0x1dad38u: goto label_1dad38;
        case 0x1dad3cu: goto label_1dad3c;
        case 0x1dad40u: goto label_1dad40;
        case 0x1dad44u: goto label_1dad44;
        case 0x1dad48u: goto label_1dad48;
        case 0x1dad4cu: goto label_1dad4c;
        case 0x1dad50u: goto label_1dad50;
        case 0x1dad54u: goto label_1dad54;
        case 0x1dad58u: goto label_1dad58;
        case 0x1dad5cu: goto label_1dad5c;
        case 0x1dad60u: goto label_1dad60;
        case 0x1dad64u: goto label_1dad64;
        case 0x1dad68u: goto label_1dad68;
        case 0x1dad6cu: goto label_1dad6c;
        case 0x1dad70u: goto label_1dad70;
        case 0x1dad74u: goto label_1dad74;
        case 0x1dad78u: goto label_1dad78;
        case 0x1dad7cu: goto label_1dad7c;
        case 0x1dad80u: goto label_1dad80;
        case 0x1dad84u: goto label_1dad84;
        case 0x1dad88u: goto label_1dad88;
        case 0x1dad8cu: goto label_1dad8c;
        case 0x1dad90u: goto label_1dad90;
        case 0x1dad94u: goto label_1dad94;
        case 0x1dad98u: goto label_1dad98;
        case 0x1dad9cu: goto label_1dad9c;
        case 0x1dada0u: goto label_1dada0;
        case 0x1dada4u: goto label_1dada4;
        case 0x1dada8u: goto label_1dada8;
        case 0x1dadacu: goto label_1dadac;
        case 0x1dadb0u: goto label_1dadb0;
        case 0x1dadb4u: goto label_1dadb4;
        case 0x1dadb8u: goto label_1dadb8;
        case 0x1dadbcu: goto label_1dadbc;
        case 0x1dadc0u: goto label_1dadc0;
        case 0x1dadc4u: goto label_1dadc4;
        case 0x1dadc8u: goto label_1dadc8;
        case 0x1dadccu: goto label_1dadcc;
        case 0x1dadd0u: goto label_1dadd0;
        case 0x1dadd4u: goto label_1dadd4;
        case 0x1dadd8u: goto label_1dadd8;
        case 0x1daddcu: goto label_1daddc;
        case 0x1dade0u: goto label_1dade0;
        case 0x1dade4u: goto label_1dade4;
        case 0x1dade8u: goto label_1dade8;
        case 0x1dadecu: goto label_1dadec;
        case 0x1dadf0u: goto label_1dadf0;
        case 0x1dadf4u: goto label_1dadf4;
        case 0x1dadf8u: goto label_1dadf8;
        case 0x1dadfcu: goto label_1dadfc;
        case 0x1dae00u: goto label_1dae00;
        case 0x1dae04u: goto label_1dae04;
        case 0x1dae08u: goto label_1dae08;
        case 0x1dae0cu: goto label_1dae0c;
        case 0x1dae10u: goto label_1dae10;
        case 0x1dae14u: goto label_1dae14;
        case 0x1dae18u: goto label_1dae18;
        case 0x1dae1cu: goto label_1dae1c;
        case 0x1dae20u: goto label_1dae20;
        case 0x1dae24u: goto label_1dae24;
        case 0x1dae28u: goto label_1dae28;
        case 0x1dae2cu: goto label_1dae2c;
        case 0x1dae30u: goto label_1dae30;
        case 0x1dae34u: goto label_1dae34;
        case 0x1dae38u: goto label_1dae38;
        case 0x1dae3cu: goto label_1dae3c;
        case 0x1dae40u: goto label_1dae40;
        case 0x1dae44u: goto label_1dae44;
        case 0x1dae48u: goto label_1dae48;
        case 0x1dae4cu: goto label_1dae4c;
        case 0x1dae50u: goto label_1dae50;
        case 0x1dae54u: goto label_1dae54;
        case 0x1dae58u: goto label_1dae58;
        case 0x1dae5cu: goto label_1dae5c;
        case 0x1dae60u: goto label_1dae60;
        case 0x1dae64u: goto label_1dae64;
        case 0x1dae68u: goto label_1dae68;
        case 0x1dae6cu: goto label_1dae6c;
        case 0x1dae70u: goto label_1dae70;
        case 0x1dae74u: goto label_1dae74;
        case 0x1dae78u: goto label_1dae78;
        case 0x1dae7cu: goto label_1dae7c;
        case 0x1dae80u: goto label_1dae80;
        case 0x1dae84u: goto label_1dae84;
        case 0x1dae88u: goto label_1dae88;
        case 0x1dae8cu: goto label_1dae8c;
        case 0x1dae90u: goto label_1dae90;
        case 0x1dae94u: goto label_1dae94;
        case 0x1dae98u: goto label_1dae98;
        case 0x1dae9cu: goto label_1dae9c;
        case 0x1daea0u: goto label_1daea0;
        case 0x1daea4u: goto label_1daea4;
        case 0x1daea8u: goto label_1daea8;
        case 0x1daeacu: goto label_1daeac;
        case 0x1daeb0u: goto label_1daeb0;
        case 0x1daeb4u: goto label_1daeb4;
        case 0x1daeb8u: goto label_1daeb8;
        case 0x1daebcu: goto label_1daebc;
        case 0x1daec0u: goto label_1daec0;
        case 0x1daec4u: goto label_1daec4;
        case 0x1daec8u: goto label_1daec8;
        case 0x1daeccu: goto label_1daecc;
        case 0x1daed0u: goto label_1daed0;
        case 0x1daed4u: goto label_1daed4;
        case 0x1daed8u: goto label_1daed8;
        case 0x1daedcu: goto label_1daedc;
        case 0x1daee0u: goto label_1daee0;
        case 0x1daee4u: goto label_1daee4;
        case 0x1daee8u: goto label_1daee8;
        case 0x1daeecu: goto label_1daeec;
        case 0x1daef0u: goto label_1daef0;
        case 0x1daef4u: goto label_1daef4;
        case 0x1daef8u: goto label_1daef8;
        case 0x1daefcu: goto label_1daefc;
        case 0x1daf00u: goto label_1daf00;
        case 0x1daf04u: goto label_1daf04;
        case 0x1daf08u: goto label_1daf08;
        case 0x1daf0cu: goto label_1daf0c;
        case 0x1daf10u: goto label_1daf10;
        case 0x1daf14u: goto label_1daf14;
        case 0x1daf18u: goto label_1daf18;
        case 0x1daf1cu: goto label_1daf1c;
        case 0x1daf20u: goto label_1daf20;
        case 0x1daf24u: goto label_1daf24;
        case 0x1daf28u: goto label_1daf28;
        case 0x1daf2cu: goto label_1daf2c;
        case 0x1daf30u: goto label_1daf30;
        case 0x1daf34u: goto label_1daf34;
        case 0x1daf38u: goto label_1daf38;
        case 0x1daf3cu: goto label_1daf3c;
        case 0x1daf40u: goto label_1daf40;
        case 0x1daf44u: goto label_1daf44;
        case 0x1daf48u: goto label_1daf48;
        case 0x1daf4cu: goto label_1daf4c;
        case 0x1daf50u: goto label_1daf50;
        case 0x1daf54u: goto label_1daf54;
        case 0x1daf58u: goto label_1daf58;
        case 0x1daf5cu: goto label_1daf5c;
        case 0x1daf60u: goto label_1daf60;
        case 0x1daf64u: goto label_1daf64;
        case 0x1daf68u: goto label_1daf68;
        case 0x1daf6cu: goto label_1daf6c;
        case 0x1daf70u: goto label_1daf70;
        case 0x1daf74u: goto label_1daf74;
        case 0x1daf78u: goto label_1daf78;
        case 0x1daf7cu: goto label_1daf7c;
        case 0x1daf80u: goto label_1daf80;
        case 0x1daf84u: goto label_1daf84;
        case 0x1daf88u: goto label_1daf88;
        case 0x1daf8cu: goto label_1daf8c;
        case 0x1daf90u: goto label_1daf90;
        case 0x1daf94u: goto label_1daf94;
        case 0x1daf98u: goto label_1daf98;
        case 0x1daf9cu: goto label_1daf9c;
        case 0x1dafa0u: goto label_1dafa0;
        case 0x1dafa4u: goto label_1dafa4;
        case 0x1dafa8u: goto label_1dafa8;
        case 0x1dafacu: goto label_1dafac;
        case 0x1dafb0u: goto label_1dafb0;
        case 0x1dafb4u: goto label_1dafb4;
        case 0x1dafb8u: goto label_1dafb8;
        case 0x1dafbcu: goto label_1dafbc;
        case 0x1dafc0u: goto label_1dafc0;
        case 0x1dafc4u: goto label_1dafc4;
        case 0x1dafc8u: goto label_1dafc8;
        case 0x1dafccu: goto label_1dafcc;
        case 0x1dafd0u: goto label_1dafd0;
        case 0x1dafd4u: goto label_1dafd4;
        case 0x1dafd8u: goto label_1dafd8;
        case 0x1dafdcu: goto label_1dafdc;
        case 0x1dafe0u: goto label_1dafe0;
        case 0x1dafe4u: goto label_1dafe4;
        case 0x1dafe8u: goto label_1dafe8;
        case 0x1dafecu: goto label_1dafec;
        case 0x1daff0u: goto label_1daff0;
        case 0x1daff4u: goto label_1daff4;
        case 0x1daff8u: goto label_1daff8;
        case 0x1daffcu: goto label_1daffc;
        case 0x1db000u: goto label_1db000;
        case 0x1db004u: goto label_1db004;
        case 0x1db008u: goto label_1db008;
        case 0x1db00cu: goto label_1db00c;
        case 0x1db010u: goto label_1db010;
        case 0x1db014u: goto label_1db014;
        case 0x1db018u: goto label_1db018;
        case 0x1db01cu: goto label_1db01c;
        case 0x1db020u: goto label_1db020;
        case 0x1db024u: goto label_1db024;
        case 0x1db028u: goto label_1db028;
        case 0x1db02cu: goto label_1db02c;
        case 0x1db030u: goto label_1db030;
        case 0x1db034u: goto label_1db034;
        case 0x1db038u: goto label_1db038;
        case 0x1db03cu: goto label_1db03c;
        case 0x1db040u: goto label_1db040;
        case 0x1db044u: goto label_1db044;
        case 0x1db048u: goto label_1db048;
        case 0x1db04cu: goto label_1db04c;
        case 0x1db050u: goto label_1db050;
        case 0x1db054u: goto label_1db054;
        case 0x1db058u: goto label_1db058;
        case 0x1db05cu: goto label_1db05c;
        case 0x1db060u: goto label_1db060;
        case 0x1db064u: goto label_1db064;
        case 0x1db068u: goto label_1db068;
        case 0x1db06cu: goto label_1db06c;
        case 0x1db070u: goto label_1db070;
        case 0x1db074u: goto label_1db074;
        case 0x1db078u: goto label_1db078;
        case 0x1db07cu: goto label_1db07c;
        case 0x1db080u: goto label_1db080;
        case 0x1db084u: goto label_1db084;
        case 0x1db088u: goto label_1db088;
        case 0x1db08cu: goto label_1db08c;
        case 0x1db090u: goto label_1db090;
        case 0x1db094u: goto label_1db094;
        case 0x1db098u: goto label_1db098;
        case 0x1db09cu: goto label_1db09c;
        case 0x1db0a0u: goto label_1db0a0;
        case 0x1db0a4u: goto label_1db0a4;
        case 0x1db0a8u: goto label_1db0a8;
        case 0x1db0acu: goto label_1db0ac;
        default: break;
    }

    ctx->pc = 0x1dad00u;

label_1dad00:
    // 0x1dad00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1dad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1dad04:
    // 0x1dad04: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1dad04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1dad08:
    // 0x1dad08: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1dad08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1dad0c:
    // 0x1dad0c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1dad0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1dad10:
    // 0x1dad10: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1dad10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dad14:
    // 0x1dad14: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1dad14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1dad18:
    // 0x1dad18: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1dad18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1dad1c:
    // 0x1dad1c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1dad1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1dad20:
    // 0x1dad20: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1dad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1dad24:
    // 0x1dad24: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1dad24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_1dad28:
    // 0x1dad28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dad2c:
    // 0x1dad2c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1dad2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1dad30:
    // 0x1dad30: 0x8ef10018  lw          $s1, 0x18($s7)
    ctx->pc = 0x1dad30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_1dad34:
    // 0x1dad34: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1dad38:
    if (ctx->pc == 0x1DAD38u) {
        ctx->pc = 0x1DAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD34u;
        // 0x1dad38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD3Cu;
        goto label_1dad3c;
    }
    ctx->pc = 0x1DAD34u;
    {
        const bool branch_taken_0x1dad34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD34u;
        // 0x1dad38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad34) {
            ctx->pc = 0x1DAD88u;
            goto label_1dad88;
        }
    }
    ctx->pc = 0x1DAD3Cu;
label_1dad3c:
    // 0x1dad3c: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x1dad3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1dad40:
    // 0x1dad40: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
label_1dad44:
    if (ctx->pc == 0x1DAD44u) {
        ctx->pc = 0x1DAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD40u;
        // 0x1dad44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD48u;
        goto label_1dad48;
    }
    ctx->pc = 0x1DAD40u;
    {
        const bool branch_taken_0x1dad40 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x1DAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD40u;
        // 0x1dad44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad40) {
            ctx->pc = 0x1DAD88u;
            goto label_1dad88;
        }
    }
    ctx->pc = 0x1DAD48u;
label_1dad48:
    // 0x1dad48: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1dad48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1dad4c:
    // 0x1dad4c: 0x0  nop
    ctx->pc = 0x1dad4cu;
    // NOP
label_1dad50:
    // 0x1dad50: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1dad50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1dad54:
    // 0x1dad54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dad54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dad58:
    // 0x1dad58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1dad58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dad5c:
    // 0x1dad5c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1dad60:
    if (ctx->pc == 0x1DAD60u) {
        ctx->pc = 0x1DAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD5Cu;
        // 0x1dad60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD64u;
        goto label_1dad64;
    }
    ctx->pc = 0x1DAD5Cu;
    {
        const bool branch_taken_0x1dad5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dad5c) {
            ctx->pc = 0x1DAD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAD5Cu;
            // 0x1dad60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAD78u;
            goto label_1dad78;
        }
    }
    ctx->pc = 0x1DAD64u;
label_1dad64:
    // 0x1dad64: 0xc0bbdc0  jal         func_2EF700
label_1dad68:
    if (ctx->pc == 0x1DAD68u) {
        ctx->pc = 0x1DAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD64u;
        // 0x1dad68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD6Cu;
        goto label_1dad6c;
    }
    ctx->pc = 0x1DAD64u;
    SET_GPR_U32(ctx, 31, 0x1DAD6Cu);
    ctx->pc = 0x1DAD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD64u;
    // 0x1dad68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF700u, 0x1DAD64u, 0x1DAD6Cu)) {
        return;
    }
    ctx->pc = 0x1DAD6Cu;
label_1dad6c:
    // 0x1dad6c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1dad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1dad70:
    // 0x1dad70: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1dad70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
label_1dad74:
    // 0x1dad74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dad74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dad78:
    // 0x1dad78: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1dad78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1dad7c:
    // 0x1dad7c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_1dad80:
    if (ctx->pc == 0x1DAD80u) {
        ctx->pc = 0x1DAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD7Cu;
        // 0x1dad80: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD84u;
        goto label_1dad84;
    }
    ctx->pc = 0x1DAD7Cu;
    {
        const bool branch_taken_0x1dad7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dad7c) {
            ctx->pc = 0x1DAD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAD7Cu;
            // 0x1dad80: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dad50;
        }
    }
    ctx->pc = 0x1DAD84u;
label_1dad84:
    // 0x1dad84: 0x8ef10018  lw          $s1, 0x18($s7)
    ctx->pc = 0x1dad84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_1dad88:
    // 0x1dad88: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1dad88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dad8c:
    // 0x1dad8c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_1dad90:
    if (ctx->pc == 0x1DAD90u) {
        ctx->pc = 0x1DAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD8Cu;
        // 0x1dad90: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD94u;
        goto label_1dad94;
    }
    ctx->pc = 0x1DAD8Cu;
    {
        const bool branch_taken_0x1dad8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD8Cu;
        // 0x1dad90: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad8c) {
            ctx->pc = 0x1DADDCu;
            goto label_1daddc;
        }
    }
    ctx->pc = 0x1DAD94u;
label_1dad94:
    // 0x1dad94: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x1dad94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1dad98:
    // 0x1dad98: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
label_1dad9c:
    if (ctx->pc == 0x1DAD9Cu) {
        ctx->pc = 0x1DAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD98u;
        // 0x1dad9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADA0u;
        goto label_1dada0;
    }
    ctx->pc = 0x1DAD98u;
    {
        const bool branch_taken_0x1dad98 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x1DAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD98u;
        // 0x1dad9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad98) {
            ctx->pc = 0x1DADDCu;
            goto label_1daddc;
        }
    }
    ctx->pc = 0x1DADA0u;
label_1dada0:
    // 0x1dada0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1dada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1dada4:
    // 0x1dada4: 0x0  nop
    ctx->pc = 0x1dada4u;
    // NOP
label_1dada8:
    // 0x1dada8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1dada8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1dadac:
    // 0x1dadac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dadacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dadb0:
    // 0x1dadb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1dadb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dadb4:
    // 0x1dadb4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1dadb8:
    if (ctx->pc == 0x1DADB8u) {
        ctx->pc = 0x1DADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADB4u;
        // 0x1dadb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADBCu;
        goto label_1dadbc;
    }
    ctx->pc = 0x1DADB4u;
    {
        const bool branch_taken_0x1dadb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADB4u;
        // 0x1dadb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dadb4) {
            ctx->pc = 0x1DADD0u;
            goto label_1dadd0;
        }
    }
    ctx->pc = 0x1DADBCu;
label_1dadbc:
    // 0x1dadbc: 0xc07811a  jal         func_1E0468
label_1dadc0:
    if (ctx->pc == 0x1DADC0u) {
        ctx->pc = 0x1DADC4u;
        goto label_1dadc4;
    }
    ctx->pc = 0x1DADBCu;
    SET_GPR_U32(ctx, 31, 0x1DADC4u);
    ctx->pc = 0x1E0468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0468u, 0x1DADBCu, 0x1DADC4u)) {
        return;
    }
    ctx->pc = 0x1DADC4u;
label_1dadc4:
    // 0x1dadc4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1dadc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1dadc8:
    // 0x1dadc8: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x1dadc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1dadcc:
    // 0x1dadcc: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x1dadccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3));
label_1dadd0:
    // 0x1dadd0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1dadd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1dadd4:
    // 0x1dadd4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_1dadd8:
    if (ctx->pc == 0x1DADD8u) {
        ctx->pc = 0x1DADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADD4u;
        // 0x1dadd8: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADDCu;
        goto label_1daddc;
    }
    ctx->pc = 0x1DADD4u;
    {
        const bool branch_taken_0x1dadd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dadd4) {
            ctx->pc = 0x1DADD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DADD4u;
            // 0x1dadd8: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DADA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dada8;
        }
    }
    ctx->pc = 0x1DADDCu;
label_1daddc:
    // 0x1daddc: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_1dade0:
    if (ctx->pc == 0x1DADE0u) {
        ctx->pc = 0x1DADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADDCu;
        // 0x1dade0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADE4u;
        goto label_1dade4;
    }
    ctx->pc = 0x1DADDCu;
    {
        const bool branch_taken_0x1daddc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADDCu;
        // 0x1dade0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daddc) {
            ctx->pc = 0x1DADECu;
            goto label_1dadec;
        }
    }
    ctx->pc = 0x1DADE4u;
label_1dade4:
    // 0x1dade4: 0x12a000a5  beqz        $s5, . + 4 + (0xA5 << 2)
label_1dade8:
    if (ctx->pc == 0x1DADE8u) {
        ctx->pc = 0x1DADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADE4u;
        // 0x1dade8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADECu;
        goto label_1dadec;
    }
    ctx->pc = 0x1DADE4u;
    {
        const bool branch_taken_0x1dade4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADE4u;
        // 0x1dade8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dade4) {
            ctx->pc = 0x1DB07Cu;
            goto label_1db07c;
        }
    }
    ctx->pc = 0x1DADECu;
label_1dadec:
    // 0x1dadec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1dadecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1dadf0:
    // 0x1dadf0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1dadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1dadf4:
    // 0x1dadf4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1dadf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1dadf8:
    // 0x1dadf8: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x1dadf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1dadfc:
    // 0x1dadfc: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x1dadfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1dae00:
    // 0x1dae00: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1dae00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dae04:
    // 0x1dae04: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x1dae04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_1dae08:
    // 0x1dae08: 0x153880  sll         $a3, $s5, 2
    ctx->pc = 0x1dae08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1dae0c:
    // 0x1dae0c: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x1dae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_1dae10:
    // 0x1dae10: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1dae10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dae14:
    // 0x1dae14: 0x24630044  addiu       $v1, $v1, 0x44
    ctx->pc = 0x1dae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
label_1dae18:
    // 0x1dae18: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1dae18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1dae1c:
    // 0x1dae1c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1dae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1dae20:
    // 0x1dae20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dae20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dae24:
    // 0x1dae24: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1dae24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1dae28:
    // 0x1dae28: 0x40f809  jalr        $v0
label_1dae2c:
    if (ctx->pc == 0x1DAE2Cu) {
        ctx->pc = 0x1DAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE28u;
        // 0x1dae2c: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE30u;
        goto label_1dae30;
    }
    ctx->pc = 0x1DAE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAE30u);
        ctx->pc = 0x1DAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE28u;
        // 0x1dae2c: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAE28u, 0x1DAE30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DAE30u;
label_1dae30:
    // 0x1dae30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dae30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dae34:
    // 0x1dae34: 0x12000091  beqz        $s0, . + 4 + (0x91 << 2)
label_1dae38:
    if (ctx->pc == 0x1DAE38u) {
        ctx->pc = 0x1DAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE34u;
        // 0x1dae38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE3Cu;
        goto label_1dae3c;
    }
    ctx->pc = 0x1DAE34u;
    {
        const bool branch_taken_0x1dae34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE34u;
        // 0x1dae38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae34) {
            ctx->pc = 0x1DB07Cu;
            goto label_1db07c;
        }
    }
    ctx->pc = 0x1DAE3Cu;
label_1dae3c:
    // 0x1dae3c: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
label_1dae40:
    if (ctx->pc == 0x1DAE40u) {
        ctx->pc = 0x1DAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE3Cu;
        // 0x1dae40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE44u;
        goto label_1dae44;
    }
    ctx->pc = 0x1DAE3Cu;
    {
        const bool branch_taken_0x1dae3c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1DAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE3Cu;
        // 0x1dae40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae3c) {
            ctx->pc = 0x1DAE74u;
            goto label_1dae74;
        }
    }
    ctx->pc = 0x1DAE44u;
label_1dae44:
    // 0x1dae44: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x1dae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_1dae48:
    // 0x1dae48: 0x1388c0  sll         $s1, $s3, 3
    ctx->pc = 0x1dae48u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_1dae4c:
    // 0x1dae4c: 0x40f809  jalr        $v0
label_1dae50:
    if (ctx->pc == 0x1DAE50u) {
        ctx->pc = 0x1DAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE4Cu;
        // 0x1dae50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE54u;
        goto label_1dae54;
    }
    ctx->pc = 0x1DAE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAE54u);
        ctx->pc = 0x1DAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE4Cu;
        // 0x1dae50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAE4Cu, 0x1DAE54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DAE54u;
label_1dae54:
    // 0x1dae54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dae54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dae58:
    // 0x1dae58: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_1dae5c:
    if (ctx->pc == 0x1DAE5Cu) {
        ctx->pc = 0x1DAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE58u;
        // 0x1dae5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE60u;
        goto label_1dae60;
    }
    ctx->pc = 0x1DAE58u;
    {
        const bool branch_taken_0x1dae58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE58u;
        // 0x1dae5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae58) {
            ctx->pc = 0x1DAE80u;
            goto label_1dae80;
        }
    }
    ctx->pc = 0x1DAE60u;
label_1dae60:
    // 0x1dae60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dae64:
    // 0x1dae64: 0xc0c493d  jal         func_3124F4
label_1dae68:
    if (ctx->pc == 0x1DAE68u) {
        ctx->pc = 0x1DAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE64u;
        // 0x1dae68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE6Cu;
        goto label_1dae6c;
    }
    ctx->pc = 0x1DAE64u;
    SET_GPR_U32(ctx, 31, 0x1DAE6Cu);
    ctx->pc = 0x1DAE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE64u;
    // 0x1dae68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1DAE64u, 0x1DAE6Cu)) {
        return;
    }
    ctx->pc = 0x1DAE6Cu;
label_1dae6c:
    // 0x1dae6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1dae70:
    if (ctx->pc == 0x1DAE70u) {
        ctx->pc = 0x1DAE74u;
        goto label_1dae74;
    }
    ctx->pc = 0x1DAE6Cu;
    {
        const bool branch_taken_0x1dae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dae6c) {
            ctx->pc = 0x1DAE78u;
            goto label_1dae78;
        }
    }
    ctx->pc = 0x1DAE74u;
label_1dae74:
    // 0x1dae74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dae74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dae78:
    // 0x1dae78: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_1dae7c:
    if (ctx->pc == 0x1DAE7Cu) {
        ctx->pc = 0x1DAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE78u;
        // 0x1dae7c: 0x26020044  addiu       $v0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE80u;
        goto label_1dae80;
    }
    ctx->pc = 0x1DAE78u;
    {
        const bool branch_taken_0x1dae78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE78u;
        // 0x1dae7c: 0x26020044  addiu       $v0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae78) {
            ctx->pc = 0x1DAE8Cu;
            goto label_1dae8c;
        }
    }
    ctx->pc = 0x1DAE80u;
label_1dae80:
    // 0x1dae80: 0x5660007a  bnel        $s3, $zero, . + 4 + (0x7A << 2)
label_1dae84:
    if (ctx->pc == 0x1DAE84u) {
        ctx->pc = 0x1DAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE80u;
        // 0x1dae84: 0x27c30fc8  addiu       $v1, $fp, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE88u;
        goto label_1dae88;
    }
    ctx->pc = 0x1DAE80u;
    {
        const bool branch_taken_0x1dae80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dae80) {
            ctx->pc = 0x1DAE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAE80u;
            // 0x1dae84: 0x27c30fc8  addiu       $v1, $fp, 0xFC8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4040));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB06Cu;
            goto label_1db06c;
        }
    }
    ctx->pc = 0x1DAE88u;
label_1dae88:
    // 0x1dae88: 0x26020044  addiu       $v0, $s0, 0x44
    ctx->pc = 0x1dae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_1dae8c:
    // 0x1dae8c: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x1dae8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1dae90:
    // 0x1dae90: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1dae90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1dae94:
    // 0x1dae94: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x1dae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1dae98:
    // 0x1dae98: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x1dae98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
label_1dae9c:
    // 0x1dae9c: 0x26090018  addiu       $t1, $s0, 0x18
    ctx->pc = 0x1dae9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1daea0:
    // 0x1daea0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1daea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1daea4:
    // 0x1daea4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1daea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1daea8:
    // 0x1daea8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1daea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1daeac:
    // 0x1daeac: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1daeacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1daeb0:
    // 0x1daeb0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1daeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1daeb4:
    // 0x1daeb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1daeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1daeb8:
    // 0x1daeb8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1daeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1daebc:
    // 0x1daebc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1daebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_1daec0:
    // 0x1daec0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1daec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1daec4:
    // 0x1daec4: 0x0  nop
    ctx->pc = 0x1daec4u;
    // NOP
label_1daec8:
    // 0x1daec8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1daec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1daecc:
    // 0x1daecc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1daeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1daed0:
    // 0x1daed0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1daed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1daed4:
    // 0x1daed4: 0x0  nop
    ctx->pc = 0x1daed4u;
    // NOP
label_1daed8:
    // 0x1daed8: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
label_1daedc:
    if (ctx->pc == 0x1DAEDCu) {
        ctx->pc = 0x1DAEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAED8u;
        // 0x1daedc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAEE0u;
        goto label_1daee0;
    }
    ctx->pc = 0x1DAED8u;
    {
        const bool branch_taken_0x1daed8 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DAEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAED8u;
        // 0x1daedc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daed8) {
            ctx->pc = 0x1DAEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daec8;
        }
    }
    ctx->pc = 0x1DAEE0u;
label_1daee0:
    // 0x1daee0: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x1daee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_1daee4:
    // 0x1daee4: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x1daee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1daee8:
    // 0x1daee8: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x1daee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_1daeec:
    // 0x1daeec: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x1daeecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1daef0:
    // 0x1daef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1daef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1daef4:
    // 0x1daef4: 0x0  nop
    ctx->pc = 0x1daef4u;
    // NOP
label_1daef8:
    // 0x1daef8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1daef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1daefc:
    // 0x1daefc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1daefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1daf00:
    // 0x1daf00: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1daf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1daf04:
    // 0x1daf04: 0x0  nop
    ctx->pc = 0x1daf04u;
    // NOP
label_1daf08:
    // 0x1daf08: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
label_1daf0c:
    if (ctx->pc == 0x1DAF0Cu) {
        ctx->pc = 0x1DAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF08u;
        // 0x1daf0c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF10u;
        goto label_1daf10;
    }
    ctx->pc = 0x1DAF08u;
    {
        const bool branch_taken_0x1daf08 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF08u;
        // 0x1daf0c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf08) {
            ctx->pc = 0x1DAEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daef8;
        }
    }
    ctx->pc = 0x1DAF10u;
label_1daf10:
    // 0x1daf10: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x1daf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1daf14:
    // 0x1daf14: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1daf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1daf18:
    // 0x1daf18: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1daf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1daf1c:
    // 0x1daf1c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1daf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_1daf20:
    // 0x1daf20: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x1daf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_1daf24:
    // 0x1daf24: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
label_1daf28:
    if (ctx->pc == 0x1DAF28u) {
        ctx->pc = 0x1DAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF24u;
        // 0x1daf28: 0xae120024  sw          $s2, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF2Cu;
        goto label_1daf2c;
    }
    ctx->pc = 0x1DAF24u;
    {
        const bool branch_taken_0x1daf24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF24u;
        // 0x1daf28: 0xae120024  sw          $s2, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf24) {
            ctx->pc = 0x1DAF58u;
            goto label_1daf58;
        }
    }
    ctx->pc = 0x1DAF2Cu;
label_1daf2c:
    // 0x1daf2c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1daf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1daf30:
    // 0x1daf30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1daf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1daf34:
    // 0x1daf34: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1daf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1daf38:
    // 0x1daf38: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x1daf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1daf3c:
    // 0x1daf3c: 0x0  nop
    ctx->pc = 0x1daf3cu;
    // NOP
label_1daf40:
    // 0x1daf40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1daf40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1daf44:
    // 0x1daf44: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1daf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1daf48:
    // 0x1daf48: 0x0  nop
    ctx->pc = 0x1daf48u;
    // NOP
label_1daf4c:
    // 0x1daf4c: 0x0  nop
    ctx->pc = 0x1daf4cu;
    // NOP
label_1daf50:
    // 0x1daf50: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
label_1daf54:
    if (ctx->pc == 0x1DAF54u) {
        ctx->pc = 0x1DAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF50u;
        // 0x1daf54: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF58u;
        goto label_1daf58;
    }
    ctx->pc = 0x1DAF50u;
    {
        const bool branch_taken_0x1daf50 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF50u;
        // 0x1daf54: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf50) {
            ctx->pc = 0x1DAF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daf40;
        }
    }
    ctx->pc = 0x1DAF58u;
label_1daf58:
    // 0x1daf58: 0x16a0000b  bnez        $s5, . + 4 + (0xB << 2)
label_1daf5c:
    if (ctx->pc == 0x1DAF5Cu) {
        ctx->pc = 0x1DAF60u;
        goto label_1daf60;
    }
    ctx->pc = 0x1DAF58u;
    {
        const bool branch_taken_0x1daf58 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daf58) {
            ctx->pc = 0x1DAF88u;
            goto label_1daf88;
        }
    }
    ctx->pc = 0x1DAF60u;
label_1daf60:
    // 0x1daf60: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1daf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1daf64:
    // 0x1daf64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1daf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1daf68:
    // 0x1daf68: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1daf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1daf6c:
    // 0x1daf6c: 0x25220004  addiu       $v0, $t1, 0x4
    ctx->pc = 0x1daf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1daf70:
    // 0x1daf70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1daf70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1daf74:
    // 0x1daf74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1daf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1daf78:
    // 0x1daf78: 0x0  nop
    ctx->pc = 0x1daf78u;
    // NOP
label_1daf7c:
    // 0x1daf7c: 0x0  nop
    ctx->pc = 0x1daf7cu;
    // NOP
label_1daf80:
    // 0x1daf80: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
label_1daf84:
    if (ctx->pc == 0x1DAF84u) {
        ctx->pc = 0x1DAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF80u;
        // 0x1daf84: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF88u;
        goto label_1daf88;
    }
    ctx->pc = 0x1DAF80u;
    {
        const bool branch_taken_0x1daf80 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF80u;
        // 0x1daf84: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf80) {
            ctx->pc = 0x1DAF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daf70;
        }
    }
    ctx->pc = 0x1DAF88u;
label_1daf88:
    // 0x1daf88: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
label_1daf8c:
    if (ctx->pc == 0x1DAF8Cu) {
        ctx->pc = 0x1DAF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF88u;
        // 0x1daf8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF90u;
        goto label_1daf90;
    }
    ctx->pc = 0x1DAF88u;
    {
        const bool branch_taken_0x1daf88 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1DAF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF88u;
        // 0x1daf8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf88) {
            ctx->pc = 0x1DAFF0u;
            goto label_1daff0;
        }
    }
    ctx->pc = 0x1DAF90u;
label_1daf90:
    // 0x1daf90: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1daf90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1daf94:
    // 0x1daf94: 0x0  nop
    ctx->pc = 0x1daf94u;
    // NOP
label_1daf98:
    // 0x1daf98: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1daf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1daf9c:
    // 0x1daf9c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1daf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1dafa0:
    // 0x1dafa0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dafa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dafa4:
    // 0x1dafa4: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x1dafa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1dafa8:
    // 0x1dafa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dafac:
    // 0x1dafac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1dafacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dafb0:
    // 0x1dafb0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1dafb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1dafb4:
    // 0x1dafb4: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1dafb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dafb8:
    // 0x1dafb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1dafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dafbc:
    // 0x1dafbc: 0x0  nop
    ctx->pc = 0x1dafbcu;
    // NOP
label_1dafc0:
    // 0x1dafc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dafc4:
    // 0x1dafc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dafc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1dafc8:
    // 0x1dafc8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1dafc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1dafcc:
    // 0x1dafcc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1dafccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1dafd0:
    // 0x1dafd0: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_1dafd4:
    if (ctx->pc == 0x1DAFD4u) {
        ctx->pc = 0x1DAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFD0u;
        // 0x1dafd4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAFD8u;
        goto label_1dafd8;
    }
    ctx->pc = 0x1DAFD0u;
    {
        const bool branch_taken_0x1dafd0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1DAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFD0u;
        // 0x1dafd4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafd0) {
            ctx->pc = 0x1DAFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dafc0;
        }
    }
    ctx->pc = 0x1DAFD8u;
label_1dafd8:
    // 0x1dafd8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1dafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1dafdc:
    // 0x1dafdc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1dafdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1dafe0:
    // 0x1dafe0: 0xb3182a  slt         $v1, $a1, $s3
    ctx->pc = 0x1dafe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1dafe4:
    // 0x1dafe4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1dafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1dafe8:
    // 0x1dafe8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_1dafec:
    if (ctx->pc == 0x1DAFECu) {
        ctx->pc = 0x1DAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFE8u;
        // 0x1dafec: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAFF0u;
        goto label_1daff0;
    }
    ctx->pc = 0x1DAFE8u;
    {
        const bool branch_taken_0x1dafe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFE8u;
        // 0x1dafec: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafe8) {
            ctx->pc = 0x1DAF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daf98;
        }
    }
    ctx->pc = 0x1DAFF0u;
label_1daff0:
    // 0x1daff0: 0x1aa00019  blez        $s5, . + 4 + (0x19 << 2)
label_1daff4:
    if (ctx->pc == 0x1DAFF4u) {
        ctx->pc = 0x1DAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFF0u;
        // 0x1daff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAFF8u;
        goto label_1daff8;
    }
    ctx->pc = 0x1DAFF0u;
    {
        const bool branch_taken_0x1daff0 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x1DAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFF0u;
        // 0x1daff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daff0) {
            ctx->pc = 0x1DB058u;
            goto label_1db058;
        }
    }
    ctx->pc = 0x1DAFF8u;
label_1daff8:
    // 0x1daff8: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1daff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1daffc:
    // 0x1daffc: 0x0  nop
    ctx->pc = 0x1daffcu;
    // NOP
label_1db000:
    // 0x1db000: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1db000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1db004:
    // 0x1db004: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1db004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1db008:
    // 0x1db008: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1db008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db00c:
    // 0x1db00c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x1db00cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1db010:
    // 0x1db010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db014:
    // 0x1db014: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1db014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1db018:
    // 0x1db018: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1db018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1db01c:
    // 0x1db01c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1db01cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1db020:
    // 0x1db020: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1db020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db024:
    // 0x1db024: 0x0  nop
    ctx->pc = 0x1db024u;
    // NOP
label_1db028:
    // 0x1db028: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1db028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1db02c:
    // 0x1db02c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1db02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1db030:
    // 0x1db030: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1db030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1db034:
    // 0x1db034: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1db034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1db038:
    // 0x1db038: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_1db03c:
    if (ctx->pc == 0x1DB03Cu) {
        ctx->pc = 0x1DB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB038u;
        // 0x1db03c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB040u;
        goto label_1db040;
    }
    ctx->pc = 0x1DB038u;
    {
        const bool branch_taken_0x1db038 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1DB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB038u;
        // 0x1db03c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db038) {
            ctx->pc = 0x1DB028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db028;
        }
    }
    ctx->pc = 0x1DB040u;
label_1db040:
    // 0x1db040: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1db040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1db044:
    // 0x1db044: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1db044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1db048:
    // 0x1db048: 0xb5182a  slt         $v1, $a1, $s5
    ctx->pc = 0x1db048u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1db04c:
    // 0x1db04c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1db04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1db050:
    // 0x1db050: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_1db054:
    if (ctx->pc == 0x1DB054u) {
        ctx->pc = 0x1DB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB050u;
        // 0x1db054: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB058u;
        goto label_1db058;
    }
    ctx->pc = 0x1DB050u;
    {
        const bool branch_taken_0x1db050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB050u;
        // 0x1db054: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db050) {
            ctx->pc = 0x1DB000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db000;
        }
    }
    ctx->pc = 0x1DB058u;
label_1db058:
    // 0x1db058: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1db058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1db05c:
    // 0x1db05c: 0xc076c2c  jal         func_1DB0B0
label_1db060:
    if (ctx->pc == 0x1DB060u) {
        ctx->pc = 0x1DB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB05Cu;
        // 0x1db060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB064u;
        goto label_1db064;
    }
    ctx->pc = 0x1DB05Cu;
    SET_GPR_U32(ctx, 31, 0x1DB064u);
    ctx->pc = 0x1DB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB05Cu;
    // 0x1db060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB0B0u, 0x1DB05Cu, 0x1DB064u)) {
        return;
    }
    ctx->pc = 0x1DB064u;
label_1db064:
    // 0x1db064: 0x10000005  b           . + 4 + (0x5 << 2)
label_1db068:
    if (ctx->pc == 0x1DB068u) {
        ctx->pc = 0x1DB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB064u;
        // 0x1db068: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB06Cu;
        goto label_1db06c;
    }
    ctx->pc = 0x1DB064u;
    {
        const bool branch_taken_0x1db064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB064u;
        // 0x1db068: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db064) {
            ctx->pc = 0x1DB07Cu;
            goto label_1db07c;
        }
    }
    ctx->pc = 0x1DB06Cu;
label_1db06c:
    // 0x1db06c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x1db06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1db070:
    // 0x1db070: 0x40f809  jalr        $v0
label_1db074:
    if (ctx->pc == 0x1DB074u) {
        ctx->pc = 0x1DB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB070u;
        // 0x1db074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB078u;
        goto label_1db078;
    }
    ctx->pc = 0x1DB070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB078u);
        ctx->pc = 0x1DB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB070u;
        // 0x1db074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB070u, 0x1DB078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB078u;
label_1db078:
    // 0x1db078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db07c:
    // 0x1db07c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1db07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1db080:
    // 0x1db080: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1db080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1db084:
    // 0x1db084: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1db084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1db088:
    // 0x1db088: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1db088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1db08c:
    // 0x1db08c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1db08cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1db090:
    // 0x1db090: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1db090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1db094:
    // 0x1db094: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1db094u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1db098:
    // 0x1db098: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1db098u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db09c:
    // 0x1db09c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1db09cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db0a0:
    // 0x1db0a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db0a4:
    // 0x1db0a4: 0x3e00008  jr          $ra
label_1db0a8:
    if (ctx->pc == 0x1DB0A8u) {
        ctx->pc = 0x1DB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0A4u;
        // 0x1db0a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0ACu;
        goto label_1db0ac;
    }
    ctx->pc = 0x1DB0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0A4u;
        // 0x1db0a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB0ACu;
label_1db0ac:
    // 0x1db0ac: 0x0  nop
    ctx->pc = 0x1db0acu;
    // NOP
    ctx->pc = 0x1db0b0u;
}
