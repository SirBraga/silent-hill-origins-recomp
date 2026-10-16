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

// Function: sub_001951A0
// Address: 0x1951a0 - 0x1952d0
void sub_001951A0_0x1951a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001951A0_0x1951a0");
#endif

    switch (ctx->pc) {
        case 0x1951f8u: goto label_1951f8;
        case 0x195208u: goto label_195208;
        case 0x19520cu: goto label_19520c;
        case 0x195224u: goto label_195224;
        case 0x195230u: goto label_195230;
        case 0x19523cu: goto label_19523c;
        case 0x195254u: goto label_195254;
        case 0x195264u: goto label_195264;
        case 0x195288u: goto label_195288;
        default: break;
    }

    ctx->pc = 0x1951a0u;

    // 0x1951a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1951a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1951a4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1951a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1951a8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1951a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1951ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1951acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951b0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1951b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1951b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1951b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951b8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1951b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1951bc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1951bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1951c0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1951c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1951c4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1951c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1951c8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1951c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1951cc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1951ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1951d0: 0x12a00031  beqz        $s5, . + 4 + (0x31 << 2)
    ctx->pc = 0x1951D0u;
    {
        const bool branch_taken_0x1951d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951D0u;
        // 0x1951d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951d0) {
            ctx->pc = 0x195298u;
            goto label_195298;
        }
    }
    ctx->pc = 0x1951D8u;
    // 0x1951d8: 0x12800030  beqz        $s4, . + 4 + (0x30 << 2)
    ctx->pc = 0x1951D8u;
    {
        const bool branch_taken_0x1951d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951D8u;
        // 0x1951dc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951d8) {
            ctx->pc = 0x19529Cu;
            goto label_19529c;
        }
    }
    ctx->pc = 0x1951E0u;
    // 0x1951e0: 0x8eb30018  lw          $s3, 0x18($s5)
    ctx->pc = 0x1951e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1951e4: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x1951E4u;
    {
        const bool branch_taken_0x1951e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951E4u;
        // 0x1951e8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951e4) {
            ctx->pc = 0x195270u;
            goto label_195270;
        }
    }
    ctx->pc = 0x1951ECu;
    // 0x1951ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1951ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951f0: 0xc0a1b62  jal         func_286D88
    ctx->pc = 0x1951F0u;
    SET_GPR_U32(ctx, 31, 0x1951F8u);
    ctx->pc = 0x1951F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951F0u;
    // 0x1951f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286D88u, 0x1951F0u, 0x1951F8u)) {
        return;
    }
    ctx->pc = 0x1951F8u;
label_1951f8:
    // 0x1951f8: 0x3c1e006a  lui         $fp, 0x6A
    ctx->pc = 0x1951f8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)106 << 16));
    // 0x1951fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1951FCu;
    {
        const bool branch_taken_0x1951fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951FCu;
        // 0x195200: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951fc) {
            ctx->pc = 0x19520Cu;
            goto label_19520c;
        }
    }
    ctx->pc = 0x195204u;
    // 0x195204: 0x0  nop
    ctx->pc = 0x195204u;
    // NOP
label_195208:
    // 0x195208: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x195208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19520c:
    // 0x19520c: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x19520cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x195210: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x195210u;
    {
        const bool branch_taken_0x195210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195210) {
            ctx->pc = 0x195214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195210u;
            // 0x195214: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195274u;
            goto label_195274;
        }
    }
    ctx->pc = 0x195218u;
    // 0x195218: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x195218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19521c: 0xc0a1b56  jal         func_286D58
    ctx->pc = 0x19521Cu;
    SET_GPR_U32(ctx, 31, 0x195224u);
    ctx->pc = 0x195220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19521Cu;
    // 0x195220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286D58u, 0x19521Cu, 0x195224u)) {
        return;
    }
    ctx->pc = 0x195224u;
label_195224:
    // 0x195224: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195228: 0xc0a1c22  jal         func_287088
    ctx->pc = 0x195228u;
    SET_GPR_U32(ctx, 31, 0x195230u);
    ctx->pc = 0x19522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195228u;
    // 0x19522c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287088u, 0x195228u, 0x195230u)) {
        return;
    }
    ctx->pc = 0x195230u;
label_195230:
    // 0x195230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195234: 0xc0a1c20  jal         func_287080
    ctx->pc = 0x195234u;
    SET_GPR_U32(ctx, 31, 0x19523Cu);
    ctx->pc = 0x195238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195234u;
    // 0x195238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287080u, 0x195234u, 0x19523Cu)) {
        return;
    }
    ctx->pc = 0x19523Cu;
label_19523c:
    // 0x19523c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19523cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195240: 0x5603fff2  bnel        $s0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x195240u;
    {
        const bool branch_taken_0x195240 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x195240) {
            ctx->pc = 0x195244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195240u;
            // 0x195244: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19520Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19520c;
        }
    }
    ctx->pc = 0x195248u;
    // 0x195248: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19524c: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x19524Cu;
    SET_GPR_U32(ctx, 31, 0x195254u);
    ctx->pc = 0x195250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19524Cu;
    // 0x195250: 0x27c59ad0  addiu       $a1, $fp, -0x6530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x19524Cu, 0x195254u)) {
        return;
    }
    ctx->pc = 0x195254u;
label_195254:
    // 0x195254: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x195254u;
    {
        const bool branch_taken_0x195254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195254u;
        // 0x195258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195254) {
            ctx->pc = 0x195208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195208;
        }
    }
    ctx->pc = 0x19525Cu;
    // 0x19525c: 0xc0a1c24  jal         func_287090
    ctx->pc = 0x19525Cu;
    SET_GPR_U32(ctx, 31, 0x195264u);
    ctx->pc = 0x195260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19525Cu;
    // 0x195260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287090u, 0x19525Cu, 0x195264u)) {
        return;
    }
    ctx->pc = 0x195264u;
label_195264:
    // 0x195264: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x195264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195268: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x195268u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19526c: 0x43b00a  movz        $s6, $v0, $v1
    ctx->pc = 0x19526cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2));
label_195270:
    // 0x195270: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x195270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_195274:
    // 0x195274: 0x16c20009  bne         $s6, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x195274u;
    {
        const bool branch_taken_0x195274 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x195278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195274u;
        // 0x195278: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195274) {
            ctx->pc = 0x19529Cu;
            goto label_19529c;
        }
    }
    ctx->pc = 0x19527Cu;
    // 0x19527c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x19527cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x195280: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x195280u;
    SET_GPR_U32(ctx, 31, 0x195288u);
    ctx->pc = 0x195284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195280u;
    // 0x195284: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x195280u, 0x195288u)) {
        return;
    }
    ctx->pc = 0x195288u;
label_195288:
    // 0x195288: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x195288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x19528c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x19528cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x195290: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x195290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x195294: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x195294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_195298:
    // 0x195298: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x195298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19529c:
    // 0x19529c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x19529cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1952a0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1952a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1952a4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1952a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1952a8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1952a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1952ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1952acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1952b0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1952b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1952b4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1952b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1952b8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1952b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1952bc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1952bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1952c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1952c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1952c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1952C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1952C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952C4u;
        // 0x1952c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1952C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1952CCu;
    // 0x1952cc: 0x0  nop
    ctx->pc = 0x1952ccu;
    // NOP
    ctx->pc = 0x1952d0u;
}
