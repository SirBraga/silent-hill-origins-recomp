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

// Function: sub_001E61E8
// Address: 0x1e61e8 - 0x1e6330
void sub_001E61E8_0x1e61e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E61E8_0x1e61e8");
#endif

    switch (ctx->pc) {
        case 0x1e6230u: goto label_1e6230;
        case 0x1e6240u: goto label_1e6240;
        case 0x1e6254u: goto label_1e6254;
        case 0x1e6290u: goto label_1e6290;
        case 0x1e62a8u: goto label_1e62a8;
        case 0x1e62b8u: goto label_1e62b8;
        case 0x1e62c4u: goto label_1e62c4;
        case 0x1e62d4u: goto label_1e62d4;
        case 0x1e62fcu: goto label_1e62fc;
        default: break;
    }

    ctx->pc = 0x1e61e8u;

    // 0x1e61e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e61e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e61ec: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e61ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e61f0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e61f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e61f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e61f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e61f8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e61f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e61fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e61fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6200: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e6200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e6204: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6208: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e6208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e620c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e620cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6210: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e6210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e6214: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e6214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e6218: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1e6218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1e621c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e6220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6224: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x1e6224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x1e6228: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E6228u;
    SET_GPR_U32(ctx, 31, 0x1E6230u);
    ctx->pc = 0x1E622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6228u;
    // 0x1e622c: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E6228u, 0x1E6230u)) {
        return;
    }
    ctx->pc = 0x1E6230u;
label_1e6230:
    // 0x1e6230: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1e6230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1e6234: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6238: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6238u;
    SET_GPR_U32(ctx, 31, 0x1E6240u);
    ctx->pc = 0x1E623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6238u;
    // 0x1e623c: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6238u, 0x1E6240u)) {
        return;
    }
    ctx->pc = 0x1E6240u;
label_1e6240:
    // 0x1e6240: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1e6240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1e6244: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6248: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e6248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e624c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E624Cu;
    SET_GPR_U32(ctx, 31, 0x1E6254u);
    ctx->pc = 0x1E6250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E624Cu;
    // 0x1e6250: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E624Cu, 0x1E6254u)) {
        return;
    }
    ctx->pc = 0x1E6254u;
label_1e6254:
    // 0x1e6254: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e6254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e6258: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e6258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e625c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e625cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e6260: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1e6260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e6264: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e6264u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e6268: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e6268u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e626c: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E626Cu;
    {
        const bool branch_taken_0x1e626c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E626Cu;
        // 0x1e6270: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e626c) {
            ctx->pc = 0x1E62F4u;
            goto label_1e62f4;
        }
    }
    ctx->pc = 0x1E6274u;
    // 0x1e6274: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1e6274u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6278: 0x2bc38  dsll        $s7, $v0, 16
    ctx->pc = 0x1e6278u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << 16);
    // 0x1e627c: 0x24150208  addiu       $s5, $zero, 0x208
    ctx->pc = 0x1e627cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x1e6280: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e6280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e6284: 0x24140200  addiu       $s4, $zero, 0x200
    ctx->pc = 0x1e6284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e6288: 0x2b438  dsll        $s6, $v0, 16
    ctx->pc = 0x1e6288u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << 16);
    // 0x1e628c: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1e628cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e6290:
    // 0x1e6290: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1e6290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1e6294: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e6294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6298: 0x2622825  or          $a1, $s3, $v0
    ctx->pc = 0x1e6298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1e629c: 0x118240  sll         $s0, $s1, 9
    ctx->pc = 0x1e629cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x1e62a0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E62A0u;
    SET_GPR_U32(ctx, 31, 0x1E62A8u);
    ctx->pc = 0x1E62A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E62A0u;
    // 0x1e62a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E62A0u, 0x1E62A8u)) {
        return;
    }
    ctx->pc = 0x1E62A8u;
label_1e62a8:
    // 0x1e62a8: 0x26730200  addiu       $s3, $s3, 0x200
    ctx->pc = 0x1e62a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x1e62ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e62acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e62b0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E62B0u;
    SET_GPR_U32(ctx, 31, 0x1E62B8u);
    ctx->pc = 0x1E62B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E62B0u;
    // 0x1e62b4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E62B0u, 0x1E62B8u)) {
        return;
    }
    ctx->pc = 0x1E62B8u;
label_1e62b8:
    // 0x1e62b8: 0x2b62825  or          $a1, $s5, $s6
    ctx->pc = 0x1e62b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 22));
    // 0x1e62bc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E62BCu;
    SET_GPR_U32(ctx, 31, 0x1E62C4u);
    ctx->pc = 0x1E62C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E62BCu;
    // 0x1e62c0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E62BCu, 0x1E62C4u)) {
        return;
    }
    ctx->pc = 0x1E62C4u;
label_1e62c4:
    // 0x1e62c4: 0x26b50200  addiu       $s5, $s5, 0x200
    ctx->pc = 0x1e62c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 512));
    // 0x1e62c8: 0x2972825  or          $a1, $s4, $s7
    ctx->pc = 0x1e62c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 23));
    // 0x1e62cc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E62CCu;
    SET_GPR_U32(ctx, 31, 0x1E62D4u);
    ctx->pc = 0x1E62D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E62CCu;
    // 0x1e62d0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E62CCu, 0x1E62D4u)) {
        return;
    }
    ctx->pc = 0x1E62D4u;
label_1e62d4:
    // 0x1e62d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e62d8: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e62dc: 0x3c3202a  slt         $a0, $fp, $v1
    ctx->pc = 0x1e62dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e62e0: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e62e0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e62e4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e62e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e62e8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1e62e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e62ec: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1E62ECu;
    {
        const bool branch_taken_0x1e62ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E62F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62ECu;
        // 0x1e62f0: 0x26940200  addiu       $s4, $s4, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62ec) {
            ctx->pc = 0x1E6290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6290;
        }
    }
    ctx->pc = 0x1E62F4u;
label_1e62f4:
    // 0x1e62f4: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E62F4u;
    SET_GPR_U32(ctx, 31, 0x1E62FCu);
    ctx->pc = 0x1E62F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E62F4u;
    // 0x1e62f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E62F4u, 0x1E62FCu)) {
        return;
    }
    ctx->pc = 0x1E62FCu;
label_1e62fc:
    // 0x1e62fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e62fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6300: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e6300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e6304: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e6304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e6308: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e6308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e630c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e630cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6310: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e6310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6314: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e6314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6318: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e6318u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e631c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1e631cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6320: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e6320u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6328: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6328u;
        // 0x1e632c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6330u;
}
