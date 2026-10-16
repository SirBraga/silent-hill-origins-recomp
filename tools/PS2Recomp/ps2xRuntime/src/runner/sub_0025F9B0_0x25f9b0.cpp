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

// Function: sub_0025F9B0
// Address: 0x25f9b0 - 0x25fc28
void sub_0025F9B0_0x25f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F9B0_0x25f9b0");
#endif

    switch (ctx->pc) {
        case 0x25f9b0u: goto label_25f9b0;
        case 0x25f9b4u: goto label_25f9b4;
        case 0x25f9b8u: goto label_25f9b8;
        case 0x25f9bcu: goto label_25f9bc;
        case 0x25f9c0u: goto label_25f9c0;
        case 0x25f9c4u: goto label_25f9c4;
        case 0x25f9c8u: goto label_25f9c8;
        case 0x25f9ccu: goto label_25f9cc;
        case 0x25f9d0u: goto label_25f9d0;
        case 0x25f9d4u: goto label_25f9d4;
        case 0x25f9d8u: goto label_25f9d8;
        case 0x25f9dcu: goto label_25f9dc;
        case 0x25f9e0u: goto label_25f9e0;
        case 0x25f9e4u: goto label_25f9e4;
        case 0x25f9e8u: goto label_25f9e8;
        case 0x25f9ecu: goto label_25f9ec;
        case 0x25f9f0u: goto label_25f9f0;
        case 0x25f9f4u: goto label_25f9f4;
        case 0x25f9f8u: goto label_25f9f8;
        case 0x25f9fcu: goto label_25f9fc;
        case 0x25fa00u: goto label_25fa00;
        case 0x25fa04u: goto label_25fa04;
        case 0x25fa08u: goto label_25fa08;
        case 0x25fa0cu: goto label_25fa0c;
        case 0x25fa10u: goto label_25fa10;
        case 0x25fa14u: goto label_25fa14;
        case 0x25fa18u: goto label_25fa18;
        case 0x25fa1cu: goto label_25fa1c;
        case 0x25fa20u: goto label_25fa20;
        case 0x25fa24u: goto label_25fa24;
        case 0x25fa28u: goto label_25fa28;
        case 0x25fa2cu: goto label_25fa2c;
        case 0x25fa30u: goto label_25fa30;
        case 0x25fa34u: goto label_25fa34;
        case 0x25fa38u: goto label_25fa38;
        case 0x25fa3cu: goto label_25fa3c;
        case 0x25fa40u: goto label_25fa40;
        case 0x25fa44u: goto label_25fa44;
        case 0x25fa48u: goto label_25fa48;
        case 0x25fa4cu: goto label_25fa4c;
        case 0x25fa50u: goto label_25fa50;
        case 0x25fa54u: goto label_25fa54;
        case 0x25fa58u: goto label_25fa58;
        case 0x25fa5cu: goto label_25fa5c;
        case 0x25fa60u: goto label_25fa60;
        case 0x25fa64u: goto label_25fa64;
        case 0x25fa68u: goto label_25fa68;
        case 0x25fa6cu: goto label_25fa6c;
        case 0x25fa70u: goto label_25fa70;
        case 0x25fa74u: goto label_25fa74;
        case 0x25fa78u: goto label_25fa78;
        case 0x25fa7cu: goto label_25fa7c;
        case 0x25fa80u: goto label_25fa80;
        case 0x25fa84u: goto label_25fa84;
        case 0x25fa88u: goto label_25fa88;
        case 0x25fa8cu: goto label_25fa8c;
        case 0x25fa90u: goto label_25fa90;
        case 0x25fa94u: goto label_25fa94;
        case 0x25fa98u: goto label_25fa98;
        case 0x25fa9cu: goto label_25fa9c;
        case 0x25faa0u: goto label_25faa0;
        case 0x25faa4u: goto label_25faa4;
        case 0x25faa8u: goto label_25faa8;
        case 0x25faacu: goto label_25faac;
        case 0x25fab0u: goto label_25fab0;
        case 0x25fab4u: goto label_25fab4;
        case 0x25fab8u: goto label_25fab8;
        case 0x25fabcu: goto label_25fabc;
        case 0x25fac0u: goto label_25fac0;
        case 0x25fac4u: goto label_25fac4;
        case 0x25fac8u: goto label_25fac8;
        case 0x25faccu: goto label_25facc;
        case 0x25fad0u: goto label_25fad0;
        case 0x25fad4u: goto label_25fad4;
        case 0x25fad8u: goto label_25fad8;
        case 0x25fadcu: goto label_25fadc;
        case 0x25fae0u: goto label_25fae0;
        case 0x25fae4u: goto label_25fae4;
        case 0x25fae8u: goto label_25fae8;
        case 0x25faecu: goto label_25faec;
        case 0x25faf0u: goto label_25faf0;
        case 0x25faf4u: goto label_25faf4;
        case 0x25faf8u: goto label_25faf8;
        case 0x25fafcu: goto label_25fafc;
        case 0x25fb00u: goto label_25fb00;
        case 0x25fb04u: goto label_25fb04;
        case 0x25fb08u: goto label_25fb08;
        case 0x25fb0cu: goto label_25fb0c;
        case 0x25fb10u: goto label_25fb10;
        case 0x25fb14u: goto label_25fb14;
        case 0x25fb18u: goto label_25fb18;
        case 0x25fb1cu: goto label_25fb1c;
        case 0x25fb20u: goto label_25fb20;
        case 0x25fb24u: goto label_25fb24;
        case 0x25fb28u: goto label_25fb28;
        case 0x25fb2cu: goto label_25fb2c;
        case 0x25fb30u: goto label_25fb30;
        case 0x25fb34u: goto label_25fb34;
        case 0x25fb38u: goto label_25fb38;
        case 0x25fb3cu: goto label_25fb3c;
        case 0x25fb40u: goto label_25fb40;
        case 0x25fb44u: goto label_25fb44;
        case 0x25fb48u: goto label_25fb48;
        case 0x25fb4cu: goto label_25fb4c;
        case 0x25fb50u: goto label_25fb50;
        case 0x25fb54u: goto label_25fb54;
        case 0x25fb58u: goto label_25fb58;
        case 0x25fb5cu: goto label_25fb5c;
        case 0x25fb60u: goto label_25fb60;
        case 0x25fb64u: goto label_25fb64;
        case 0x25fb68u: goto label_25fb68;
        case 0x25fb6cu: goto label_25fb6c;
        case 0x25fb70u: goto label_25fb70;
        case 0x25fb74u: goto label_25fb74;
        case 0x25fb78u: goto label_25fb78;
        case 0x25fb7cu: goto label_25fb7c;
        case 0x25fb80u: goto label_25fb80;
        case 0x25fb84u: goto label_25fb84;
        case 0x25fb88u: goto label_25fb88;
        case 0x25fb8cu: goto label_25fb8c;
        case 0x25fb90u: goto label_25fb90;
        case 0x25fb94u: goto label_25fb94;
        case 0x25fb98u: goto label_25fb98;
        case 0x25fb9cu: goto label_25fb9c;
        case 0x25fba0u: goto label_25fba0;
        case 0x25fba4u: goto label_25fba4;
        case 0x25fba8u: goto label_25fba8;
        case 0x25fbacu: goto label_25fbac;
        case 0x25fbb0u: goto label_25fbb0;
        case 0x25fbb4u: goto label_25fbb4;
        case 0x25fbb8u: goto label_25fbb8;
        case 0x25fbbcu: goto label_25fbbc;
        case 0x25fbc0u: goto label_25fbc0;
        case 0x25fbc4u: goto label_25fbc4;
        case 0x25fbc8u: goto label_25fbc8;
        case 0x25fbccu: goto label_25fbcc;
        case 0x25fbd0u: goto label_25fbd0;
        case 0x25fbd4u: goto label_25fbd4;
        case 0x25fbd8u: goto label_25fbd8;
        case 0x25fbdcu: goto label_25fbdc;
        case 0x25fbe0u: goto label_25fbe0;
        case 0x25fbe4u: goto label_25fbe4;
        case 0x25fbe8u: goto label_25fbe8;
        case 0x25fbecu: goto label_25fbec;
        case 0x25fbf0u: goto label_25fbf0;
        case 0x25fbf4u: goto label_25fbf4;
        case 0x25fbf8u: goto label_25fbf8;
        case 0x25fbfcu: goto label_25fbfc;
        case 0x25fc00u: goto label_25fc00;
        case 0x25fc04u: goto label_25fc04;
        case 0x25fc08u: goto label_25fc08;
        case 0x25fc0cu: goto label_25fc0c;
        case 0x25fc10u: goto label_25fc10;
        case 0x25fc14u: goto label_25fc14;
        case 0x25fc18u: goto label_25fc18;
        case 0x25fc1cu: goto label_25fc1c;
        case 0x25fc20u: goto label_25fc20;
        case 0x25fc24u: goto label_25fc24;
        default: break;
    }

    ctx->pc = 0x25f9b0u;

label_25f9b0:
    // 0x25f9b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x25f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_25f9b4:
    // 0x25f9b4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x25f9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_25f9b8:
    // 0x25f9b8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x25f9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_25f9bc:
    // 0x25f9bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25f9bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25f9c0:
    // 0x25f9c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25f9c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25f9c4:
    // 0x25f9c4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x25f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_25f9c8:
    // 0x25f9c8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x25f9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_25f9cc:
    // 0x25f9cc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x25f9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_25f9d0:
    // 0x25f9d0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x25f9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_25f9d4:
    // 0x25f9d4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x25f9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_25f9d8:
    // 0x25f9d8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x25f9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_25f9dc:
    // 0x25f9dc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x25f9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_25f9e0:
    // 0x25f9e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25f9e4:
    // 0x25f9e4: 0xc097188  jal         func_25C620
label_25f9e8:
    if (ctx->pc == 0x25F9E8u) {
        ctx->pc = 0x25F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9E4u;
        // 0x25f9e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F9ECu;
        goto label_25f9ec;
    }
    ctx->pc = 0x25F9E4u;
    SET_GPR_U32(ctx, 31, 0x25F9ECu);
    ctx->pc = 0x25F9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F9E4u;
    // 0x25f9e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C620u, 0x25F9E4u, 0x25F9ECu)) {
        return;
    }
    ctx->pc = 0x25F9ECu;
label_25f9ec:
    // 0x25f9ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25f9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25f9f0:
    // 0x25f9f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f9f4:
    // 0x25f9f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25f9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f9f8:
    // 0x25f9f8: 0xc09270a  jal         func_249C28
label_25f9fc:
    if (ctx->pc == 0x25F9FCu) {
        ctx->pc = 0x25F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9F8u;
        // 0x25f9fc: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA00u;
        goto label_25fa00;
    }
    ctx->pc = 0x25F9F8u;
    SET_GPR_U32(ctx, 31, 0x25FA00u);
    ctx->pc = 0x25F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F9F8u;
    // 0x25f9fc: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x25F9F8u, 0x25FA00u)) {
        return;
    }
    ctx->pc = 0x25FA00u;
label_25fa00:
    // 0x25fa00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25fa04:
    if (ctx->pc == 0x25FA04u) {
        ctx->pc = 0x25FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA00u;
        // 0x25fa04: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA08u;
        goto label_25fa08;
    }
    ctx->pc = 0x25FA00u;
    {
        const bool branch_taken_0x25fa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA00u;
        // 0x25fa04: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa00) {
            ctx->pc = 0x25FA40u;
            goto label_25fa40;
        }
    }
    ctx->pc = 0x25FA08u;
label_25fa08:
    // 0x25fa08: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x25fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_25fa0c:
    // 0x25fa0c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x25fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_25fa10:
    // 0x25fa10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25fa14:
    // 0x25fa14: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x25fa14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_25fa18:
    // 0x25fa18: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_25fa1c:
    if (ctx->pc == 0x25FA1Cu) {
        ctx->pc = 0x25FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA18u;
        // 0x25fa1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA20u;
        goto label_25fa20;
    }
    ctx->pc = 0x25FA18u;
    {
        const bool branch_taken_0x25fa18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA18u;
        // 0x25fa1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa18) {
            ctx->pc = 0x25FA48u;
            goto label_25fa48;
        }
    }
    ctx->pc = 0x25FA20u;
label_25fa20:
    // 0x25fa20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25fa24:
    // 0x25fa24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25fa28:
    // 0x25fa28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_25fa2c:
    // 0x25fa2c: 0xc092848  jal         func_24A120
label_25fa30:
    if (ctx->pc == 0x25FA30u) {
        ctx->pc = 0x25FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA2Cu;
        // 0x25fa30: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA34u;
        goto label_25fa34;
    }
    ctx->pc = 0x25FA2Cu;
    SET_GPR_U32(ctx, 31, 0x25FA34u);
    ctx->pc = 0x25FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA2Cu;
    // 0x25fa30: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25FA2Cu, 0x25FA34u)) {
        return;
    }
    ctx->pc = 0x25FA34u;
label_25fa34:
    // 0x25fa34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25fa38:
    // 0x25fa38: 0xc09281a  jal         func_24A068
label_25fa3c:
    if (ctx->pc == 0x25FA3Cu) {
        ctx->pc = 0x25FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA38u;
        // 0x25fa3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA40u;
        goto label_25fa40;
    }
    ctx->pc = 0x25FA38u;
    SET_GPR_U32(ctx, 31, 0x25FA40u);
    ctx->pc = 0x25FA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA38u;
    // 0x25fa3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25FA38u, 0x25FA40u)) {
        return;
    }
    ctx->pc = 0x25FA40u;
label_25fa40:
    // 0x25fa40: 0x1000006d  b           . + 4 + (0x6D << 2)
label_25fa44:
    if (ctx->pc == 0x25FA44u) {
        ctx->pc = 0x25FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA40u;
        // 0x25fa44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA48u;
        goto label_25fa48;
    }
    ctx->pc = 0x25FA40u;
    {
        const bool branch_taken_0x25fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA40u;
        // 0x25fa44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa40) {
            ctx->pc = 0x25FBF8u;
            goto label_25fbf8;
        }
    }
    ctx->pc = 0x25FA48u;
label_25fa48:
    // 0x25fa48: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x25fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_25fa4c:
    // 0x25fa4c: 0xc093546  jal         func_24D518
label_25fa50:
    if (ctx->pc == 0x25FA50u) {
        ctx->pc = 0x25FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA4Cu;
        // 0x25fa50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA54u;
        goto label_25fa54;
    }
    ctx->pc = 0x25FA4Cu;
    SET_GPR_U32(ctx, 31, 0x25FA54u);
    ctx->pc = 0x25FA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA4Cu;
    // 0x25fa50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x25FA4Cu, 0x25FA54u)) {
        return;
    }
    ctx->pc = 0x25FA54u;
label_25fa54:
    // 0x25fa54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25fa54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25fa58:
    // 0x25fa58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25fa5c:
    // 0x25fa5c: 0x14620066  bne         $v1, $v0, . + 4 + (0x66 << 2)
label_25fa60:
    if (ctx->pc == 0x25FA60u) {
        ctx->pc = 0x25FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA5Cu;
        // 0x25fa60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA64u;
        goto label_25fa64;
    }
    ctx->pc = 0x25FA5Cu;
    {
        const bool branch_taken_0x25fa5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA5Cu;
        // 0x25fa60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa5c) {
            ctx->pc = 0x25FBF8u;
            goto label_25fbf8;
        }
    }
    ctx->pc = 0x25FA64u;
label_25fa64:
    // 0x25fa64: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x25fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_25fa68:
    // 0x25fa68: 0x14430063  bne         $v0, $v1, . + 4 + (0x63 << 2)
label_25fa6c:
    if (ctx->pc == 0x25FA6Cu) {
        ctx->pc = 0x25FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA68u;
        // 0x25fa6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA70u;
        goto label_25fa70;
    }
    ctx->pc = 0x25FA68u;
    {
        const bool branch_taken_0x25fa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA68u;
        // 0x25fa6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa68) {
            ctx->pc = 0x25FBF8u;
            goto label_25fbf8;
        }
    }
    ctx->pc = 0x25FA70u;
label_25fa70:
    // 0x25fa70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_25fa74:
    // 0x25fa74: 0x8c4241b4  lw          $v0, 0x41B4($v0)
    ctx->pc = 0x25fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16820)));
label_25fa78:
    // 0x25fa78: 0x8ea50078  lw          $a1, 0x78($s5)
    ctx->pc = 0x25fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_25fa7c:
    // 0x25fa7c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x25fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_25fa80:
    // 0x25fa80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25fa84:
    // 0x25fa84: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_25fa88:
    if (ctx->pc == 0x25FA88u) {
        ctx->pc = 0x25FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA84u;
        // 0x25fa88: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA8Cu;
        goto label_25fa8c;
    }
    ctx->pc = 0x25FA84u;
    {
        const bool branch_taken_0x25fa84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA84u;
        // 0x25fa88: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa84) {
            ctx->pc = 0x25FAA4u;
            goto label_25faa4;
        }
    }
    ctx->pc = 0x25FA8Cu;
label_25fa8c:
    // 0x25fa8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25fa90:
    // 0x25fa90: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x25fa90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_25fa94:
    // 0x25fa94: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_25fa98:
    if (ctx->pc == 0x25FA98u) {
        ctx->pc = 0x25FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA94u;
        // 0x25fa98: 0x94a50004  lhu         $a1, 0x4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA9Cu;
        goto label_25fa9c;
    }
    ctx->pc = 0x25FA94u;
    {
        const bool branch_taken_0x25fa94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25fa94) {
            ctx->pc = 0x25FA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FA94u;
            // 0x25fa98: 0x94a50004  lhu         $a1, 0x4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FAA8u;
            goto label_25faa8;
        }
    }
    ctx->pc = 0x25FA9Cu;
label_25fa9c:
    // 0x25fa9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_25faa0:
    if (ctx->pc == 0x25FAA0u) {
        ctx->pc = 0x25FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA9Cu;
        // 0x25faa0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FAA4u;
        goto label_25faa4;
    }
    ctx->pc = 0x25FA9Cu;
    {
        const bool branch_taken_0x25fa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA9Cu;
        // 0x25faa0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa9c) {
            ctx->pc = 0x25FAB0u;
            goto label_25fab0;
        }
    }
    ctx->pc = 0x25FAA4u;
label_25faa4:
    // 0x25faa4: 0x94a50004  lhu         $a1, 0x4($a1)
    ctx->pc = 0x25faa4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_25faa8:
    // 0x25faa8: 0xc0993a4  jal         func_264E90
label_25faac:
    if (ctx->pc == 0x25FAACu) {
        ctx->pc = 0x25FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAA8u;
        // 0x25faac: 0x2a62021  addu        $a0, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FAB0u;
        goto label_25fab0;
    }
    ctx->pc = 0x25FAA8u;
    SET_GPR_U32(ctx, 31, 0x25FAB0u);
    ctx->pc = 0x25FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FAA8u;
    // 0x25faac: 0x2a62021  addu        $a0, $s5, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264E90u, 0x25FAA8u, 0x25FAB0u)) {
        return;
    }
    ctx->pc = 0x25FAB0u;
label_25fab0:
    // 0x25fab0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25fab4:
    // 0x25fab4: 0x8cb70000  lw          $s7, 0x0($a1)
    ctx->pc = 0x25fab4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25fab8:
    // 0x25fab8: 0x1ae0004e  blez        $s7, . + 4 + (0x4E << 2)
label_25fabc:
    if (ctx->pc == 0x25FABCu) {
        ctx->pc = 0x25FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAB8u;
        // 0x25fabc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FAC0u;
        goto label_25fac0;
    }
    ctx->pc = 0x25FAB8u;
    {
        const bool branch_taken_0x25fab8 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x25FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAB8u;
        // 0x25fabc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fab8) {
            ctx->pc = 0x25FBF4u;
            goto label_25fbf4;
        }
    }
    ctx->pc = 0x25FAC0u;
label_25fac0:
    // 0x25fac0: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x25fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_25fac4:
    // 0x25fac4: 0x24b20004  addiu       $s2, $a1, 0x4
    ctx->pc = 0x25fac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_25fac8:
    // 0x25fac8: 0x247e3888  addiu       $fp, $v1, 0x3888
    ctx->pc = 0x25fac8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 14472));
label_25facc:
    // 0x25facc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25faccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25fad0:
    // 0x25fad0: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x25fad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_25fad4:
    // 0x25fad4: 0xc093546  jal         func_24D518
label_25fad8:
    if (ctx->pc == 0x25FAD8u) {
        ctx->pc = 0x25FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAD4u;
        // 0x25fad8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FADCu;
        goto label_25fadc;
    }
    ctx->pc = 0x25FAD4u;
    SET_GPR_U32(ctx, 31, 0x25FADCu);
    ctx->pc = 0x25FAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FAD4u;
    // 0x25fad8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x25FAD4u, 0x25FADCu)) {
        return;
    }
    ctx->pc = 0x25FADCu;
label_25fadc:
    // 0x25fadc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25fadcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25fae0:
    // 0x25fae0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25fae4:
    // 0x25fae4: 0x1662ffd6  bne         $s3, $v0, . + 4 + (-0x2A << 2)
label_25fae8:
    if (ctx->pc == 0x25FAE8u) {
        ctx->pc = 0x25FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAE4u;
        // 0x25fae8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FAECu;
        goto label_25faec;
    }
    ctx->pc = 0x25FAE4u;
    {
        const bool branch_taken_0x25fae4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAE4u;
        // 0x25fae8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fae4) {
            ctx->pc = 0x25FA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fa40;
        }
    }
    ctx->pc = 0x25FAECu;
label_25faec:
    // 0x25faec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25faecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_25faf0:
    // 0x25faf0: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25faf4:
    // 0x25faf4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25faf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25faf8:
    // 0x25faf8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x25faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_25fafc:
    // 0x25fafc: 0x34a5050d  ori         $a1, $a1, 0x50D
    ctx->pc = 0x25fafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
label_25fb00:
    // 0x25fb00: 0x40f809  jalr        $v0
label_25fb04:
    if (ctx->pc == 0x25FB04u) {
        ctx->pc = 0x25FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB00u;
        // 0x25fb04: 0x24840247  addiu       $a0, $a0, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 583));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB08u;
        goto label_25fb08;
    }
    ctx->pc = 0x25FB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25FB08u);
        ctx->pc = 0x25FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB00u;
        // 0x25fb04: 0x24840247  addiu       $a0, $a0, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 583));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FB00u, 0x25FB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25FB08u;
label_25fb08:
    // 0x25fb08: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
label_25fb0c:
    if (ctx->pc == 0x25FB0Cu) {
        ctx->pc = 0x25FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB08u;
        // 0x25fb0c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB10u;
        goto label_25fb10;
    }
    ctx->pc = 0x25FB08u;
    {
        const bool branch_taken_0x25fb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB08u;
        // 0x25fb0c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb08) {
            ctx->pc = 0x25FA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fa40;
        }
    }
    ctx->pc = 0x25FB10u;
label_25fb10:
    // 0x25fb10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_25fb14:
    // 0x25fb14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25fb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25fb18:
    // 0x25fb18: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x25fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_25fb1c:
    // 0x25fb1c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25fb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25fb20:
    // 0x25fb20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25fb24:
    // 0x25fb24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_25fb28:
    // 0x25fb28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25fb2c:
    // 0x25fb2c: 0xac75000c  sw          $s5, 0xC($v1)
    ctx->pc = 0x25fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 21));
label_25fb30:
    // 0x25fb30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_25fb34:
    // 0x25fb34: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x25fb34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25fb38:
    // 0x25fb38: 0x2442022f  addiu       $v0, $v0, 0x22F
    ctx->pc = 0x25fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 559));
label_25fb3c:
    // 0x25fb3c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x25fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_25fb40:
    // 0x25fb40: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25fb44:
    // 0x25fb44: 0xac720010  sw          $s2, 0x10($v1)
    ctx->pc = 0x25fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
label_25fb48:
    // 0x25fb48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25fb4c:
    // 0x25fb4c: 0xac5e0014  sw          $fp, 0x14($v0)
    ctx->pc = 0x25fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 30));
label_25fb50:
    // 0x25fb50: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x25fb50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25fb54:
    // 0x25fb54: 0xc093546  jal         func_24D518
label_25fb58:
    if (ctx->pc == 0x25FB58u) {
        ctx->pc = 0x25FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB54u;
        // 0x25fb58: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB5Cu;
        goto label_25fb5c;
    }
    ctx->pc = 0x25FB54u;
    SET_GPR_U32(ctx, 31, 0x25FB5Cu);
    ctx->pc = 0x25FB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB54u;
    // 0x25fb58: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x25FB54u, 0x25FB5Cu)) {
        return;
    }
    ctx->pc = 0x25FB5Cu;
label_25fb5c:
    // 0x25fb5c: 0x1453ffb8  bne         $v0, $s3, . + 4 + (-0x48 << 2)
label_25fb60:
    if (ctx->pc == 0x25FB60u) {
        ctx->pc = 0x25FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB5Cu;
        // 0x25fb60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB64u;
        goto label_25fb64;
    }
    ctx->pc = 0x25FB5Cu;
    {
        const bool branch_taken_0x25fb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x25FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB5Cu;
        // 0x25fb60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb5c) {
            ctx->pc = 0x25FA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fa40;
        }
    }
    ctx->pc = 0x25FB64u;
label_25fb64:
    // 0x25fb64: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x25fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_25fb68:
    // 0x25fb68: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x25fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_25fb6c:
    // 0x25fb6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25fb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fb70:
    // 0x25fb70: 0xc0c493d  jal         func_3124F4
label_25fb74:
    if (ctx->pc == 0x25FB74u) {
        ctx->pc = 0x25FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB70u;
        // 0x25fb74: 0x240601b0  addiu       $a2, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB78u;
        goto label_25fb78;
    }
    ctx->pc = 0x25FB70u;
    SET_GPR_U32(ctx, 31, 0x25FB78u);
    ctx->pc = 0x25FB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB70u;
    // 0x25fb74: 0x240601b0  addiu       $a2, $zero, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x25FB70u, 0x25FB78u)) {
        return;
    }
    ctx->pc = 0x25FB78u;
label_25fb78:
    // 0x25fb78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x25fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_25fb7c:
    // 0x25fb7c: 0x26020207  addiu       $v0, $s0, 0x207
    ctx->pc = 0x25fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 519));
label_25fb80:
    // 0x25fb80: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x25fb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_25fb84:
    // 0x25fb84: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x25fb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25fb88:
    // 0x25fb88: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x25fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_25fb8c:
    // 0x25fb8c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x25fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_25fb90:
    // 0x25fb90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25fb94:
    if (ctx->pc == 0x25FB94u) {
        ctx->pc = 0x25FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB90u;
        // 0x25fb94: 0x2463007f  addiu       $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FB98u;
        goto label_25fb98;
    }
    ctx->pc = 0x25FB90u;
    {
        const bool branch_taken_0x25fb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB90u;
        // 0x25fb94: 0x2463007f  addiu       $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb90) {
            ctx->pc = 0x25FBA8u;
            goto label_25fba8;
        }
    }
    ctx->pc = 0x25FB98u;
label_25fb98:
    // 0x25fb98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_25fb9c:
    // 0x25fb9c: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x25fb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_25fba0:
    // 0x25fba0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25fba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_25fba4:
    // 0x25fba4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x25fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_25fba8:
    // 0x25fba8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x25fba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_25fbac:
    // 0x25fbac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25fbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25fbb0:
    // 0x25fbb0: 0xc093546  jal         func_24D518
label_25fbb4:
    if (ctx->pc == 0x25FBB4u) {
        ctx->pc = 0x25FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBB0u;
        // 0x25fbb4: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FBB8u;
        goto label_25fbb8;
    }
    ctx->pc = 0x25FBB0u;
    SET_GPR_U32(ctx, 31, 0x25FBB8u);
    ctx->pc = 0x25FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBB0u;
    // 0x25fbb4: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x25FBB0u, 0x25FBB8u)) {
        return;
    }
    ctx->pc = 0x25FBB8u;
label_25fbb8:
    // 0x25fbb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_25fbbc:
    // 0x25fbbc: 0x1443ffa0  bne         $v0, $v1, . + 4 + (-0x60 << 2)
label_25fbc0:
    if (ctx->pc == 0x25FBC0u) {
        ctx->pc = 0x25FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBBCu;
        // 0x25fbc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FBC4u;
        goto label_25fbc4;
    }
    ctx->pc = 0x25FBBCu;
    {
        const bool branch_taken_0x25fbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBBCu;
        // 0x25fbc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbbc) {
            ctx->pc = 0x25FA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fa40;
        }
    }
    ctx->pc = 0x25FBC4u;
label_25fbc4:
    // 0x25fbc4: 0xc097cc4  jal         func_25F310
label_25fbc8:
    if (ctx->pc == 0x25FBC8u) {
        ctx->pc = 0x25FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBC4u;
        // 0x25fbc8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FBCCu;
        goto label_25fbcc;
    }
    ctx->pc = 0x25FBC4u;
    SET_GPR_U32(ctx, 31, 0x25FBCCu);
    ctx->pc = 0x25FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBC4u;
    // 0x25fbc8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F310u, 0x25FBC4u, 0x25FBCCu)) {
        return;
    }
    ctx->pc = 0x25FBCCu;
label_25fbcc:
    // 0x25fbcc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x25fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25fbd0:
    // 0x25fbd0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x25fbd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_25fbd4:
    // 0x25fbd4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x25fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_25fbd8:
    // 0x25fbd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25fbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25fbdc:
    // 0x25fbdc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25fbe0:
    // 0x25fbe0: 0xc0c86e4  jal         func_321B90
label_25fbe4:
    if (ctx->pc == 0x25FBE4u) {
        ctx->pc = 0x25FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBE0u;
        // 0x25fbe4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FBE8u;
        goto label_25fbe8;
    }
    ctx->pc = 0x25FBE0u;
    SET_GPR_U32(ctx, 31, 0x25FBE8u);
    ctx->pc = 0x25FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBE0u;
    // 0x25fbe4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x25FBE0u, 0x25FBE8u)) {
        return;
    }
    ctx->pc = 0x25FBE8u;
label_25fbe8:
    // 0x25fbe8: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x25fbe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_25fbec:
    // 0x25fbec: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_25fbf0:
    if (ctx->pc == 0x25FBF0u) {
        ctx->pc = 0x25FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBECu;
        // 0x25fbf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FBF4u;
        goto label_25fbf4;
    }
    ctx->pc = 0x25FBECu;
    {
        const bool branch_taken_0x25fbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBECu;
        // 0x25fbf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbec) {
            ctx->pc = 0x25FAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fad0;
        }
    }
    ctx->pc = 0x25FBF4u;
label_25fbf4:
    // 0x25fbf4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x25fbf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25fbf8:
    // 0x25fbf8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x25fbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_25fbfc:
    // 0x25fbfc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x25fbfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25fc00:
    // 0x25fc00: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x25fc00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25fc04:
    // 0x25fc04: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x25fc04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25fc08:
    // 0x25fc08: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x25fc08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25fc0c:
    // 0x25fc0c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x25fc0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25fc10:
    // 0x25fc10: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x25fc10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25fc14:
    // 0x25fc14: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x25fc14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25fc18:
    // 0x25fc18: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x25fc18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25fc1c:
    // 0x25fc1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25fc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25fc20:
    // 0x25fc20: 0x3e00008  jr          $ra
label_25fc24:
    if (ctx->pc == 0x25FC24u) {
        ctx->pc = 0x25FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC20u;
        // 0x25fc24: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FC28u;
        goto label_fallthrough_0x25fc20;
    }
    ctx->pc = 0x25FC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC20u;
        // 0x25fc24: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25fc20:
    ctx->pc = 0x25FC28u;
}
