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

// Function: sub_0019C128
// Address: 0x19c128 - 0x19c278
void sub_0019C128_0x19c128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C128_0x19c128");
#endif

    switch (ctx->pc) {
        case 0x19c128u: goto label_19c128;
        case 0x19c12cu: goto label_19c12c;
        case 0x19c130u: goto label_19c130;
        case 0x19c134u: goto label_19c134;
        case 0x19c138u: goto label_19c138;
        case 0x19c13cu: goto label_19c13c;
        case 0x19c140u: goto label_19c140;
        case 0x19c144u: goto label_19c144;
        case 0x19c148u: goto label_19c148;
        case 0x19c14cu: goto label_19c14c;
        case 0x19c150u: goto label_19c150;
        case 0x19c154u: goto label_19c154;
        case 0x19c158u: goto label_19c158;
        case 0x19c15cu: goto label_19c15c;
        case 0x19c160u: goto label_19c160;
        case 0x19c164u: goto label_19c164;
        case 0x19c168u: goto label_19c168;
        case 0x19c16cu: goto label_19c16c;
        case 0x19c170u: goto label_19c170;
        case 0x19c174u: goto label_19c174;
        case 0x19c178u: goto label_19c178;
        case 0x19c17cu: goto label_19c17c;
        case 0x19c180u: goto label_19c180;
        case 0x19c184u: goto label_19c184;
        case 0x19c188u: goto label_19c188;
        case 0x19c18cu: goto label_19c18c;
        case 0x19c190u: goto label_19c190;
        case 0x19c194u: goto label_19c194;
        case 0x19c198u: goto label_19c198;
        case 0x19c19cu: goto label_19c19c;
        case 0x19c1a0u: goto label_19c1a0;
        case 0x19c1a4u: goto label_19c1a4;
        case 0x19c1a8u: goto label_19c1a8;
        case 0x19c1acu: goto label_19c1ac;
        case 0x19c1b0u: goto label_19c1b0;
        case 0x19c1b4u: goto label_19c1b4;
        case 0x19c1b8u: goto label_19c1b8;
        case 0x19c1bcu: goto label_19c1bc;
        case 0x19c1c0u: goto label_19c1c0;
        case 0x19c1c4u: goto label_19c1c4;
        case 0x19c1c8u: goto label_19c1c8;
        case 0x19c1ccu: goto label_19c1cc;
        case 0x19c1d0u: goto label_19c1d0;
        case 0x19c1d4u: goto label_19c1d4;
        case 0x19c1d8u: goto label_19c1d8;
        case 0x19c1dcu: goto label_19c1dc;
        case 0x19c1e0u: goto label_19c1e0;
        case 0x19c1e4u: goto label_19c1e4;
        case 0x19c1e8u: goto label_19c1e8;
        case 0x19c1ecu: goto label_19c1ec;
        case 0x19c1f0u: goto label_19c1f0;
        case 0x19c1f4u: goto label_19c1f4;
        case 0x19c1f8u: goto label_19c1f8;
        case 0x19c1fcu: goto label_19c1fc;
        case 0x19c200u: goto label_19c200;
        case 0x19c204u: goto label_19c204;
        case 0x19c208u: goto label_19c208;
        case 0x19c20cu: goto label_19c20c;
        case 0x19c210u: goto label_19c210;
        case 0x19c214u: goto label_19c214;
        case 0x19c218u: goto label_19c218;
        case 0x19c21cu: goto label_19c21c;
        case 0x19c220u: goto label_19c220;
        case 0x19c224u: goto label_19c224;
        case 0x19c228u: goto label_19c228;
        case 0x19c22cu: goto label_19c22c;
        case 0x19c230u: goto label_19c230;
        case 0x19c234u: goto label_19c234;
        case 0x19c238u: goto label_19c238;
        case 0x19c23cu: goto label_19c23c;
        case 0x19c240u: goto label_19c240;
        case 0x19c244u: goto label_19c244;
        case 0x19c248u: goto label_19c248;
        case 0x19c24cu: goto label_19c24c;
        case 0x19c250u: goto label_19c250;
        case 0x19c254u: goto label_19c254;
        case 0x19c258u: goto label_19c258;
        case 0x19c25cu: goto label_19c25c;
        case 0x19c260u: goto label_19c260;
        case 0x19c264u: goto label_19c264;
        case 0x19c268u: goto label_19c268;
        case 0x19c26cu: goto label_19c26c;
        case 0x19c270u: goto label_19c270;
        case 0x19c274u: goto label_19c274;
        default: break;
    }

    ctx->pc = 0x19c128u;

label_19c128:
    // 0x19c128: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19c128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19c12c:
    // 0x19c12c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_19c130:
    // 0x19c130: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_19c134:
    // 0x19c134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c138:
    // 0x19c138: 0x8c468160  lw          $a2, -0x7EA0($v0)
    ctx->pc = 0x19c138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934880)));
label_19c13c:
    // 0x19c13c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19c13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_19c140:
    // 0x19c140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19c144:
    // 0x19c144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19c148:
    // 0x19c148: 0xc07f1c0  jal         func_1FC700
label_19c14c:
    if (ctx->pc == 0x19C14Cu) {
        ctx->pc = 0x19C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C148u;
        // 0x19c14c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C150u;
        goto label_19c150;
    }
    ctx->pc = 0x19C148u;
    SET_GPR_U32(ctx, 31, 0x19C150u);
    ctx->pc = 0x19C14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C148u;
    // 0x19c14c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x19C148u, 0x19C150u)) {
        return;
    }
    ctx->pc = 0x19C150u;
label_19c150:
    // 0x19c150: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19c154:
    // 0x19c154: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c158:
    // 0x19c158: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_19c15c:
    if (ctx->pc == 0x19C15Cu) {
        ctx->pc = 0x19C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C158u;
        // 0x19c15c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C160u;
        goto label_19c160;
    }
    ctx->pc = 0x19C158u;
    {
        const bool branch_taken_0x19c158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C158u;
        // 0x19c15c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c158) {
            ctx->pc = 0x19C260u;
            goto label_19c260;
        }
    }
    ctx->pc = 0x19C160u;
label_19c160:
    // 0x19c160: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x19c160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_19c164:
    // 0x19c164: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19c164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19c168:
    // 0x19c168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c16c:
    // 0x19c16c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_19c170:
    // 0x19c170: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_19c174:
    if (ctx->pc == 0x19C174u) {
        ctx->pc = 0x19C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C170u;
        // 0x19c174: 0x24a60008  addiu       $a2, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C178u;
        goto label_19c178;
    }
    ctx->pc = 0x19C170u;
    {
        const bool branch_taken_0x19c170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C170u;
        // 0x19c174: 0x24a60008  addiu       $a2, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c170) {
            ctx->pc = 0x19C19Cu;
            goto label_19c19c;
        }
    }
    ctx->pc = 0x19C178u;
label_19c178:
    // 0x19c178: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_19c17c:
    if (ctx->pc == 0x19C17Cu) {
        ctx->pc = 0x19C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C178u;
        // 0x19c17c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C180u;
        goto label_19c180;
    }
    ctx->pc = 0x19C178u;
    {
        const bool branch_taken_0x19c178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C178u;
        // 0x19c17c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c178) {
            ctx->pc = 0x19C190u;
            goto label_19c190;
        }
    }
    ctx->pc = 0x19C180u;
label_19c180:
    // 0x19c180: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_19c184:
    if (ctx->pc == 0x19C184u) {
        ctx->pc = 0x19C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C180u;
        // 0x19c184: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C188u;
        goto label_19c188;
    }
    ctx->pc = 0x19C180u;
    {
        const bool branch_taken_0x19c180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C180u;
        // 0x19c184: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c180) {
            ctx->pc = 0x19C1B4u;
            goto label_19c1b4;
        }
    }
    ctx->pc = 0x19C188u;
label_19c188:
    // 0x19c188: 0x1000002c  b           . + 4 + (0x2C << 2)
label_19c18c:
    if (ctx->pc == 0x19C18Cu) {
        ctx->pc = 0x19C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C188u;
        // 0x19c18c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C190u;
        goto label_19c190;
    }
    ctx->pc = 0x19C188u;
    {
        const bool branch_taken_0x19c188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C188u;
        // 0x19c18c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c188) {
            ctx->pc = 0x19C23Cu;
            goto label_19c23c;
        }
    }
    ctx->pc = 0x19C190u;
label_19c190:
    // 0x19c190: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_19c194:
    // 0x19c194: 0x10000003  b           . + 4 + (0x3 << 2)
label_19c198:
    if (ctx->pc == 0x19C198u) {
        ctx->pc = 0x19C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C194u;
        // 0x19c198: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C19Cu;
        goto label_19c19c;
    }
    ctx->pc = 0x19C194u;
    {
        const bool branch_taken_0x19c194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C194u;
        // 0x19c198: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c194) {
            ctx->pc = 0x19C1A4u;
            goto label_19c1a4;
        }
    }
    ctx->pc = 0x19C19Cu;
label_19c19c:
    // 0x19c19c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x19c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_19c1a0:
    // 0x19c1a0: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x19c1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_19c1a4:
    // 0x19c1a4: 0xc07fcf4  jal         func_1FF3D0
label_19c1a8:
    if (ctx->pc == 0x19C1A8u) {
        ctx->pc = 0x19C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1A4u;
        // 0x19c1a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1ACu;
        goto label_19c1ac;
    }
    ctx->pc = 0x19C1A4u;
    SET_GPR_U32(ctx, 31, 0x19C1ACu);
    ctx->pc = 0x19C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1A4u;
    // 0x19c1a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x19C1A4u, 0x19C1ACu)) {
        return;
    }
    ctx->pc = 0x19C1ACu;
label_19c1ac:
    // 0x19c1ac: 0x10000022  b           . + 4 + (0x22 << 2)
label_19c1b0:
    if (ctx->pc == 0x19C1B0u) {
        ctx->pc = 0x19C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1ACu;
        // 0x19c1b0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1B4u;
        goto label_19c1b4;
    }
    ctx->pc = 0x19C1ACu;
    {
        const bool branch_taken_0x19c1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1ACu;
        // 0x19c1b0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1ac) {
            ctx->pc = 0x19C238u;
            goto label_19c238;
        }
    }
    ctx->pc = 0x19C1B4u;
label_19c1b4:
    // 0x19c1b4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x19c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_19c1b8:
    // 0x19c1b8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_19c1bc:
    if (ctx->pc == 0x19C1BCu) {
        ctx->pc = 0x19C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1B8u;
        // 0x19c1bc: 0x24b10008  addiu       $s1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1C0u;
        goto label_19c1c0;
    }
    ctx->pc = 0x19C1B8u;
    {
        const bool branch_taken_0x19c1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1B8u;
        // 0x19c1bc: 0x24b10008  addiu       $s1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1b8) {
            ctx->pc = 0x19C1DCu;
            goto label_19c1dc;
        }
    }
    ctx->pc = 0x19C1C0u;
label_19c1c0:
    // 0x19c1c0: 0xc0ba760  jal         func_2E9D80
label_19c1c4:
    if (ctx->pc == 0x19C1C4u) {
        ctx->pc = 0x19C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1C0u;
        // 0x19c1c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1C8u;
        goto label_19c1c8;
    }
    ctx->pc = 0x19C1C0u;
    SET_GPR_U32(ctx, 31, 0x19C1C8u);
    ctx->pc = 0x19C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1C0u;
    // 0x19c1c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x19C1C0u, 0x19C1C8u)) {
        return;
    }
    ctx->pc = 0x19C1C8u;
label_19c1c8:
    // 0x19c1c8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x19c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_19c1cc:
    // 0x19c1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c1d0:
    // 0x19c1d0: 0xc0b69c2  jal         func_2DA708
label_19c1d4:
    if (ctx->pc == 0x19C1D4u) {
        ctx->pc = 0x19C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1D0u;
        // 0x19c1d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1D8u;
        goto label_19c1d8;
    }
    ctx->pc = 0x19C1D0u;
    SET_GPR_U32(ctx, 31, 0x19C1D8u);
    ctx->pc = 0x19C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1D0u;
    // 0x19c1d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA708u, 0x19C1D0u, 0x19C1D8u)) {
        return;
    }
    ctx->pc = 0x19C1D8u;
label_19c1d8:
    // 0x19c1d8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x19c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_19c1dc:
    // 0x19c1dc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x19c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_19c1e0:
    // 0x19c1e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_19c1e4:
    if (ctx->pc == 0x19C1E4u) {
        ctx->pc = 0x19C1E8u;
        goto label_19c1e8;
    }
    ctx->pc = 0x19C1E0u;
    {
        const bool branch_taken_0x19c1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c1e0) {
            ctx->pc = 0x19C1F4u;
            goto label_19c1f4;
        }
    }
    ctx->pc = 0x19C1E8u;
label_19c1e8:
    // 0x19c1e8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x19c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_19c1ec:
    // 0x19c1ec: 0x40f809  jalr        $v0
label_19c1f0:
    if (ctx->pc == 0x19C1F0u) {
        ctx->pc = 0x19C1F4u;
        goto label_19c1f4;
    }
    ctx->pc = 0x19C1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C1F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C1ECu, 0x19C1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C1F4u;
label_19c1f4:
    // 0x19c1f4: 0xc0c4ab8  jal         func_312AE0
label_19c1f8:
    if (ctx->pc == 0x19C1F8u) {
        ctx->pc = 0x19C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1F4u;
        // 0x19c1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1FCu;
        goto label_19c1fc;
    }
    ctx->pc = 0x19C1F4u;
    SET_GPR_U32(ctx, 31, 0x19C1FCu);
    ctx->pc = 0x19C1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1F4u;
    // 0x19c1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x19C1F4u, 0x19C1FCu)) {
        return;
    }
    ctx->pc = 0x19C1FCu;
label_19c1fc:
    // 0x19c1fc: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x19c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_19c200:
    // 0x19c200: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19c200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_19c204:
    // 0x19c204: 0x60f809  jalr        $v1
label_19c208:
    if (ctx->pc == 0x19C208u) {
        ctx->pc = 0x19C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C204u;
        // 0x19c208: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C20Cu;
        goto label_19c20c;
    }
    ctx->pc = 0x19C204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19C20Cu);
        ctx->pc = 0x19C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C204u;
        // 0x19c208: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C204u, 0x19C20Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C20Cu;
label_19c20c:
    // 0x19c20c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c210:
    // 0x19c210: 0xc0c4ab8  jal         func_312AE0
label_19c214:
    if (ctx->pc == 0x19C214u) {
        ctx->pc = 0x19C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C210u;
        // 0x19c214: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C218u;
        goto label_19c218;
    }
    ctx->pc = 0x19C210u;
    SET_GPR_U32(ctx, 31, 0x19C218u);
    ctx->pc = 0x19C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C210u;
    // 0x19c214: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x19C210u, 0x19C218u)) {
        return;
    }
    ctx->pc = 0x19C218u;
label_19c218:
    // 0x19c218: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x19c218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_19c21c:
    // 0x19c21c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19c21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c220:
    // 0x19c220: 0xc0c4bea  jal         func_312FA8
label_19c224:
    if (ctx->pc == 0x19C224u) {
        ctx->pc = 0x19C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C220u;
        // 0x19c224: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C228u;
        goto label_19c228;
    }
    ctx->pc = 0x19C220u;
    SET_GPR_U32(ctx, 31, 0x19C228u);
    ctx->pc = 0x19C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C220u;
    // 0x19c224: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x19C220u, 0x19C228u)) {
        return;
    }
    ctx->pc = 0x19C228u;
label_19c228:
    // 0x19c228: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x19c228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_19c22c:
    // 0x19c22c: 0xc06716a  jal         func_19C5A8
label_19c230:
    if (ctx->pc == 0x19C230u) {
        ctx->pc = 0x19C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C22Cu;
        // 0x19c230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C234u;
        goto label_19c234;
    }
    ctx->pc = 0x19C22Cu;
    SET_GPR_U32(ctx, 31, 0x19C234u);
    ctx->pc = 0x19C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C22Cu;
    // 0x19c230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C5A8u, 0x19C22Cu, 0x19C234u)) {
        return;
    }
    ctx->pc = 0x19C234u;
label_19c234:
    // 0x19c234: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19c238:
    // 0x19c238: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19c238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19c23c:
    // 0x19c23c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c240:
    // 0x19c240: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c244:
    // 0x19c244: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19c244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19c248:
    // 0x19c248: 0xc07f0c8  jal         func_1FC320
label_19c24c:
    if (ctx->pc == 0x19C24Cu) {
        ctx->pc = 0x19C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C248u;
        // 0x19c24c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C250u;
        goto label_19c250;
    }
    ctx->pc = 0x19C248u;
    SET_GPR_U32(ctx, 31, 0x19C250u);
    ctx->pc = 0x19C24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C248u;
    // 0x19c24c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x19C248u, 0x19C250u)) {
        return;
    }
    ctx->pc = 0x19C250u;
label_19c250:
    // 0x19c250: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19c254:
    // 0x19c254: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19c254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c258:
    // 0x19c258: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_19c25c:
    if (ctx->pc == 0x19C25Cu) {
        ctx->pc = 0x19C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C258u;
        // 0x19c25c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C260u;
        goto label_19c260;
    }
    ctx->pc = 0x19C258u;
    {
        const bool branch_taken_0x19c258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C258u;
        // 0x19c25c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c258) {
            ctx->pc = 0x19C168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c168;
        }
    }
    ctx->pc = 0x19C260u;
label_19c260:
    // 0x19c260: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19c260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19c264:
    // 0x19c264: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19c264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19c268:
    // 0x19c268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19c26c:
    // 0x19c26c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c270:
    // 0x19c270: 0x3e00008  jr          $ra
label_19c274:
    if (ctx->pc == 0x19C274u) {
        ctx->pc = 0x19C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C270u;
        // 0x19c274: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C278u;
        goto label_fallthrough_0x19c270;
    }
    ctx->pc = 0x19C270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C270u;
        // 0x19c274: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19c270:
    ctx->pc = 0x19C278u;
}
