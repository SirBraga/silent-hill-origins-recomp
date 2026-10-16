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

// Function: sub_00185090
// Address: 0x185090 - 0x185240
void sub_00185090_0x185090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185090_0x185090");
#endif

    switch (ctx->pc) {
        case 0x1850f4u: goto label_1850f4;
        case 0x185100u: goto label_185100;
        case 0x185138u: goto label_185138;
        case 0x185148u: goto label_185148;
        case 0x185188u: goto label_185188;
        case 0x1851b4u: goto label_1851b4;
        case 0x18520cu: goto label_18520c;
        default: break;
    }

    ctx->pc = 0x185090u;

    // 0x185090: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x185090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x185094: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x185094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x185098: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x185098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18509c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18509cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850a0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1850a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1850a4: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1850a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1850a8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1850a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1850ac: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1850acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1850b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1850b4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1850b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1850b8: 0x2484bc40  addiu       $a0, $a0, -0x43C0
    ctx->pc = 0x1850b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949952));
    // 0x1850bc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1850bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1850c0: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x1850c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1850c4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1850c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1850c8: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x1850c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1850cc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1850ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1850d0: 0x37a8000c  ori         $t0, $sp, 0xC
    ctx->pc = 0x1850d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x1850d4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1850d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1850d8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1850d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1850dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1850e0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1850e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1850e4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1850e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1850e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1850e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1850ec: 0xc060586  jal         func_181618
    ctx->pc = 0x1850ECu;
    SET_GPR_U32(ctx, 31, 0x1850F4u);
    ctx->pc = 0x1850F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1850ECu;
    // 0x1850f0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181618u, 0x1850ECu, 0x1850F4u)) {
        return;
    }
    ctx->pc = 0x1850F4u;
label_1850f4:
    // 0x1850f4: 0x8ed5000c  lw          $s5, 0xC($s6)
    ctx->pc = 0x1850f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1850f8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1850F8u;
    {
        const bool branch_taken_0x1850f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1850FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850F8u;
        // 0x1850fc: 0x8ed30008  lw          $s3, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850f8) {
            ctx->pc = 0x1851B8u;
            goto label_1851b8;
        }
    }
    ctx->pc = 0x185100u;
label_185100:
    // 0x185100: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x185100u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x185104: 0x8ec30038  lw          $v1, 0x38($s6)
    ctx->pc = 0x185104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x185108: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x185108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18510c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x18510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x185110: 0xaec30038  sw          $v1, 0x38($s6)
    ctx->pc = 0x185110u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 56), GPR_U32(ctx, 3));
    // 0x185114: 0x96660002  lhu         $a2, 0x2($s3)
    ctx->pc = 0x185114u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x185118: 0xc28823  subu        $s1, $a2, $v0
    ctx->pc = 0x185118u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18511c: 0x1a200017  blez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x18511Cu;
    {
        const bool branch_taken_0x18511c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x185120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18511Cu;
        // 0x185120: 0x26720004  addiu       $s2, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18511c) {
            ctx->pc = 0x18517Cu;
            goto label_18517c;
        }
    }
    ctx->pc = 0x185124u;
    // 0x185124: 0xd18023  subu        $s0, $a2, $s1
    ctx->pc = 0x185124u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x185128: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x185128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18512c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18512cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185130: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x185130u;
    SET_GPR_U32(ctx, 31, 0x185138u);
    ctx->pc = 0x185134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185130u;
    // 0x185134: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x185130u, 0x185138u)) {
        return;
    }
    ctx->pc = 0x185138u;
label_185138:
    // 0x185138: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x185138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18513c: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x18513cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x185140: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x185140u;
    SET_GPR_U32(ctx, 31, 0x185148u);
    ctx->pc = 0x185144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185140u;
    // 0x185144: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x185140u, 0x185148u)) {
        return;
    }
    ctx->pc = 0x185148u;
label_185148:
    // 0x185148: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x185148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18514c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x18514cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x185150: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x185150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x185154: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x185154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x185158: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x185158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x18515c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x18515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x185160: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x185160u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x185164: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x185164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x185168: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x185168u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18516c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x18516cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x185170: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x185170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x185174: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x185174u;
    {
        const bool branch_taken_0x185174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185174u;
        // 0x185178: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185174) {
            ctx->pc = 0x1851A8u;
            goto label_1851a8;
        }
    }
    ctx->pc = 0x18517Cu;
label_18517c:
    // 0x18517c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185180: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x185180u;
    SET_GPR_U32(ctx, 31, 0x185188u);
    ctx->pc = 0x185184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185180u;
    // 0x185184: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x185180u, 0x185188u)) {
        return;
    }
    ctx->pc = 0x185188u;
label_185188:
    // 0x185188: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x185188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x18518c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185190: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x185190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x185194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185198: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x185198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x18519c: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x18519cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1851a0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1851a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1851a4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x1851a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_1851a8:
    // 0x1851a8: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x1851a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1851ac: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x1851acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1851b0: 0x2b4a823  subu        $s5, $s5, $s4
    ctx->pc = 0x1851b0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_1851b4:
    // 0x1851b4: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x1851b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_1851b8:
    // 0x1851b8: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x1851b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1851bc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1851BCu;
    {
        const bool branch_taken_0x1851bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1851C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851BCu;
        // 0x1851c0: 0x27c4bc40  addiu       $a0, $fp, -0x43C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1851bc) {
            ctx->pc = 0x185204u;
            goto label_185204;
        }
    }
    ctx->pc = 0x1851C4u;
    // 0x1851c4: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x1851c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1851c8: 0x24940004  addiu       $s4, $a0, 0x4
    ctx->pc = 0x1851c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1851cc: 0x2b4102a  slt         $v0, $s5, $s4
    ctx->pc = 0x1851ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1851d0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1851D0u;
    {
        const bool branch_taken_0x1851d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1851d0) {
            ctx->pc = 0x1851D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1851D0u;
            // 0x1851d4: 0x27c4bc40  addiu       $a0, $fp, -0x43C0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949952));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185204u;
            goto label_185204;
        }
    }
    ctx->pc = 0x1851D8u;
    // 0x1851d8: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x1851d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1851dc: 0x8ec20060  lw          $v0, 0x60($s6)
    ctx->pc = 0x1851dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x1851e0: 0x5462fff4  bnel        $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1851E0u;
    {
        const bool branch_taken_0x1851e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1851e0) {
            ctx->pc = 0x1851E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1851E0u;
            // 0x1851e4: 0x2b4a823  subu        $s5, $s5, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1851B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1851b4;
        }
    }
    ctx->pc = 0x1851E8u;
    // 0x1851e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1851e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1851ec: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1851ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1851f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1851f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1851f4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1851f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1851f8: 0x1040ffc1  beqz        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1851F8u;
    {
        const bool branch_taken_0x1851f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1851FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851F8u;
        // 0x1851fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1851f8) {
            ctx->pc = 0x185100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185100;
        }
    }
    ctx->pc = 0x185200u;
    // 0x185200: 0x27c4bc40  addiu       $a0, $fp, -0x43C0
    ctx->pc = 0x185200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949952));
label_185204:
    // 0x185204: 0xc0605b2  jal         func_1816C8
    ctx->pc = 0x185204u;
    SET_GPR_U32(ctx, 31, 0x18520Cu);
    ctx->pc = 0x185208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185204u;
    // 0x185208: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1816C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1816C8u, 0x185204u, 0x18520Cu)) {
        return;
    }
    ctx->pc = 0x18520Cu;
label_18520c:
    // 0x18520c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x18520cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x185210: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x185210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x185214: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x185214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x185218: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x185218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18521c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18521cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185220: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x185220u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185224: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x185224u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185228: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x185228u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18522c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x18522cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185234: 0x3e00008  jr          $ra
    ctx->pc = 0x185234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185234u;
        // 0x185238: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18523Cu;
    // 0x18523c: 0x0  nop
    ctx->pc = 0x18523cu;
    // NOP
    ctx->pc = 0x185240u;
}
